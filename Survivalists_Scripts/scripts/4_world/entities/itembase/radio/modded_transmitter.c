modded class TransmitterBase
{
	protected bool m_Muted = false;

  void TransmitterBase()
  {
    RegisterNetSyncVariableBool("m_Muted");
  }

  override void OnVariablesSynchronized()
	{
    super.OnVariablesSynchronized();
    UpdateMuteRadioState();
  };
	
	bool IsMuted()
	{
		return m_Muted;
	}
	
	void MuteTransmitter()
	{
		m_Muted = true;
    UpdateMuteRadioState();
    SetSynchDirty();
	}
	
	void UnMuteTransmitter()
	{
		m_Muted = false;
    UpdateMuteRadioState();
    SetSynchDirty();
	}

  void UpdateMuteRadioState()
  {
    if (GetCompEM().IsWorking())
    {
      // flip the boolean lol stupid bug and silly oversight
      bool isMuted = !IsMuted();
      EnableBroadcast(isMuted);
    }
  }

  override void OnWorkStart()
	{
		//turn on broadcasting/receiving
		super.OnWorkStart();
		
		//stop the static noise
		SoundTurnedOnNoiseStop();
    // set mute or not
    UpdateMuteRadioState();
	}

  override void OnWorkStop()
	{
		//turn on broadcasting/receiving
		super.OnWorkStop();
    // set mute or not
    UpdateMuteRadioState();
	}
  
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );

    // is server, player has a radio in hands, is not muted
    if(GetGame().IsDedicatedServer() && player_PB && player_PB.GetItemInHands() == this)
    {
      Param1<string> m_MessageParam;
      if ( !IsMuted())
      {
        // player_PB.SendMessageToClient( player, "Radio is UnMuted" );
        m_MessageParam = new Param1<string>("Radio is UnMuted");
        // SendMessageToClient( player, "Radio is UnMuted" );
      }
      else
      {
        // player_PB.SendMessageToClient( player, "Radio is Muted" );
        m_MessageParam = new Param1<string>("Radio is Muted");
        // SendMessageToClient( player, "Radio is Muted" );
      }
      if( GetGame().IsServer() && m_MessageParam && player_PB.IsAlive())
      {
        GetGame().RPCSingleParam(player_PB, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, player_PB.GetIdentity());
      }
    }
  }

	override void SetActions()
	{
		super.SetActions();
    
		AddAction(ActionToggleMuteTransmitter);
	}
}