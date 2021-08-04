class SRPConfig
{
  ref CraftingConfig tailorWorkbench = new CraftingConfig();
  ref CraftingConfig advancedWorkbench = new CraftingConfig();
  ref CraftingConfig drugWorkbench = new CraftingConfig();
}

class SRPGlobals
{
  private static ref SRPConfig m_SRPConfig = NULL;
  private static const int MAX_CONFIG_LINES = 2000;
  private static const string configPath = "$profile:\\Survivalists_Mods\\Mod_Settings.json";
  private static const string configRoot = "$profile:\\Survivalists_Mods";

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
    SRPConfig config = new SRPConfig;
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
    CreateDefaultAdvancedRecipes(config.drugWorkbench);


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
    item1.result = "SRP_Shirt_PlainPussy";
    item1.resultCount = 1;
    item1.craftType = "craft";
    item1.recipeName = "Sew massive pussy shirt";
    item1.requiredAttachments.Insert("SewingMachine");

    CraftingComponent item1Comp1 = new CraftingComponent();
    item1Comp1.className = "Apple";
    item1Comp1.amount = 1;
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
    item1.result = "SRP_Shirt_PlainPussy";
    item1.resultCount = 1;
    item1.craftType = "craft";
    item1.recipeName = "Sew massive pussy shirt";
    // item1.requiredAttachments = [""];

    CraftingComponent item1Comp1 = new CraftingComponent();
    item1Comp1.className = "Apple";
    item1Comp1.amount = 1;
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "Compass";
    item1Comp2.amount = 10;
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
    item1Comp1.amount = 1;
    item1Comp1.destroy = true;
    item1Comp1.changeHealth = 0;
    CraftingComponent item1Comp2 = new CraftingComponent();
    item1Comp2.className = "Hammer";
    item1Comp2.amount = 10;
    item1Comp2.destroy = true;
    item1Comp2.changeHealth = 0;

    item1.craftingComponents.Insert(item1Comp1);
    item1.craftingComponents.Insert(item1Comp2);
    config.craftedItems.Insert(item1);
    
    return config; 
  }
}