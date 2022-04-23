modded class MissionServer
{
  void MissionServer()
  {
    RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
    GetDayZGame().SetRadioElectronicsConfig(config);
    config.InitializeActiveTowers();
  }
}