class SRP_MethMdfr: ModifierBase
{
	int LIFETIME = 600; // 10 minutes

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eDrugModifiers.MDF_METH;
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
		OnDeactivate(player);
	}
	
	override string GetDebugText()
	{
		return (LIFETIME - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
    // SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    // if (config)
    // {
    //   LIFETIME = config.g_SRPMethModifierLifetime;
    // }
    if (player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_METH);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_METH);
    player.GetStaminaHandler().SetDepletionMultiplier(0.5);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    player.GetStaminaHandler().SetDepletionMultiplier(1);
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_METH);
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