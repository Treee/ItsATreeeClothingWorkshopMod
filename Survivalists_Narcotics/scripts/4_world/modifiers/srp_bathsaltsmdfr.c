class SRP_BathSaltsMdfr: ModifierBase
{
	int LIFETIME = 600; // 10 minutes
  
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eDrugModifiers.MDF_BATHSALTS;
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
    // SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    // if (config)
    // {
    //   LIFETIME = config.g_SRPBathSaltsModifierLifetime;
    // }

    if (player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_BATHSALTS)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_BATHSALTS);
    }
    player.GetStaminaHandler().SetDepletionMultiplier(0.5);
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_BATHSALTS);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on bath salts");
    player.GetStaminaHandler().SetDepletionMultiplier(1);
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_BATHSALTS);
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