modded class ContaminatedArea_Static
{
  override void SetupZoneData(  EffectAreaParams params )
	{
    // Print("zone: " + params.m_ParamName);
    if (IsFloweredBioZone(params.m_ParamName))
    {
      SRPConfig config;
      if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
      {
        SRP_BioFlowerInfo flower = config.g_BioFlowerManager.GetBioFlowerInfoByZone(params.m_ParamName);
        flower.SetZonePosition(GetWorldPosition());
        float value = flower.GetFlowerEnergy() / 100;
        flower.AddFlowerEnergy(-10);
        // clamp values to 0.1 and 1.5x
        value = Math.Max(0.1, value);
        value = Math.Min(1.5, value);
        params.m_ParamRadius *= value;
        Print(string.Format("Zone: %1 Value: %2 New Radius: %3 Position: %4", params.m_ParamName, value, params.m_ParamRadius, flower.GetZonePosition()));
      }
    }
		super.SetupZoneData( params );
	}

  bool IsFloweredBioZone(string zoneName)
  {
    if (zoneName == "ReactorBiozone")
      return true;
    else if (zoneName == "BunkerBiozone")
      return true;
    else if (zoneName == "SandyBayBiozone")
      return true;
    else if (zoneName == "NorthHavenCastleBiozone")
      return true;
    else if (zoneName == "AshevilleBiozone")
      return true;
    return false;
  }
};