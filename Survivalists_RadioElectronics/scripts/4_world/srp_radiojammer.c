class SRP_ElectronicsJammer_Base extends DeployableContainer_Base
{
  protected EffectSound 		m_JammerSoundLoop;
	ref Timer 					m_SoundLoopStartTimer;

  void SRP_ElectronicsJammer_Base() 
  {    
    // Print("[SRP_ElectronicsJammer_Base]: " + GetGame().IsDedicatedServer());
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitializeJammer, 500, false);
  }

  void ~SRP_ElectronicsJammer_Base()
  {
    StopLoopSound();
  }

  void InitializeJammer()
  {
    // Print("[SRP_ElectronicsJammer_Base]: " + GetGame().IsDedicatedServer());
    RadioElectronicsConfig config;
    if (GetGame().IsDedicatedServer() && Class.CastTo(config, GetDayZGame().GetRadioElectronicsConfig()))
    {
      bool m_ImpactedNetwork = config.DeployJammer(GetPosition());        
      LogRadioEvent(m_ImpactedNetwork);
    }

    if (!GetGame().IsDedicatedServer())
		{
			if (!m_SoundLoopStartTimer)
			{
				m_SoundLoopStartTimer = new Timer(CALL_CATEGORY_SYSTEM);
			}
			
			if (!m_SoundLoopStartTimer.IsRunning()) // Makes sure the timer is NOT running already
			{
				m_SoundLoopStartTimer.Run(1.5, this, "StartLoopSound", NULL, false);
			}
		}
  }

  void DismantleJammer()
  {
    RadioElectronicsConfig config;
    if (GetGame().IsDedicatedServer() && Class.CastTo(config, GetDayZGame().GetRadioElectronicsConfig()))
    {
      bool m_ImpactedNetwork = config.DismantleJammer(GetPosition());        
      LogRadioEvent(m_ImpactedNetwork);
    }
    if (!GetGame().IsDedicatedServer())
		{
      StopLoopSound();
    }
  }

  void LogRadioEvent(bool impactedNetwork)
  {
    // Print("[LogRadioEvent]");
    if( GetGame().IsDedicatedServer() )
    {
      // Print("[LogRadioEvent] - SERVER ");
      RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
      PluginAdminLog m_AdminLog = PluginAdminLog.Cast( GetPlugin(PluginAdminLog) );
      if (config && m_AdminLog)
      {          
        // Print("[LogRadioEvent] - SERVER - CONFIG"); 
        m_AdminLog.DirectAdminLogPrint( "[RADIO JAMMER] - [[IC RADIO ACTIVE]]::" + config.IsRadioNetworkWorking() + " [[IC RADIO MAX DELAY]]::" + config.GetMaxRadioDelay() + " [[Position]]::" + GetPosition() + "[[DID DEPLOY AFFECT NETWORK]]::" + impactedNetwork );
      }
    }
  }

  TStringArray GetRandomJammerSounds()
  {
    return {
      "SRPRadioElectronics_SoundSet_Jammer_1",
      "SRPRadioElectronics_SoundSet_Jammer_2",
      "SRPRadioElectronics_SoundSet_Jammer_3",
      "SRPRadioElectronics_SoundSet_Jammer_4",
      "SRPRadioElectronics_SoundSet_Jammer_5",
    };
  }

  // Play the loop sound
	void StartLoopSound()
	{
    if (!GetGame().IsDedicatedServer())
		{
      PlaySoundSetLoop(m_JammerSoundLoop, GetRandomJammerSounds().GetRandomElement(), 0, 0);
		}
	}

  void StopLoopSound()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSoundSet(m_JammerSoundLoop);
    }
  }


  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
};

class SRP_ElectronicsJammer_Dish extends SRP_ElectronicsJammer_Base{};
class SRP_ElectronicsJammer_Tower extends SRP_ElectronicsJammer_Base{};
class SRP_ElectronicsJammer_TowerAdvanced extends SRP_ElectronicsJammer_Base{};
