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