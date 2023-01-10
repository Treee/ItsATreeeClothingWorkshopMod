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
  bool g_SRPIsSleepActive;
  
  int g_SRPSleepMaximumAwakeTime;
  int g_SRPSleepYawnInterval;

  float g_SRPSleepynessIncreaseAmount;
  float g_SRPRestfulnessIncreaseAmount;
  float g_SRPRestfulnessFireComfortIncreaseAmount;
  float g_SRPRestfulnessUnconsciousIncreaseAmount;
  float g_SRPRestfulnessDaytimeIncreaseAmount;
  float g_SRPRestfulnessNighttimeIncreaseAmount;
  float g_SRPRestfulnessInsideShelterIncreaseAmount;

  float g_SRPRestfulnessSprintingIncreaseAmount;
  float g_SRPRestfulnessRunningIncreaseAmount;
  float g_SRPRestfulnessWalkingIncreaseAmount;

  float g_SRPRestfulnessBrokenLegsIncreaseAmount;
  float g_SRPRestfulnessFeverIncreaseAmount;
  float g_SRPRestfulnessGluttonIncreaseAmount;
  float g_SRPRestfulnessMorphineIncreaseAmount;
  float g_SRPRestfulnessPainKillersIncreaseAmount;
  float g_SRPRestfulnessEpinephrineIncreaseAmount;
  float g_SRPRestfulnessHungerIncreaseAmount;
  float g_SRPRestfulnessThirstIncreaseAmount;

  float g_SRPRestfulnessMovementIncreaseAmount;
  float g_SRPSleepYawnThreshold;
  float g_SRPSleepPassOutThreshold;

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
  private static const int MAX_CONFIG_LINES = 5000;
  private static const string configPath = "$profile:\\Survivalists_Scripts\\Mod_Settings.json";
  private static const string configRoot = "$profile:\\Survivalists_Scripts";

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

    config.g_SRPSleepMaximumAwakeTime = 28800; // 8 hours in seconds is the "max" awake time before passing out
    config.g_SRPSleepYawnInterval = 120;        // time in between yawns

    config.g_SRPSleepynessIncreaseAmount = 0.25; // we get sleepy x units per
    // things that increase sleep
    config.g_SRPRestfulnessIncreaseAmount = 3.5; // we get rested x units per
    config.g_SRPRestfulnessFireComfortIncreaseAmount = 3.0;
    config.g_SRPRestfulnessUnconsciousIncreaseAmount = 9;
    config.g_SRPRestfulnessEpinephrineIncreaseAmount = -9.2; // negative numbers for properties that rest players during day and night

    config.g_SRPRestfulnessDaytimeIncreaseAmount = -0.9; // negative numbers for properties that rest players during day and night
    config.g_SRPRestfulnessNighttimeIncreaseAmount = -2.1;

    config.g_SRPRestfulnessInsideShelterIncreaseAmount = -1.7;

    // things that decrease sleep
    config.g_SRPRestfulnessSprintingIncreaseAmount = 0.9;
    config.g_SRPRestfulnessRunningIncreaseAmount = 0.75;
    config.g_SRPRestfulnessWalkingIncreaseAmount = 0.25;
    config.g_SRPRestfulnessMovementIncreaseAmount = 0.3; // not really used

    config.g_SRPRestfulnessBrokenLegsIncreaseAmount = 0.7;
    config.g_SRPRestfulnessFeverIncreaseAmount = 0.3;
    config.g_SRPRestfulnessGluttonIncreaseAmount = 0.2;
    config.g_SRPRestfulnessMorphineIncreaseAmount = 0.7;
    config.g_SRPRestfulnessPainKillersIncreaseAmount = 0.6;
    config.g_SRPRestfulnessHungerIncreaseAmount = 0.15;
    config.g_SRPRestfulnessThirstIncreaseAmount = 0.1;

    config.g_SRPSleepYawnThreshold = 0.8; // 80% sleepyness triggers yawning. 0% means yawning when fully awake

    config.g_SRPSleepPassOutThreshold = 600; // how many extra seconds do they get before they 100% pass out
  }
};
