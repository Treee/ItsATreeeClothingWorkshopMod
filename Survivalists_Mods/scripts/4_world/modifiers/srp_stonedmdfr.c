class SRP_StonedMdfr: ModifierBase
{  
  int LIFETIME = 300;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_STONED;
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
    // Print("SRP_StonedMdfr:: OnActivate"); // reset the modifier
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    if (config)
    {
      LIFETIME = config.g_SRPStonedModifierLifetime;
    }

    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_STONED)) {
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
    }
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("SRP_StonedMdfr:: OnDeactivate");
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
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