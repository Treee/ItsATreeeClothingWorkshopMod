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

class MiningOreConfig
{
  vector m_location;
  float m_radius = 10;
  float platinumChance = 2.0;
  float goldChance = 2.0;
  float ironChance = 2.0;
  float copperChance = 2.0;
  float tinChance = 2.0;

  void MiningOreConfig(vector location, float radius, float plat, float gold, float iron, float copper, float tin)
  {
    m_location = location;
    m_radius = radius;
    platinumChance = plat;
    goldChance = gold;
    ironChance = iron;
    copperChance = copper;
    tinChance = tin;
  }
  bool IsPlayerInRange(vector playerLocation)
  {
    if (m_location)
    {
      // Print("Player is " + vector.Distance(m_location, playerLocation) + " meters from radius center. Plat: " + platinumChance + " Gold: " + goldChance + " Iron: " + ironChance + " Copper: " + copperChance + " Tin: " + tinChance);
      return vector.Distance(m_location, playerLocation) <= m_radius;
    }
    return false;
  }
}

class SRPConfig
{
  bool g_SRPIsSleepActive;
  bool g_SRPIsDrugsEffectsActive;
  bool g_SRPIsBioHazardLocationsActive;
  
  int g_SRPSleepMaximumAwakeTime;
  int g_SRPSleepYawnInterval;
  int g_SRPAlcoholModifierLifetime;
  int g_SRPBathSaltsModifierLifetime;
  int g_SRPMethModifierLifetime;
  int g_SRPSkullAcidModifierLifetime;
  int g_SRPSmileAcidModifierLifetime;
  int g_SRPStonedModifierLifetime;
  int g_SRPTobacoModifierLifetime;

  int g_SRPAlcoholFoodLossAmount;
  int g_SRPWeedWaterLossAmount;

  float g_SRPSleepynessIncreaseAmount;
  float g_SRPRestfulnessIncreaseAmount;
  float g_SRPSleepYawnThreshold;
  float g_SRPSleepPassOutThreshold;
  float g_SRPAlcoholChanceToLaughThreshold;
  float g_SRPBathSaltsChanceForScarySound;
  float g_SRPBathSaltsChanceForHappySound;
  float g_SRPMethSaminaDepletionBonus;
  float g_SRPMethBloodLossAmount;
  float g_SRPMethChanceForScarySound;
  float g_SRPMethChanceForHappySound;
  float g_SRPSkullAcidChanceForScarySound;
  float g_SRPSkullAcidChanceForHappySound;
  float g_SRPSkullAcidChanceForLaughter;
  float g_SRPSkullAcidChanceForFreeze;
  float g_SRPSkullAcidChanceForSweat;
  float g_SRPSkullAcidChanceForSneeze;
  float g_SRPSkullAcidChanceForCough;
  float g_SRPSmileAcidChanceForScarySound;
  float g_SRPSmileAcidChanceForHappySound;
  float g_SRPSmileAcidChanceForLaughter;
  float g_SRPSmileAcidChanceForFreeze;
  float g_SRPSmileAcidChanceForSweat;
  float g_SRPSmileAcidChanceForSneeze;
  float g_SRPSmileAcidChanceForCough;  
  float g_SRPWeedChanceForCough;
  float g_SRPWeedChanceForLaugh;
  float g_SRPTobaccoChanceForCough;

  ref CraftingConfig tailorWorkbench = new CraftingConfig();
  ref CraftingConfig advancedWorkbench = new CraftingConfig();
  ref CraftingConfig drugWorkbench = new CraftingConfig();
    
  ref array<ref MiningOreConfig> g_QuarryLocations;

  void ~SRPConfig()
  {
    delete tailorWorkbench;
    delete advancedWorkbench;
    delete drugWorkbench;
    delete g_QuarryLocations;
  }
}

class SRPGlobals
{
  private static ref SRPConfig m_SRPConfig = NULL;
  private static const int MAX_CONFIG_LINES = 5000;
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
    CreateDefaultConfigFile(config);

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
    item1Comp1.amount = 10000025;  // quantity is in units relative to the item. apples have 125 since they are eaten in chunks
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "SewingKit";
    item1Comp2.amount = 1000000;
    item1Comp2.destroy = true;
    item1Comp2.changeHealth = 0;

    item1.craftingComponents.Insert(item1Comp1);
    item1.craftingComponents.Insert(item1Comp2);
    config.craftedItems.Insert(item1);
    // Print("tailor method stuff: " + config);
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
    item1Comp1.amount = 12000005;
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "BoxCerealCrunchin";
    item1Comp2.amount = 5000000;
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
    item1Comp1.amount = 1200005;
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "Pear";
    item1Comp2.amount = 100000025;
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

