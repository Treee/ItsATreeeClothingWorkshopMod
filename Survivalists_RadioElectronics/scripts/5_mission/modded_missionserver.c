modded class MissionServer
{
  void MissionServer()
  {
    RadioElectronicsConfig config = GetDayZGame().GetRadioElectronicsConfig();
    GetDayZGame().SetRadioElectronicsConfig(config);
    config.InitializeActiveTowers();
  }

  override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  {
    super.InvokeOnConnect(player, identity);
    auto configParams = new Param1<RadioElectronicsConfig>(GetDayZGame().GetRadioElectronicsConfig());
    Print("Sending Survivalists_RadioElectronics Mod Config to Player: " + identity.GetName() + " RPC: " + SRP_RADIOELECTRONICS_RPC.CHECK_SRP_RADIOELECTRONICS_CONFIG);
    GetGame().RPCSingleParam(player, SRP_RADIOELECTRONICS_RPC.CHECK_SRP_RADIOELECTRONICS_CONFIG, configParams, true, identity );
  }
}