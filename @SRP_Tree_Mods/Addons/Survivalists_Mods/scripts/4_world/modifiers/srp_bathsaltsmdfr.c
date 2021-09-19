class SRP_BathSaltsMdfr: ModifierBase
{
	int LIFETIME = 0; // 10 minutes
  float chance_for_scary_sound = 0;
  float chance_for_happy_sound = 0;
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_BATHSALTS;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BATHSALTS);
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
    LIFETIME = config.g_SRPBathSaltsModifierLifetime;
    chance_for_scary_sound = config.g_SRPBathSaltsChanceForScarySound;
    chance_for_happy_sound = config.g_SRPBathSaltsChanceForHappySound;
    
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BATHSALTS)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_BATHSALTS);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_BATHSALTS);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on bath salts");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_BATHSALTS);
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
  }	
};