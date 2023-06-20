class SRP_DrugRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // METH
    craftableItems.Insert(Register_MethImpure_Recipe());
    craftableItems.Insert(Register_MethPure_Recipe());
    // ACID
    craftableItems.Insert(Register_AcidSmilesImpure_Recipe());
    craftableItems.Insert(Register_AcidSmilesPure_Recipe());
    craftableItems.Insert(Register_AcidSkullImpure_Recipe());
    craftableItems.Insert(Register_AcidSkullPure_Recipe());
    // SALTS
    craftableItems.Insert(Register_SaltsImpure_Recipe());
    craftableItems.Insert(Register_SaltsPure_Recipe());
    // CHEMICALS
    craftableItems.Insert(Register_Bleach_Recipe());
    craftableItems.Insert(Register_SimpleFlowerPoison_Recipe());
  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("MethRecipe", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("BathSaltsRecipe", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("AcidRecipe", SRP_COLOR.NONE, 1));

    // craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.BLUE, 50));
    // craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.CLEAR, 50));
    // craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.YELLOW, 50));
    // craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.RED, 50));
    // craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.GREEN, 50));
    // craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.GREEN, 50));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 6000));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 500));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 100));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
  //   return craftableItem;
  // }  

//===========================METH
  SRP_CraftableItem Register_MethImpure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_MethSmallTainted", "Meth");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 1500));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }  
  SRP_CraftableItem Register_MethPure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_MethLarge", "Meth - Pure");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MethRecipe", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.BLUE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.CLEAR, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.YELLOW, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.RED, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.GREEN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.GREEN, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 750));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  } 
//===========================ACID
  SRP_CraftableItem Register_AcidSmilesImpure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_SmileyAcidTainted", "Acid - Smiley Wiley");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 2500));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }  
  SRP_CraftableItem Register_AcidSmilesPure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_SmileyAcid", "Acid - Smiley Wiley Pure");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("AcidRecipe", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.RED, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.CLEAR, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.BLUE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.RED, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.CLEAR, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.BLUE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 500));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }  
  SRP_CraftableItem Register_AcidSkullImpure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_SkullAcidTainted", "Acid - SKULL F#@!");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 4000));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }  
  SRP_CraftableItem Register_AcidSkullPure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_SkullAcid", "Acid - SKULL F#@! Pure");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("AcidRecipe", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.BLUE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.BLUE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.CLEAR, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.GREEN, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.RED, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.CLEAR, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 500));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  } 
//===========================SALTS
  SRP_CraftableItem Register_SaltsImpure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_BathSaltsTainted", "Bath Salts");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 2000));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 75));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }  
  SRP_CraftableItem Register_SaltsPure_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ConsumableDrug_BathSalts", "Bath Salts Pure");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("BathSaltsRecipe", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.YELLOW, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.GREEN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.BLUE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.RED, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.CLEAR, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.YELLOW, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 500));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LightBulb", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }    
//===========================CHEMICALS
  SRP_CraftableItem Register_Bleach_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_CraftingMaterial_Dye_Bleach", "Bleach");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.CLEAR, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.CLEAR, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.CLEAR, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.CLEAR, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 250));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }    
  SRP_CraftableItem Register_SimpleFlowerPoison_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_PoisonInjector_FlowerPoison", "Strange Poison");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube1", SRP_COLOR.MUTANTLIQUIDAMANITA, 200));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube2", SRP_COLOR.MUTANTLIQUIDSTERILIZEDIRRADIATEDNEUTRAL, 200));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube3", SRP_COLOR.KURULIQUID, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube4", SRP_COLOR.KURULIQUID, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube5", SRP_COLOR.MUTANTLIQUIDSTERILIZEDIRRADIATEDNEUTRAL, 200));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TestTube6", SRP_COLOR.MUTANTLIQUIDAMANITA, 200));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("GasCanister", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 250));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Disinfectant", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Chemlight", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
   
    return craftableItem;
  }
//===========================END

};