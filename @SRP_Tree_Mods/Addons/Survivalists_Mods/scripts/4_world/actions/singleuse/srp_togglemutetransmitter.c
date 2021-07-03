class ActionToggleMuteTransmitter: ActionInteractBase
{
	//private ref SRP_RadioNoTransmit m_SRP_RadioNoTransmit;
	
	void ActionToggleMuteTransmitter()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_OFF;	
	}

	override string GetText()
	{
		return "Toggle transmist";
	}
	
	override typename GetInputType()
	{
		return ToggleMuteTransmitterActionInput;
	}
	
	override bool HasTarget()
	{
		return false;
	}
	
	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
		TransmitterBase radio = TransmitterBase.Cast(player.GetHumanInventory().GetEntityInHands());
		if (radio)
		{
			if (radio.IsTransmitter())
			{
				if (radio.HasEnergyManager() && radio.GetCompEM().IsWorking())
				{
					return true;
				}
			}
		}
		return false;
	}
		
	override void OnExecuteServer( ActionData action_data )
	{
		PlayerBase player = PlayerBase.Cast(action_data.m_Player);

		TransmitterBase radio = TransmitterBase.Cast(player.GetHumanInventory().GetEntityInHands());
		if(radio)
		{
			if(!radio.IsMuted())
			{				
				//if (player != null)
					SendMessageToClient( player, "Radio Muted" );
				radio.MuteTransmitter();
				//m_SRP_RadioNoTransmit.NoRadioTransmitToggleHeading ();
			}
			else if(radio.IsMuted())
			{
				//if (player != null)
					SendMessageToClient( player, "Radio UnMuted" );
				radio.UnMuteTransmitter();
				//m_SRP_RadioNoTransmit = new SRP_RadioNoTransmit (true);
			}
		} 
		else
		{
			if (player != null)
				//SendMessageToClient( player, "brak instancji transmitter_item" );
		}
	}
}
