modded class BrainDiseaseMdfr
{
	static const int AGENT_THRESHOLD_ACTIVATE = 7500;
	const int SHAKE_INTERVAL_MIN = 3600;
	const int SHAKE_INTERVAL_MAX = 43200;

	override protected void OnTick(PlayerBase player, float deltaT)
	{
		m_Time += deltaT;
		
		if( m_Time >= m_ShakeTime )
		{
		  float brain_agents = player.GetSingleAgentCountNormalized(eAgents.BRAIN) / 8.0;
			DayZPlayerSyncJunctures.SendKuruRequest(player, brain_agents);
			m_ShakeTime = m_Time + Math.RandomFloat(SHAKE_INTERVAL_MIN, SHAKE_INTERVAL_MAX);
      m_Time = 0;
		}		
	}
};