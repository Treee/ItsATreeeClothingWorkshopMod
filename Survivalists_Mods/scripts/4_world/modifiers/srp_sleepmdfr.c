class SRP_SleepMdfr extends ModifierBase
{	
  bool m_IsSleepActive = false;
  bool m_HasCheckForBedding = false;
  float m_BeddingValue = 0;
  float PASS_OUT_THRESHOLD = 0; // 5 minutes passed 0 is pass out territory
  float TIREDNESS_INCREASE = 0;
  float RESTFULLNESS_SLEEPING = 0;
  float RESTFULLNESS_FIRECOMFORT = 0;
  float RESTFULLNESS_UNCONSCIOUS = 0;

  float RESTFULLNESS_DAYTIME = 0;
  float RESTFULLNESS_NIGHTTIME = 0;

  float RESTFULLNESS_INSIDESHELTER = 0;
  
  float RESTFULLNESS_SPRINTING = 0;
  float RESTFULLNESS_RUNNING = 0;
  float RESTFULLNESS_WALKING = 0;
  float RESTFULLNESS_MOVEMENT = 0;

  float RESTFULLNESS_BROKENLEG = 0;
  float RESTFULLNESS_FEVER = 0;
  float RESTFULLNESS_GLUTTON = 0;
  float RESTFULLNESS_MORPHINE = 0;
  float RESTFULLNESS_PAINKILLERS = 0;
  float RESTFULLNESS_EPINEPHRINE = 0;
  float RESTFULLNESS_HUNGER = 0;
  float RESTFULLNESS_THIRST = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
    m_IsPersistent = true;
		m_ID = SRP_eModifiers.MDF_SLEEP;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
    m_ActivationType 		= EActivationType.TRIGGER_EVENT_ON_CONNECT;
		DisableDeactivateCheck();
    Print("[[SRP_SleepMdfr]] -- Registering -- On Player -- Success --");
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      m_IsSleepActive = config.g_SRPIsSleepActive;
      PASS_OUT_THRESHOLD = config.g_SRPSleepMaximumAwakeTime + config.g_SRPSleepPassOutThreshold; // 5 minutes passed 0 is pass out territory
      TIREDNESS_INCREASE = config.g_SRPSleepynessIncreaseAmount;
      RESTFULLNESS_SLEEPING = config.g_SRPRestfulnessIncreaseAmount;
      RESTFULLNESS_FIRECOMFORT = config.g_SRPRestfulnessFireComfortIncreaseAmount;
      RESTFULLNESS_UNCONSCIOUS = config.g_SRPRestfulnessUnconsciousIncreaseAmount;

      RESTFULLNESS_DAYTIME = config.g_SRPRestfulnessDaytimeIncreaseAmount;
      RESTFULLNESS_NIGHTTIME = config.g_SRPRestfulnessNighttimeIncreaseAmount;

      RESTFULLNESS_INSIDESHELTER = config.g_SRPRestfulnessInsideShelterIncreaseAmount;

      RESTFULLNESS_SPRINTING = config.g_SRPRestfulnessSprintingIncreaseAmount;
      RESTFULLNESS_RUNNING = config.g_SRPRestfulnessRunningIncreaseAmount;
      RESTFULLNESS_WALKING = config.g_SRPRestfulnessWalkingIncreaseAmount;
      RESTFULLNESS_MOVEMENT = config.g_SRPRestfulnessMovementIncreaseAmount;

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
		return m_IsSleepActive;
	}
	
	override void OnActivate(PlayerBase player)
	{
    // Print("[SRP_SleepMdfr] - [OnActivate] - START");
    if (player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SLEEP))
    {
      // Print("[SRP_SleepMdfr] - [OnActivate] - MODIFIER WAS ACTIVE::REMOVING");
      player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);
    }
    // Print("[SRP_SleepMdfr] - [OnActivate] - ADDING");
    player.GetSymptomManager().QueueUpSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);    
	}

  override void OnReconnect(PlayerBase player)
	{
    // Print("[SRP_SleepMdfr] - [OnReconnect] - START");
		OnActivate(player);
	}
	
  override void OnDeactivate(PlayerBase player)
	{
    player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);
	}

	override bool DeactivateCondition(PlayerBase player)
	{
		return false;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    int tendency = GetModifierTendency(!player.IsAwake());

    float modifier = ( GetNextTiredness(!player.IsAwake()) * tendency );
    // Print("modifier 1: " + modifier);
    modifier += ( GetUnconsciousRestfulness(player.IsUnconscious()) * tendency );
    // Print("modifier uncon: " + modifier);
    modifier += ( GetHeatComfortRestfulness(player) * tendency );
    // Print("modifier heat: " + modifier);
    modifier += ( GetMedicalRestfulness(player) * tendency );
    // Print("modifier medical: " + modifier);
    modifier += ( GetHungerRestfulness(player.GetStatEnergy().Get()) * tendency );
    // Print("modifier hunger: " + modifier);
    modifier += ( GetThirstRestfulness(player.GetStatWater().Get()) * tendency );
    // Print("modifier thirst: " + modifier);
    modifier += ( GetMovementStateRestfulness(player));
    // Print("modifier mvt state: " + modifier);
    modifier += ( GetDayNightCycleRestfulness(!player.IsAwake()));
    // Print("day night: " + modifier);
    modifier += ( GetBuildingComfortRestfulness(player.IsSoundInsideBuilding(), !player.IsAwake()));
    // Print("inside shelter: " + modifier);
    modifier += ( GetBeddingComfortRestfulness(player));
    // Print("bedding comfort: " + modifier);
    
    // subtract dT as Tick automatically calculates it for us
    // modify dT relative to what can influence sleep rate
    // apply the sleeping/awake tendency
    // clamp min to 0
    // clamp max to the passing out threshold
    float newAttachedTime = ( (GetAttachedTime() - deltaT) + (deltaT * modifier) );
    // Print("New Attached: " + newAttachedTime);    
    float clamped = Math.Min(PASS_OUT_THRESHOLD, Math.Max(0, newAttachedTime));    
    // Print("First Clamp: " + clamped);

    // Print("[SRP_SleepMdfr] - [OnTick] - TotalAttachedTime: " + GetAttachedTime() + " clamped time: " + clamped);
        
    SetAttachedTime(clamped);
    player.SetTotalTiredness(clamped);
    player.SetSynchDirty();
  }

  float GetModifierTendency(float isSleeping)
  {
    if (isSleeping)
    {      
      // Print("[SRP_SleepMdfr] - [GetModifierTendency] - : NEGATIVE NUMBERS");
      return -1;
    }
    return 1;
  }
  
  float GetNextTiredness(bool isSleeping)
  {
    if (isSleeping)
    {
      // Print("[SRP_SleepMdfr] - [GetNextTiredness] - : IS SLEEPING");
      return RESTFULLNESS_SLEEPING;
    }
    return TIREDNESS_INCREASE;
  }

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

  float GetBuildingComfortRestfulness(bool isInBuilding, bool isSleeping)
  {
    if (isSleeping)
    {
      if (isInBuilding)
      {
        return RESTFULLNESS_INSIDESHELTER;
      }
    }
    return 0;
  }

  float GetDayNightCycleRestfulness(bool isSleeping)
  {
    if (isSleeping)
    {
      if (GetGame().GetWorld().IsNight())
      {
        return RESTFULLNESS_NIGHTTIME;
      }
      return RESTFULLNESS_DAYTIME;
    }
    return 0;
  }

  float GetMovementStateRestfulness(PlayerBase player)
  {
    if (player.IsSprinting())
    {
      // Print("[SRP_SleepMdfr] - [GetMovementStateRestfulness] - : IS SPRINTING");
      return RESTFULLNESS_SPRINTING;
    }
    else if (player.IsRunning())
    {
      // Print("[SRP_SleepMdfr] - [GetMovementStateRestfulness] - : IS RUNNING");
      return RESTFULLNESS_RUNNING;
    }
    else if (player.IsWalking())
    {
      // Print("[SRP_SleepMdfr] - [GetMovementStateRestfulness] - : IS WALKING");
      return RESTFULLNESS_WALKING;
    }
    // Print("[SRP_SleepMdfr] - [GetMovementStateRestfulness] - : IS IDLE");
    return RESTFULLNESS_MOVEMENT;
  }

  float GetUnconsciousRestfulness(bool IsUnconscious)
  {    
    if (IsUnconscious)
    {
      // Print("[SRP_SleepMdfr] - [GetUnconsciousRestfulness] - : UNCONSCIOUS");
      return RESTFULLNESS_UNCONSCIOUS;
    }
    return 0;
  }

  float GetHeatComfortRestfulness(PlayerBase player)
  {
    if (player.IsNearComfortHeatSource())
    {
      if (player.IsAwake())
      {
        // Print("[SRP_SleepMdfr] - [GetHeatComfortRestfulness] - : NEAR COMFORT!!");
        return RESTFULLNESS_FIRECOMFORT * 0.1;
      }
      else
      {
        return RESTFULLNESS_FIRECOMFORT;
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
};
