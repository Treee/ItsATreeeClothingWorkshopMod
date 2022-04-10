modded class MissionServer
{
  void MissionServer()
  {
    GetDayZGame().SetSRPFacePaintConfig(GetDayZGame().GetSRPFacePaintConfig());
  }

  override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  {
    super.InvokeOnConnect(player, identity);
    auto configParams = new Param1<SRPFacePaintConfig>(GetDayZGame().GetSRPFacePaintConfig());
    Print("Sending Survivalists_FacePaint Mod Config to Player: " + identity.GetName() + " RPC: " + SRP_FACEPAINT_RPC.CHECK_SRP_FACEPAINT_CONFIG);
    GetGame().RPCSingleParam(player, SRP_FACEPAINT_RPC.CHECK_SRP_FACEPAINT_CONFIG, configParams, true, identity );
  }
}