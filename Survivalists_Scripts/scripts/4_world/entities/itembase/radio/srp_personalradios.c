class SRP_PersonalRadio_SneakyBear extends PersonalRadio
{
	void SRP_PersonalRadio_SneakyBear()
	{ 
    // turn off the ability to receive sound
    if (GetCompEM().IsWorking())
    {
      GetCompEM().SwitchOn();
    }
    EnableReceive(false);
    EnableBroadcast(true);
	}

  override void OnSwitchOn()
	{
		super.OnSwitchOn();

    EnableReceive(false);
    EnableBroadcast(true);
	}	

  override bool IsInventoryVisible()
  {
    return false;
  }
};

class SRP_PersonalRadio_Terminal extends StaticTransmitter
{
  const string SOUND_PAS_TURN_ON 			= "pastransmitter_turnon_SoundSet";
	const string SOUND_PAS_TURN_OFF 		= "pastransmitter_turnoff_SoundSet";
	const string SOUND_PAS_TURNED_ON 		= "personalradio_staticnoise_SoundSet";

	protected EffectSound m_Sound;
	protected EffectSound m_SoundLoop;
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionTuneFrequencyOnGround);
	}

	//--- BASE
  void SetNextFrequency( PlayerBase player = NULL )
	{
		SetNextChannel();
		
		/*
		if ( player )
		{
			DisplayRadioInfo( GetTunedFrequency().ToString(), player );
		}
		*/
	}
	override bool IsStaticTransmitter()
	{
		return true;
	}
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
  override bool IsBuilding()
	{
		return true;
	}
	//--- POWER EVENTS
	override void OnSwitchOn()
	{
		super.OnSwitchOn();
		if ( !GetCompEM().CanWork() )
		{
			GetCompEM().SwitchOff();
		}
		//sound
		SoundTurnOn();
	}
	override void OnSwitchOff()
	{
		super.OnSwitchOff();
		//sound
		SoundTurnOff();
	}	
	override void OnWorkStart()
	{
		super.OnWorkStart();
		//turn off device
		SwitchOn ( true ); // start send/receive voice
		//sound
		SoundTurnedOnNoiseStart();
	}
	override void OnWorkStop()
	{
		super.OnWorkStop();
		//turn off device
		SwitchOn ( false ); // stop send/receive voice
		//sound
		SoundTurnedOnNoiseStop();		
	}
	// SOUNDS
	protected void SoundTurnedOnNoiseStart()
	{
		PlaySoundSetLoop( m_SoundLoop, SOUND_PAS_TURNED_ON, 1.0, 1.0 );
	}
	protected void SoundTurnedOnNoiseStop()
	{
		StopSoundSet( m_SoundLoop );
	}
	protected void SoundTurnOn()
	{
		PlaySoundSet( m_Sound, SOUND_PAS_TURN_ON, 0, 0 );
	}
	protected void SoundTurnOff()
	{
		PlaySoundSet( m_Sound, SOUND_PAS_TURN_OFF, 0, 0 );
	}
};
class SRP_PersonalRadio_TerminalBasic extends SRP_PersonalRadio_Terminal{};
class SRP_PersonalRadio_TerminalEspen extends SRP_PersonalRadio_Terminal{};
class SRP_PersonalRadio_TerminalStag extends SRP_PersonalRadio_Terminal{};

class SRP_PersonalRadio_Backpack extends PersonalRadio{};
class SRP_PersonalRadio_BackpackBasic extends SRP_PersonalRadio_Backpack{};
class SRP_PersonalRadio_BackpackEspen extends SRP_PersonalRadio_Backpack{};
class SRP_PersonalRadio_BackpackStag extends SRP_PersonalRadio_Backpack{};
