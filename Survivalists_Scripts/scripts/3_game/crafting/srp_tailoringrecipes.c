class SRP_TailoringRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // ARMOR    
    craftableItems.Insert(RegisterArmorStickRecipe());
    craftableItems.Insert(RegisterArmorBoneRecipe());
    craftableItems.Insert(RegisterArmorFrakenVestRecipe());
    craftableItems.Insert(RegisterArmorFrakenHelmetRecipe());
  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 25));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 25));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 25));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 25));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 25));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 10));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 10));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 10));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 10));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 10));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 50));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 8));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 5));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
  //   return craftableItem;
  // }  
//===========================ARMOR
  SRP_CraftableItem RegisterArmorStickRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Stickarmour", "Stick Armor");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterArmorBoneRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Bonearmour", "Bone Armor");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 35));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 30));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterArmorFrakenVestRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_FrakenArmor_Vest_Basic", "Fraken Armor Leather Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 65));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.ALPHA, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.HUMAN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BIOWOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.HUMAN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.ALPHA, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 3));
    return craftableItem;
  }
  SRP_CraftableItem RegisterArmorFrakenHelmetRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_FrakenArmor_Helmet_Basic", "Fraken Armor Helmet");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.ALPHA, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.HUMAN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BIOWOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.HUMAN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.ALPHA, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================HEADGEAR
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.WHITE, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLACK, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.GREEN, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.LIGHTBLUE, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.RED, 200));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 50));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 30));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 8));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 10));
  //   return craftableItem;
  // }
//===========================END

};