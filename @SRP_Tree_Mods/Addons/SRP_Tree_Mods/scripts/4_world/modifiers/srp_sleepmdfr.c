class SRP_SleepMdfr: ModifierBase
{	
  int SECONDS_PER_DAY = 0;
  float YAWN_THRESHOLD = 0; // 20 percent awake = start yawning
  float PASS_OUT_THRESHOLD = 0; // 5 minutes passed 0 is pass out territory

  int TIREDNESS_0PERCENT = 0;
  float TIREDNESS_25PERCENT = 0;
  float TIREDNESS_50PERCENT = 0;
  float TIREDNESS_75PERCENT = 0;
  float TIREDNESS_100PERCENT = 0; // allow for oversleep (6 hrs of rest, 2 hrs of free time)
  int m_LastTirednessCount = 0;
  float m_LastYawnEvent = 0;
  int m_YawnInterval = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_ID 					= SRP_eModifiers.MDF_SLEEP;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
    Print("Registering::SRP_SleepMdfr Success");
	}

	override bool ActivateCondition(PlayerBase player)
	{    
    // if the player is not sleeping and not unconscious
    SRPTreeConfig config = GetDayZGame().GetSRPTreeConfigGlobal();
    if (config) {
      if (config.g_SRPIsSleepActive) {
        return true;
      }
    }
    return false;
	}
	
	override string GetDebugText()
	{
		return (GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
    SRPTreeConfig config = GetDayZGame().GetSRPTreeConfigGlobal();
    // Print("SleepMdfr: OnActivate Start - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));        
    SECONDS_PER_DAY = config.g_SRPSleepMaximumAwakeTime;
    m_YawnInterval = config.g_SRPSleepYawnInterval; 
    YAWN_THRESHOLD = SECONDS_PER_DAY * 0.8; // 20 percent awake = start yawning
    PASS_OUT_THRESHOLD = SECONDS_PER_DAY + 300; // 5 minutes passed 0 is pass out territory
   
    TIREDNESS_25PERCENT = SECONDS_PER_DAY * 0.25;
    TIREDNESS_50PERCENT = SECONDS_PER_DAY * 0.50;
    TIREDNESS_75PERCENT = SECONDS_PER_DAY * 0.75;
    TIREDNESS_100PERCENT = SECONDS_PER_DAY * 0.80; // allow for oversleep (6 hrs of rest, 2 hrs of free time)

    player.SetPlayerSleepingMdfr(false);
    // Print("SleepMdfr: OnActivate End - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("SleepMdfr: OnDeactivate Start - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));    
    player.SetPlayerSleepingMdfr(true);
    // Print("SleepMdfr: OnDeactivate End - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
    // Print("SleepMdfr: DeactivateCondition - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));
    // true if the player is laying down, false if they are standing up
    return false;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    int currentTirednessCount = player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT);
    Print("SleepMdfr: OnTick - Sleepyness count: " + currentTirednessCount);
    // set the agent growth or shrink based on laying down or being unconscious
    if (player.GetEmoteManager().m_IsLayDown || player.IsUnconscious()) {
      player.SetPlayerSleepingMdfr(true);
    } else {
      player.SetPlayerSleepingMdfr(false);
    }
    // if the agent count is within yawning range AND we are (not laying down or unconscious)
    if (currentTirednessCount > YAWN_THRESHOLD && m_LastYawnEvent > m_YawnInterval && (!player.GetEmoteManager().m_IsLayDown || !player.IsUnconscious())) {
      bool isMale = player.IsMale();
      player.TryYawn(isMale);
      m_LastYawnEvent = 0;
    }

    // if we are passed the pass out threshold, pass go unconscious
    if (currentTirednessCount > PASS_OUT_THRESHOLD) {
      player.SetHealth("", "Shock", 0);
      player.GetModifiersManager().ActivateModifier(eModifiers.MDF_UNCONSCIOUSNESS);
    }
    m_ModulePlayerStatus.DisplayTirednessTendency(NTFKEY_SRP_TIREDNESS, currentTirednessCount, GetTendency(currentTirednessCount), GetTirednessLevel(currentTirednessCount));

    m_LastTirednessCount = currentTirednessCount;
    m_LastYawnEvent += deltaT;
  }
  
  // shows up or down arrows
  int GetTendency(int current)
  {
    int delta = m_LastTirednessCount - current;
    Print("GetTendency " + delta);
    return (m_LastTirednessCount - current) / DEFAULT_TICK_TIME_INACTIVE_LONG;
  }

  // shows the sleep icon relative to total tiredness
  int GetTirednessLevel(int currentTirednessCount)
  {
    Print("GetTirednessLevel: " + currentTirednessCount + " -0: " + TIREDNESS_0PERCENT + " -1: " + TIREDNESS_25PERCENT + " -2: " + TIREDNESS_50PERCENT + " -3: " + TIREDNESS_75PERCENT + " -4: " + TIREDNESS_100PERCENT);
    // the retun numbers here correlate to icons in srp_tree_iconset.imageset
    if (currentTirednessCount >= TIREDNESS_0PERCENT && currentTirednessCount < TIREDNESS_25PERCENT){ // fully slept full moon      
      return 4;
    } else if (currentTirednessCount >= TIREDNESS_25PERCENT && currentTirednessCount < TIREDNESS_50PERCENT) { // 75% awake,
      return 3;
    } else if (currentTirednessCount >= TIREDNESS_50PERCENT && currentTirednessCount < TIREDNESS_75PERCENT) { // 50% awake
      return 2;
    } else if (currentTirednessCount >= TIREDNESS_75PERCENT && currentTirednessCount < TIREDNESS_100PERCENT) { // 25% awake
      return 1;
    } else if (currentTirednessCount >= TIREDNESS_100PERCENT) { // 0% awake
      return 0;
    }
    return 0;
  }
};