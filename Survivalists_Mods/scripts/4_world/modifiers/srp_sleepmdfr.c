class SRP_SleepMdfr extends ModifierBase
{	
  float PASS_OUT_THRESHOLD = 0; // 5 minutes passed 0 is pass out territory
  float TIREDNESS_INCREASE = 0;
  float RESTFULLNESS_SLEEPING = 0;
  float RESTFULLNESS_FIRECOMFORT = 0;
  float RESTFULLNESS_UNCONSCIOUS = 0;
  
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
      if (config.g_SRPIsSleepActive)
      {
        PASS_OUT_THRESHOLD = config.g_SRPSleepMaximumAwakeTime + config.g_SRPSleepPassOutThreshold; // 5 minutes passed 0 is pass out territory
        TIREDNESS_INCREASE = config.g_SRPSleepynessIncreaseAmount;
        RESTFULLNESS_SLEEPING = config.g_SRPRestfulnessIncreaseAmount;
        RESTFULLNESS_FIRECOMFORT = config.g_SRPRestfulnessFireComfortIncreaseAmount;
        RESTFULLNESS_UNCONSCIOUS = config.g_SRPRestfulnessUnconsciousIncreaseAmount;

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
	}

  override bool ActivateCondition(PlayerBase player)
	{
		return true;
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
    // player.GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_SLEEP);
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
    modifier += ( GetHeatComfortRestfulness(player.IsNearComfortHeatSource()) * tendency );
    // Print("modifier heat: " + modifier);
    modifier += ( GetMedicalRestfulness(player) * tendency );
    // Print("modifier medical: " + modifier);
    modifier += ( GetHungerRestfulness(player.GetStatEnergy().Get()) * tendency );
    // Print("modifier hunger: " + modifier);
    modifier += ( GetThirstRestfulness(player.GetStatWater().Get()) * tendency );
    // Print("modifier thirst: " + modifier);
    modifier += ( GetMovementStateRestfulness(player));
    // Print("modifier mvt state: " + modifier);
    
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

  float GetHeatComfortRestfulness(bool isNearWarmComfort)
  {
    if (isNearWarmComfort)
    {
      // Print("[SRP_SleepMdfr] - [GetHeatComfortRestfulness] - : NEAR COMFORT!!");
      return RESTFULLNESS_FIRECOMFORT;
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
