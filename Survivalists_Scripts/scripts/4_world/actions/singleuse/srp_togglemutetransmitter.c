class ActionToggleMuteTransmitter: ActionSingleUseBase
{
	void ActionToggleMuteTransmitter()
	{
		m_CommandUID        = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		m_Text = "Toggle Mute Radio";
	}

  override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

  override bool HasTarget()
	{
		return false;
	}
		
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    TransmitterBase radio;
		if (Class.CastTo(radio, item) && radio.IsTransmitter())
		{
      if (radio.HasEnergyManager() && radio.GetCompEM().IsWorking())
      {
        return true;
      }			
		}
		return false;	
  }
		
	override void OnExecuteServer( ActionData action_data )
	{
    TransmitterBase radio;
		if (Class.CastTo(radio, action_data.m_MainItem))
		{
			if(!radio.IsMuted())
			{				
        SendMessageToClient( action_data.m_Player, "Radio Muted" );
				radio.MuteTransmitter();
			}
			else if(radio.IsMuted())
			{
        SendMessageToClient( action_data.m_Player, "Radio UnMuted" );
				radio.UnMuteTransmitter();
			}
		}
  }	
};
