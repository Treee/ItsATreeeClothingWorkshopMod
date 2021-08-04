modded class MissionServer
{
  void MissionServer()
  {
    SRPConfig config = SRPGlobals.Get();
    GetDayZGame().SetSRPConfigGlobal(config);
  }

  override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  {
    super.InvokeOnConnect(player, identity);
    auto configParams = new Param1<SRPConfig>(GetDayZGame().GetSRPConfigGlobal());
    GetGame().RPCSingleParam(player, SRP_RPC.CHECK_SRP_CONFIG, configParams, true, identity );
  }
}