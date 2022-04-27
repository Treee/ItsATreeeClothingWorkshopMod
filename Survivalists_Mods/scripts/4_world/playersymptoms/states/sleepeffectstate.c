class SleepEffectSymptom extends SymptomBase
{
	PluginPlayerStatus m_ModulePlayerStatus;

  bool m_IsSleepActive = false;

  int m_TirednessTendency = -1;
  int m_YawnInterval = 0;
  int TIREDNESS_0PERCENT = 0;

  float m_LastTirednessCount;
  float m_LastYawnEvent;

  float YAWN_THRESHOLD = 0; // 20 percent awake = start yawning
  float PASS_OUT_THRESHOLD = 0; // 5 minutes passed 0 is pass out territory

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
		m_SyncToClient = true;
    Class.CastTo(m_ModulePlayerStatus, GetPlugin(PluginPlayerStatus));
    m_LastYawnEvent = 0;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    if (m_IsSleepActive)
    {
      // Print("[SleepEffectSymptom] - [OnUpdateServer]");
      float total_tiredness = player.GetTotalTiredness();
      if (player.IsAwake())
      {
        if (total_tiredness >= PASS_OUT_THRESHOLD && !player.IsUnconscious())
        {
          player.SRP_SetUnconscious();        
        }      
      }
    }
	}
	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    if (m_IsSleepActive)
    {
      float total_tiredness = player.GetTotalTiredness();
      if (player.IsAwake())
      {
        // Print("Player Is Awake: Sleep Count: " + total_tiredness);
        if (total_tiredness > YAWN_THRESHOLD && m_LastYawnEvent > m_YawnInterval && !player.IsUnconscious())
        {
          player.TryYawn();
          m_LastYawnEvent = 0;
        }
      }
      // Print("[SleepEffectSymptom] - [OnUpdateClient] " + total_tiredness);
      m_ModulePlayerStatus.DisplayTirednessTendency(NTFKEY_SRP_TIREDNESS, total_tiredness, GetTendency(total_tiredness), GetTirednessLevel(total_tiredness));
      m_LastYawnEvent += deltatime;
    }
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      m_IsSleepActive = config.g_SRPIsSleepActive;
      PASS_OUT_THRESHOLD = config.g_SRPSleepMaximumAwakeTime + config.g_SRPSleepPassOutThreshold; // 5 minutes passed 0 is pass out territory
    }
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
    // Print("[SleepEffectSymptom] - [OnGetActivatedClient]");
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      m_IsSleepActive = config.g_SRPIsSleepActive;
      // Print("[SleepEffectSymptom] - [OnGetActivatedClient] - CONFIG");        
      m_YawnInterval = config.g_SRPSleepYawnInterval;
      YAWN_THRESHOLD = config.g_SRPSleepMaximumAwakeTime * config.g_SRPSleepYawnThreshold; // 20 percent awake = start yawning
      PASS_OUT_THRESHOLD = config.g_SRPSleepMaximumAwakeTime + config.g_SRPSleepPassOutThreshold; // 5 minutes passed 0 is pass out territory
      TIREDNESS_25PERCENT = config.g_SRPSleepMaximumAwakeTime * 0.25;
      TIREDNESS_50PERCENT = config.g_SRPSleepMaximumAwakeTime * 0.50;
      TIREDNESS_75PERCENT = config.g_SRPSleepMaximumAwakeTime * 0.75;
      TIREDNESS_100PERCENT = config.g_SRPSleepMaximumAwakeTime * 0.80; // allow for oversleep (6 hrs of rest, 2 hrs of free time)
      // Print("Yawn int: " + m_YawnInterval + " yawn threashold: " + YAWN_THRESHOLD + " Passoutthresh: " + PASS_OUT_THRESHOLD);
    }
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
    // tendency 1,2,3;

    if (m_LastTirednessCount != current)
    {
      m_TirednessTendency = Math.Max(-3, (m_LastTirednessCount - current) * 0.3);
      m_TirednessTendency = Math.Min(3, m_TirednessTendency);
      m_LastTirednessCount = current;
      // Print("[GetTendency] LastTiredness: " + m_LastTirednessCount + " Current: " + current + " tendency: " + m_TirednessTendency);
    }

    return m_TirednessTendency;
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
};
