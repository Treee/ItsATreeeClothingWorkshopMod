modded class WoundAgent
{	
  static const float RESISTANCE_STAGE_1 = 0.7;
	static const float RESISTANCE_STAGE_2 = 0.9;

	override void Init()
	{
    super.Init();
		m_Invasibility 			= 0.012;//to reach 250 in 60 mins
		m_MaxCount 				= 5000; // 4 hours to get max infection
	}
};

modded class CholeraAgent
{
	override void Init()
	{
    super.Init();
		m_AntibioticsResistance = 0.85;
		m_MaxCount 				= 5000;
		m_Potency 				= EStatLevels.LOW;
	}
};

modded class InfluenzaAgent
{
	override void Init()
	{		
		m_AntibioticsResistance = 0.75;
		m_MaxCount 				= 3000;
    m_Potency 				= EStatLevels.LOW;
	}
};
modded class FoodPoisonAgent
{
	override void Init()
	{
    super.Init();
		m_AntibioticsResistance = 0.7;
		m_MaxCount 				= 1000;
		m_Potency 				= EStatLevels.LOW;
	}
};