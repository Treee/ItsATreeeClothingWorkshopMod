class BiohazardAgent extends AgentBase
{
	override void Init()
	{
		m_Type 					= SRP_Medical_Agents.BIOHAZARD_AGENT;
		m_Invasibility 			= 1;  // how much to increase if able to grow
		m_TransferabilityIn		= 0;// to the player
		m_TransferabilityOut	= 0;// from the player
		m_AntibioticsResistance = 1;//the effect of antibiotics [0-1]
		m_MaxCount 				= 1000;
		m_Potency 				= EStatLevels.GREAT;// grow when at the immune stage or lower (inclusive)
		m_DieOffSpeed 			= 10;// die of rate per second when not able to grow
		m_Digestibility 		= 0;// how digestiable is this thing [0-1] 1 being most digestible 
	}
}