modded class PlayerBase
{
  EffectSound m_AcidSounds;

  bool m_IsUnderWeedEffect = false;
  bool m_IsUnderTobaccoEffect = false;
  bool m_IsUnderMethEffect = false;
  bool m_IsUnderBathEffect = false;
  bool m_IsUnderAcidSmileEffect = false;
  bool m_IsUnderAcidSkullEffect = false;
  bool m_IsUnderAlcoholEffect = false;
  bool m_IsUnderCocaineEffect = false;

  void PlayScarySound()
  {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 25) {
      soundSet = SRP_SoundSets_ZombieAttack.GetRandomElement();       
    } else if (chance < 50) {
      soundSet = SRP_SoundSets_CallToArms.GetRandomElement();       
    } else if (chance < 75) {
      soundSet = SRP_SoundSets_Wolf.GetRandomElement();       
    } else {
      soundSet = SRP_SoundSets_Bear.GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void PlayHappySound()
  {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 20) {
      soundSet = SRP_SoundSets_SheepBleats.GetRandomElement();       
    } else if (chance < 40) {
      soundSet = SRP_SoundSets_HogGrunts.GetRandomElement();       
    } else if (chance < 60) {
      soundSet = SRP_SoundSets_Cows.GetRandomElement();       
    } else if (chance < 80) {
      soundSet = SRP_SoundSets_Chicken.GetRandomElement();       
    } else {
      soundSet = SRP_SoundSets_Deer.GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void DisableAllMyModifiers()
  {
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_TEST );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_STONED );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_TOBACCO );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ACIDSMILE );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ACIDSKULL );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_METH );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
    GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_BATHSALTS );    
    // GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_MUSHROOMS );
    // GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_PCP );
    // GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_HEROINE );
  }

  bool IsUnderTheInfluence()
  {
    // Print("Weed: " + m_IsUnderWeedEffect + "Tobacco: " + m_IsUnderTobaccoEffect + "Meth: " + m_IsUnderMethEffect + "Bath: " + m_IsUnderBathEffect + "Acid: " + m_IsUnderAcidEffect + "Alcohol: " + m_IsUnderAlcoholEffect  "Cocaine: " + m_IsUnderCocaineEffect);
    return m_IsUnderWeedEffect || m_IsUnderTobaccoEffect || m_IsUnderMethEffect || m_IsUnderBathEffect || m_IsUnderAcidSmileEffect || m_IsUnderAcidSkullEffect || m_IsUnderAlcoholEffect || m_IsUnderCocaineEffect;
  }

  void RemoveAllSymptoms()
  {
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_TEST);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_WEED);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_TOBACCO);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_ACIDSMILE);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_ACIDSKULL);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_COCAINE);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_METH);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_BATHSALTS);
    GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_ALCOHOL);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_HEROINE);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_PCP);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_DrugSymptomIDs.SYMPTOM_MUSHROOMS);
  }
}
