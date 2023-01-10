modded class ActionSawPlanksCB
{	
	float GetDefaultTime()
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
    super.OnFinishProgressServer(action_data);
    if (action_data.m_Target) 
    {
      EntityAI body;
      Class.CastTo(body, action_data.m_Target.GetObject());
      // Print("body is type: " + body.GetType());
      if (body.IsKindOf("SurvivorBase"))
      {
        ItemBase added_item;
        vector pos_rnd = body.GetPosition() + Vector(Math.RandomFloat01() - 0.5, 0, Math.RandomFloat01() - 0.5);
        int randomBoneSpawnChance = Math.RandomIntInclusive(0, 100);
        string bodypart = "";//SRP_Brain

        if (randomBoneSpawnChance > 49 && randomBoneSpawnChance < 79)
        {
          bodypart = "SRP_Brain";
        }
        else if (randomBoneSpawnChance > 78 && randomBoneSpawnChance < 82)
        {
          bodypart = "SRP_SkeletonFrame";
        }
        else if (randomBoneSpawnChance > 81 && randomBoneSpawnChance < 85)
        {
          bodypart = "SRP_SkeletonFrame_Skull";
        }
        else if (randomBoneSpawnChance > 84 && randomBoneSpawnChance < 88)
        {
          bodypart = "SRP_SkeletonFrame_ArmLeft";
        }
        else if (randomBoneSpawnChance > 87 && randomBoneSpawnChance < 91)
        {
          bodypart = "SRP_SkeletonFrame_ArmRight";
        }
        else if (randomBoneSpawnChance > 90 && randomBoneSpawnChance < 94)
        {
          bodypart = "SRP_SkeletonFrame_Pelvis";
        }
        else if (randomBoneSpawnChance > 93 && randomBoneSpawnChance < 97)
        {
          bodypart = "SRP_SkeletonFrame_LegLeft";
        }
        else if (randomBoneSpawnChance > 96)
        {
          bodypart = "SRP_SkeletonFrame_LegRight";
        }

        if (bodypart != "")
        {
          Class.CastTo(added_item, GetGame().CreateObjectEx(bodypart, pos_rnd, false));
          added_item.PlaceOnSurface();
        }
      }
    }
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
