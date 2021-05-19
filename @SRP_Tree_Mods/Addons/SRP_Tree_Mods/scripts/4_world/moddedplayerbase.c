modded class PlayerBase
{
  int m_alcoholConsumed = 0;
  int m_alcoholMax = 100;

  EffectSound m_AcidSounds;
  EffectSound m_SleepSounds;

  // override void OnConnect()
	// {
	// 	super.OnConnect();
  //   Print("SRP ModdedPlayerBase: OnConnect() ");
  //   // Start player sleepyness
  //   if( GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SLEEP ) )
	// 	{
	// 		GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SLEEP );
	// 	}
	// 	GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SLEEP );
  // }

  EStatLevels GetStatLevelTiredness()
	{
		float tiredness = GetSingleAgentCount(SRP_Medical_Agents.SLEEP_AGENT);
		return GetStatLevel(tiredness, PlayerConstants.SL_TIREDNESS_CRITICAL, PlayerConstants.SL_TIREDNESS_LOW, PlayerConstants.SL_TIREDNESS_NORMAL, PlayerConstants.SL_TIREDNESS_HIGH);
	}

  bool HasSleepAgent()
  {
    return m_AgentPool.HasAgent(SRP_Medical_Agents.SLEEP_AGENT);
  }

  void SetPlayerSleepingMdfr(bool isSleeping){
    PluginTransmissionAgents transmissionAgents = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
    AgentBase agent = transmissionAgents.GetAgentByAgentId(SRP_Medical_Agents.SLEEP_AGENT);
    
    if (isSleeping && agent) {
      Print("sleeping and agent is not null");
      SleepAgent.Cast(agent).GoToSleep();
    } else if (!isSleeping && agent){
      Print("not sleeping and agent is not null");
      SleepAgent.Cast(agent).WakeUp();
    }

    if (!HasSleepAgent()) {
      Print("Insert Agent");
      InsertAgent(SRP_Medical_Agents.SLEEP_AGENT);
    }
  }

  void TryYawn() {    
    float chance = Math.RandomFloat01() * 100;
    Print("SRP Modded Playerbase:: TryYawn chance to yawn: " + chance);
    if (chance > 90) {
      PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns.Get(0), 0, 0);
    }
  }

  string GetScarySound() {
    float chance = Math.RandomFloat01() * 100;
    Print("GetScarySound " + chance);
    if (chance < 25) {
      return SRP_SoundSets_ZombieAttack.GetRandomElement();       
    } else if (chance < 50) {
      return SRP_SoundSets_CallToArms.GetRandomElement();       
    } else if (chance < 75) {
      return SRP_SoundSets_Wolf.GetRandomElement();       
    } else {
      return SRP_SoundSets_Bear.GetRandomElement();       
    }
  }

  string GetHappySound() {
    float chance = Math.RandomFloat01() * 100;
    Print("GetHappySound " + chance);
    if (chance < 20) {
      return SRP_SoundSets_SheepBleats.GetRandomElement();       
    } else if (chance < 40) {
      return SRP_SoundSets_HogGrunts.GetRandomElement();       
    } else if (chance < 60) {
      return SRP_SoundSets_Cows.GetRandomElement();       
    } else if (chance < 80) {
      return SRP_SoundSets_Chicken.GetRandomElement();       
    } else {
      return SRP_SoundSets_Deer.GetRandomElement();       
    }
  }

  void ModifyPPEEffect(float hue = 60, float radialXBlur = 0, float radialYBlur = 0, float chromaX = 0, float chromaY = 0, float radialXOffset = 0, float radialYOffset = 0) {
    CameraEffects.changeRadBlurXEffect(radialXBlur);
    CameraEffects.changeRadBlurYEffect(radialYBlur);
    
    CameraEffects.changeRadBlurXOffsetEffect(radialXOffset);
    CameraEffects.changeRadBlurXOffsetEffect(radialYOffset);

    CameraEffects.changeChromaX(chromaX);
    CameraEffects.changeChromaY(chromaY);

    CameraEffects.changeHue(hue);
  }

  void DisableAllMyModifiers() {
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TEST );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_STONED );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TOBACCO );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSMILE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSKULL );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_MUSHROOMS );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_METH );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_COCAINE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_PCP );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_HEROINE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ALCOHOL );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BATHSALTS );    
  }

  // Drug Effects
  void StonedModifier(float stoned, float radialBlur = 0) {
    ModifyPPEEffect(stoned, radialBlur, radialBlur);
    float chance = Math.RandomFloat01() * 100;
    if (chance > 85) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
    chance = Math.RandomFloat01() * 100;
    if (chance > 90) // 15% chance to laugh
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    // Print("StonedModifier stone: " + stonedValue + " radial: " + radialBlur);
  }
  
  void TobaccoModifier(float tobaccod, float radialBlur = 0) {
    ModifyPPEEffect(tobaccod, radialBlur, radialBlur);
    float chanceToCough = Math.RandomFloat01() * 100;
    if (chanceToCough > 90) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
    // Print("TobaccoModifier tobacco: " + tobaccoValue + " radial: " + radialBlur);
  }

  void BathSaltsModifier(float hue = 60, float radialBlurX = 0, float radialBlurY = 0, float chromaX = 0, float chromaY = 0)
  {
    ModifyPPEEffect(hue, radialBlurX, radialBlurY, chromaX, chromaY);
    float chance = Math.RandomFloat01() * 100;
    if (chance > 80) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FEVERBLUR);
    }
    chance = Math.RandomFloat01() * 100;
    if (chance > 70 && chance < 90)
    {
      PlaySoundSet(m_AcidSounds, GetScarySound(), 0, 0);
    } else if (chance > 89) {
      PlaySoundSet(m_AcidSounds, GetHappySound(), 0, 0);
    }
    // Print("BathSaltsModifier radialBlurX: " + radialBlurX + " chromaX: " + chromaX + " chromaY: " + chromaY);
  }

  void MethModifier(float hue = 60, float radialBlurX = 0, float radialBlurY = 0)
  {
    ModifyPPEEffect(hue, radialBlurX, radialBlurY);
    float chance = Math.RandomFloat01() * 100;
    if (chance > 85) // 15% chance to laugh
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    chance = Math.RandomFloat01() * 100;
    if (chance > 90 && chance < 95)
    {
      PlaySoundSet(m_AcidSounds, GetScarySound(), 0, 0);
    } else if (chance > 94) {
      PlaySoundSet(m_AcidSounds, GetHappySound(), 0, 0);
    }    
    // Print("BathSaltsModifier radialBlurX: " + radialBlurX + " chromaX: " + chromaX + " chromaY: " + chromaY);
  }

  void AcidModifier(float radialBlurX = 0, float radialBlurY = 0, float chromaX = 0, float chromaY = 0, float hue = 60) {
    ModifyPPEEffect(hue, radialBlurX, radialBlurY, chromaX, chromaY);
    float chance = Math.RandomFloat01() * 100;
    if (chance > 70 && chance < 90)
    {
      PlaySoundSet(m_AcidSounds, GetScarySound(), 0, 0);
    } else if (chance > 89) {
      PlaySoundSet(m_AcidSounds, GetHappySound(), 0, 0);
    }
    chance = Math.RandomFloat01() * 100;
    if (chance > 10 && chance < 30) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (chance > 30 && chance < 40) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
    } else if (chance > 40 && chance < 60) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
    } else if (chance > 60 && chance < 80) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
    } else if (chance > 80 && chance < 90) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (chance > 90 && chance < 100) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
    // Print("AcidModifier chroma: " + chroma + " radial: " + radialBlur + " hue: " + hue);
  }

  void AlcoholModifier(float hue = 60, float radialOffsetXValue = 0,  float radialOffsetYValue = 0, int radialBlur = 0) {
    ModifyPPEEffect(hue, radialBlur, radialBlur, 0, 0, radialOffsetXValue, radialOffsetYValue);
    
    float chance = Math.RandomFloat01() * 100;
    if (chance > 85) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    // Print("AlcoholModifier: "radial: " + radialBlur + " hue: " + hue);
  }
};