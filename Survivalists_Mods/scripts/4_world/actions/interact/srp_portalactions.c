class ActionTeleportToEvent: ActionInteractBase
{
	void ActionTeleportToEvent()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	override string GetText()
	{
		return "Strip Gear And Go To Event?";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target ) 
			return false;

    SRP_PortalBase portal = SRP_PortalBase.Cast(target.GetObject());
    if (portal)
    {
      return true; 
    }
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
    SRP_PortalBase portal = SRP_PortalBase.Cast(action_data.m_Target.GetObject());
    if (portal)
    {
      if (action_data.m_Player)
      {
        action_data.m_Player.RemoveAllItems();

        action_data.m_Player.GetInventory().CreateInInventory("WitchHat");
        action_data.m_Player.GetInventory().CreateInInventory(GetRandomCloak().GetRandomElement());
        action_data.m_Player.GetInventory().CreateInInventory(GetRandomShirt().GetRandomElement());
        action_data.m_Player.GetInventory().CreateInInventory(GetRandomPants().GetRandomElement());
        action_data.m_Player.GetInventory().CreateInInventory(GetRandomWand().GetRandomElement());
        action_data.m_Player.GetInventory().CreateInInventory(GetRandomShoes().GetRandomElement());        
        action_data.m_Player.GetInventory().CreateInInventory("HuntingKnife");
        action_data.m_Player.GetInventory().CreateInInventory("HuntingKnife");
        action_data.m_Player.GetInventory().CreateInInventory("HuntingKnife");
        action_data.m_Player.GetStatWater().Set( 5000 );
        action_data.m_Player.GetStatEnergy().Set( 7500 );
      }
      portal.TeleportPlayer(action_data.m_Player, "event");
    }
	}
  TStringArray GetRandomCloak()
  {
    return {
      "Leather_Cloak_up_blue",
      "Leather_Cloak_up_coffee",
      "Leather_Cloak_up_green",
      "Leather_Cloak_up_grey",
      "Leather_Cloak_up_heartsblue",
      "Leather_Cloak_up_heartspink",
      "Leather_Cloak_up_orange",
      "Leather_Cloak_up_pink",
      "Leather_Cloak_up_purple",
      "Leather_Cloak_up_red",
      "Leather_Cloak_up_snow",
      "Leather_Cloak_up_teal",
      "Leather_Cloak_up_yellow",
    };
  }

  TStringArray GetRandomShirt()
  {
    return {
      "Shirt_BlueCheck",
      "Shirt_BlueCheckBright",
      "Shirt_GreenCheck",
      "Shirt_RedCheck",
      "Shirt_WhiteCheck",
      "Shirt_PlaneBlack",
    };
  }

  TStringArray GetRandomPants()
  {
    return {
      "Jeans_Black",
      "Jeans_Blue",
      "Jeans_Brown",
      "Jeans_Green",
      "Jeans_Grey",
      "Jeans_BlueDark",
    };
  }  

  TStringArray GetRandomWand()
  {
    return {
      "ADM_Wand_Fire",
      "ADM_Wand_Ice",
      "ADM_Wand_Curse",
      "ADM_Wand_Healing",
    };
  }

  TStringArray GetRandomShoes()
  {
    return {
      "Wellies_Black",
      "Wellies_Brown",
      "Wellies_Green",
      "Wellies_Grey",
    };
  }
};

class ActionTeleportAwayFromEvent: ActionInteractBase
{
	void ActionTeleportAwayFromEvent()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}

	override string GetText()
	{
		return "Teleport";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target ) 
			return false;

    SRP_PortalBase portal = SRP_PortalBase.Cast(target.GetObject());
    if (portal)
    {
      return true; 
    }
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
    SRP_PortalBase portal = SRP_PortalBase.Cast(action_data.m_Target.GetObject());
    if (portal)
    {
      portal.TeleportPlayer(action_data.m_Player, "home");
    }
	}
	
};