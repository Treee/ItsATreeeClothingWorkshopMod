class SRP_CassettePlayer extends ItemBase
{      
  EffectSound m_ActiveSound;

  bool m_Playing;
  bool m_SyncPlaying;
  string m_CassetteSoundSet;
    
  void SRP_CassettePlayer()
  {
    RegisterNetSyncVariableBool( "m_SyncPlaying" );    
  }
    
  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
        
    if( m_SyncPlaying && !m_Playing )
    {
      TurnOn();
    } 
    else if( !m_SyncPlaying && m_Playing )
    {
      TurnOff();
    }
	}	
   
  override void SetActions()
	{
    super.SetActions();
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
	}

  override void EEItemAttached( EntityAI item, string slot_name )
	{
    super.EEItemAttached( item, slot_name );
    
    if( item && slot_name == "SRP_Cassette" )
    {
      m_CassetteSoundSet = item.GetType();
    }
	}
    
	override void EEItemDetached( EntityAI item, string slot_name )
	{
    super.EEItemDetached( item, slot_name );  
    if( slot_name == "SRP_Cassette" )
    {
      TurnOff();        
      m_CassetteSoundSet = "";
    }
    else if ( slot_name == "BatteryD" )
    {
      TurnOff();            
    }
  }
    
  override void OnMovedInsideCargo( EntityAI container )
	{
    TurnOff();
	}

  void TurnOff()
  {
    GetCompEM().SwitchOff();
  }

  void TurnOn()
  {
    if ( GetCompEM().CanWork() )
    {
      GetCompEM().SwitchOn();
    }
  } 
  
  override void OnWorkStart()
  {
    // short circuit to play / stop in one line
    if (!Play())
    {
      TurnOff();
    }
  }

  override void OnWorkStop()
  {
    Stop();    
  }

  bool Play()
  { 
    if (m_CassetteSoundSet && m_CassetteSoundSet == "")
    {
      return false;
    }

    if (!GetGame().IsDedicatedServer())
    {
      if ( m_ActiveSound ) 
      {
        StopSoundSet( m_ActiveSound );
      }
      string cfgPath = "CfgVehicles " + m_CassetteSoundSet + " CfgCassette" ;
      if( !GetGame().ConfigIsExisting( cfgPath ) )
      {
        return false;
      }        
      string soundSetName = GetGame().ConfigGetTextOut( cfgPath + " soundSet" );
      PlaySoundSetLoop(m_ActiveSound, soundSetName, 0, 0);
    }    
    m_Playing = true;
    m_SyncPlaying = true;
    SetSynchDirty();
    return true;
  }
  
  void Stop()
  {
    m_Playing = false;
    m_SyncPlaying = false;

    if ( m_ActiveSound )
    {
      StopSoundSet( m_ActiveSound );
    }
    SetSynchDirty();
  }
};
