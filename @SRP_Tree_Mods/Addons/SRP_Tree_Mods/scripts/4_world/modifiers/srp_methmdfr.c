class SRP_MethMdfr: ModifierBase
{
	const int LIFETIME = 600; // 10 minutes

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
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_METH)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_METH);
    }
    player.GetStaminaHandler().SetDepletionMultiplier(0.5);
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
    m_Player.AddHealth("", "Blood", 3.5 * deltaT); //do blood dmg over time
    float m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 90 && m_randomChance <= 95) {
      player.PlayScarySound();
    } else if (m_randomChance > 95) {
      player.PlayHappySound();
    }  
  }	
};