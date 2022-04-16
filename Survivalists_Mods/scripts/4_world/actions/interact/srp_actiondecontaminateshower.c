class ActionTriggerDecontaminationShower: ActionInteractBase
{
	void ActionTriggerDecontaminationShower()
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
		return "Use Shower";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( !target ) 
			return false;

    SRP_DecontaminationShower shower = SRP_DecontaminationShower.Cast(target.GetObject());
    if (shower)
    {
      return true; 
    }
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
    if (action_data.m_Player.GetSingleAgentCount(eAgents.CHEMICAL_POISON) > 100)
    {
      action_data.m_Player.InsertAgent(eAgents.CHEMICAL_POISON, -35);
    }
    SRP_DecontaminationShower shower = SRP_DecontaminationShower.Cast(action_data.m_Target.GetObject());
    if (shower)
    {
      shower.SetPlaying(true);
    }
	}
};