modded class TransmitterBase
{
	bool m_Muted = false;

  void TransmitterBase()
  {
    RegisterNetSyncVariableBool("m_Muted");
  }

  override void OnVariablesSynchronized()
	{
    super.OnVariablesSynchronized();
    UpdateMuteRadioState(m_Muted);
  };
	
	bool IsMuted()
	{
		return m_Muted;
	}
	
	void MuteTransmitter()
	{
		m_Muted = true;
    SetSynchDirty();
	}
	
	void UnMuteTransmitter()
	{
		m_Muted = false;
    SetSynchDirty();
	}

  void UpdateMuteRadioState(bool isMuted)
  {
    EnableBroadcast(isMuted);
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