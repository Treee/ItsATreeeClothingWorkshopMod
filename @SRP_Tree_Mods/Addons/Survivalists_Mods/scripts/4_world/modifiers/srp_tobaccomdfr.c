class SRP_TobaccoMdfr: ModifierBase
{
	int LIFETIME = 0;
  float chance_for_cough = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_TOBACCO;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_TOBACCO);
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
    // Print("Player is tobacco buzzed");
    SRPTreeConfig config = GetDayZGame().GetSRPTreeConfigGlobal();
    LIFETIME = config.g_SRPTobacoModifierLifetime;
    chance_for_cough = config.g_SRPTobaccoChanceForCough;

    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_TOBACCO)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TOBACCO);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TOBACCO);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not tobacco buzzed");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TOBACCO);
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
    if (m_randomChance < chance_for_cough) {
      player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    } 	
  }	
};