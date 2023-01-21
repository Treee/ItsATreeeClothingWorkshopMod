class SleepEffectSymptom extends SymptomBase
{
  bool m_IsSleepActive = false;

  int m_YawnInterval = 0;

  float m_LastYawnEvent;
  float YAWN_THRESHOLD = 0; // 20 percent awake = start yawning

	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_SLEEP;
		m_DestroyOnAnimFinish = true;
    m_LastYawnEvent = 0;
	}
	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    if (m_IsSleepActive)
    {
      if (player.IsAwake())
      {
        // Print("Player Is Awake: Sleep Count: " + total_tiredness);
        if (player.GetStatTiredness().Get() < YAWN_THRESHOLD && m_LastYawnEvent > m_YawnInterval && !player.IsUnconscious())
        {
          player.TryYawn();
          m_LastYawnEvent = 0;
        }
      }
      // Print("[SleepEffectSymptom] - [OnUpdateClient] " + total_tiredness);
      m_LastYawnEvent += deltatime;
    }
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
    // Print("[SleepEffectSymptom] - [OnGetActivatedClient]");
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      m_IsSleepActive = config.g_SRPIsSleepActive;
      m_YawnInterval = config.g_SRPSleepYawnInterval;
      YAWN_THRESHOLD = PlayerConstants.SL_TIREDNESS_MAX * config.g_SRPSleepYawnThreshold; // 20 percent awake = start yawning
    }
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}
};
