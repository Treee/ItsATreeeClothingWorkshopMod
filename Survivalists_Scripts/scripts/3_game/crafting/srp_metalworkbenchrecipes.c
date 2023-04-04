class SRP_MetalWorkbenchRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // MISC    

    // Metal Kits
    craftableItems.Insert(Register_MetalShelf_IntermediateKit_Recipe());

  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 20));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3W1_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3W2_MetalSheets", SRP_COLOR.NONE, 20));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3W3_MetalSheets", SRP_COLOR.NONE, 20));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 99));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 99));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("BatteryD", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("CarBattery", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TruckBattery", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("LargeBattery", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
  //   return craftableItem;
  // }  

//===========================KITS
  SRP_CraftableItem Register_MetalShelf_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MetalShelfKit_Kit", "Metal Shelf Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_MetalSheets", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_MetalSheets", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3W1_MetalSheets", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3W2_MetalSheets", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3W3_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }  
};