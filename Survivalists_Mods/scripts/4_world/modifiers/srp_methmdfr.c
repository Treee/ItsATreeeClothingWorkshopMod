class SRP_MethMdfr: ModifierBase
{
	int LIFETIME = 600; // 10 minutes

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
    if (config)
    {
      LIFETIME = config.g_SRPStonedModifierLifetime;
    }
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_METH)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_METH);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_METH);
    player.GetStaminaHandler().SetDepletionMultiplier(0.5);
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
};