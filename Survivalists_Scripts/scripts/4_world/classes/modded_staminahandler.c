modded class StaminaHandler
{
  override void Update(float deltaT, int pCurrentCommandID)
	{
    // add some void function here
		if (m_Player)
		{
			// Calculates actual max stamina based on player's load
			if (GetGame().IsServer() || !GetGame().IsMultiplayer())
			{
				//! gets stamina from PlayerStat
				m_Stamina = m_Player.GetStatStamina().Get();
				//! gets the actual players load
				m_PlayerLoad = m_Player.GetPlayerLoad();

				//! StaminaCap calculation starts when PlayerLoad exceeds STAMINA_WEIGHT_LIMIT_THRESHOLD
				if (m_PlayerLoad >= CfgGameplayHandler.GetStaminaWeightLimitThreshold())
				{
					m_StaminaCap =  Math.Max((GetStaminaMax() - (((m_PlayerLoad - CfgGameplayHandler.GetStaminaWeightLimitThreshold())/GameConstants.STAMINA_KG_TO_GRAMS) * CfgGameplayHandler.GetStaminaKgToStaminaPercentPenalty())),CfgGameplayHandler.GetStaminaMinCap());
				}
				else
				{
					m_StaminaCap = GetStaminaMax();
				}
			}
			
			// Calculates stamina gain/loss based on movement and load
			m_Player.GetMovementState(m_State);

			switch (pCurrentCommandID)
			{
			case DayZPlayerConstants.COMMANDID_MOVE:
				StaminaProcessor_Move(m_State);
				break;
			case DayZPlayerConstants.COMMANDID_LADDER:
				StaminaProcessor_Ladder(m_State);
				break;
			case DayZPlayerConstants.COMMANDID_SWIM:
				StaminaProcessor_Swimming(m_State);
				break;
			case DayZPlayerConstants.COMMANDID_FALL:	//! processed on event
			case DayZPlayerConstants.COMMANDID_MELEE2:  //! processed on event
			case DayZPlayerConstants.COMMANDID_CLIMB:	//! processed on event
				break;
			default:
				if (!m_IsInCooldown)
				{
					m_StaminaDelta = GameConstants.STAMINA_GAIN_IDLE_PER_SEC;
				}
				break;
			}
			
			//Sets current stamina & stores + syncs data with client
			float temp = m_StaminaDelta * deltaT;
			if (temp < 0)
			{
				temp *= m_StaminaDepletionMultiplier;
			}
			else
			{
				temp *= m_StaminaRecoveryMultiplier;
			}
			
			m_Stamina = Math.Max(0, Math.Min((m_Stamina + temp), m_StaminaCap));
			m_Stamina = m_Stamina - m_StaminaDepletion;

			if (GetGame().IsServer() || !GetGame().IsMultiplayer())
			{
				m_Player.GetStatStamina().Set(m_Stamina);
				m_Time += deltaT;
				
				if (m_Time >= GameConstants.STAMINA_SYNC_RATE)
				{
					m_Time = 0;
					SetStamina(m_Stamina);
				}
			}

			ApplyExhaustion();
			CheckStaminaState();

			m_StaminaDelta = 0;
			m_StaminaDepletion = 0; // resets depletion modifier			
		}
	}
	override void DepleteStamina(EStaminaModifiers modifier, float dT = -1)
	{
		float val = 0.0;
		float current_time = m_Player.GetSimulationTimeStamp();
		float time;
		StaminaModifier sm = m_StaminaModifiers.GetModifierData(modifier);

		// select by modifier type and drain stamina
		switch (sm.GetType())
		{
			case m_StaminaModifiers.FIXED:
				if (dT == -1)
				{
					dT = 1;
				}
				m_StaminaDepletion = m_StaminaDepletion + sm.GetMaxValue() * dT;
			break;
			
			case m_StaminaModifiers.RANDOMIZED:
				val = Math.RandomFloat(sm.GetMinValue(), sm.GetMaxValue());
				m_StaminaDepletion = m_StaminaDepletion + val;
			break;
			
			case m_StaminaModifiers.LINEAR:
				if (!sm.IsInUse())
				{
					sm.SetStartTime(current_time + ( (PlayerSwayConstants.SWAY_TIME_IN + PlayerSwayConstants.SWAY_TIME_STABLE) / dT ) );
					sm.SetRunTimeTick(dT);
					sm.SetInUse(true);
				}
				time = Math.Clamp( ((current_time - sm.GetStartTime()) / sm.GetDurationAdjusted()), 0, 1 );
				val = Math.Lerp(sm.GetMinValue(), sm.GetMaxValue(), time);
				m_StaminaDepletion = m_StaminaDepletion + val;
			
			break;
			
			case m_StaminaModifiers.EXPONENTIAL:
				if (!sm.IsInUse())
				{
					sm.SetStartTime(current_time + ( (PlayerSwayConstants.SWAY_TIME_IN + PlayerSwayConstants.SWAY_TIME_STABLE) / dT ) );
					sm.SetRunTimeTick(dT);
					sm.SetInUse(true);
				}
				time = Math.Clamp( ((current_time - sm.GetStartTime()) / sm.GetDurationAdjusted()), 0, 1 );
				float exp;
				if (sm.GetMinValue() < 1)
				{
					exp = 1 - Math.Lerp(0, sm.GetMaxValue(), time);
				}
				else
				{
					exp = Math.Lerp(0, sm.GetMaxValue(), time);
				}
				val = Math.Pow(sm.GetMinValue(),exp);
				m_StaminaDepletion = m_StaminaDepletion + val;
			
			break;

		}

		//! run cooldown right after depletion
		SetCooldown(sm.GetCooldown(),modifier);
		m_StaminaDepletion = Math.Clamp(m_StaminaDepletion, 0, GetStaminaMax());

		m_StaminaDepletion = m_StaminaDepletion * m_StaminaDepletionMultiplier;
	}
	override void SetStamina(float stamina_value)
	{
		m_Stamina = Math.Clamp(stamina_value, 0, GetStaminaMax());
		SyncStamina(m_Stamina, m_StaminaCap, m_IsInCooldown);
	}
  override float GetStaminaMax()
	{
    float maxStamina = 100.0;
    if (!m_Player)
      return maxStamina;

    return 100 - GetTirednessStaminaModifier();
  }
  
  protected float GetTirednessStaminaModifier()
  {
    // turn value between 0-1 then get it between 0-100
    float normal = TranslateToNewRange(m_Player.GetStatTiredness().Get(),0,100,0,PlayerConstants.SL_TIREDNESS_MAX);
    // dont start reducing max stamina until we are 25% tired
    if (normal > 75)    
      return 0;
    
    return normal + 25;// * 100;
  }

  protected float TranslateToNewRange(float input, float newMin, float newMax, float oldMin = 0, float oldMax = 1)
  {
    return ( (input - oldMin)/(oldMax-oldMin) ) * (newMax - newMin) + newMin;
  }
};

