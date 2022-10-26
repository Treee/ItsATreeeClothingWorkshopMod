modded class MenuDefaultCharacterData
{	
 
  void SRP_RandomizeCharacter()
  {
    string randomType;

    randomType = GetMeleeItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.MELEE, randomType);
    }
    randomType = GetHeadgearItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.HEADGEAR, randomType);
    }
    randomType = GetMaskItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.MASK, randomType);
    }
    randomType = GetEyewearItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.EYEWEAR, randomType);
    }
    randomType = GetGlovesItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.GLOVES, randomType);
    }
    randomType = GetArmbandItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.ARMBAND, randomType);
    }
    randomType = GetTopItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.BODY, randomType);
    }
    randomType = GetVestItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.VEST, randomType);
    }
    randomType = GetBackpackItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.BACK, randomType);
    }
    randomType = GetBeltsItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.HIPS, randomType);
    }
    randomType = GetPantsItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.LEGS, randomType);
    }
    randomType = GetShoesItems().GetRandomElement();
    if (randomType != "")
    {
      SetDefaultAttachment(InventorySlots.FEET, randomType);
    }
  }

  override void EquipDefaultCharacter(Man player)
	{
    SRP_RandomizeCharacter();
    super.EquipDefaultCharacter(player);
	}

  TStringArray GetMeleeItems()
  {
    return {
      "TF_RifleSling_Black",
      "TF_RifleSling_Brown",
      "TF_RifleSling_OD",
      "BaseballBat",
      "NailedBaseballBat",
      "BarbedBaseballBat",
      "PipeWrench",
      "BrassKnuckles_Dull",
      "BrassKnuckles_Shiny",
      "TelescopicBaton",
      "HockeyStick",
      "NewHockeyStick",
      "PoliceBaton",
      "WoodAxe",
      "Hatchet",
      "FirefighterAxe",
      "FirefighterAxe_Black",
      "FirefighterAxe_Green",
      "Cleaver",
      "CombatKnife",
      "HuntingKnife",
      "Machete",
      "Pitchfork",
      "Pickaxe",
      "Sword",
      "KukriKnife",
      "FangeKnife",
      "CrudeMachete",
      "OrientalMachete",
      "Shovel",
    };
  }
  TStringArray GetHeadgearItems()
  {
    return {
      "TF_6B47Helmet",
      "TF_LSHZHelmet_OD",
      "TF_Maska1Helmet",
      "TF_MICH2000Helmet",
      "TF_MICH2000Helmet_Black",
      "TF_MICH2000Helmet_Khaku",
      "TF_WeldingMask_Tagilla",
      "TF_WeldingMask",
      "Mich2001Helmet",
      "MotoHelmet_Black",
      "MotoHelmet_Blue",
      "MotoHelmet_Green",
      "MotoHelmet_Red",
      "MotoHelmet_White",
      "DarkMotoHelmet_Black",
      "DarkMotoHelmet_Grey",
      "DarkMotoHelmet_Green",
      "DarkMotoHelmet_Lime",
      "DarkMotoHelmet_Blue",
      "DarkMotoHelmet_Red",
      "DarkMotoHelmet_White",
      "DarkMotoHelmet_Yellow",
      "DarkMotoHelmet_YellowScarred",
      "CowboyHat_Brown",
      "CowboyHat_black",
      "CowboyHat_darkBrown",
      "CowboyHat_green",
      "GhillieHood_Tan",
      "GhillieHood_Woodland",
      "GhillieHood_Mossy",
      "BallisticHelmet_Green",
      "BallisticHelmet_Black",
      "BallisticHelmet_UN",
      "ZSh3PilotHelmet",
      "ZSh3PilotHelmet_Green",
      "ZSh3PilotHelmet_Black",
      "MilitaryBeret_Red",
      "MilitaryBeret_UN",
      "MilitaryBeret_NZ",
      "MilitaryBeret_ChDKZ",
      "MilitaryBeret_CDF",
      "SantasHat",
      "WitchHood_Black",
      "WitchHood_Brown",
      "WitchHood_Red",
    };
  }
  TStringArray GetMaskItems()
  {
    return {
      "TF_PMK4GasMask",
      "TF_PMK4GasMask_OD",
      "BalaclavaMask_Black",
      "BalaclavaMask_Blackskull",
      "BalaclavaMask_Beige",
      "BalaclavaMask_Blue",
      "BalaclavaMask_Green",
      "BalaclavaMask_Pink",
      "BalaclavaMask_White",
      "Balaclava3Holes_Beige",
      "Balaclava3Holes_Blue",
      "Balaclava3Holes_Black",
      "Balaclava3Holes_Green",
      "NioshFaceMask",
      "AirborneMask",
      "SantasBeard",
      "SurgicalMask",
    };
  }
  TStringArray GetEyewearItems()
  {
    return {
      "SportGlasses_Black",
      "SportGlasses_Blue",
      "SportGlasses_Green",
      "SportGlasses_Orange",
      "AviatorGlasses",
      "DesignerGlasses",
      "ThickFramesGlasses",
      "ThinFramesGlasses",
      "TacticalGoggles",
      "EyePatch_Improvised",
    };
  }
  TStringArray GetGlovesItems()
  {
    return {
      "WorkingGloves_Black",
      "WorkingGloves_Beige",
      "WorkingGloves_Brown",
      "WorkingGloves_Yellow",
      "TacticalGloves_Black",
      "TacticalGloves_Beige",
      "TacticalGloves_Green",
      "OMNOGloves_Gray",
      "OMNOGloves_Brown",
    };
  }
  TStringArray GetArmbandItems()
  {
    return {
      "Armband_White",
      "Armband_Yellow",
      "Armband_Orange",
      "Armband_Red",
      "Armband_Green",
      "Armband_Pink",
      "Armband_Blue",
      "Armband_Black",
      "Armband_Chernarus",
      "Armband_Chedaki",
      "Armband_NAPA",
      "Armband_CDF",
      "Armband_Livonia",
      "Armband_Altis",
      "Armband_SSahrani",
      "Armband_NSahrani",
      "Armband_DayZ",
      "Armband_LivoniaArmy",
      "Armband_Bohemia",
      "Armband_APA",
      "Armband_UEC",
      "Armband_Pirates",
      "Armband_Cannibals",
      "Armband_Bear",
      "Armband_Wolf",
      "Armband_BabyDeer",
      "Armband_Rooster",
      "Armband_LivoniaPolice",
      "Armband_CMC",
      "Armband_TEC",
      "Armband_CHEL",
      "Armband_Zenit",
      "Armband_HunterZ",
      "Armband_BrainZ",
      "Armband_Refuge",
      "Armband_RSTA",
      "Armband_Snake",
    };
  }
  TStringArray GetTopItems()
  {
    return {
      "TF_6sh122Jacket_Spring",
      "TF_6sh122Jacket_Autumn",
      "TF_6sh122Jacket_Syrian",
      "TF_6sh122Jacket_Syrian_EMR",
      "TF_6sh122Jacket_Winter",
      "TF_G3CombatShirt_RG",
      "TF_G3CombatShirt_MC",
      "TF_G3CombatShirt_WD",
    };
  }
  TStringArray GetVestItems()
  {
    return {
      "TF_PlateCarrierVest_EMR",
      "TF_PlateCarrierPouches_EMR",
      "TF_PlateCarrierHolster_EMR",
      "TF_PlateCarrierVest_Coyote",
      "TF_PlateCarrierPouches_Coyote",
      "TF_PlateCarrierHolster_Coyote ",
      "TF_6sh112_EMR",
      "TF_6sh112_Syrian",
      "TF_6B23_112Vest_GFlora",
      "TF_6B23_112Vest_EMR",
      "TF_6B23_112Vest_EMR_Syrian",
      "TF_6B23_112Vest_GFlora_Syrian",
      "TF_6B23Vest_GFlora",
      "TF_6B23Vest_EMR",
      "TF_6B43Vest_EMR",
      "TF_6B43Vest_Syrian",
      "TF_6B43Vest_6sh112_EMR",
      "TF_6B43Vest_6sh112_Syrian",
      "TF_6B43Vest_6sh112_EMR_Syrian",
      "TF_6B43Vest_6sh112_Syrian_EMR",
      "TF_AVSVest_Coyote",
      "TF_AVSVest_Tagilla",
      "TF_IMTVVest",
      "TF_IMTVVest_Khaki",
      "TF_JPCVest_MC",
      "TF_JPCVest_Coyote",
      "TF_LVMBAVVest_KH",
    };
  }
  TStringArray GetBackpackItems()
  {
    return {
      "TF_CamelBakBag_Black",
      "TF_CamelBakBag_Brown",
      "TF_CamelBakBag_EMR",
      "TF_CamelBakBag_OD",
      "TF_CamelBakBag_Tan",
      "TF_AVSBag_Coyote",
      "TF_AVSBag_Khaki",
      "TF_MAPBag_Khaki",
      "TF_MAPBag_Coyote",
      "TaloonBag_Blue",
      "TaloonBag_Green",
      "TaloonBag_Orange",
      "TaloonBag_Violet",
      "MountainBag_Red",
      "MountainBag_Blue",
      "MountainBag_Orange",
      "MountainBag_Green",
      "GhillieBushrag_Tan",
      "GhillieBushrag_Woodland",
      "GhillieBushrag_Mossy",
      "GhillieTop_Tan",
      "GhillieTop_Woodland",
      "GhillieTop_Mossy",
      "GhillieSuit_Tan",
      "GhillieSuit_Woodland",
      "GhillieSuit_Mossy",
      "AssaultBag_Ttsko",
      "AssaultBag_Black",
      "AssaultBag_Green",
      "CoyoteBag_Brown",
      "CoyoteBag_Green",
    };
  }
  TStringArray GetBeltsItems()
  {
    return {
      "TF_FannyPack_Coyote",
      "MilitaryBelt",
    };
  }
  TStringArray GetPantsItems()
  {
    return {
      "TF_6sh122Pants_Spring",
      "TF_6sh122Pants_Autumn",
      "TF_6sh122Pants_Syrian",
      "TF_6sh122Pants_Syrian_EMR",
      "TF_6sh122Pants_Winter",
      "TF_CargoPantsShort_Black",
      "TF_CargoPantsShort_MARPAT",
      "TF_G3CombatPants_RG",
      "TF_G3CombatPants_MC",
      "TF_G3CombatPants_WD",
    };
  }
  TStringArray GetShoesItems()
  {
    return {
      "HikingBoots_Brown",
      "HikingBoots_Black",
      "HikingBootsLow_ColorBase",
      "HikingBootsLow_Black",
      "HikingBootsLow_Blue",
      "HikingBootsLow_Beige",
      "HikingBootsLow_Grey",
      "JungleBoots_Beige",
      "JungleBoots_Black",
      "JungleBoots_Brown",
      "JungleBoots_Green",
      "JungleBoots_Olive",
      "MilitaryBoots_Beige",
      "MilitaryBoots_Black",
      "MilitaryBoots_Bluerock",
      "MilitaryBoots_Brown",
      "MilitaryBoots_Redpunk",
      "CombatBoots_Beige",
      "CombatBoots_Black",
      "CombatBoots_Brown",
      "CombatBoots_Green",
      "CombatBoots_Grey",
      "TTSKOBoots",
    };
  }
};