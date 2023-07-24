modded class ActionSawPlanksCB
{	
	override float GetDefaultTime()
	{
		string item_type = m_ActionData.m_MainItem.GetType();
		
		switch(item_type)
		{
			case "Hacksaw": 
				return TIME_SAW_HACKSAW;
			break;
		
			case "HandSaw": 
				return TIME_SAW_HANDSAW;
			break;
			
			case "Crowbar": 
				return TIME_SAW_HANDSAW;
			break;
		
			default: // axes
				return TIME_AXES;
			break
		}
		Print("ActionSawPlanksCB | Item detection error, assigning negative time");
		return -1;
	}
};

modded class ActionSkinning
{
  override void OnFinishProgressServer(ActionData action_data)
  {
    PlayerBase body;
    if (Class.CastTo(body, action_data.m_Target.GetObject())) 
    {    
      if (!body.CanYieldSkinnedProducts() || body.IsPlayerMutant())
      {
        body.SetAsSkinned();

        EntityAI bodyEAI;
        Class.CastTo(bodyEAI, action_data.m_Target.GetObject());

        DestroyPlayerBody(bodyEAI, action_data.m_Player);
        MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, UADamageApplied.SKINNING);
		    PluginLifespan module_lifespan = PluginLifespan.Cast( GetPlugin( PluginLifespan ) );
		    module_lifespan.UpdateBloodyHandsVisibility( action_data.m_Player, true );
        
        if (body.IsPlayerMutant()) // mutants should still yield bones
          CreateSkeletalBone(body.GetPosition());

        return; // short circuit
      }

      CreateSkeletalBone(body.GetPosition());

      // if (body.IsPlayerCyborg())
      // {
      //   CreateMetalWires(body.GetPosition());
      // }
    }
    super.OnFinishProgressServer(action_data);
  }
  void DestroyPlayerBody(EntityAI body, PlayerBase otherPlayer)
  {
    PlayerBase body_PB = PlayerBase.Cast(body);
    
    if (body_PB.IsRestrained() && body_PB.GetHumanInventory().GetEntityInHands())
      MiscGameplayFunctions.TransformRestrainItem(body_PB.GetHumanInventory().GetEntityInHands(), null, otherPlayer, body_PB);
    if (body_PB.IsWearingSplint())
    {
      EntityAI entity = otherPlayer.SpawnEntityOnGroundOnCursorDir("Splint", 0.5);
      EntityAI attachment;
      ItemBase new_item = ItemBase.Cast(entity);
      Class.CastTo(attachment, body_PB.GetItemOnSlot("Splint_Right"));
      if ( attachment && attachment.GetType() == "Splint_Applied" )
      {
        if (new_item)
        {
          MiscGameplayFunctions.TransferItemProperties(attachment,new_item);
          if (GetGame().IsServer())
          {
            if (new_item.GetHealthLevel() < 4)
            {
              int newDmgLevel = new_item.GetHealthLevel() + 1;
              
              float max = new_item.GetMaxHealth("","");
              
              switch ( newDmgLevel )
              {
                case GameConstants.STATE_BADLY_DAMAGED:
                  new_item.SetHealth( "", "", max * GameConstants.DAMAGE_BADLY_DAMAGED_VALUE );
                  break;
      
                case GameConstants.STATE_DAMAGED:
                  new_item.SetHealth( "", "", max * GameConstants.DAMAGE_DAMAGED_VALUE );
                  break;
      
                case GameConstants.STATE_WORN:
                  new_item.SetHealth( "", "", max * GameConstants.DAMAGE_WORN_VALUE );
                  break;
                
                case GameConstants.STATE_RUINED:
                  new_item.SetHealth( "", "", max * GameConstants.DAMAGE_RUINED_VALUE );
                  break;
                
                default:
                  break;
              }
            }
          }
        }
        attachment.Delete();
      }
    }
    
    DropArrows(body);
    int deadBodyLifetime;
    if ( GetCEApi() )
    {
      deadBodyLifetime = GetCEApi().GetCEGlobalInt( "CleanupLifetimeDeadPlayer" );
      if ( deadBodyLifetime <= 0 )
      {
        deadBodyLifetime = 3600;
      }
    }
    array<EntityAI> children = new array<EntityAI>;
    body_PB.GetInventory().EnumerateInventory(InventoryTraversalType.LEVELORDER, children);
    int count = children.Count();
    for (int i = 0; i < count; ++i)
    {
      EntityAI child = children.Get(i);
      if ( child )
      {
        body_PB.GetInventory().DropEntity(InventoryMode.SERVER, body_PB, child);
        child.SetLifetime( deadBodyLifetime );
      }
    }
		GetGame().ObjectDelete(body); // Temporal deletion of the body
  }
  void CreateSkeletalBone(vector bodyPosition)
  {
    ItemBase added_item;
    vector pos_rnd = bodyPosition + Vector(Math.RandomFloat01() - 0.5, 0, Math.RandomFloat01() - 0.5);
    int randomBoneSpawnChance = Math.RandomIntInclusive(0, 100);
    string bodypart = "";//SRP_Brain

    if (randomBoneSpawnChance > 49 && randomBoneSpawnChance < 79)
      bodypart = "SRP_Brain";
    else if (randomBoneSpawnChance > 78 && randomBoneSpawnChance < 82)
      bodypart = "SRP_SkeletonFrame";
    else if (randomBoneSpawnChance > 81 && randomBoneSpawnChance < 85)
      bodypart = "SRP_SkeletonFrame_Skull";
    else if (randomBoneSpawnChance > 84 && randomBoneSpawnChance < 88)
      bodypart = "SRP_SkeletonFrame_ArmLeft";
    else if (randomBoneSpawnChance > 87 && randomBoneSpawnChance < 91)
      bodypart = "SRP_SkeletonFrame_ArmRight";
    else if (randomBoneSpawnChance > 90 && randomBoneSpawnChance < 94)
      bodypart = "SRP_SkeletonFrame_Pelvis";
    else if (randomBoneSpawnChance > 93 && randomBoneSpawnChance < 97)
      bodypart = "SRP_SkeletonFrame_LegLeft";
    else if (randomBoneSpawnChance > 96)
      bodypart = "SRP_SkeletonFrame_LegRight";

    if (bodypart != "")
    {
      Class.CastTo(added_item, GetGame().CreateObjectEx(bodypart, pos_rnd, false));
      added_item.PlaceOnSurface();
    }
  }

  void CreateMetalWires(vector bodyPosition)
  {
    ItemBase added_item;
    int numWires = Math.RandomIntInclusive(3,10);
    vector pos_rnd;
    for(int i = 0; i < numWires; i++)
    {
      pos_rnd = bodyPosition + Vector(Math.RandomFloat01() - 0.5, 0, Math.RandomFloat01() - 0.5);
      if (Class.CastTo(added_item, GetGame().CreateObjectEx(GetRandomMetalWire(), pos_rnd, ECE_SETUP | ECE_NOLIFETIME | ECE_DYNAMIC_PERSISTENCY)))
      {
        added_item.PlaceOnSurface();
      }
    }
  }

  string GetRandomMetalWire()
  {
    return GetMetalWireTypes().GetRandomElement();
  }

  TStringArray GetMetalWireTypes()
  {
    return {
      "MetalWire_Black",
      "MetalWire_Brown",
      "MetalWire_Red",
      "MetalWire_Orange",
      "MetalWire_Yellow",
      "MetalWire_Green",
      "MetalWire_Blue",
      "MetalWire_Purple",
      "MetalWire_Grey",
      "MetalWire_White",
    };
  }
};

