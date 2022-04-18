class SRP_CocaineMdfr: ModifierBase
{
	int LIFETIME = 600; // 10 minutes
  
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eDrugModifiers.MDF_COCAINE;
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
    // Print("Player is on skull acid");
    // SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    // if (config)
    // {
    //   LIFETIME = config.g_SRPSkullAcidModifierLifetime;
    // }
    if (player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_COCAINE)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_COCAINE);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_COCAINE);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on skull acid");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_COCAINE);
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