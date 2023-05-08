modded class WoundInfectionMdfr
{
	static const int AGENT_THRESHOLD_ACTIVATE = 400;
	static const int AGENT_THRESHOLD_DEACTIVATE = 20;

};

modded class WoundInfectStage1Mdfr
{
	static const int AGENT_THRESHOLD_DEACTIVATE = 1250;
	static const int AGENT_THRESHOLD_FEVER = 900;
	
	static const int PAIN_EVENT_INTERVAL_MIN = 300;
	static const int PAIN_EVENT_INTERVAL_MAX = 900;
};

modded class WoundInfectStage2Mdfr
{
	static const int AGENT_THRESHOLD_ACTIVATE = 3000;

	static const int PAIN_EVENT_INTERVAL_MIN = 300;
	static const int PAIN_EVENT_INTERVAL_MAX = 900;	
	
	static const float DAMAGE_PER_SEC = 0.018;
};