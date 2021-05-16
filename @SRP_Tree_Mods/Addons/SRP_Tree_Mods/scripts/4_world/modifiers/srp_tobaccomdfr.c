class SRP_TobaccoMdfr: ModifierBase
{
	const int LIFETIME = 90;
  
  float m_tobaccod = 60;
  float m_tobaccodMax = 75;
  float m_tobaccodMin = 60;
  float m_tobaccodIntensity = 0.5;

  float m_radial = 0;
  float m_radialMax = 4;
  float m_radialMin = 0;
  float m_radialIntensity = 0.5;
	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_TOBACCO;
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
    // Print("Player is tobacco buzzed");
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not tobacco buzzed");
    player.TobaccoModifier(60, 0);
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
    if (m_tobaccod > m_tobaccodMax) {
      m_tobaccodIntensity *= -1;
    } else if (m_tobaccod < m_tobaccodMin) {
      m_tobaccodIntensity *= -1;
    }
    m_tobaccod += (m_tobaccodIntensity * deltaT);

    if (m_radial > m_radialMax) {
      m_radialIntensity *= -1;
    } else if (m_radial < m_radialMin) {
      m_radialIntensity *= -1;
    }
    m_radial += (m_radialIntensity * deltaT);
    player.TobaccoModifier(m_tobaccod, m_radial);
	}	
};