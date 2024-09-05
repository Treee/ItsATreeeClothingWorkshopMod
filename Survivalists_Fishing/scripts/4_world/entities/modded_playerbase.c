modded class PlayerBase
{
    override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
    {
        super.OnRPC(sender, rpc_type, ctx);

        switch(rpc_type)
        {
            case SRP_FISHING_RPC.CHECK_SRP_FISHING_CONFIG: // this case is for grabbing fishing config from the server
            {
                Param1<SRPFishingConfig> configParams;
                if(!ctx.Read(configParams))
                    return;
                GetDayZGame().SetSRPFishingConfig(configParams.param1);
                break;
            }
        }
    }
}