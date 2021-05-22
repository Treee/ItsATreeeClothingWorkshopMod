modded class StaminaHandler
{
  void Update(float deltaT, int pCurrentCommandID)
	{
		if( m_Player )
		{
			// Calculates actual max stamina based on player's load
			if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
			{
				//! gets stamina from PlayerStat
				m_Stamina = m_Player.GetStatStamina().Get();				
			}
      m_StaminaCap = GameConstants.STAMINA_MAX;

			// Calculates stamina gain/loss based on movement and load
			m_Player.GetMovementState(m_State);
			
      m_StaminaDelta = GameConstants.STAMINA_GAIN_IDLE_PER_SEC;
			
      //Sets current stamina & stores + syncs data with client
			if (m_Stamina < 0)
			{
				m_Stamina = 0;
			}
			else
			{
				float temp = m_StaminaDelta*deltaT;
				
				m_Stamina = Math.Max(0,Math.Min((m_Stamina + temp),m_StaminaCap));
				m_Stamina = m_Stamina - m_StaminaDepletion;
			}

			if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
			{
				m_Player.GetStatStamina().Set(m_Stamina);
				m_Time += deltaT;
				if ( m_Time >= GameConstants.STAMINA_SYNC_RATE )
				{
					m_Time = 0;
					SyncStamina(m_Stamina, m_StaminaCap, m_IsInCooldown);
				}
			}
			else
			{
				m_Player.SetStamina(m_Stamina, m_StaminaCap);
			}

			//! sets exhaustion look of player based on stamina level
			HumanCommandAdditives ad = m_Player.GetCommandModifier_Additives();
			float exhaustion_value = 1-((m_Stamina/(m_StaminaCap*0.01))*0.01);
			exhaustion_value = Math.Min(1,exhaustion_value);
			if ( ad )
			{
				// do not apply exhaustion on local client if player is in ADS/Optics (camera shakes)
				if ( m_Player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_CLIENT && (m_Player.IsInOptics() || m_Player.IsInIronsights()) )
				{
					ad.SetExhaustion(0, true);
				}
				else
				{
					ad.SetExhaustion(exhaustion_value, true);
				}
			}

			CheckStaminaState();

			m_StaminaDelta = 0;
			m_StaminaDepletion = 0; // resets depletion modifier
		}
	}
}