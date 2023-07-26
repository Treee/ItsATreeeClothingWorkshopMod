class SRP_WoodWorkbenchRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // MISC    
    craftableItems.Insert(Register_LetterSeal_Recipe());
    craftableItems.Insert(Register_ChessBoardKit_Recipe());
    craftableItems.Insert(Register_StepLadder_Recipe());

    // Wooden Kits
    craftableItems.Insert(Register_TetrisShelf_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenShelf_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenDisplay_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenDresserKit_Recipe());
    craftableItems.Insert(Register_WoodenWardrobeKit_Recipe());
    craftableItems.Insert(Register_WoodenBarricade_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenScaffolding_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenFurniture_IntermediateKit_Recipe());
    craftableItems.Insert(Register_WoodenFurniture_GardenPlanter_Small_Recipe());
    craftableItems.Insert(Register_WoodenFurniture_GardenPlanter_Medium_Recipe());
    craftableItems.Insert(Register_WoodenFurniture_GardenPlanter_Large_Recipe());
    
    // Building Kits
    craftableItems.Insert(Register_WoodenOuthouseKit_Recipe());
    craftableItems.Insert(Register_WoodenRussianHouse_Recipe());
    craftableItems.Insert(Register_WoodenRussianHouse1_Recipe());
    craftableItems.Insert(Register_WoodenLogHouse_Recipe());
    craftableItems.Insert(Register_WoodenBarn_Recipe());
    craftableItems.Insert(Register_MetalShanty_Recipe());
    craftableItems.Insert(Register_WoodenSingleRoomHouse_Recipe());
    craftableItems.Insert(Register_WoodenTavern3Floor_Recipe());
    craftableItems.Insert(Register_WoodenThatch1Floor_Recipe());

    craftableItems.Insert(Register_WoodenHouseBridge_Recipe());
    craftableItems.Insert(Register_WoodenHouseBridgeEnd_Recipe());
    craftableItems.Insert(Register_WoodenGateHouse_Recipe());
    // Palisade Kits
    craftableItems.Insert(Register_PalisadeRamp_Recipe());
    craftableItems.Insert(Register_PalisadeTentSmall_Recipe());
    craftableItems.Insert(Register_PalisadeDecorativeFence_Recipe());
    craftableItems.Insert(Register_PalisadeDecorativeFenceDouble_Recipe());
    craftableItems.Insert(Register_PalisadePlatform_Recipe());
    craftableItems.Insert(Register_PalisadePlatformDouble_Recipe());
    craftableItems.Insert(Register_PalisadePlatformTriple_Recipe());
    craftableItems.Insert(Register_PalisadeStairs_Recipe());
    craftableItems.Insert(Register_PalisadeTentLarge_Recipe());
    craftableItems.Insert(Register_PalisadePlankWall_Recipe());
    craftableItems.Insert(Register_PalisadePlankWallDouble_Recipe());
    craftableItems.Insert(Register_PalisadeTowerSmall_Recipe());
    craftableItems.Insert(Register_PalisadeGate_Recipe());
    craftableItems.Insert(Register_PalisadeWallLog_Recipe());
    craftableItems.Insert(Register_PalisadeWallLogDouble_Recipe());
    craftableItems.Insert(Register_PalisadeTowerLargeStairs_Recipe());
    craftableItems.Insert(Register_PalisadeTowerLargeLadder_Recipe());
    craftableItems.Insert(Register_PalisadeWallLogSpikes_Recipe());
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
  SRP_CraftableItem Register_StepLadder_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Ladder_Opened_Kit", "Step Ladder");
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
  SRP_CraftableItem Register_WoodenDresserKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_LargeDresser_Default_Kit", "Wooden Dresser Kit");
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
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 15));
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
  SRP_CraftableItem Register_WoodenWardrobeKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Wardrobe_Default_Kit", "Wardrobe Kit");
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
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 15));
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
  SRP_CraftableItem Register_WoodenFurniture_GardenPlanter_Small_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GardenPlotSmall_Basic_Kit", "Small Garden Planters");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 2));

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

    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenFurniture_GardenPlanter_Medium_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GardenPlotMedium_Basic_Kit", "Medium Garden Planters");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 7));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 7));

    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenFurniture_GardenPlanter_Large_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GardenPlotLarge_Basic_Kit", "Large Garden Planters");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 10));

    return craftableItem;
  }
