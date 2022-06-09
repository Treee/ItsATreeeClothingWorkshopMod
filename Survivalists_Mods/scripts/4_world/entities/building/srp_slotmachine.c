class SRP_Casino_SlotMachine_Large extends House
{ 
  protected EffectSound m_SlotMachineSound;

  protected bool m_StageChanging = false;

  void SRP_Casino_SlotMachine_Large()
  {
		RegisterNetSyncVariableBool("m_StageChanging");
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (m_StageChanging)
    {
      if (m_SlotMachineSound == NULL)
      {
        RequestSlotPullSoundEvent();
      }
    }
    else
    {
      StopLoopSound();
    }
	}

  bool IsStateChanging()
  {
    return m_StageChanging;
  }
  
  void PullLever()
  {
    // if we haven't pulled the lever yet
    if (!m_StageChanging)
    { // pull the lever Kronk!
      m_StageChanging = true;

      SetSynchDirty();
      // the length of spinning sound is about 6 seconds
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(HandlePayout, 6000, false);
    }
  }

  void RequestSlotPayoutSoundEvent()
	{
    if (!GetGame().IsDedicatedServer())
		{
      PlaySoundSet(m_SlotMachineSound, GetSlotMachinePayoutSound().GetRandomElement(), 0, 0);      
		}
	}

  void RequestSlotPullSoundEvent()
	{
    if (!GetGame().IsDedicatedServer())
		{
      PlaySoundSet(m_SlotMachineSound, GetSlotMachinePullSound().GetRandomElement(), 0, 0);
      SetAnimationPhase("lever",0);
      float nextAnimationPhase = GetRotationPhaseDuration(GetAnimationPhase("spinner1_rotate"));
      SetAnimationPhase("spinner1_rotate", nextAnimationPhase);
      // SetAnimationPhase("spinner1_rotate", 0.076);
      
      float nextAnimationPhase2 = GetRotationPhaseDuration(GetAnimationPhase("spinner2_rotate"));
      SetAnimationPhase("spinner2_rotate",nextAnimationPhase2);
      // SetAnimationPhase("spinner2_rotate",0.076);

      float nextAnimationPhase3 = GetRotationPhaseDuration(GetAnimationPhase("spinner3_rotate"));
      SetAnimationPhase("spinner3_rotate",nextAnimationPhase3);
      // SetAnimationPhase("spinner3_rotate",1.076);
		}
	}

  float GetRotationPhaseDuration(float currentPhase)
  {    
    float duration = Math.RandomFloatInclusive(4.8, 5.8);
    duration += currentPhase;
    // Print("Phase: " + currentPhase + " duration: " + duration)
    return duration;
  }

  void StopLoopSound()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSoundSet(m_SlotMachineSound);
      // ProcessResults();
      SetAnimationPhase("lever",1);
    }
  }

  void HandlePayout()
  {
    ProcessResults();
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ResetLever, 2000, false);
  }

  void ResetLever()
  {
    m_StageChanging = false;
    SetSynchDirty();
  }

  TStringArray GetSlotMachinePullSound()
  {
    return {
      "Survivalists_Mods_Ambience_Casino_SlotsSpinning_SoundSet"
    };
  }
  TStringArray GetSlotMachinePayoutSound()
  {
    return {
      "Survivalists_Mods_Ambience_Casino_SlotsWinningPayout_SoundSet",
      "Survivalists_Mods_Ambience_Casino_SlotsPayout_SoundSet",
      "Survivalists_Mods_Ambience_Casino_SlotsWinning_SoundSet"
    };
  }
  TStringArray GetSlotMachineFailureSound()
  {
    return {
      "Survivalists_Mods_Ambience_Casino_SlotsFailing_SoundSet",
    };
  }

  void ProcessResults()
  {
    string reel1 = GetSlotRealIcon(GetAnimationPhase("spinner1_rotate"));
    string reel2 = GetSlotRealIcon(GetAnimationPhase("spinner2_rotate"));
    string reel3 = GetSlotRealIcon(GetAnimationPhase("spinner3_rotate"));
    // if any reels are not in line kick out
    if (reel1 == "" || reel2 == "" || reel3 == "")
    {
      if (!GetGame().IsDedicatedServer())
      {
        PlaySoundSet(m_SlotMachineSound, GetSlotMachineFailureSound().GetRandomElement(), 0, 0);
        Print("Fail No Payout");
      }
    }
    else
    {
      //check other conditions
      if (!GetGame().IsDedicatedServer())
      {
        Print("Yay payout");
        RequestSlotPayoutSoundEvent();
      }
    }
  }

  TStringArray GetSlotReelIconOrder()
  {
    return {
      "orange",
      "bell",
      "orange",
      "plum",
      "lemon",
      "orange",
      "bell",
      "plum",
      "lemon",
      "bell",
      "orange",
      "cherry",
      "cherry",
      "bell",
      "orange",
      "cherry",
      "bell",
      "cherry",
      "orange",
      "special"
    };
  }

  string GetSlotRealIcon(float animationPhase)
  {
    // get where we are relative to the animation phase. 0.05 represents 1/20 options unifiedly spaced
    int currentSlice = (animationPhase / 0.05);
    // reset index to 0 so we can have normalized data
    int currentSliceIndex = currentSlice % 20;
    //  get the upper bound of a successfull lineup. (-0.15 from max)
    float upperBound = (currentSliceIndex * 0.05) + 0.035;
    // get the lower bound of a successfull lineup. (0.15 from the max)
    float lowerBound = (currentSliceIndex * 0.05) + 0.015;

    float normalizedAnimationPhase = Math.ModFloat(animationPhase, 1);

    string icon = "";
    if (normalizedAnimationPhase >= lowerBound && normalizedAnimationPhase <= upperBound)
    {
      icon = GetSlotReelIconOrder().Get(currentSliceIndex);
    }
    Print("Animation Phase: " + animationPhase + " currentSlice: " + currentSlice + " clamped index: " + currentSliceIndex + " icon: " + icon + " normalized: " + normalizedAnimationPhase + " lowerbound: " + lowerBound + " upperbound: " + upperBound);
    return icon;
  }
};