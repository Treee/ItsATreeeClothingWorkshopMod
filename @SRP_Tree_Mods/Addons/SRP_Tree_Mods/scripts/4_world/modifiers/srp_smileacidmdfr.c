class SRP_SmileAcidMdfr: ModifierBase
{
	const int LIFETIME = 600; //10 minutes

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_ACIDSMILE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSMILE);
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
    // Print("Player is on smile acid");
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSMILE)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSMILE);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSMILE);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on smile acid");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSMILE);
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
    if (m_randomChance > 70 && m_randomChance <= 90)
    {
      player.PlayScarySound();
    } else if (m_randomChance > 90) {
      player.PlayHappySound();
    }
    if (m_randomChance > 10 && m_randomChance <= 30) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (m_randomChance > 30 && m_randomChance <= 40) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
    } else if (m_randomChance > 40 && m_randomChance <= 60) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
    } else if (m_randomChance > 60 && m_randomChance <= 80) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
    } else if (m_randomChance > 80 && m_randomChance <= 90) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (m_randomChance > 90 && m_randomChance <= 100) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }	
  }	
};