modded class TransmitterBase extends ItemTransmitter
{
	bool m_Muted = false;
	
	bool IsMuted()
	{
		return m_Muted;
	}
	
	void MuteTransmitter()
	{
		EnableBroadcast(false);
		m_Muted = true;
	}
	
	void UnMuteTransmitter()
	{
		EnableBroadcast(true);
		m_Muted = false;
	}

  override void OnWorkStart()
	{
		//turn on broadcasting/receiving
		super.OnWorkStart();
		
		//stop the static noise
		SoundTurnedOnNoiseStop();
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );

    // is server, player has a radio in hands, is not muted
    if(GetGame().IsDedicatedServer() && player_PB && player_PB.GetItemInHands() == this)
    {
      if ( !IsMuted())
      {
        player_PB.SendMessageToClient( player, "Radio is UnMuted" );
      }
      else
      {
        player_PB.SendMessageToClient( player, "Radio is Muted" );
      }
    }
  }

	override void SetActions()
	{
		super.SetActions();
    
		AddAction(ActionToggleMuteTransmitter);
	}
}