//===========================BUILDING KITS
  SRP_CraftableItem Register_WoodenOuthouseKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_WoodenHouseOuthouse_Kit", "Wooden Outhouse Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenRussianHouse_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_RussianHouse_Kit", "Old House Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenRussianHouse1_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_RussianHouse1_Kit", "Old House 1 Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenLogHouse_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_WoodenHouseSingleRoom_Kit", "Single Room Log House Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenBarn_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_WoodenBarn_Kit", "Wooden Barn Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_MetalShanty_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_WoodenShanty_Kit", "Shanty Shack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
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

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenSingleRoomHouse_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Structures_WoodenShed_Kit", "Single Room House");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenTavern3Floor_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_srp_wooden_2floor_tavern_Kit", "Three Floor Tavern");
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
  SRP_CraftableItem Register_WoodenThatch1Floor_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_srp_wooden_house_thatch_kit", "Thatch House - Unfinished");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 45));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenHouseBridge_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_srp_wooden_house_bridge_Kit", "Tall Bridge Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenHouseBridgeEnd_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_srp_wooden_house_bridgeend_Kit", "Tall Bridge End House Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_WoodenGateHouse_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_srp_wooden_house_gatehouse_Kit", "Wooden Gatehouse");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================PALISADE KITS
  SRP_CraftableItem Register_PalisadeRamp_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_Ramp_Kit", "Palisade Ramp Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeTentSmall_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_TentSmall_Kit", "Small Tent Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 2));

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

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeDecorativeFence_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_Fence_Kit", "Decorative Wooden Fence Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeDecorativeFenceDouble_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_FenceDouble_Kit", "Decorative Wooden Fence Kit - Double");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadePlatform_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_Platform_Kit", "Palisade Platform Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 15));
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
  SRP_CraftableItem Register_PalisadePlatformDouble_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_PlatformDouble_Kit", "Palisade Platform Kit - Double");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadePlatformTriple_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_PlatformTriple_Kit", "Palisade Platform Kit - Triple");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeStairs_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_Stairs_Kit", "Palisade Stairs Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeTentLarge_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_TentLarge_Kit", "Large Palisade Tent Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 15));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadePlankWall_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_Planks_Kit", "Palisade Plank Wall Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadePlankWallDouble_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_PlanksDouble_Kit", "Palisade Plank Wall Kit - Double");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 90));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 8));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }   
  SRP_CraftableItem Register_PalisadeTowerSmall_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_Small_Kit", "Palisade Tower Kit - Small");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 30));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 40));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeGate_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_Gate_Kit", "Palisade Gate Kit");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 35));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeWallLog_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_FenceLog_Kit", "Palisade Log Wall Kit - Single");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 35));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeWallLogDouble_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_FenceLogDouble_Kit", "Palisade Log Wall Kit - Double");
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
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 70));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 70));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 70));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeTowerLargeStairs_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_LargeStairs_Kit", "Palisade Tower Kit - Large With Stairs");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 80));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeTowerLargeLadder_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeTower_LargeLadder_Kit", "Palisade Tower Kit - Large With Ladder");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 15));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 20));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 80));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 60));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_FPole_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_PalisadeWallLogSpikes_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Land_SRP_Fortifications_PalisadeWall_FenceLogSpike_Kit", "Palisade Wall Kit - Spiked Logs");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodDrill", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_WoodClamp", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_WoodenLogs", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenLogs", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_WoodenLogs", SRP_COLOR.NONE, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_WoodenPlanks", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Truck_01_WoodenPlanks", SRP_COLOR.NONE, 10));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_MetalSheets", SRP_COLOR.NONE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W1_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L1W3_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2_Nails", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W1_Nails", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W2_Nails", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L2W3_Nails", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_L3_Nails", SRP_COLOR.NONE, 35));

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