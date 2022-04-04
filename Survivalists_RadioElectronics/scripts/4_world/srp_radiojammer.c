class SRP_ElectronicsJammer_Base extends House
{
  void SRP_ElectronicsJammer_Base() 
  {
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitializeJammer, 500, false);
  }

  void InitializeJammer()
  {
    if (GetGame().IsDedicatedServer())
    {
      RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
      if (config)
      {
        // Print("[SRP_ElectronicsJammer_Base] - " + GetType() + " - " + GetPosition());
        SRPRadioTowerInfo tower = config.GetTowerBeingJammed(GetPosition());
        if (tower)
        {
          if (tower.IsJammed())
          {
            // do nothing, this tower is already jammed (or maybe do more)
          }
          else
          {
            tower.ImpactRadioTower(true);
            config.DecrementActiveTowers();
            GetDayZGame().SaveRadioElectronicsConfig();
          }
          LogRadioEvent();
        }
      }
    }
  }

  void DismantleJammer()
  {
    if (GetGame().IsDedicatedServer())
    {
      RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
      if (config)
      {
        // Print("[SRP_ElectronicsJammer_Base] - DismantleJammer" + GetType() + " - " + GetPosition());
        SRPRadioTowerInfo tower = config.GetTowerBeingJammed(GetPosition());
        if (tower)
        {
          if (tower.IsJammed())
          {
            tower.ImpactRadioTower(false);
            config.IncrementActiveTowers();
            GetDayZGame().SaveRadioElectronicsConfig();
          }
          else
          {
            // do nothing, this tower is not jammed (how is that possible if we were jsut previously jamming)
          }
          LogRadioEvent();
        }
      }
    }
  }

  void LogRadioEvent()
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
        m_AdminLog.DirectAdminLogPrint( "[RADIO JAMMER] - [[IC RADIO ACTIVE]]::" + config.IsRadioNetworkWorking() + " [[IC RADIO MAX DELAY]]::" + config.GetMaxRadioDelay() + " [[Position]]::" + GetPosition() );
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

class SRP_ElectronicsJammer_Dish extends SRP_ElectronicsJammer_Base {};
class SRP_ElectronicsJammer_Tower extends SRP_ElectronicsJammer_Base {};
class SRP_ElectronicsJammer_TowerAdvanced extends SRP_ElectronicsJammer_Base {};
