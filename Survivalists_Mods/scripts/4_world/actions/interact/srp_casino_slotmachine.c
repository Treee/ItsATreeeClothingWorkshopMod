class ActionPullSlotMachineLever: ActionInteractBase
{
	void ActionPullSlotMachineLever()
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
		return "Pull Lever";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) 
    {
      return false;    
    }
		if( !IsBuilding(target) ) 
    {
      return false;
    }
		SRP_Casino_SlotMachine_Large lever;
		if( Class.CastTo(lever, target.GetObject()))
		{
      if ( GetGame().IsDedicatedServer() )
      {
        return true;
      }
			string name = lever.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
			if (name == "lever")
      {
				return true;
      }
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		SRP_Casino_SlotMachine_Large lever;
    // Print("on server start");
		if( Class.CastTo(lever, action_data.m_Target.GetObject()))
		{
      // Print("server starting to open door");
			lever.PullLever();
		}
	}

  void OnStartClient(ActionData action_data)
	{
    SRP_Casino_SlotMachine_Large lever;
    // Print("on client start");
		if( Class.CastTo(lever, action_data.m_Target.GetObject()))
		{
      // Print("client starting to open door");
			lever.PullLever();
		}
  }
};