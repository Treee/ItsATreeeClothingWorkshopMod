class SRP_AlcoholMdfr: ModifierBase
{
	const int LIFETIME = 100;
  
  float m_radialOffsetX = 0;
  float m_radialOffsetXMax = 10;
  float m_radialOffsetXMin = 0;
  float m_radialOffsetXIntensity = 0.05;

  float m_radialOffsetY = 0;
  float m_radialOffsetYMax = 10;
  float m_radialOffsetYMin = 0;
  float m_radialOffsetYIntensity = 0.05;
	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_ALCOHOL;
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
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not tobacco buzzed");
    Param4<float, float, float, float> m_modifierValues = new Param4<float, float, float, float>(60, 0, 0, 0);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_ALCOHOL, m_modifierValues, false, player.GetIdentity());    
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
    if (m_radialOffsetX > m_radialOffsetXMax){
      m_radialOffsetXIntensity *= -1;
    } else if (m_radialOffsetX > m_radialOffsetXMin) {
      m_radialOffsetXIntensity *= -1;
    }
    m_radialOffsetX += (m_radialOffsetXIntensity * deltaT);

    if (m_radialOffsetY > m_radialOffsetYMax){
      m_radialOffsetYIntensity *= -1;
    } else if (m_radialOffsetY > m_radialOffsetYMin) {
      m_radialOffsetYIntensity *= -1;
    }
    m_radialOffsetY += (m_radialOffsetYIntensity * deltaT);

    float randomHue = Math.RandomFloat(50, 58);
    // oscilate between 1 and 7
    Param4<float, float, float, float> m_modifierValues = new Param4<float, float, float, float>(randomHue, 5, m_radialOffsetX, m_radialOffsetY);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_ALCOHOL, m_modifierValues, false, player.GetIdentity());    
	}	
};