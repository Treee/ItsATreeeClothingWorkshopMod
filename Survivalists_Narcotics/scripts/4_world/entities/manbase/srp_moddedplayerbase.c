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
      soundSet = GetZombieAttackSounds().GetRandomElement();       
    } else if (chance < 50) {
      soundSet = GetZombieCallToArms().GetRandomElement();       
    } else if (chance < 75) {
      soundSet = GetAnimalSounds_Wolf().GetRandomElement();       
    } else {
      soundSet = GetAnimalSounds_Bear().GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void PlayHappySound()
  {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 20) {
      soundSet = GetAnimalSounds_Sheep().GetRandomElement();       
    } else if (chance < 40) {
      soundSet = GetAnimalSounds_Hog().GetRandomElement();       
    } else if (chance < 60) {
      soundSet = GetAnimalSounds_Cows().GetRandomElement();       
    } else if (chance < 80) {
      soundSet = GetAnimalSounds_Chicken().GetRandomElement();       
    } else {
      soundSet = GetAnimalSounds_Deer().GetRandomElement();       
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

  TStringArray GetZombieAttackSounds()
  {
    return {
      "Zmb_Attack_Light1_SoundSet",
      "Zmb_Attack_Light2_SoundSet",
      "ZmbM_Skinny_Old_LightHit_Soundset",
      "ZmbM_Fat_LightHit_Soundset",
      "ZmbF_Normal_LightHit_Soundset",
      "ZmbM_Skinny_LightHit_Soundset",
      "ZmbF_Skinny_LightHit_Soundset",
      "ZmbM_Normal_Old_LightHit_Soundset",
      "ZmbM_Old_LightHit_Soundset",
      "ZmbM_Normal_LightHit_Soundset",
      "ZmbM_Normal2_LightHit_Soundset",
      "ZmbF_Fat_LightHit_Soundset",
      "ZmbF_Old_LightHit_Soundset"
      "ZmbM_Skinny_Old_Attack_Soundset",
      "ZmbM_Fat_Attack_Soundset",
      "ZmbF_Normal_Attack_Soundset",
      "ZmbM_Skinny_Attack_Soundset",
      "ZmbF_Skinny_Attack_Soundset",
      "ZmbM_Normal_Old_Attack_Soundset",
      "ZmbM_Old_Attack_Soundset",
      "ZmbM_Normal_Attack_Soundset",
      "ZmbM_Normal2_Attack_Soundset",
      "ZmbF_Fat_Attack_Soundset",
      "ZmbF_Old_Attack_Soundset"
      "Zmb_Attack_Heavy1_SoundSet",
      "Zmb_Attack_Heavy2_SoundSet",
      "Zmb_Attack_TwoHands_SoundSet",
      "ZmbM_Fat_HeavyHit_Soundset",
      "ZmbM_Skinny_Old_HeavyHit_Soundset",
      "ZmbF_Normal_HeavyHit_Soundset",
      "ZmbM_Skinny_HeavyHit_Soundset",
      "ZmbF_Skinny_HeavyHit_Soundset",
      "ZmbM_Normal_Old_HeavyHit_Soundset",
      "ZmbM_Old_HeavyHit_Soundset",
      "ZmbM_Normal_HeavyHit_Soundset",
      "ZmbM_Normal2_HeavyHit_Soundset",
      "ZmbF_Fat_HeavyHit_Soundset",
      "ZmbF_Old_HeavyHit_Soundset"
    };
  }

  TStringArray GetZombieCallToArms()
  {
    return {
      "ZmbM_Skinny_Old_CallToArmsShort_Soundset",      
      "ZmbM_Fat_CallToArmsShort_Soundset",          
      "ZmbF_Normal_CallToArmsShort_Soundset",          
      "ZmbM_Skinny_CallToArmsShort_Soundset",          
      "ZmbF_Skinny_CallToArmsShort_Soundset",          
      "ZmbM_Normal_Old_CallToArmsShort_Soundset",          
      "ZmbM_Old_CallToArmsShort_Soundset",          
      "ZmbM_Normal_CallToArmsShort_Soundset",          
      "ZmbM_Normal2_CallToArmsShort_Soundset",          
      "ZmbF_Fat_CallToArmsShort_Soundset",          
      "ZmbF_Old_CallToArmsShort_Soundset"
    };
  }

  TStringArray GetAnimalSounds_Sheep()
  {
    return {
      "SheepBleat_A_SoundSet",
      "SheepBleat_B_SoundSet",
      "SheepBleat_C_SoundSet",
      "SheepBleat_D_SoundSet",
      "SheepBleat_E_SoundSet",
      "SheepBleat_F_SoundSet",
      "SheepBleat_G_SoundSet",
      "SheepBleat_H_SoundSet",
      "SheepBleatX1_SoundSet",
      "SheepBleatX2_SoundSet",
      "SheepBleatX3_SoundSet",
      "SheepBleatX4_SoundSet",
      "SheepBleatX5_SoundSet",
    };
  }

  TStringArray GetAnimalSounds_Hog()
  {
    return {
      "HogGrunt_A_SoundSet",
      "HogGrunt_A_Squeal_SoundSet",
      "HogGrunt_B_SoundSet",
      "HogGrunt_B_Long_SoundSet",
      "HogGrunt_C_SoundSet",
      "HogGrunt_D_SoundSet",
      "HogGrunt_E_SoundSet",
      "HogGrunt_F_SoundSet",
      "HogGrunt_G_SoundSet",
      "HogGrunt_H_SoundSet",
      "HogGrunt_I_SoundSet",
      "HogSniff_SoundSet",
      "HogSqueal_SoundSet",
      "HogSscratch3_SoundSet",
      "HogSscratch4_SoundSet",
      "HogClaw_SoundSet",
    };
  }

  TStringArray GetAnimalSounds_Bear()
  {
    return {
      "BearAttack_SoundSet",
      "BearBreath_SoundSet",
      "BearGrowl_SoundSet",
      "BearMumble_SoundSet",
      "BearRoar_SoundSet",
      "BearRoarShort_SoundSet",
      "BearSigh_SoundSet",
      "BearSighLong_SoundSet",
      "BearSighShort_SoundSet",
      "BearSnarl_SoundSet",
      "BearSnarlLong_SoundSet",
      "BearSnort_SoundSet",
      "BearGrowl_1_SoundSet",
      "BearGrowl_3_SoundSet",
      "BearGrowl_4_SoundSet",
      "BearGrowl_5_SoundSet",
      "BearGrowl_6_SoundSet",
      "BearGrowl_7_SoundSet",
      "BearGrowl_8_SoundSet",
      "BearGrowl_9_SoundSet",
      "BearGrowl_10_SoundSet",
      "BearGrowl_12_SoundSet",
      "BearGrowl_13_SoundSet",
      "BearRoar_1_SoundSet",
      "BearRoar_2_SoundSet",
      "BearRoar_3_SoundSet",
      "BearRoar_5_SoundSet",
      "BearRoar_6_SoundSet",
      "BearRoar_7_SoundSet",
      "BearSighLong_0_SoundSet",
      "BearSighLong_1_SoundSet",
      "BearSighLong_2_SoundSet",
      "BearSnarlLong_0_SoundSet",
      "BearSnarlLong_1_SoundSet",
      "BearSnarlLong_2_SoundSet"
    };
  }

  TStringArray GetAnimalSounds_Wolf()
  {
    return {
      "WolfBark_SoundSet",
      "WolfBark2_SoundSet",
      "WolfBark3_SoundSet",
      "WolfBreath_SoundSet",
      "WolfGroans_SoundSet",
      "WolfGrowl_A_SoundSet",
      "WolfGrowl_B_SoundSet",
      "WolfGrowl_A_SoundSet",
      "WolfPant_SoundSet",
      "WolfPantShort_SoundSet",
      "WolfPantShort_SoundSet",
      "WolfSnarl_SoundSet",
      "WolfSnarlShort_SoundSet",
      "WolfWhimper_SoundSet",
      "WolfYelp_SoundSet",
      "WolfYelp_SoundSet",
      "WolfDeath_SoundSet",
      "WolfHowl_SoundSet",
      "WolfHowls_SoundSet",
    };
  }

  TStringArray GetAnimalSounds_Cows()
  {
    return {
      "CattleBawl_SoundSet",
      "CattleBellow_SoundSet",
      "CattleBreath_SoundSet",
      "CattleGroan_SoundSet",
      "CattleHoarse_SoundSet",
      "CattleHonk_SoundSet",
      "CattleMooA_SoundSet",
      "CattleMooALong_SoundSet",
      "CattleMooB_SoundSet",
      "CattleMooC_SoundSet",
      "CattleRoar_SoundSet",
      "CattleSigh_SoundSet",
      "CattleSighLong_SoundSet",
      "CattleMooX1_SoundSet",
      "CattleMooX1_Tail_SoundSet",
      "CattleMooX2_SoundSet",
      "CattleMooX2_Tail_SoundSet",
      "CattleMooX3_SoundSet",
      "CattleMooX3_Tail_SoundSet",
      "CattleMooX4_SoundSet",
      "CattleMooX4_Tail_SoundSet",
      "CattleMooX5_SoundSet",
      "CattleMooX5_Tail_SoundSet",
      "CattleSnort_SoundSet"
    };
  }

  TStringArray GetAnimalSounds_Deer()
  {
    return {
      "DeerBleat_SoundSet",
      "DoeBleat_SoundSet",
      "DeerBreath_SoundSet",
      "DeerBark_SoundSet",
      "DoeBark_SoundSet",
      "RoeBark_SoundSet",
      "DeerCall_SoundSet",
      "DeerCallFear_SoundSet",
      "DeerGrunt_SoundSet",
      "DeerRoar_SoundSet",
      "DeerRoarLong_SoundSet",
      "DeerRoarShort_SoundSet",
      "DeerSnort_SoundSet",
      "RoeBarkX1_SoundSet",
      "RoeBarkX1_Tail_SoundSet",
      "RoeBarkX2_SoundSet",
      "RoeBarkX2_Tail_SoundSet",
      "RoeBarkX3_SoundSet",
      "RoeBarkX3_Tail_SoundSet",
      "RoeBarkX4_SoundSet",
      "RoeBarkX4_Tail_SoundSet",
      "RoeBarkX5_SoundSet",
      "RoeBarkX5_Tail_SoundSet"
    };
  }

  TStringArray GetAnimalSounds_Chicken()
  {
    return {
      "HenChick_SoundSet",
      "HenCluck_A_SoundSet",
      "HenCluck_A_High_SoundSet",
      "HenCluck_B_SoundSet",
      "HenCluck_B_High_SoundSet",
      "HenCluck_C_SoundSet",
      "HenCluck_C_High_SoundSet",
      "HenCluck_D_SoundSet",
      "HenCluck_D_High_SoundSet",
      "HenCluck_E_SoundSet",
      "HenCluck_E_High_SoundSet",
      "HenCluck_Silky_SoundSet",
      "HenCluck_Silky_High_SoundSet",
      "HenCrow_A_SoundSet",
      "HenCrow_B_SoundSet",
      "HenCrow_C_SoundSet",
      "HenCrow_D_SoundSet",
      "HenCrow_E_SoundSet",
      "HenCrow_F_SoundSet",
      "HenCrow_G_SoundSet",
      "HenScream_SoundSet",
      "BirdFlapping_SoundSet",
      "BirdFlapping_short_SoundSet",
      "BirdFlapping_mid_SoundSet",
      "BirdFlapping_long_SoundSet",
      "HenCrowX1_SoundSet",
    };
  }
}
