modded class MissionServer
{
    void MissionServer()
    {
        SRPConfig config = SRPGlobals.Get();
        if (GetGame().IsDedicatedServer())
        {
            config.g_OilRigGasManager.PumpStartUpCheck();
        }
        GetDayZGame().SetSRPConfigGlobal(config);
    }
    void ~MissionServer()
    {
        if (GetGame().IsDedicatedServer())
        {
            SRPGlobals.SaveSRPConfig();
            GetDayZGame().SaveRnDJson();
        }
    }
    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);
        auto configParams = new Param1<SRPConfig>(GetDayZGame().GetSRPConfigGlobal());
        Print("Sending Survivalists Mod Config to Player: " + identity.GetName() + " RPC: " + SRP_RPC.CHECK_SRP_CONFIG);
        GetGame().RPCSingleParam(player, SRP_RPC.CHECK_SRP_CONFIG, configParams, true, identity );
    }
};