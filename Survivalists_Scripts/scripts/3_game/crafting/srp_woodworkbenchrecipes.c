class SRP_WoodWorkbenchRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // MISC    
    craftableItems.Insert(Register_LetterSeal_Recipe());
    craftableItems.Insert(Register_ChessBoardKit_Recipe());

    // Wooden Kits
    craftableItems.Insert(Register_TetrisShelf_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenShelf_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenDisplay_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenBarricade_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenScaffolding_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenFurniture_IntermediateKit_Recipe());

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
//===========================MISC
  SRP_CraftableItem Register_LetterSeal_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_SealPress_NoWax", "Letter Seal");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem Register_ChessBoardKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ChessBoard_Kit", "Chess Board Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================Wooden Kits
  SRP_CraftableItem Register_TetrisShelf_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_TetrisShelfKit_Kit", "Tetris Shelf Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenShelf_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WoodenShelfKit_Kit", "Wooden Shelf Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenDisplay_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WoodenDisplayKit_Kit", "Wooden Display Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenBarricade_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_BarricadeKit_Kit", "Wooden Barricade Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenScaffolding_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_BuildingComponentFrame_Kit", "Wooden Scaffolding");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenFurniture_IntermediateKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WoodenFurnitureKit_Kit", "Wooden Furniture Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
//===========================WOODEN WALLS
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
//===========================END

};