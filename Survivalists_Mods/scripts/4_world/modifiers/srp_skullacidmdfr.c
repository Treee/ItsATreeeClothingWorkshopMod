class SRP_SkullAcidMdfr: ModifierBase
{
	int LIFETIME = 0; // 10 minutes
  
  float chance_for_scary_sound = 0;
  float chance_for_happy_sound = 0;
  float chance_for_laugh_sound = 0;
  float chance_for_freeze_sound = 0;
  float chance_for_sweat_sound = 0;
  float chance_for_sneeze_sound = 0;
  float chance_for_cough_sound = 0;  
  
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_ACIDSKULL;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSKULL);
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
    // Print("Player is on skull acid");
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    LIFETIME = config.g_SRPSkullAcidModifierLifetime;
    chance_for_scary_sound = config.g_SRPSkullAcidChanceForScarySound;
    chance_for_happy_sound = config.g_SRPSkullAcidChanceForHappySound;
    chance_for_laugh_sound = config.g_SRPSkullAcidChanceForLaughter;
    chance_for_freeze_sound = config.g_SRPSkullAcidChanceForFreeze;
    chance_for_sweat_sound = config.g_SRPSkullAcidChanceForSweat;
    chance_for_sneeze_sound = config.g_SRPSkullAcidChanceForSneeze;
    chance_for_cough_sound = config.g_SRPSkullAcidChanceForCough;

    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSKULL)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSKULL);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSKULL);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on skull acid");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSKULL);
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
    float m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance < chance_for_scary_sound) {
      player.PlayScarySound();
    } else if (m_randomChance < chance_for_happy_sound) {
      player.PlayHappySound();
    }
    if (m_randomChance < chance_for_laugh_sound) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (m_randomChance < chance_for_freeze_sound) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
    } else if (m_randomChance < chance_for_sweat_sound) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
    } else if (m_randomChance < chance_for_sneeze_sound) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
    } else if (m_randomChance < chance_for_cough_sound) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }	
	}	
};