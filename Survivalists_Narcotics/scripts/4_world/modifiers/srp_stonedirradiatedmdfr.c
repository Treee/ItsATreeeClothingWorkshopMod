class SRP_StonedIrradiatedMdfr: ModifierBase
{  
  int LIFETIME = 300;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eDrugModifiers.MDF_STONEDIRRADIATED;
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
    if (player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONEDIRRADIATED)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_WEEDIRRADIATED);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_WEEDIRRADIATED);
    player.GetStaminaHandler().SetDepletionMultiplier(1.5);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("SRP_StonedMdfr:: OnDeactivate");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_WEEDIRRADIATED);
    player.GetStaminaHandler().SetDepletionMultiplier(1);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if ( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};