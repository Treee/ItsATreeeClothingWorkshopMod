modded class PlayerBase
{
  protected PlayerStat<float> m_StatGoodKarma;
  protected PlayerStat<float> m_StatBadKarma;

//=========================================================== HELPERS
  bool IsGoodKarma()
  {
    Print(string.Format("Good Karma: %1 Bad Karma: %2", GetStatGoodKarma().Get(), GetStatBadKarma().Get()));
    return GetStatGoodKarma().Get() >= GetStatBadKarma().Get();
  }
  void AddGoodKarma(float amount)
  {

  }
  void AddBadKarma(float amount)
  {

  }
//=========================================================== PLAYER STATS
  protected PlayerStat<float> GetStatGoodKarma()
	{
		if( !m_StatGoodKarma && GetPlayerStats() ) 
		{
			m_StatGoodKarma = PlayerStat<float>.Cast(GetPlayerStats().GetStatObject(SRP_WesternZ_EPlayerStats_current.GOOD_KARMA));
		}
		return m_StatGoodKarma;
	}
  protected PlayerStat<float> GetStatBadKarma()
	{
		if( !m_StatBadKarma && GetPlayerStats() ) 
		{
			m_StatBadKarma = PlayerStat<float>.Cast(GetPlayerStats().GetStatObject(SRP_WesternZ_EPlayerStats_current.BAD_KARMA));
		}
		return m_StatBadKarma;
	}
//=========================================================== PLAYER STAT LEVELS
  EStatLevels GetStatLevelGoodKarma()
	{
		float goodKarma = GetStatGoodKarma().Get();
		return GetStatLevel(goodKarma, PlayerConstants.SL_GOOD_KARMA_CRITICAL, PlayerConstants.SL_GOOD_KARMA_LOW, PlayerConstants.SL_GOOD_KARMA_NORMAL, PlayerConstants.SL_GOOD_KARMA_HIGH);
	}
  EStatLevels GetStatLevelBadKarma()
	{
		float badKarma = GetStatBadKarma().Get();
		return GetStatLevel(badKarma, PlayerConstants.SL_BAD_KARMA_CRITICAL, PlayerConstants.SL_BAD_KARMA_LOW, PlayerConstants.SL_BAD_KARMA_NORMAL, PlayerConstants.SL_BAD_KARMA_HIGH);
	}
};