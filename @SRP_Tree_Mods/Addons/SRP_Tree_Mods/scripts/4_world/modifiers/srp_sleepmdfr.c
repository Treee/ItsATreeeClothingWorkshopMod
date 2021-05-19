class SRP_SleepMdfr: ModifierBase
{	
  static const int SECONDS_PER_DAY = 30;// 14400;
  static const int YAWN_THRESHOLD = SECONDS_PER_DAY * 0.8; // 20 percent awake = start yawning
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_ID 					= SRP_eModifiers.MDF_SLEEP;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
	}

	override bool ActivateCondition(PlayerBase player)
	{    
    // if the player is not sleeping and not unconscious
    // Print("SleepMdfr: ActivateCondition - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));
    // true if the player is not laying down, false if they are
    return !player.GetEmoteManager().m_IsLayDown;
	}
	
	override void OnReconnect(PlayerBase player)
	{
    Print("SleepMdfr: OnReconnect");
		OnActivate(player);
	}
	
	override string GetDebugText()
	{
		return (GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
    // Print("SleepMdfr: OnActivate Start - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));    
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
    return player.GetEmoteManager().m_IsLayDown;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    Print("SleepMdfr: OnTick - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));
    // if the agent count is within yawning range
    if (player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT) > YAWN_THRESHOLD) {
      player.TryYawn();
    }

  }
};