modded class ActionUncoverHeadBase
{
	override void UncoverHead(PlayerBase target, PlayerBase source)
	{
    string burlapSackClassName = "";
		EntityAI attachment;
		Class.CastTo(attachment, target.GetInventory().FindAttachment(InventorySlots.HEADGEAR));
    if ( attachment && attachment.GetType() == "BurlapSackCover" )
    {
      burlapSackClassName = "BurlapSack";
    }
    else if ( attachment && attachment.IsInherited(BurlapSackCover))
		{
      string color = attachment.ConfigGetString("color");    
      burlapSackClassName = "BurlapSack_" + color;
		}

		if ( attachment )
		{
			EntityAI burlapSack = source.GetHumanInventory().CreateInHands(burlapSackClassName);			
			if ( burlapSack == null )
			{
				burlapSack = source.GetHumanInventory().CreateInInventory(burlapSackClassName);
				if ( burlapSack == null )
        {
					burlapSack = EntityAI.Cast(GetGame().CreateObjectEx( burlapSackClassName, source.GetPosition(), ECE_PLACE_ON_SURFACE, RF_ORIGINAL ));
        }
			}
      if (burlapSack)
      {
				MiscGameplayFunctions.TransferItemProperties(attachment,burlapSack,true,false,true);
      }
			attachment.Delete();
		}
		source.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
};

modded class ActionCoverHeadSelf
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
    ItemBase new_item;
    if (action_data.m_MainItem)
    {
      if (action_data.m_MainItem.GetType() == "BurlapSack")
      {
        new_item = ItemBase.Cast(action_data.m_Player.GetInventory().CreateInInventory("BurlapSackCover"));
      }
      else if (action_data.m_MainItem.IsInherited(BurlapSack))
      {
        string color = action_data.m_MainItem.ConfigGetString("color");
        new_item = ItemBase.Cast(action_data.m_Player.GetInventory().CreateInInventory("BurlapSackCover_" + color));
      }
    }
		if( new_item )
		{
			MiscGameplayFunctions.TransferItemProperties(action_data.m_MainItem,new_item,true,false,true);
			action_data.m_MainItem.Delete();
			action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		}
	}
};

modded class ActionCoverHeadTarget
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
		//setaperture will be called from here, or from statemachine
		PlayerBase ntarget;
		Class.CastTo(ntarget, action_data.m_Target.GetObject());

    CoverHeadOfTargetPlayerLambda lambda;
    // handle the base case of a vanilla burlap sack, if it is our cover, use the color to swap
    if (action_data.m_MainItem)
    {
      if (action_data.m_MainItem.GetType() == "BurlapSack")
      {
        lambda = new CoverHeadOfTargetPlayerLambda(action_data.m_MainItem, "BurlapSackCover", ntarget);
      }
      else if (action_data.m_MainItem.IsInherited(BurlapSack))
      {
        string color = action_data.m_MainItem.ConfigGetString("color");
        lambda = new CoverHeadOfTargetPlayerLambda(action_data.m_MainItem, "BurlapSackCover_" + color, ntarget);
      }
    }
    if (lambda)
    {
		  action_data.m_Player.ServerReplaceItemInHandsWithNewElsewhere(lambda);
		  action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
    }				
	}
};

modded class ActionUncoverHeadTarget
{
  // temporary fix probably. This is already in the uncoverself code so probably bohemia oversight
  override bool IsWearingBurlap( PlayerBase player )
	{
    bool isWearingBurlap = super.IsWearingBurlap(player);

		EntityAI attachment;
		Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.HEADGEAR));
		if ( attachment && attachment.IsInherited(BurlapSackCover) )
		{
			isWearingBurlap = true;
		}
		return isWearingBurlap;
	}
};
