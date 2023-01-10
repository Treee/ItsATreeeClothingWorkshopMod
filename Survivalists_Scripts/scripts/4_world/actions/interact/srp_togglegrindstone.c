// this is for documentation sake
// enum SRP_RUBIX_COMPONENTS
// {
//   ROW1=0,
//   ROW2,
//   COL1,
//   COL2,
//   Z1,
//   Z2
// };

class ActionToggleGrindstoneOn: ActionInteractBase
{
	void ActionToggleGrindstoneOn()
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
		return "Turn Grindstone";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) 
    {
      return false;    
    }
		if( IsBuilding(target) ) 
    {
      return false;
    }

		SRP_Grindstone_ColorBase grindstone;
		if( Class.CastTo(grindstone, target.GetObject()))
		{
      // return true is the thing is not spinning already
      return !grindstone.GetIsSpinning();
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		SRP_Grindstone_ColorBase grindstone;
		if( Class.CastTo(grindstone, action_data.m_Target.GetObject()))
		{
			grindstone.SetIsSpinning(true);
		}
	}

  // void OnStartClient(ActionData action_data)
	// {
  //   Land_srp_artifact_rubixcube_1 rubix;
  //   Print("on client start");
	// 	if( Class.CastTo(rubix, action_data.m_Target.GetObject()))
	// 	{
  //     Print("client starting to open door: " + TURNABLE_COMPONENT_INDEX);
	// 		rubix.TurnRubix(true, TURNABLE_COMPONENT_INDEX);
	// 	}
  // }
};

class ActionToggleGrindstoneOff: ActionToggleGrindstoneOn
{
	override string GetText()
	{
		return "Stop Turning";
	}
  
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) 
    {
      return false;    
    }
		if( IsBuilding(target) ) 
    {
      return false;
    }

		SRP_Grindstone_ColorBase grindstone;
		if( Class.CastTo(grindstone, target.GetObject()))
		{
      // return false is the thing is not spinning already
      return grindstone.GetIsSpinning();
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		SRP_Grindstone_ColorBase grindstone;
		if( Class.CastTo(grindstone, action_data.m_Target.GetObject()))
		{
			grindstone.SetIsSpinning(false);
		}
	}

  // void OnStartClient(ActionData action_data)
	// {
  //   Land_srp_artifact_rubixcube_1 rubix;
  //   Print("on client start");
	// 	if( Class.CastTo(rubix, action_data.m_Target.GetObject()))
	// 	{
  //     Print("client starting to open door: " + TURNABLE_COMPONENT_INDEX);
	// 		rubix.TurnRubix(false, TURNABLE_COMPONENT_INDEX);
	// 	}
  // }
};