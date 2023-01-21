class SRP_SleepMdfr extends ModifierBase
{	
  bool m_IsSleepActive = false;
  bool m_HasCheckForBedding = false;
  float m_BeddingValue = 0;
  float PASS_OUT_THRESHOLD = 0; // 5 minutes passed 0 is pass out territory
  float RESTFULLNESS_FIRECOMFORT = 0;
  float RESTFULLNESS_UNCONSCIOUS = 0;

  float RESTFULLNESS_DAYTIME = 0;
  float RESTFULLNESS_NIGHTTIME = 0;

  float RESTFULLNESS_INSIDESHELTER = 0;
  
  float RESTFULLNESS_BROKENLEG = 0;
  float RESTFULLNESS_FEVER = 0;
  float RESTFULLNESS_GLUTTON = 0;
  float RESTFULLNESS_MORPHINE = 0;
  float RESTFULLNESS_PAINKILLERS = 0;
  float RESTFULLNESS_EPINEPHRINE = 0;
  float RESTFULLNESS_HUNGER = 0;
  float RESTFULLNESS_THIRST = 0;

	ref HumanMovementState		m_MovementState	= new HumanMovementState();


	override void Init()
	{
		m_TrackActivatedTime = false;
		m_ID = SRP_eModifiers.MDF_SLEEP;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
		DisableDeactivateCheck();
    Print("[[SRP_SleepMdfr]] -- Registering -- On Player -- Success --");
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      m_IsSleepActive = config.g_SRPIsSleepActive;
      PASS_OUT_THRESHOLD = config.g_SRPSleepMaximumAwakeTime + config.g_SRPSleepPassOutThreshold; // 5 minutes passed 0 is pass out territory
      RESTFULLNESS_FIRECOMFORT = config.g_SRPRestfulnessFireComfortIncreaseAmount;
      RESTFULLNESS_UNCONSCIOUS = config.g_SRPRestfulnessUnconsciousIncreaseAmount;

      RESTFULLNESS_DAYTIME = config.g_SRPRestfulnessDaytimeIncreaseAmount;
      RESTFULLNESS_NIGHTTIME = config.g_SRPRestfulnessNighttimeIncreaseAmount;

      RESTFULLNESS_INSIDESHELTER = config.g_SRPRestfulnessInsideShelterIncreaseAmount;

      RESTFULLNESS_BROKENLEG = config.g_SRPRestfulnessBrokenLegsIncreaseAmount;
      RESTFULLNESS_FEVER = config.g_SRPRestfulnessFeverIncreaseAmount;
      RESTFULLNESS_GLUTTON = config.g_SRPRestfulnessGluttonIncreaseAmount;
      RESTFULLNESS_MORPHINE = config.g_SRPRestfulnessMorphineIncreaseAmount;
      RESTFULLNESS_PAINKILLERS = config.g_SRPRestfulnessPainKillersIncreaseAmount;
      RESTFULLNESS_EPINEPHRINE = config.g_SRPRestfulnessEpinephrineIncreaseAmount;
      RESTFULLNESS_HUNGER = config.g_SRPRestfulnessHungerIncreaseAmount;
      RESTFULLNESS_THIRST = config.g_SRPRestfulnessThirstIncreaseAmount;
      // Print("[SRP_SleepMdfr] - [ActivateCondition] - g_SRPIsSleepActive TRUE :: PASSOUT THRESHHOLD " + PASS_OUT_THRESHOLD);      
    }
	}
  override bool ActivateCondition(PlayerBase player)
	{
    PlayerIdentity identity = player.GetIdentity();
    if (identity)
    {
      // return player.IsAwake();
		  return m_IsSleepActive;
    }
    return false;
	}	
	override bool DeactivateCondition(PlayerBase player)
	{
		return false;
	}
  override void OnReconnect(PlayerBase player){}

	override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("SLEEP START");
    player.GetMovementState(m_MovementState);
    // default tiredness increase regardless of any modifiers
		float metabolic_speed = MiscGameplayFunctions.GetTirednessMetabolicSpeed(m_MovementState.m_iMovement);
    // Print(string.Format("BASE METABOLIC STAT: %1", metabolic_speed));
    // modify tiredness increase/decrease with respect to the day/night cycle
    metabolic_speed += GetDayNightCycleRestfulness(player.IsAwake(), player.IsPlayerMutant());    
    // Print(string.Format("DAY/NIGHT: %1", metabolic_speed));
    // modify tiredness increase/decrease with respect to medical conditions
    metabolic_speed += GetMedicalRestfulness(player);    
    // Print(string.Format("MEDICAL: %1", metabolic_speed));
    // modify tiredness increase/decrease with respect to hunger
    metabolic_speed += GetHungerRestfulness(player.GetStatEnergy().Get());    
    // Print(string.Format("HUNGER: %1", metabolic_speed));
    // modify tiredness increase/decrease with respect to thirst
    metabolic_speed += GetThirstRestfulness(player.GetStatWater().Get());    
    // Print(string.Format("THIRST: %1", metabolic_speed));
    // modify tiredness decrease with respect to bedding
    metabolic_speed += GetBeddingComfortRestfulness(player);    
    // Print(string.Format("BEDDING: %1", metabolic_speed));
    // modify tiredness decrease with respect to shelter
    metabolic_speed += GetBuildingComfortRestfulness(player.IsSoundInsideBuilding(), player.IsAwake());    
    // Print(string.Format("SHELTER: %1", metabolic_speed));
    // modify tiredness decrease with respect to being unconscious
    metabolic_speed += GetUnconsciousRestfulness(player.IsUnconscious(), player.GetStatTiredness().Get());    
    // Print(string.Format("UNCON: %1", metabolic_speed));
    // modify tiredness decrease with respect to heat comfort
    metabolic_speed += GetHeatComfortRestfulness(player);
    // Print(string.Format("HEAT COMFORT: %1", metabolic_speed));
		
    if (player.IsAwake())
      metabolic_speed *= -1;
    
    float total = metabolic_speed * deltaT;
    Print(string.Format("Starting: %1 Metobolic Speed: %2 Applied Delta: %3", player.GetStatTiredness().Get(), metabolic_speed, total));
    player.GetStatTiredness().Add( total );
  }
