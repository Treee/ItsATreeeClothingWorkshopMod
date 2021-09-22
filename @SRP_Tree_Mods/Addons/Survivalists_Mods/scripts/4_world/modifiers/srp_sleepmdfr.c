class SRP_SleepMdfr: ModifierBase
{	
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
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
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
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SLEEP)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);
    }
    // Print("Sleep OnActivate modifier is not already active.... activating the modifier");
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);          
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("SleepMdfr: OnDeactivate Start - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));    
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
    // Print("SleepMdfr: DeactivateCondition - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT));
    return false;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
  }
};