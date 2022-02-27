modded class PlayerBase
{
  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
  {
    super.OnRPC(sender, rpc_type, ctx);

    switch(rpc_type)
    {
      case SRP_MASONRY_METALLURGY_RPC.CHECK_SRP_MM_CONFIG: // this case is for grabbing fishing config from the server
      {
        Param1<SRPMMConfig> configParams;
        if(!ctx.Read(configParams))
        {
          return;        
        }
        GetDayZGame().SetSRPMMConfig(configParams.param1);
        break;
      }
    }
  }
}