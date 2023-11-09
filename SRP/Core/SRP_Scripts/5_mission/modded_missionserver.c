modded class MissionServer
{
  void MissionServer()
  {
    GetDayZGame().SetSRPMMConfig(GetDayZGame().GetSRPMMConfig());
  }

  override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  {
    super.InvokeOnConnect(player, identity);
    auto configParams = new Param1<SRPMMConfig>(GetDayZGame().GetSRPMMConfig());
    Print("Sending Survivalists_Metallurgy Mod Config to Player: " + identity.GetName() + " RPC: " + SRP_MASONRY_METALLURGY_RPC.CHECK_SRP_MM_CONFIG);
    GetGame().RPCSingleParam(player, SRP_MASONRY_METALLURGY_RPC.CHECK_SRP_MM_CONFIG, configParams, true, identity );
  }
}