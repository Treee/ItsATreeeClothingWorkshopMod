class SRP_BathSaltsMdfr: ModifierBase
{
	const int LIFETIME = 600; // 10 minutes
  
  float m_radialBlur = 0;
  float m_radialBlurMax = 12;
  float m_radialBlurIntensity = 0.01;

  float m_chromaX = 0;
  float m_chromaXMax = 3;  
  float m_chromaXIntensity = 0.1;

  float m_chromaY = 0;
  float m_chromaYMax = 3;
  float m_chromaYIntensity = 0.1;

	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_BATHSALTS;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
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
    m_chromaX = Math.RandomFloat(0, 3);
    m_chromaY = Math.RandomFloat(0, 3);
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not on bath salts");
    Param5<float, float, float, float, float> m_modifierValues = new Param5<float, float, float, float, float>(60, 0, 0, 0, 0);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_SALTS, m_modifierValues, false, player.GetIdentity());    
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

    Param5<float, float, float, float, float> m_modifierValues = new Param5<float, float, float, float, float>(45, m_radialBlur, m_radialBlur, m_chromaX, m_chromaY);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_SALTS, m_modifierValues, false, player.GetIdentity());    
	}	
};