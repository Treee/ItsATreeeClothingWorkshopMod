class SRP_AlcoholMdfr: ModifierBase
{
	int LIFETIME = 0;
	float food_loss_per_tick = 0;
  float chance_to_laugh = 0;
  override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_ALCOHOL;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ALCOHOL);
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
    SRPTreeConfig config = GetDayZGame().GetSRPTreeConfigGlobal();
    LIFETIME = config.g_SRPAlcoholModifierLifetime;
    food_loss_per_tick = config.g_SRPAlcoholFoodLossAmount;
    chance_to_laugh = config.g_SRPAlcoholChanceToLaughThreshold;

    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ALCOHOL)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ALCOHOL);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ALCOHOL);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not tobacco buzzed");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ALCOHOL);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
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
    float energy_loss = deltaT * food_loss_per_tick;
		player.GetStatEnergy().Add(-energy_loss);
    
    float m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance < chance_to_laugh) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
	}	
};