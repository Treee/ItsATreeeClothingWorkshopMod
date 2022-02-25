class SRP_PersonalRadio_NumberStations extends ItemBase
{      
  EffectSound m_ActiveSound;

  bool m_Playing;
  bool m_SyncPlaying;
    
  void SRP_PersonalRadio_NumberStations()
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
    if ( m_ActiveSound ) m_ActiveSound.SoundStop();
    // PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns_Male.GetRandomElement(), 0, 0);
    if (!GetGame().IsDedicatedServer())
    {
      PlaySoundSetLoop(m_ActiveSound, "Survivalists_Mods_NumberStation1_SoundSet", 0.5, 0.5);
    }    
    m_Playing = true;
    m_SyncPlaying = true;
    return true;
  }
  
  void Stop()
  {
    m_Playing = false;
    m_SyncPlaying = false;

    if ( m_ActiveSound )
    {
      m_ActiveSound.SoundStop();
    }
    
  }
}