  private static void CreateDefaultConfigFile(inout SRPConfig config)
  {
    config.g_SRPIsSleepActive = true;
    config.g_SRPIsDrugsEffectsActive = true;
    config.g_SRPIsBioHazardLocationsActive = true;

    config.g_SRPSleepMaximumAwakeTime = 14400; // 4 hours in seconds is the "max" awake time before passing out
    config.g_SRPSleepYawnInterval = 120;        // time in between yawns
    config.g_SRPAlcoholModifierLifetime = 100;
    config.g_SRPBathSaltsModifierLifetime = 600; // 10 minutes
    config.g_SRPMethModifierLifetime = 600;
    config.g_SRPSkullAcidModifierLifetime = 600;
    config.g_SRPSmileAcidModifierLifetime = 600;
    config.g_SRPStonedModifierLifetime = 150;
    config.g_SRPTobacoModifierLifetime = 90;

    config.g_SRPAlcoholFoodLossAmount = 0.2;
    config.g_SRPWeedWaterLossAmount = 0.2;

    config.g_SRPSleepynessIncreaseAmount = 1.5; // we get sleepy x units per
    config.g_SRPRestfulnessIncreaseAmount = 50; // we get rested x units per
    config.g_SRPSleepYawnThreshold = 0.8; // 80% sleepyness triggers yawning. 0% means yawning when fully awake
    config.g_SRPSleepPassOutThreshold = 600; // how many extra seconds do they get before they 100% pass out
    config.g_SRPAlcoholChanceToLaughThreshold = 15; // 15% chance to laugh
    config.g_SRPBathSaltsChanceForScarySound = 10; 
    config.g_SRPBathSaltsChanceForHappySound = 20;
    config.g_SRPMethSaminaDepletionBonus = 0.5; // stamina depletes 50% less than normal. 1 being the default
    config.g_SRPMethBloodLossAmount = 3.5; // be carefule with a higher number here
    config.g_SRPMethChanceForScarySound = 5; // 5% chance
    config.g_SRPMethChanceForHappySound = 5;
    config.g_SRPSkullAcidChanceForScarySound = 50;
    config.g_SRPSkullAcidChanceForHappySound = 60;
    config.g_SRPSkullAcidChanceForLaughter = 30; // ascending order,
    config.g_SRPSkullAcidChanceForFreeze = 40;
    config.g_SRPSkullAcidChanceForSweat = 50;
    config.g_SRPSkullAcidChanceForSneeze = 60;
    config.g_SRPSkullAcidChanceForCough = 70;
    config.g_SRPSmileAcidChanceForScarySound = 10;
    config.g_SRPSmileAcidChanceForHappySound = 50;
    config.g_SRPSmileAcidChanceForLaughter = 10;
    config.g_SRPSmileAcidChanceForFreeze = 30;
    config.g_SRPSmileAcidChanceForSweat = 60;
    config.g_SRPSmileAcidChanceForSneeze = 80;
    config.g_SRPSmileAcidChanceForCough = 95;
    config.g_SRPWeedChanceForCough = 35;
    config.g_SRPWeedChanceForLaugh = 70;
    config.g_SRPTobaccoChanceForCough = 35;

    ref array<ref MiningOreConfig> local_QuarryLocations = new ref array<ref MiningOreConfig>;    
    // platinumChance = 0.99;
    // goldChance = 0.99;
    // ironChance = 0.99;
    // copperChance = 0.99;
    // tinChance = 0.99;

    // local_QuarryLocations.Insert(new MiningOreConfig("11153 38 2274",100,0.95,0.90,0.85,0.80,0.75));
    local_QuarryLocations.Insert(new MiningOreConfig("11153 38 2274",100,0,2,2,2,2));
    local_QuarryLocations.Insert(new MiningOreConfig("10543 3 5607",50,0.95,0.90,0.85,0.80,0.75));

    config.g_QuarryLocations = local_QuarryLocations;
  }
}

ref array<string> SRP_SoundSets_Yawns_Male = {
  "SRP_Mods_Yawn_Male_SoundSet1",
  "SRP_Mods_Yawn_Male_SoundSet2",
  "SRP_Mods_Yawn_Male_SoundSet3",
  "SRP_Mods_Yawn_Male_SoundSet4"
};

ref array<string> SRP_SoundSets_Yawns_Female = {
  "SRP_Mods_Yawn_Female_SoundSet1",
  "SRP_Mods_Yawn_Female_SoundSet2",
  "SRP_Mods_Yawn_Female_SoundSet3",
  "SRP_Mods_Yawn_Female_SoundSet4",
  "SRP_Mods_Yawn_Female_SoundSet5",
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