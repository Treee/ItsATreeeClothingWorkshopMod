class SRP_WoodWorkbenchRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // MISC    
    craftableItems.Insert(Register_LetterSeal_Recipe());

  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 100));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 20));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 99));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
  //   return craftableItem;
  // }  
//===========================VESTS
  SRP_CraftableItem Register_LetterSeal_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_SealPress_NoWax", "Letter Seal");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 100));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 99));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
//===========================END

};