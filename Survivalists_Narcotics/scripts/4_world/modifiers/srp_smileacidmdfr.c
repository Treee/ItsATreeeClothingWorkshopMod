class SRP_SmileAcidMdfr: ModifierBase
{
	int LIFETIME = 600; //10 minutes

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_ACIDSMILE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
    DisableActivateCheck();
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
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
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    if (config)
    {
      LIFETIME = config.g_SRPSmileAcidModifierLifetime;
    }
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
};