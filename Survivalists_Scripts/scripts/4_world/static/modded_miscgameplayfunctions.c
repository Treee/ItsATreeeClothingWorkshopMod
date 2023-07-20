modded class MiscGameplayFunctions
{
  static float GetTirednessMetabolicSpeed(int movement_speed)
	{
		float speed;
		switch (movement_speed)
		{
		case DayZPlayerConstants.MOVEMENTIDX_WALK:
			speed = PlayerConstants.METABOLIC_SPEED_TIREDNESS_WALK;
		break;
		case DayZPlayerConstants.MOVEMENTIDX_RUN:
			speed = PlayerConstants.METABOLIC_SPEED_TIREDNESS_JOG;
		break;
		case DayZPlayerConstants.MOVEMENTIDX_SPRINT:
			speed = PlayerConstants.METABOLIC_SPEED_TIREDNESS_SPRINT;
		break;
		default:
			speed = 0;
		break;
		}

		speed += PlayerConstants.METABOLIC_SPEED_TIREDNESS_BASAL;
		return speed;
	}
	
  static void AttachTo(notnull Object child, notnull Object parent, vector local_pos = "0 0 0", vector orientation = "0 0 0", string mem_point = "")
  {
    if (mem_point != "")
    {
      if (parent.MemoryPointExists(mem_point))
      {
        local_pos += parent.GetMemoryPointPos(mem_point);
      }
    }

    child.SetOrientation(orientation);
    child.SetPosition(local_pos);

    parent.AddChild(child, -1);
    parent.Update();
  }
//========================= LOOT HELPERS
  static string GetRandomZombieType()
  {
    return GetZombieTypes().GetRandomElement();
  }
  static string GetRandomEnhancedZombieType()
  {
    return GetEnhancedZombieTypes().GetRandomElement();
  }
  static string GetRandomRareLootType()
  {
    return GetRareLootTypes().GetRandomElement();
  }
  static string GetRandomGrenadeType()
  {
    return GetSpawnableGrenades().GetRandomElement();
  }
  static string GetRandomWeaponsType()
  {
    return GetSpawnableWeapons().GetRandomElement();
  }
  static string GetRandomAmmoType()
  {
    return GetSpawnableAmmo().GetRandomElement();
  }
  static string GetRandomOpticType()
  {
    return GetSpawnableOptics().GetRandomElement();
  }
  static string GetRandomMagazineType()
  {
    return GetSpawnableMags().GetRandomElement();
  }
  static string GetRandomMiscHightTierType()
  {
    return GetMiscHighTier().GetRandomElement();
  }

//========================= LOOT LISTS
  static TStringArray GetRareLootTypes()
  {
    return {
      "SRP_Mining_RawOre_Zinc",
      "SRP_Mining_RawOre_Coal",
      "SRP_Mining_RawOre_Silver",
      "SRP_ForgeIngot_Silver",
      "SRP_ForgeIngot_Zinc",
      "SRP_ForgeIngot_Brass",
    };
  }
  static TStringArray GetEnhancedZombieTypes()
  {
    return {
      "DUB_ZmbVariants_1",
      "DUB_ZmbVariants_2",
      "DUB_ZmbVariants_3",
      "DUB_ZmbVariants_4",
      "DUB_ZmbVariants_5",
    };
  }
  static TStringArray GetZombieTypes()
  {
    return {
      "ZmbM_HermitSkinny_Beige",
      "ZmbM_HermitSkinny_Black",
      "ZmbM_HermitSkinny_Green",
      "ZmbM_HermitSkinny_Red",
      "ZmbM_FarmerFat_Blue",
      "ZmbM_FarmerFat_Brown",
      "ZmbM_FarmerFat_Green",
      "ZmbF_CitizenANormal_Beige",
      "ZmbF_CitizenANormal_Blue",
      "ZmbM_CitizenASkinny_Blue",
      "ZmbM_CitizenASkinny_Grey",
      "ZmbM_CitizenASkinny_Red",
      "ZmbM_CitizenBFat_Blue",
      "ZmbM_CitizenBFat_Red",
      "ZmbM_CitizenBFat_Green",
      "ZmbF_CitizenBSkinny",
      "ZmbM_PrisonerSkinny",
      "ZmbM_FishermanOld_Blue",
      "ZmbM_FishermanOld_Green",
      "ZmbM_FishermanOld_Grey",
      "ZmbM_FishermanOld_Red",
      "ZmbM_JournalistSkinny",
      "ZmbF_JournalistNormal_Blue",
      "ZmbF_JournalistNormal_Green",
      "ZmbF_JournalistNormal_Red",
      "ZmbM_HikerSkinny_Blue",
      "ZmbM_HikerSkinny_Green",
      "ZmbM_HikerSkinny_Yellow",
      "ZmbF_HikerSkinny_Blue",
      "ZmbF_HikerSkinny_Grey",
      "ZmbF_HikerSkinny_Green",
      "ZmbF_HikerSkinny_Red",
      "ZmbF_SurvivorNormal_Blue",
      "ZmbF_SurvivorNormal_Red",
      "ZmbF_SurvivorNormal_White",
      "ZmbM_CommercialPilotOld_Blue",
      "ZmbM_CommercialPilotOld_Olive",
      "ZmbM_CommercialPilotOld_Brown",
      "ZmbM_MotobikerFat_Beige",
      "ZmbM_MotobikerFat_Black",
      "ZmbM_MotobikerFat_Blue",
      "ZmbM_VillagerOld_Blue",
      "ZmbM_VillagerOld_White",
      "ZmbM_SkaterYoung_Brown",
      "ZmbM_SkaterYoung_Green",
      "ZmbM_SkaterYoung_Grey",
      "ZmbF_SkaterYoung_Brown",
      "ZmbF_SkaterYoung_Striped",
      "ZmbF_SkaterYoung_Violet",
      "ZmbF_BlueCollarFat_Blue",
      "ZmbF_BlueCollarFat_Green",
      "ZmbF_BlueCollarFat_Red",
      "ZmbF_BlueCollarFat_White",
      "ZmbF_MechanicNormal_Beige",
      "ZmbF_MechanicNormal_Green",
      "ZmbF_MechanicNormal_Grey",
      "ZmbF_MechanicNormal_Orange",
      "ZmbM_MechanicSkinny_Blue",
      "ZmbM_MechanicSkinny_Grey",
      "ZmbM_MechanicSkinny_Green",
      "ZmbM_MechanicSkinny_Red",
      "ZmbM_ConstrWorkerNormal_Beige",
      "ZmbM_ConstrWorkerNormal_Black",
      "ZmbM_ConstrWorkerNormal_Green",
      "ZmbM_ConstrWorkerNormal_Grey",
      "ZmbM_HeavyIndustryWorker",
      "ZmbM_OffshoreWorker_Green",
      "ZmbM_OffshoreWorker_Orange",
      "ZmbM_OffshoreWorker_Red",
      "ZmbM_OffshoreWorker_Yellow",
      "ZmbM_HandymanNormal_Beige",
      "ZmbM_HandymanNormal_Blue",
      "ZmbM_HandymanNormal_Green",
      "ZmbM_HandymanNormal_Grey",
      "ZmbM_HandymanNormal_White",
      "ZmbM_Jacket_beige",
      "ZmbM_Jacket_black",
      "ZmbM_Jacket_blue",
      "ZmbM_Jacket_brown",
      "ZmbM_Jacket_greenchecks",
      "ZmbM_Jacket_grey",
      "ZmbM_Jacket_khaki",
      "ZmbM_Jacket_stripes",
      "ZmbF_PatientOld",
      "ZmbM_PatientSkinny",
      "ZmbF_ShortSkirt_beige",
      "ZmbF_ShortSkirt_brown",
      "ZmbF_ShortSkirt_green",
      "ZmbF_ShortSkirt_grey",
      "ZmbF_ShortSkirt_checks",
      "ZmbF_ShortSkirt_white",
      "ZmbF_ShortSkirt_yellow",
      "ZmbF_VillagerOld_Green",
      "ZmbF_VillagerOld_Red",
      "ZmbF_VillagerOld_White",
      "ZmbF_MilkMaidOld_Beige",
      "ZmbF_MilkMaidOld_Black",
      "ZmbF_MilkMaidOld_Grey",
      "ZmbM_ClerkFat_Grey",
      "ZmbM_ClerkFat_Khaki",
      "ZmbM_ClerkFat_White",
      "ZmbF_Clerk_Normal_Blue",
      "ZmbF_Clerk_Normal_White",
      "ZmbF_Clerk_Normal_Red",
      "ZmbF_ClerkFat_Black",
      "ZmbF_ClerkFat_GreyPattern",
      "ZmbF_ClerkFat_BluePattern",
      "ZmbF_ClerkFat_White",
      "ZmbM_SoldierNormal",
      "ZmbM_usSoldier_normal_Woodland",
      "ZmbM_usSoldier_normal_Desert",
      "ZmbM_usSoldier_Officer_Desert",
      "ZmbM_usSoldier_Officer_Convoy",
      "ZmbM_usSoldier_Heavy_Woodland",
      "ZmbM_PatrolNormal_PautRev",
      "ZmbM_PatrolNormal_Autumn",
      "ZmbM_PatrolNormal_Flat",
      "ZmbM_PatrolNormal_Summer",
      "ZmbM_NBC_Grey",
      "ZmbM_PolicemanFat",
      "ZmbF_PoliceWomanNormal",
      "ZmbM_PolicemanSpecForce",
      "ZmbM_PolicemanSpecForce_Heavy",
      "ZmbM_HunterOld_Autumn",
      "ZmbM_HunterOld_Spring",
      "ZmbM_HunterOld_Summer",
      "ZmbM_HunterOld_Winter",
      "ZmbM_ParamedicNormal_Blue",
      "ZmbM_ParamedicNormal_Green",
      "ZmbM_ParamedicNormal_Red",
      "ZmbM_ParamedicNormal_Black",
      "ZmbF_ParamedicNormal_Blue",
      "ZmbF_ParamedicNormal_Green",
      "ZmbF_ParamedicNormal_Red",
      "ZmbF_DoctorSkinny",
      "ZmbF_NurseFat",
      "ZmbM_DoctorFat",
      "ZmbM_NBC_Yellow",
      "ZmbM_FirefighterNormal",
      "ZmbM_priestPopSkinny",
      "ZmbM_Santa",
      "ZmbM_SkaterYoung_Blue",
      "ZmbF_CitizenANormal_Brown",
      "ZmbF_Clerk_Normal_Green",
      "ZmbF_JournalistNormal_White",
      "ZmbF_ShortSkirt_Black",
      "ZmbF_ShortSkirt_red",
      "ZmbF_ShortSkirt_stripes",
      "ZmbF_SurvivorNormal_Orange",
      "ZmbM_CitizenASkinny_Brown",
      "ZmbM_ClerkFat_Brown",
      "ZmbM_CommercialPilotOld_Grey",
      "ZmbM_VillagerOld_Green",
      "ZmbF_MilkMaidOld_Green",
      "ZmbF_VillagerOld_Blue",
      "ZmbM_FarmerFat_Beige",
      "ZmbM_Jacket_bluechecks",
      "ZmbM_Jacket_magenta",
      "ZmbF_JoggerSkinny_Red",
      "ZmbF_JoggerSkinny_Blue",
      "ZmbF_JoggerSkinny_Brown",
      "ZmbF_JoggerSkinny_Green",
      "ZmbM_JoggerSkinny_Red",
      "ZmbM_JoggerSkinny_Blue",
      "ZmbM_JoggerSkinny_Green",
      "ZmbM_Mummy",
    };
  }
  // aircraft carrier loot
  static TStringArray GetSpawnableGrenades()
  {
    return {
      "M67Grenade", 
      "RGD5Grenade", 
      "FlashGrenade",
      "M18SmokeGrenade_Red",
      "M18SmokeGrenade_Green",
      "M18SmokeGrenade_Yellow",
      "M18SmokeGrenade_Purple",
      "M18SmokeGrenade_White",
      "RDG2SmokeGrenade_Black",
      "RDG2SmokeGrenade_White",
      "ClaymoreMine"
    };
  }
  static TStringArray GetSpawnableWeapons()
  {
    return {
     "ttscarl",
     "ttrpd",
     "FAL",
     "DUB_LAW",
     "DUB_RPG26",
     "DUB_Bazooka",
     "DUB_MG3",
     "DUB_PKM",
     "DUB_BoysAT",
     "DUB_PPSH"
    };
  }
  static TStringArray GetSpawnableOptics()
  {
    return {
      "StarlightOptic",
      "ACOGOptic_6x",
      "NailBox",
      "ESP_Tac_Craftsmen",
      "ESP_Long_Range",
      "ESP_Hunter",
      "ESP_Short_Range",
      "ESP_Spectre",
      "ESP_RedDot",
      "ESP_Holographic",
      "ESP_Holographic_Tan",
      "ESP_Scope3X",
      "ESP_Scope4X",
      "ESP_Aimpoint",
      "ESP_XPS3",
      "STG_OKP7",
    };
  }
  static TStringArray GetSpawnableMags()
  {
    return {
     "ttrpdmag",
     "Mag_STANAG_60Rnd",
     "Mag_STANAG_30Rnd",
    };
  }
  static TStringArray GetSpawnableAmmo()
  {
    return {
      "AmmoBox_556x45_20Rnd",
      "AmmoBox_556x45Tracer_20Rnd",
      "AmmoBox_357_20Rnd",
      "AmmoBox_545x39_20Rnd",
      "AmmoBox_545x39Tracer_20Rnd",
      "AmmoBox_12gaFlash_10Rnd"
    };
  }
  static TStringArray GetMiscHighTier()
  {
    return {
     "DUB_Mutantsyringe_Admin2",
     "DUB_Mutantsyringe_Admin4",
     "SRP_ReadableBook_AlchemyHints",
     "SRP_Mining_RawOre_Zinc",
     "SRP_Mining_RawOre_Coal",
     "SRP_Mining_RawOre_Silver",
     "SRP_ForgeIngot_Silver",
     "SRP_ForgeIngot_Zinc",
     "SRP_ForgeIngot_Brass",
     "DUB_Larpsword",
     "Winebottle_two",
     "SRP_PistolSuppressor_Golden",
		 "ferguson",
		 "tantosword",
		 "ttl35",
		 "DUB_Rapier",
		 "DUB_Compressor",
		 "SRP_BrownBottle",
		 "DUB_BlunderPistol"
    };
  }

};