class SleepEffectSymptom extends SymptomBase
{
	PluginPlayerStatus m_ModulePlayerStatus;

  float total_tiredness;
  float m_LastTirednessCount;
  float m_LastYawnEvent;
  int m_YawnInterval = 0;

  float YAWN_THRESHOLD = 0; // 20 percent awake = start yawning
  float PASS_OUT_THRESHOLD = 0; // 5 minutes passed 0 is pass out territory
  int SECONDS_PER_DAY = 0;

  float m_SleepynessIncreaseAmount;
  float m_RestfulnessIncreaseAmount;


  int TIREDNESS_0PERCENT = 0;
  float TIREDNESS_25PERCENT = 0;
  float TIREDNESS_50PERCENT = 0;
  float TIREDNESS_75PERCENT = 0;
  float TIREDNESS_100PERCENT = 0; // allow for oversleep (6 hrs of rest, 2 hrs of free time)


	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_SLEEP;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    Class.CastTo(m_ModulePlayerStatus, GetPlugin(PluginPlayerStatus));
    total_tiredness = 0;
    m_LastTirednessCount = 0;
    m_LastYawnEvent = 0;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("SleepEffect: OnTick - Sleepyness count: " + total_tiredness);
    if (player.IsAwake())
    {
      total_tiredness += m_SleepynessIncreaseAmount * deltatime;
      // we can next get more sleepy than passing out
      total_tiredness = Math.Min(PASS_OUT_THRESHOLD, total_tiredness);

      if (total_tiredness > YAWN_THRESHOLD && m_LastYawnEvent > m_YawnInterval) {
        bool isMale = player.IsMale();
        player.TryYawn(isMale);
        m_LastYawnEvent = 0;
      }
      if (total_tiredness > PASS_OUT_THRESHOLD) {
        player.SRP_SetUnconscious();
      }
      // Print("Awake: " + total_tiredness);
    } 
    else 
    {
      total_tiredness -= m_RestfulnessIncreaseAmount * deltatime;
      // we can never get more rested than 100%
      total_tiredness = Math.Max(0.5, total_tiredness);
      // Print("Asleep: " + total_tiredness);
    }
    
    m_ModulePlayerStatus.DisplayTirednessTendency(NTFKEY_SRP_TIREDNESS, total_tiredness, GetTendency(total_tiredness), GetTirednessLevel(total_tiredness));

    m_LastTirednessCount = total_tiredness;
    m_LastYawnEvent += deltatime;
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    // Print("SleepMdfr: OnActivate Start - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));        
    SECONDS_PER_DAY = config.g_SRPSleepMaximumAwakeTime;
    m_YawnInterval = config.g_SRPSleepYawnInterval;
    m_SleepynessIncreaseAmount = config.g_SRPSleepynessIncreaseAmount;
    m_RestfulnessIncreaseAmount = config.g_SRPRestfulnessIncreaseAmount;
    YAWN_THRESHOLD = SECONDS_PER_DAY * config.g_SRPSleepYawnThreshold; // 20 percent awake = start yawning
    PASS_OUT_THRESHOLD = SECONDS_PER_DAY + config.g_SRPSleepPassOutThreshold; // 5 minutes passed 0 is pass out territory
    TIREDNESS_25PERCENT = SECONDS_PER_DAY * 0.25;
    TIREDNESS_50PERCENT = SECONDS_PER_DAY * 0.50;
    TIREDNESS_75PERCENT = SECONDS_PER_DAY * 0.75;
    TIREDNESS_100PERCENT = SECONDS_PER_DAY * 0.80; // allow for oversleep (6 hrs of rest, 2 hrs of free time)

		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetDeactivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}

  // shows up or down arrows
  int GetTendency(float current)
  {
    float delta = m_LastTirednessCount - current;
    // Print("GetTendency " + delta);
    return (m_LastTirednessCount - current) * 27;
  }

  // shows the sleep icon relative to total tiredness
  int GetTirednessLevel(int total_tiredness)
  {
    // Print("GetTirednessLevel: " + total_tiredness + " -0: " + TIREDNESS_0PERCENT + " -1: " + TIREDNESS_25PERCENT + " -2: " + TIREDNESS_50PERCENT + " -3: " + TIREDNESS_75PERCENT + " -4: " + TIREDNESS_100PERCENT);
    // the retun numbers here correlate to icons in srp_sleep_iconset.imageset
    if (total_tiredness >= TIREDNESS_0PERCENT && total_tiredness < TIREDNESS_25PERCENT){ // fully slept full moon      
      return 4;
    } else if (total_tiredness >= TIREDNESS_25PERCENT && total_tiredness < TIREDNESS_50PERCENT) { // 75% awake,
      return 3;
    } else if (total_tiredness >= TIREDNESS_50PERCENT && total_tiredness < TIREDNESS_75PERCENT) { // 50% awake
      return 2;
    } else if (total_tiredness >= TIREDNESS_75PERCENT && total_tiredness < TIREDNESS_100PERCENT) { // 25% awake
      return 1;
    } else if (total_tiredness >= TIREDNESS_100PERCENT) { // 0% awake
      return 0;
    }
    return 0;
  }
}
