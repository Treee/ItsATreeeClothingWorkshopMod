class SRP_MethMdfr: ModifierBase
{
	int LIFETIME = 0; // 10 minutes
  float blood_loss_per_tick = 0;
  float scary_sound_chance = 0;
  float happy_sound_chance = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_METH;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_METH);
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
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    LIFETIME = config.g_SRPMethModifierLifetime;
    blood_loss_per_tick = config.g_SRPMethBloodLossAmount;
    scary_sound_chance = config.g_SRPMethChanceForScarySound;
    happy_sound_chance = config.g_SRPMethChanceForHappySound;
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_METH)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_METH);
    }
    player.GetStaminaHandler().SetDepletionMultiplier(config.g_SRPMethSaminaDepletionBonus);
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_METH);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    player.GetStaminaHandler().SetDepletionMultiplier(1);
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_METH);
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
    m_Player.AddHealth("", "Blood", blood_loss_per_tick * deltaT); //do blood dmg over time

    float m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance < scary_sound_chance) {
      player.PlayScarySound();
    } else if (m_randomChance < happy_sound_chance) {
      player.PlayHappySound();
    }
  }	
};