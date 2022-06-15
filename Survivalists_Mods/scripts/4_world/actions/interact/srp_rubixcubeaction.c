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

class ActionTurnRubixCubeClockwise: ActionInteractBase
{
  string TURNABLE_COMPONENT_NAME = "";
  int TURNABLE_COMPONENT_INDEX = -1;

	void ActionTurnRubixCubeClockwise()
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
		return "Turn Clockwise";
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

		Land_srp_artifact_rubixcube_1 rubixCube;
		if( Class.CastTo(rubixCube, target.GetObject()))
		{      
      if ( GetGame().IsDedicatedServer() )
      {
        return true;
      }
			string name = rubixCube.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
      // Print("Looking at component: " + name);
      if (TURNABLE_COMPONENT_NAME != "" && name == TURNABLE_COMPONENT_NAME)
      {
        return !rubixCube.IsStateChanging();
      }
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Land_srp_artifact_rubixcube_1 rubix;
    Print("on server start");
		if( Class.CastTo(rubix, action_data.m_Target.GetObject()))
		{
      Print("server starting to open door");

			rubix.TurnRubix(true, TURNABLE_COMPONENT_INDEX);
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

class ActionTurnRubixCubeCounterClockwise: ActionTurnRubixCubeClockwise
{
	override string GetText()
	{
		return "Turn Counter Clockwise";
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Land_srp_artifact_rubixcube_1 rubix;
    Print("on server start");
		if( Class.CastTo(rubix, action_data.m_Target.GetObject()))
		{
      Print("server starting to open door");

			rubix.TurnRubix(false, TURNABLE_COMPONENT_INDEX);
		}
	}

  void OnStartClient(ActionData action_data)
	{
    Land_srp_artifact_rubixcube_1 rubix;
    Print("on client start");
		if( Class.CastTo(rubix, action_data.m_Target.GetObject()))
		{
      Print("client starting to open door: " + TURNABLE_COMPONENT_INDEX);
			rubix.TurnRubix(false, TURNABLE_COMPONENT_INDEX);
		}
  }
};

class ActionTurnRubixCubeClockwise_Row1: ActionTurnRubixCubeClockwise
{
  void ActionTurnRubixCubeClockwise_Row1()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
    TURNABLE_COMPONENT_NAME = "row1";
    TURNABLE_COMPONENT_INDEX = 0;
	}
};
class ActionTurnRubixCubeClockwise_Row2: ActionTurnRubixCubeClockwise
{
  void ActionTurnRubixCubeClockwise_Row2()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
    TURNABLE_COMPONENT_NAME = "row2";
    TURNABLE_COMPONENT_INDEX = 1;
	}
};
class ActionTurnRubixCubeClockwise_Col1: ActionTurnRubixCubeClockwise
{
  void ActionTurnRubixCubeClockwise_Col1()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
    TURNABLE_COMPONENT_NAME = "col1";
    TURNABLE_COMPONENT_INDEX = 2;
	}
};
class ActionTurnRubixCubeClockwise_Col2: ActionTurnRubixCubeClockwise
{
  void ActionTurnRubixCubeClockwise_Col2()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
    TURNABLE_COMPONENT_NAME = "col2";
    TURNABLE_COMPONENT_INDEX = 3;
	}
};
class ActionTurnRubixCubeClockwise_Z1: ActionTurnRubixCubeClockwise
{
  void ActionTurnRubixCubeClockwise_Z1()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
    TURNABLE_COMPONENT_NAME = "z1";
    TURNABLE_COMPONENT_INDEX = 4;
	}
};
class ActionTurnRubixCubeClockwise_Z2: ActionTurnRubixCubeClockwise
{
  void ActionTurnRubixCubeClockwise_Z2()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
    TURNABLE_COMPONENT_NAME = "z2";
    TURNABLE_COMPONENT_INDEX = 5;
	}
};