class SRP_StonedMdfr: ModifierBase
{  
  int LIFETIME = 0;
  float water_loss_per_tick = 0;
  float chance_for_laugh = 0;
  float chance_for_cough = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_STONED;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_STONED);
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override string GetDebugText()
	{
		return (LIFETIME - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
    // Print("SRP_StonedMdfr:: OnActivate"); // reset the modifier
    SRPTreeConfig config = GetDayZGame().GetSRPTreeConfigGlobal();
    LIFETIME = config.g_SRPStonedModifierLifetime;
    water_loss_per_tick = config.g_SRPWeedWaterLossAmount;
    chance_for_laugh = config.g_SRPWeedChanceForLaugh;
    chance_for_cough = config.g_SRPWeedChanceForCough;

    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_STONED)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("SRP_StonedMdfr:: OnDeactivate");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if ( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    float water_loss = deltaT * water_loss_per_tick;
		player.GetStatWater().Add(-water_loss);

    float m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance < chance_for_cough) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    } else if (m_randomChance < chance_for_laugh) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
	}	
};