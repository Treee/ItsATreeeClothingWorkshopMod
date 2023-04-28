modded class FuelStation
{
	override bool IsFuelStation()
	{
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    if (config)
      return config.g_OilRigGasManager.HasEnoughPowerToRunPumps();
		return true;
	}
};