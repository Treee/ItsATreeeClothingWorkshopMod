class SRP_TestMdfr: ModifierBase
{
	const int LIFETIME = 100;
  
  float m_radialOffsetX = 0;  
  float m_radialOffsetY = 0;

  float degreesOffset = 0;
	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_TEST;
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
    m_radialOffsetX = 0;
    m_radialOffsetY = 0;
    degreesOffset = 0;
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not tobacco buzzed");
    Param4<float, float, float, float> m_modifierValues = new Param4<float, float, float, float>(60, 0, 0, 0);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_TEST, m_modifierValues, false, player.GetIdentity());    
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
    degreesOffset += deltaT;

    // oscilate between 0 and 1.5
    float radialOffsetXValue = 20 * Math.Cos(degreesOffset) + 15;
    float radialOffsetYValue = 20 * Math.Sin(degreesOffset) + 15;
    
    // oscilate between 1 and 7    
    Param4<float, float, float, float> m_modifierValues = new Param4<float, float, float, float>(60, 0, radialOffsetXValue, radialOffsetYValue);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_TEST, m_modifierValues, false, player.GetIdentity());    
	}	
};