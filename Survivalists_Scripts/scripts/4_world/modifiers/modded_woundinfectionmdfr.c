modded class WoundInfectionMdfr
{
	static const int AGENT_THRESHOLD_ACTIVATE = 200;
	static const int AGENT_THRESHOLD_DEACTIVATE = 20;

};

modded class WoundInfectStage1Mdfr
{
	static const int AGENT_THRESHOLD_DEACTIVATE = 500;
	static const int AGENT_THRESHOLD_FEVER = 500;
	
	static const int PAIN_EVENT_INTERVAL_MIN = 120;
	static const int PAIN_EVENT_INTERVAL_MAX = 300;
};

modded class WoundInfectStage2Mdfr
{
	static const int AGENT_THRESHOLD_ACTIVATE = 500;

	static const int PAIN_EVENT_INTERVAL_MIN = 60;
	static const int PAIN_EVENT_INTERVAL_MAX = 180;	
	
	static const float DAMAGE_PER_SEC = 0.028;

};