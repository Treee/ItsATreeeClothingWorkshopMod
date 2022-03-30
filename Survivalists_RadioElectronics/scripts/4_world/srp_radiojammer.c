class SRP_ElectronicsJammer_Base extends Container_Base
{
  void SRP_ElectronicsJammer_Base() 
  {
    if (GetGame().IsDedicatedServer())
    {
      RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
      if (config)
      {
        Print("[SRP_ElectronicsJammer_Base] - " + GetType() + " - " + GetPosition())
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
            config.IncrementActiveTowers();
            GetDayZGame().SaveRadioElectronicsConfig();
          }
        }
      }
    }
  }
  void ~SRP_ElectronicsJammer_Base() 
  {
    Print("[SRP_ElectronicsJammer_Base] - Server Destroying object" + GetType() + " - " + GetPosition());
  }

  void DismantleJammer()
  {
    if (GetGame().IsDedicatedServer())
    {
      RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
      if (config)
      {
        Print("[SRP_ElectronicsJammer_Base] - DismantleJammer" + GetType() + " - " + GetPosition());
        SRPRadioTowerInfo tower = config.GetTowerBeingJammed(GetPosition());
        if (tower)
        {
          if (tower.IsJammed())
          {
            tower.ImpactRadioTower(false);
            config.DecrementActiveTowers();
            GetDayZGame().SaveRadioElectronicsConfig();
          }
          else
          {
            // do nothing, this tower is not jammed (how is that possible if we were jsut previously jamming)
          }
        }
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
