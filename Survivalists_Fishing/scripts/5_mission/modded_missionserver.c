modded class MissionServer
{
    void MissionServer()
    {
        GetDayZGame().SetSRPFishingConfig(GetDayZGame().GetSRPFishingConfig());
    }

    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);
        auto configParams = new Param1<SRPFishingConfig>(GetDayZGame().GetSRPFishingConfig());
        Print("Sending Survivalists_Fishing Mod Config to Player: " + identity.GetName() + " RPC: " + SRP_FISHING_RPC.CHECK_SRP_FISHING_CONFIG);
        GetGame().RPCSingleParam(player, SRP_FISHING_RPC.CHECK_SRP_FISHING_CONFIG, configParams, true, identity );
    }
}