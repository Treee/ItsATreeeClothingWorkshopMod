class SRP_MethMdfr: ModifierBase
{
	const int LIFETIME = 600; // 10 minutes
  
  float m_radialBlur = 0;
  float m_radialBlurMax = 12;
  float m_radialBlurIntensity = 0.1;

	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_METH;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
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
    // Print("Player is on bath salts");
    player.MethModifier();
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on bath salts");
    player.MethModifier(); // default values
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
    if (m_radialBlur > m_radialBlurMax) { // if we hit the max, reverse the sign
      m_radialBlurIntensity *= -1;
    } else if (m_radialBlur < 4 && m_radialBlurIntensity < 0) { // if we hit the min AND we are still decreasing
      m_radialBlurIntensity *= -1;
    }
    m_radialBlur += (m_radialBlurIntensity * deltaT);

    player.MethModifier(50, m_radialBlur, m_radialBlur);
	}	
};