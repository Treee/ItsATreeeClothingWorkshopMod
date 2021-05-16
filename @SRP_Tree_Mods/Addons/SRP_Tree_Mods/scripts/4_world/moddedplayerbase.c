modded class PlayerBase
{
  int m_alcoholConsumed = 0;
  int m_alcoholMax = 100;

  EffectSound m_AcidSounds;

  override void OnConnect()
	{
		super.OnConnect();
    Print("SRP ModdedPlayerBase: OnConnect() ");
    // Start player sleepyness
    if( GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SLEEP ) )
		{
			GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SLEEP );
		}
		GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SLEEP );
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

    CameraEffects.changeRadBlurXEffect(radialBlur);
    CameraEffects.changeRadBlurYEffect(radialBlur);
    CameraEffects.changeHue(stoned);
    float chance = Math.RandomIntInclusive(0, 100);
    if (chance > 85) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
    chance = Math.RandomIntInclusive(0, 100);
    if (chance > 90) // 15% chance to laugh
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    // Print("StonedModifier stone: " + stonedValue + " radial: " + radialBlur);
  }
  
  void TobaccoModifier(float tobaccod, float radialBlur = 0) {
    CameraEffects.changeRadBlurXEffect(radialBlur);
    CameraEffects.changeRadBlurYEffect(radialBlur);    
    CameraEffects.changeHue(tobaccod);
    float chanceToCough = Math.RandomIntInclusive(0, 100);
    if (chanceToCough > 90) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
    // Print("TobaccoModifier tobacco: " + tobaccoValue + " radial: " + radialBlur);
  }

  void BathSaltsModifier(float hue = 60, float radialBlurX = 0, float radialBlurY = 0, float chromaX = 0, float chromaY = 0)
  {
    CameraEffects.changeRadBlurXEffect(radialBlurX);
    CameraEffects.changeRadBlurYEffect(radialBlurY);  
    CameraEffects.changeChromaX(chromaX);
    CameraEffects.changeChromaY(chromaY);
    CameraEffects.changeHue(hue);
    float chance = Math.RandomIntInclusive(0, 100);
    if (chance > 80) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FEVERBLUR);
    }
    chance = Math.RandomIntInclusive(0, 100);
    if (chance > 70)
    {
      PlaySoundSet(m_AcidSounds, SRP_AcidSoundSets.GetRandomElement(), 0, 0);
    }
    // Print("BathSaltsModifier radialBlurX: " + radialBlurX + " chromaX: " + chromaX + " chromaY: " + chromaY);
  }

  void MethModifier(float hue = 60, float radialBlurX = 0, float radialBlurY = 0)
  {
    CameraEffects.changeRadBlurXEffect(radialBlurX);
    CameraEffects.changeRadBlurYEffect(radialBlurY);  
    CameraEffects.changeHue(hue);
    float chance = Math.RandomIntInclusive(0, 100);
    if (chance > 85) // 15% chance to laugh
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    chance = Math.RandomIntInclusive(0, 100);
    if (chance > 90)
    {
      PlaySoundSet(m_AcidSounds, SRP_AcidSoundSets.GetRandomElement(), 0, 0);
    }
    // Print("BathSaltsModifier radialBlurX: " + radialBlurX + " chromaX: " + chromaX + " chromaY: " + chromaY);
  }

  void AcidModifier(float radialBlurX = 0, float radialBlurY = 0, float chromaX = 0, float chromaY = 0, float hue = 60) {
    CameraEffects.changeRadBlurXEffect(radialBlurX);
    CameraEffects.changeRadBlurYEffect(radialBlurY);    

    CameraEffects.changeChromaX(chromaX);
    CameraEffects.changeChromaY(chromaY);    
    CameraEffects.changeHue(hue);
    float chance = Math.RandomIntInclusive(0, 100);
    if (chance > 75)
    {
      PlaySoundSet(m_AcidSounds, SRP_AcidSoundSets.GetRandomElement(), 0, 0);
    }
    chance = Math.RandomIntInclusive(0, 100);
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
    CameraEffects.changeHue(hue);
    
    CameraEffects.changeRadBlurXEffect(radialBlur);
    CameraEffects.changeRadBlurYEffect(radialBlur);

    CameraEffects.changeRadBlurXOffsetEffect(radialOffsetXValue);
    CameraEffects.changeRadBlurXOffsetEffect(radialOffsetYValue);
    float chance = Math.RandomIntInclusive(0, 100);
    if (chance > 85) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    // Print("AlcoholModifier: "radial: " + radialBlur + " hue: " + hue);
  }
};