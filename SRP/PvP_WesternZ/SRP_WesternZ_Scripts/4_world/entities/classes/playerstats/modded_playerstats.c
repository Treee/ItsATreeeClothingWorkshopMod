enum SRP_WesternZ_EPlayerStats_current: EPlayerStats_current
{
	GOOD_KARMA,
	BAD_KARMA,
};
modded class PlayerStatsPCO_current
{  
	override void Init()
	{
    super.Init();
		RegisterStat(SRP_WesternZ_EPlayerStats_current.GOOD_KARMA, new PlayerStat<float>(0, PlayerConstants.SL_GOOD_KARMA_MAX, 0, "GOOD_KARMA", EPSstatsFlags.EMPTY) );
		RegisterStat(SRP_WesternZ_EPlayerStats_current.BAD_KARMA, new PlayerStat<float>(0, PlayerConstants.SL_BAD_KARMA_MAX, 0, "BAD_KARMA", EPSstatsFlags.EMPTY) );
	}
};