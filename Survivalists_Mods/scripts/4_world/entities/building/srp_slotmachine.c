class SRP_Casino_SlotMachine_Large extends House
{ 
  protected EffectSound 		m_SlotMachineSound;

  bool m_StageChanging = false;

  void SRP_Casino_SlotMachine_Large()
  {
		// RegisterNetSyncVariableBool("m_StageChanging");
		// GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CheckLastState, 500, false);
  }

  override void SetActions()
	{
    super.SetActions();
    AddAction(ActionPullSlotMachineLever);
	}

  // override void OnVariablesSynchronized()
	// {
	// 	super.OnVariablesSynchronized();
  //   if (m_StageChanging)
  //   {
  //     if (m_SlotMachineSound == NULL)
  //     {
  //       RequestSlotPullSoundEvent();
  //     }
  //   }		
	// }
  
  void PullLever()
  {
    // if we haven't pulled the lever yet
    if (!IsDoorOpen(0))
    { // pull the lever Kronk!
      m_StageChanging = true;
      // RequestSlotPullSoundEvent();
      SetSynchDirty();
      // the length of spinning sound is about 6 seconds
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ResetLever, 6000, false);
    }
  }

  void RequestSlotPayoutSoundEvent()
	{
    if (!GetGame().IsDedicatedServer())
		{
      PlaySoundSet(m_SlotMachineSound, GetSlotMachinePayoutSound().GetRandomElement(), 0, 0);      
		}
	}

  void StopLoopSound()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSoundSet(m_SlotMachineSound);
    }
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