//======================== ACTIVE AWAKE AND SLEEPING
  float GetDayNightCycleRestfulness(bool isAwake, bool isMutant)
  {
    if (!isAwake) // sleeping
    {
      if (GetGame().GetWorld().IsNight()) // nighttime
      {
        if (isMutant) // mutants are inversed
        {
          return RESTFULLNESS_DAYTIME;  
        }
        else
        {
          return RESTFULLNESS_NIGHTTIME;
        }
      }
      else
      {
        if (isMutant) // mutants are inversed
        {
          return (RESTFULLNESS_NIGHTTIME * 0.78);  
        }
        else
        {
          return RESTFULLNESS_DAYTIME;
        }
      }
    }
    return 0;
  }
  float GetMedicalRestfulness(PlayerBase player)
  {
    float modifier = 0;

    // Bone Regen / FEVER Requires Bed Rest    
    if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_BROKEN_LEGS ) )
    {
      modifier += RESTFULLNESS_BROKENLEG;
    }
    if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_FEVER ) )
    {
      modifier += RESTFULLNESS_FEVER;
    }
    // FAT FUCKS ARE TIRED WHEN FULL OF TURKEY
    if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_STUFFED ) )
    {
      modifier += RESTFULLNESS_GLUTTON;
    }
    // MORPHINE AND PAIN KILLERS MAKE YOU SLEEPY
    if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_MORPHINE ) )
    {
      modifier += RESTFULLNESS_MORPHINE;
    }
    if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_PAINKILLERS ) )
    {
      modifier += RESTFULLNESS_PAINKILLERS;
    }
    // EPI PENS MAKE YOU WILD
    if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
    {
      modifier += RESTFULLNESS_EPINEPHRINE;
    }
    return modifier;
  }
  float GetHungerRestfulness(float energy)
  {
    if ( energy <= PlayerConstants.LOW_ENERGY_THRESHOLD )
    {
      return RESTFULLNESS_HUNGER;
    };
    return 0;
  }
  float GetThirstRestfulness(float thirst)
  {
    if ( thirst <= PlayerConstants.LOW_WATER_THRESHOLD )
    {
      return RESTFULLNESS_THIRST;
    };
    return 0;
  }

//======================== ACTIVE ONLY WHEN SLEEPING
  float GetBeddingComfortRestfulness(PlayerBase player)
  {  
    if (!player.IsAwake())
    {
      if (!m_HasCheckForBedding)
      {
        vector from = player.GetPosition();
        vector to = player.GetPosition();
        set<Object> hit_object = new set<Object>;
        to[1] = to[1] - 0.5;
        vector contactPos;
        vector contactDir;
        int contactComponent;
        bool hit = DayZPhysics.RaycastRV( from, to, contactPos, contactDir, contactComponent, hit_object, NULL, player, false, false, ObjIntersectFire );
        if (hit && hit_object.Count() > 0)
        {
          if (hit_object[0].GetType().Contains("sleepingbag"))
          {
            m_BeddingValue = -0.8;
          }
          else if (hit_object[0].GetType().Contains("SRP_SleepingBag")) 
          {
            m_BeddingValue = -0.8;
          }
          else if (hit_object[0].GetType().Contains("couch")) 
          {
            m_BeddingValue = -0.8;
          }
          else if (hit_object[0].GetType() == "SRP_MedicalBed_Mattress") 
          {
            m_BeddingValue = -1.2;
          }
          else if (hit_object[0].GetType() == "SRP_MedicalBed_Wood") 
          {
            m_BeddingValue = -2.2;
          }
          else if (hit_object[0].GetType() == "SRP_MedicalBedSmall_Wood") 
          {
            m_BeddingValue = -1.2;
          }
          else
          {
            m_BeddingValue = 0;
          }
        }
        else
        {
          m_BeddingValue = 0;
        }
        m_HasCheckForBedding = true;
      }
    }
    else
    {
      m_BeddingValue = 0;
      m_HasCheckForBedding = false;
    }
    return m_BeddingValue;
  }
  float GetBuildingComfortRestfulness(bool isInBuilding, bool isAwake)
  {
    if (!isAwake)
    {
      if (isInBuilding)
      {
        return RESTFULLNESS_INSIDESHELTER;
      }
    }
    return 0;
  }
  float GetUnconsciousRestfulness(bool isUnconscious, float currentTiredness)
  {    
    // we are uncon and suuuuuuuuuuper sleepy
    if (isUnconscious && (currentTiredness > PASS_OUT_THRESHOLD))
    {
      // super recovery to avoid uncon loops
      return RESTFULLNESS_UNCONSCIOUS;
    }
    return 0;
  }
  float GetHeatComfortRestfulness(PlayerBase player)
  {
    if (player.IsNearComfortHeatSource() && !player.IsAwake())
    {
      return RESTFULLNESS_FIRECOMFORT;
    }
    return 0;
  }
};
