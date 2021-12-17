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
      
      ItemBase added_item;
      vector pos_rnd = body.GetPosition() + Vector(Math.RandomFloat01() - 0.5, 0, Math.RandomFloat01() - 0.5);
      int randomNumber = Math.RandomIntInclusive(0, 100);
      if (body.IsKindOf("SurvivorBase") && randomNumber > 70 && randomNumber < 90)
      {
        Class.CastTo(added_item, GetGame().CreateObjectEx("SRP_BrainPiece", pos_rnd, false));
        added_item.PlaceOnSurface();
      }
      else if (body.IsKindOf("SurvivorBase") && randomNumber > 89)
      {
        Class.CastTo(added_item, GetGame().CreateObjectEx("SRP_Brain", pos_rnd, false));
        added_item.PlaceOnSurface();
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
  override bool IsWearingBurlap( PlayerBase player )
	{
    bool isWearingBurlap = super.IsWearingBurlap(player);

		EntityAI attachment;
		Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.HEADGEAR));
		if ( attachment && attachment.IsInherited(BurlapSack))
		{
			isWearingBurlap = true;
		}
		return isWearingBurlap;
	}
};

modded class ActionUncoverHeadSelf
{
  override bool IsWearingBurlap( PlayerBase player )
	{
    bool isWearingBurlap = super.IsWearingBurlap(player);

		EntityAI attachment;
		Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.HEADGEAR));
		if ( attachment && attachment.IsInherited(BurlapSack))
		{
			isWearingBurlap = true;
		}
		return isWearingBurlap;
	}
};