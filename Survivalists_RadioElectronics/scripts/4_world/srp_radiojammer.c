class SRP_ElectronicsJammer_Base extends DeployableContainer_Base
{
  protected EffectSound 		m_JammerSoundLoop;

  void ~SRP_ElectronicsJammer_Base()
  {
    StopLoopSound();
  }

  override void EEInit()
	{		
		super.EEInit();
		// Print("[SRP_ElectronicsJammer_Base]: jammer created");
		if (GetGame().IsDedicatedServer())
		{
 			InitializeJammer();
		}
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
    RequestSoundEvent();
  }

  void DismantleJammer()
  {
    RadioElectronicsConfig config;
    if (GetGame().IsDedicatedServer() && Class.CastTo(config, GetDayZGame().GetRadioElectronicsConfig()))
    {
      bool m_ImpactedNetwork = config.DismantleJammer(GetPosition());        
      LogRadioEvent(m_ImpactedNetwork);
    }
    StopLoopSound();
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

  void RequestSoundEvent()
	{
    if (!GetGame().IsDedicatedServer())
		{
      PlaySoundSet(m_JammerSoundLoop, GetRandomJammerSounds().GetRandomElement(), 1, 1);
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(RequestSoundEvent, 450000, false);
		}
	}


  // // Play the loop sound
	// void StartLoopSound()
	// {
  //   if (!GetGame().IsDedicatedServer())
	// 	{
  //     PlaySoundSetLoop(m_JammerSoundLoop, GetRandomJammerSounds().GetRandomElement(), 0, 0);
	// 	}
	// }

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
