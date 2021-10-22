class SRP_TeleportAction: ActionInteractBase
{
	void SRP_TeleportAction()
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
		return "#open";
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
      portal.TeleportPlayer(action_data.m_Player);
    }
	}
	
};