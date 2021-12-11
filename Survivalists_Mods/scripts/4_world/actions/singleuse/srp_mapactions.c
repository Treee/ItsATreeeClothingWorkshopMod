class SRP_ActionOpenMapCB : HumanCommandActionCallback //ActionSingleUseBaseCB
{	
  ref ActionData m_ActionData;
  bool m_CancelCondition;
	bool m_HasReceivedEvent;
	int	m_InitMovementState;
	int	m_FinalMovementState;

	void SRP_ActionOpenMapCB()
	{
		RegisterAnimationEvent("ActionExec", UA_ANIM_EVENT);
		EnableStateChangeCallback();
		EnableCancelCondition( true );
	}

  void ~SRP_ActionOpenMapCB()
  {
    delete m_ActionData;
  }
	
	void SetActionData(ActionData action_data )
	{
		m_ActionData = action_data;
	}
			
	bool CancelCondition( bool pEnable )
	{		
		return DefaultCancelCondition();
	}
	
	override void OnStateChange(int pOldState, int pCurrentState)
	{
		if (!m_ActionData || !m_ActionData.m_Player)
			return;
				
		if ( ( pOldState == STATE_LOOP_IN && pCurrentState == STATE_LOOP_LOOP ) && !m_HasReceivedEvent )
		{
			m_CancelCondition = true;
		}
		
		if ( ( pOldState == STATE_LOOP_IN && pCurrentState == STATE_LOOP_LOOP ) && m_HasReceivedEvent )
		{
			m_FinalMovementState = m_ActionData.m_Player.m_MovementState.m_iStanceIdx;
			
			if ( StateCheck() )
			{
				m_CancelCondition = false; 
			}
			else
			{
				m_CancelCondition = true; 
			}
		}
	}
	
	override void OnAnimationEvent(int pEventID)
	{
		if (!m_ActionData || !m_ActionData.m_Player)
			return;
		
		switch (pEventID)
		{
			case UA_ANIM_EVENT: 
				m_HasReceivedEvent = true;
				m_InitMovementState = m_ActionData.m_Player.m_MovementState.m_iStanceIdx;
				PerformMapChange();
			break;
		}
	}
	
	override void OnFinish(bool pCanceled)	
	{
		if ( m_ActionData && m_ActionData.m_Player )
		{
      if ( m_ActionData && m_ActionData.m_ActionComponent )
        m_ActionData.m_State = m_ActionData.m_ActionComponent.Interrupt(m_ActionData);

			SRP_ActionOpenMap action = SRP_ActionOpenMap.Cast(m_ActionData.m_Action);
			
			if(action)
				action.End(m_ActionData);

      if ( m_ActionData.m_Player.m_OpenMapCallback )
        m_ActionData.m_Player.m_OpenMapCallback.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
      
      m_ActionData.m_State = UA_FINISHED;


      ItemMap chernomap = ItemMap.Cast(m_ActionData.m_Player.GetItemInHands());
      chernomap.SetMapStateOpen(false,m_ActionData.m_Player);
		}
	}
	
	void PerformMapChange()
	{
		if (m_ActionData.m_Player.IsSwimming() || m_ActionData.m_Player.IsClimbing() || m_ActionData.m_Player.IsFalling() || m_ActionData.m_Player.IsClimbingLadder() || m_ActionData.m_Player.IsUnconscious() || m_ActionData.m_Player.IsRestrained())
			return;
		
		if ( m_CancelCondition ) { return; }
		
		ItemMap chernomap = ItemMap.Cast(m_ActionData.m_Player.GetItemInHands());
		if (chernomap && !m_ActionData.m_Player.IsMapOpen())
		{
			chernomap.SetMapStateOpen(true,m_ActionData.m_Player);
		}
	}

	bool StateCheck()
	{
		if ( m_InitMovementState == m_FinalMovementState )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class SRP_ActionOpenMap : ActionBase
{
  void SRP_ActionOpenMap() { }

  override bool IsInstant()
	{
		return false;
	}

  override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

  override string GetText()
	{
		return "#unfold_map";
	}

  override bool HasTarget()
	{
		return false;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    ItemMap chernomap = ItemMap.Cast(player.GetItemInHands());
    // only open the map when item is in hands
    return (chernomap && !player.IsMapOpen());
	}

	override void OnStartClient( ActionData action_data )
	{
		OpenCustomMap( action_data );
	}
	
	override void OnStartServer( ActionData action_data )
	{
		OpenCustomMap( action_data );
	}
	
	override void OnEndRequest(ActionData action_data)
	{
		if ( action_data.m_Player.m_OpenMapCallback )
			action_data.m_Player.m_OpenMapCallback.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
		
		action_data.m_State = UA_FINISHED;
	}


  void OpenCustomMap( ActionData action_data )
	{
    ItemMap chernomap = ItemMap.Cast(action_data.m_Player.GetItemInHands());

    chernomap.SetMapStateOpen(true,action_data.m_Player);
    
    if (!action_data.m_Player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_PRONE))
		{
			action_data.m_Player.m_OpenMapCallback = SRP_ActionOpenMapCB.Cast(action_data.m_Player.AddCommandModifier_Action(DayZPlayerConstants.CMD_ACTIONMOD_VIEWMAP,SRP_ActionOpenMapCB));
		}
		else
		{
			action_data.m_Player.m_OpenMapCallback = SRP_ActionOpenMapCB.Cast(action_data.m_Player.StartCommand_Action(DayZPlayerConstants.CMD_ACTIONFB_VIEWMAP,SRP_ActionOpenMapCB,GetStanceMask(action_data.m_Player)));
		}

    // sets player for associated callback to use
		if (action_data.m_Player.m_OpenMapCallback)
		{
			action_data.m_Player.m_OpenMapCallback.SetActionData(action_data);
		}
	}

}
