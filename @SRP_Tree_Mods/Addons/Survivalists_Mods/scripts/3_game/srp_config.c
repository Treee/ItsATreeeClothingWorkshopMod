class CraftingConfig  // TailorCraftClasses
{
  string craftingBenchType;
  string pathToMainBackgroundImg;
  string pathToRepairImg;
  string pathToPaintImg;
  string pathToCraftImg; 
  ref array<ref CraftedItem> craftedItems = {};

  void ~CraftingConfig()
  {
    delete craftedItems;
  }
}

class CraftedItem  // TailorCraftItem
{
  string result;
  int resultCount;
  string craftType;
  string recipeName;
  ref array<string> requiredAttachments = new array<string>();
  ref array<ref CraftingComponent> craftingComponents = new array<ref CraftingComponent>;

  void ~CraftedItem()
  {
    delete requiredAttachments;
    delete craftingComponents;
  }
}

class CraftingComponent // TailorCraftComponent
{
  string className;
  int amount;
  bool destroy;
  float changeHealth;
}

class SRPConfig
{
  ref CraftingConfig tailorWorkbench = new CraftingConfig();
  ref CraftingConfig advancedWorkbench = new CraftingConfig();
  ref CraftingConfig drugWorkbench = new CraftingConfig();

  void ~SRPConfig()
  {
    delete tailorWorkbench;
    delete advancedWorkbench;
    delete drugWorkbench;
  }
}

class SRPGlobals
{
  private static ref SRPConfig m_SRPConfig = NULL;
  private static const int MAX_CONFIG_LINES = 2000;
  private static const string configPath = "$profile:\\Survivalists_Mods\\Mod_Settings.json";
  private static const string configRoot = "$profile:\\Survivalists_Mods";

  void ~SRPGlobals()
  {
    delete m_SRPConfig;
  }

  static SRPConfig Get()
  {
    if (m_SRPConfig == NULL) 
    {
      SetSRPConfig();
    }
    return m_SRPConfig;
  }

  static void SetSRPConfig()
  {
    m_SRPConfig = LoadSRPModConfig();
  }

  private static SRPConfig LoadSRPModConfig()
  {
    SRPConfig config = new SRPConfig();
    if (!FileExist(configPath))
    {
      Print("'Survivalists_Mods_Settings' does not exist, creating now.");
      CreateDefaultSRPConfigFile(config);
    }
    JsonFileLoader<SRPConfig>.JsonLoadFile(configPath, config);
    Print("'Survivalists_Mods_Settings' found ... loading now.");
    return config;
  }

  private static void CreateDefaultSRPConfigFile(inout SRPConfig config)
  {
    CreateDefaultTailorRecipes(config.tailorWorkbench);
    CreateDefaultAdvancedRecipes(config.advancedWorkbench);
    CreateDefaultDrugRecipes(config.drugWorkbench);


    if (!FileExist(configRoot))
    {
      Print("'Survivalists_Mods_Settings' being saved in " + configRoot);
      MakeDirectory(configRoot);
    }
    JsonFileLoader<SRPConfig>.JsonSaveFile(configPath, config);
  }

  private static CraftingConfig CreateDefaultTailorRecipes(inout CraftingConfig config)
  {
    config.craftingBenchType = "SRP_SewingMachine";
    CraftedItem item1 = new CraftedItem();
    item1.result = "NurseDress_White";
    item1.resultCount = 1;
    item1.craftType = "craft";
    item1.recipeName = "Sew massive pussy shirt";
    item1.requiredAttachments.Insert("SewingMachine");

    CraftingComponent item1Comp1 = new CraftingComponent();
    item1Comp1.className = "Apple";
    item1Comp1.amount = 125;  // quantity is in units relative to the item. apples have 125 since they are eaten in chunks
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "SewingKit";
    item1Comp2.amount = 10;
    item1Comp2.destroy = true;
    item1Comp2.changeHealth = 0;

    item1.craftingComponents.Insert(item1Comp1);
    item1.craftingComponents.Insert(item1Comp2);
    config.craftedItems.Insert(item1);
    Print("tailor method stuff: " + config);
    return config; 
  }

  private static CraftingConfig CreateDefaultAdvancedRecipes(inout CraftingConfig config)
  {
    config.craftingBenchType = "SRP_AdvancedWorkbench";
    CraftedItem item1 = new CraftedItem();
    item1.result = "NurseDress_Blue";
    item1.resultCount = 1;
    item1.craftType = "craft";
    item1.recipeName = "Craft massive pussy shirt";
    item1.requiredAttachments.Insert("SRP_AmmoPress");

    CraftingComponent item1Comp1 = new CraftingComponent();
    item1Comp1.className = "Apple";
    item1Comp1.amount = 125;
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "BoxCerealCrunchin";
    item1Comp2.amount = 50;
    item1Comp2.destroy = true;
    item1Comp2.changeHealth = 0;

    item1.craftingComponents.Insert(item1Comp1);
    item1.craftingComponents.Insert(item1Comp2);
    config.craftedItems.Insert(item1);
    
    return config; 
  }

