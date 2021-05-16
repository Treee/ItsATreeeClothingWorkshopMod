class SRP_SkullAcidMdfr: ModifierBase
{
	const int LIFETIME = 600; // 10 minutes
  
  float m_chromaX = 3;  
  float m_chromaY = 1;

  float m_hue = 60;
  float m_hueMax = 60;
  float m_hueMin = 30;
  float m_hueIntensity = 1;
	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_ACIDSKULL;
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
    // Print("Player is on skull acid");
    m_chromaX = 3;
    m_chromaY = 4;

    m_hue = 60;
    m_hueMax = 60;
    m_hueMin = 30;
    m_hueIntensity = -1; // we want to decrease from 60 for starters

    player.AcidModifier(5, 5, m_chromaX, m_chromaY, m_hue);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on skull acid");
    player.AcidModifier(0, 0, 0, 0, 60); // default values
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
    if (m_hue > m_hueMax && m_hueIntensity > 0) {
      m_hueIntensity *= -1;
    } else if (m_hue < m_hueMin && m_hueIntensity < 0) {
      m_hueIntensity *= -1;
    }
    m_hue += (m_hueIntensity * deltaT);    

    player.AcidModifier(5, 5, m_chromaX, m_chromaY, m_hue);
	}	
};