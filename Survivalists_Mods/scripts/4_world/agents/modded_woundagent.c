modded class WoundAgent
{	
	static const float RESISTANCE_STAGE_2 = 0.65;

	override void Init()
	{
    super.Init();
		m_Invasibility 			= 0.052;//to reach 250 in 60 mins
		m_MaxCount 				= 1000; // 4 hours to get max infection
	}
}