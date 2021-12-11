class SleepAgent extends AgentBase
{
	override void Init()
	{
		m_Type 					= SRP_Medical_Agents.SLEEP_AGENT;
		m_Invasibility 			= 1;  //how fast the agent grows when potent enough to grow
		m_TransferabilityIn		= 1; //to the player
		m_TransferabilityOut	= 0; //from the player
		m_AntibioticsResistance = 1; // [0..1], 0 = zero chance, 1 = 100% chance of getting this agent once per hour
		m_MaxCount 				= 14400;
		m_Potency 				= EStatLevels.GREAT; //grow when player's immune system is at this level or lower
		m_DieOffSpeed 			= 1; //how fast the agent dies off when not potent enough to grow(per sec)
		m_Digestibility 		= 1; //multiplier for agents digested in the player stomach from an infected item(agents_transfered = digested_amount(in grams or mls) * m_Digestibility)
	}

  void GoToSleep()
  {
    m_Potency = EStatLevels.CRITICAL;
    m_DieOffSpeed = 2;
    m_Invasibility = 0;
  }

  void WakeUp()
  {
    m_Potency = EStatLevels.GREAT;
    m_DieOffSpeed = 0;
    m_Invasibility = 1;
  }
}