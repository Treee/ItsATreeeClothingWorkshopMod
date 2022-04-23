class SRP_ElectronicsJammer_Base extends DeployableContainer_Base
{
  void SRP_ElectronicsJammer_Base() 
  {    
    // Print("[SRP_ElectronicsJammer_Base]: " + GetGame().IsDedicatedServer());
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitializeJammer, 500, false);
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
  }

  void DismantleJammer()
  {
    RadioElectronicsConfig config;
    if (GetGame().IsDedicatedServer() && Class.CastTo(config, GetDayZGame().GetRadioElectronicsConfig()))
    {
      bool m_ImpactedNetwork = config.DismantleJammer(GetPosition());        
      LogRadioEvent(m_ImpactedNetwork);
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
