modded class PlayerAgentPool
{
  bool HasAgent(int agent_id)
	{
    // if( m_VirusPool )
		// {
		// 	for(int i = 0; i < m_VirusPool.Count(); i++)
		// 	{
		// 		Print("Agent: "+ m_VirusPool.GetKey(i).ToString());
		// 		Print("Count: "+ m_VirusPool.GetElement(i).ToString());
		// 	}
		
		// }		
    if(	m_VirusPool.Contains(agent_id) )
		{
      Print("SRP ModdedPlayerAgentPool Does have the agent " + agent_id);
			return true;
		}
    Print("SRP ModdedPlayerAgentPool Does not have the agent " + agent_id);
		return false;
	}
}