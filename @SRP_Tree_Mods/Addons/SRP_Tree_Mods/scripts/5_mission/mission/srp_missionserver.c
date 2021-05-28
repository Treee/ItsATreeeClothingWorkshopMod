modded class MissionServer
{
  void MissionServer()
  {
    SRPTreeConfig config = SRPTreeGlobals.Get();
    GetDayZGame().SetSRPTreeConfigGlobal(config);
  }

  override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  {
    super.InvokeOnConnect(player, identity);
    auto configParams = new Param1<SRPTreeConfig>(GetDayZGame().GetSRPTreeConfigGlobal());
    GetGame().RPCSingleParam(player, SRPRPC.CHECK_TREE_CONFIG, configParams, true, identity );
  }
}