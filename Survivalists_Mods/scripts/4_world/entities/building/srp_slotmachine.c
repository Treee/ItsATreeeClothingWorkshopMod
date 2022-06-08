class SRP_Casino_SlotMachine_Large extends House
{ 
  protected EffectSound 		m_SlotMachineSound;

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
      SetAnimationPhase("lever",1);
      float nextAnimationPhase = GetRotationPhaseDuration(GetAnimationPhase("spinner1_rotate"));
      SetAnimationPhase("spinner1_rotate", nextAnimationPhase);
      
      float nextAnimationPhase2 = GetRotationPhaseDuration(GetAnimationPhase("spinner2_rotate"));
      SetAnimationPhase("spinner2_rotate",nextAnimationPhase2);

      float nextAnimationPhase3 = GetRotationPhaseDuration(GetAnimationPhase("spinner3_rotate"));
      SetAnimationPhase("spinner3_rotate",nextAnimationPhase3);
		}
	}

  float GetRotationPhaseDuration(float currentPhase)
  {    
    float duration = Math.RandomFloatInclusive(4.4, 5.8);
    duration += currentPhase;
    // Print("Phase: " + currentPhase + " duration: " + duration)
    return duration;
  }

  void StopLoopSound()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSoundSet(m_SlotMachineSound);
      SetAnimationPhase("lever",0);
    }
  }

  void HandlePayout()
  {
    if (!GetGame().IsDedicatedServer())
		{
      RequestSlotPayoutSoundEvent();
    }
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
};