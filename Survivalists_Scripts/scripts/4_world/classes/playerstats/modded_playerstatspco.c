enum SRP_EPlayerStats_current: EPlayerStats_current
{
	TIREDNESS,
  ALCOHOLISM,
  SANITY,
  DRUGDEPENDENCY
};
modded class PlayerStatsPCO_current
{  
	override void Init()
	{
    super.Init();
		RegisterStat(SRP_EPlayerStats_current.TIREDNESS, new PlayerStat<float>(0, PlayerConstants.SL_TIREDNESS_MAX, PlayerConstants.SL_TIREDNESS_MAX, "Tiredness", EPSstatsFlags.EMPTY) );
		RegisterStat(SRP_EPlayerStats_current.ALCOHOLISM, new PlayerStat<float>(0, PlayerConstants.SL_ALCOHOLISM_MAX, PlayerConstants.SL_ALCOHOLISM_MAX, "Alcoholism", EPSstatsFlags.EMPTY) );
		RegisterStat(SRP_EPlayerStats_current.DRUGDEPENDENCY, new PlayerStat<float>(0, PlayerConstants.SL_DRUGDEPENDENCY_MAX, PlayerConstants.SL_DRUGDEPENDENCY_MAX, "DrugDependency", EPSstatsFlags.EMPTY) );
		RegisterStat(SRP_EPlayerStats_current.SANITY, new PlayerStat<float>(0, PlayerConstants.SL_SANITY_MAX, PlayerConstants.SL_SANITY_MAX, "Sanity", EPSstatsFlags.EMPTY) );
	}
};