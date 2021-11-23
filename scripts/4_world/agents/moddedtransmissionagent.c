modded class PluginTransmissionAgents
{
	void PluginTransmissionAgents()
	{    
		//add new agents here
		RegisterAgent(new SleepAgent);
		RegisterAgent(new BiohazardAgent);
	}

  AgentBase GetAgentByAgentId(int agentId)
  {
    AgentBase agent;
    for(int i = 0; i < m_AgentList.Count();i++)
		{
			agent = m_AgentList.GetElement(i);
			if (agent.GetAgentType() == agentId)
      {
        // Print("Found your agent: " + agent.GetName());
        return agent;
      }
		}
    return agent;
  }
};