  private static CraftingConfig CreateDefaultDrugRecipes(inout CraftingConfig config)
  {
    config.craftingBenchType = "SRP_DrugWorkbench";
    CraftedItem item1 = new CraftedItem();
    item1.result = "SRP_ConsumableDrug_MethSmall";
    item1.resultCount = 1;
    item1.craftType = "craft";
    item1.recipeName = "Cook Meth";
    item1.requiredAttachments.Insert("MethRecipe");
    item1.requiredAttachments.Insert("LightBulb");
    item1.requiredAttachments.Insert("Disinfectant");
    item1.requiredAttachments.Insert("GasCanister");

    CraftingComponent item1Comp1 = new CraftingComponent();
    item1Comp1.className = "Apple";
    item1Comp1.amount = 125;
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "Pear";
    item1Comp2.amount = 125;
    item1Comp2.destroy = true;
    item1Comp2.changeHealth = 0;

    item1.craftingComponents.Insert(item1Comp1);
    item1.craftingComponents.Insert(item1Comp2);
    config.craftedItems.Insert(item1);

    CraftedItem item2 = new CraftedItem();
    item2.result = "USMCJacket_Woodland";
    item2.resultCount = 1;
    item2.craftType = "craft";
    item2.recipeName = "Cook Jacket";
    item2.requiredAttachments.Insert("MethRecipe");
    item2.requiredAttachments.Insert("LightBulb");

    CraftingComponent item2Comp1 = new CraftingComponent();
    item2Comp1.className = "Hammer";
    item2Comp1.amount = 1;
    item2Comp1.destroy = true;
    item2Comp1.changeHealth = 0;
    CraftingComponent item2Comp2 = new CraftingComponent();
    item2Comp2.className = "Pliers";
    item2Comp2.amount = 1;
    item2Comp2.destroy = true;
    item2Comp2.changeHealth = 0;

    item2.craftingComponents.Insert(item2Comp1);
    item2.craftingComponents.Insert(item2Comp2);
    config.craftedItems.Insert(item2);
    
    return config; 
  }
}

ref array<string> SRP_SoundSets_Yawns_Male = {
  "SRP_Tree_Mods_Yawn_Male_SoundSet1",
  "SRP_Tree_Mods_Yawn_Male_SoundSet2",
  "SRP_Tree_Mods_Yawn_Male_SoundSet3",
  "SRP_Tree_Mods_Yawn_Male_SoundSet4"
};

ref array<string> SRP_SoundSets_Yawns_Female = {
  "SRP_Tree_Mods_Yawn_Female_SoundSet1",
  "SRP_Tree_Mods_Yawn_Female_SoundSet2",
  "SRP_Tree_Mods_Yawn_Female_SoundSet3",
  "SRP_Tree_Mods_Yawn_Female_SoundSet4",
  "SRP_Tree_Mods_Yawn_Female_SoundSet5",
};

ref array<string> SRP_SoundSets_ZombieAttack = {
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

ref array<string> SRP_SoundSets_Jumping = {
  "ZmbM_Skinny_Old_Jump_Soundset",
  "ZmbM_Fat_Jump_Soundset",
  "ZmbF_Normal_Jump_Soundset",
  "ZmbM_Skinny_Jump_Soundset",
  "ZmbF_Skinny_Jump_Soundset",
  "ZmbM_Normal_Old_Jump_Soundset",
  "ZmbM_Old_Jump_Soundset",
  "ZmbM_Normal_Jump_Soundset",
  "ZmbM_Normal2_Jump_Soundset",
  "ZmbF_Fat_Jump_Soundset",
  "ZmbF_Old_Jump_Soundset"
};

ref array<string> SRP_SoundSets_Landing = {
  "ZmbM_Skinny_Old_Land_Soundset",
  "ZmbM_Fat_Land_Soundset",
  "ZmbF_Normal_Land_Soundset",
  "ZmbM_Skinny_Land_Soundset",
  "ZmbF_Skinny_Land_Soundset",
  "ZmbM_Normal_Old_Land_Soundset",
  "ZmbM_Old_Land_Soundset",
  "ZmbM_Normal_Land_Soundset",
  "ZmbM_Normal2_Land_Soundset",
  "ZmbF_Fat_Land_Soundset",
  "ZmbF_Old_Land_Soundset"
};

ref array<string> SRP_SoundSets_CallToArms = {
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

ref array<string> SRP_SoundSets_SheepBleats = {
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

ref array<string> SRP_SoundSets_HogGrunts = {
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

ref array<string> SRP_SoundSets_Bear = {
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

ref array<string> SRP_SoundSets_Wolf = {
  "WolfBark_SoundSet",
  "WolfBark_SoundSet",
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

ref array<string> SRP_SoundSets_Cows = {
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

ref array<string> SRP_SoundSets_Deer = {
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

ref array<string> SRP_SoundSets_Chicken = {
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

ref array<string> SRP_DamageZones_LightBleeding = {
  "Head",
  "Neck",
  "Pelvis",
  "Spine",
  "Spine1",
  "Spine2",
  "Spine3",
  "LeftForeArmRoll",
  "RightForeArmRoll",
  "LeftFoot",
  "LeftToeBase",
  "RightFoot",
  "RightToeBase"
};