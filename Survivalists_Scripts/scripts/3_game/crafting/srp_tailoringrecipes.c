class SRP_TailoringRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // VESTS    
    craftableItems.Insert(RegisterArmorStickRecipe());
    craftableItems.Insert(RegisterArmorBoneRecipe());
    craftableItems.Insert(RegisterArmorFrakenVestRecipe());
    craftableItems.Insert(RegisterArmorFrakenHelmetRecipe());
    craftableItems.Insert(RegisterVestBandoilerRecipe());
    craftableItems.Insert(RegisterVestBandoilerAlchemistsRecipe());
    craftableItems.Insert(RegisterVestShoulderSlingRecipe());
    craftableItems.Insert(RegisterVestPlateCarrierRecipe());
    craftableItems.Insert(RegisterVestSmershRecipe());
    craftableItems.Insert(RegisterVestPressRecipe());
    craftableItems.Insert(RegisterVestUKAssaultRecipe());
    craftableItems.Insert(RegisterVestHighCapacityRecipe());
    craftableItems.Insert(RegisterVestHuntingRecipe());
    craftableItems.Insert(RegisterVestReflexRecipe());    
    // BACKPACKS
    craftableItems.Insert(RegisterBackpackLeatherRecipe());
    craftableItems.Insert(RegisterBackpackSurvivalRecipe());
    craftableItems.Insert(RegisterBackpackSlingRecipe());
    craftableItems.Insert(RegisterBackpackSmallMilitaryRecipe());
    craftableItems.Insert(RegisterBackpackLargeMilitaryRecipe());
    craftableItems.Insert(RegisterBackpackRifleBagRecipe());
    craftableItems.Insert(RegisterBackpackRolltopRecipe());
    craftableItems.Insert(RegisterBackpackMessengerRecipe());
    craftableItems.Insert(RegisterBackpackDUBLeathBagRecipe());
    craftableItems.Insert(Register_BackpackLetterHolder_Recipe());  
    craftableItems.Insert(Register_ArmyPouch_Recipe());    
    // BELTS
    craftableItems.Insert(RegisterBeltLegHolsterRecipe());
    craftableItems.Insert(RegisterBeltTacticalLegHolsterRecipe());
    craftableItems.Insert(RegisterBeltPoliceRecipe());
    craftableItems.Insert(RegisterBeltTacticalRecipe());
    craftableItems.Insert(RegisterBeltElbowKneePadsRecipe());
    craftableItems.Insert(RegisterBeltMilitaryRecipe());
    craftableItems.Insert(RegisterBeltHipPouchRecipe());
    craftableItems.Insert(RegisterBeltHipHolsterRecipe());
    craftableItems.Insert(Register_LeatherFlagBelt_Recipe());
    // GLOVES
    craftableItems.Insert(RegisterGlovesWorkingRecipe());
    craftableItems.Insert(RegisterGlovesTacticalRecipe());
    craftableItems.Insert(RegisterGlovesCombatRecipe());
    craftableItems.Insert(RegisterGlovesBoxingRecipe());
    // HEADGEAR
    craftableItems.Insert(RegisterHeadTurkeyBeanieRecipe());
    craftableItems.Insert(RegisterHeadBaseballCapMilitaryRecipe());
    craftableItems.Insert(RegisterHeadPakolRecipe());
    craftableItems.Insert(RegisterHeadSkullFacemaskRecipe());
    craftableItems.Insert(RegisterHeadFaceMaskRecipe());
    craftableItems.Insert(RegisterHeadMouthCoverRecipe());
    craftableItems.Insert(RegisterHeadShroudRecipe());
    craftableItems.Insert(RegisterHeadCowboyHatRecipe());
    craftableItems.Insert(RegisterHeadBurlapMaskRecipe());
    craftableItems.Insert(RegisterHeadLeatherCowlRecipe());
    craftableItems.Insert(RegisterHeadLeatherTricornRecipe());    
    // MASKS
    craftableItems.Insert(RegisterMaskSimpleBoneMetalRecipe());
    craftableItems.Insert(RegisterMaskSimpleBoneMetalBlueRecipe());
    craftableItems.Insert(RegisterMaskSimpleBoneMetalOrangeRecipe());
    craftableItems.Insert(RegisterMaskSimpleBoneMetalRustRecipe());
    craftableItems.Insert(RegisterMaskArmoredBoneMetalRecipe());
    craftableItems.Insert(RegisterMaskArmoredBoneMetalBlueRecipe());
    craftableItems.Insert(RegisterMaskArmoredBoneMetalOrangeRecipe());
    craftableItems.Insert(RegisterMaskArmoredBoneMetalRustRecipe());
    craftableItems.Insert(RegisterMaskBalaclavaRecipe());
    craftableItems.Insert(RegisterMaskBalaclava3HRecipe());
    // PANTS
    craftableItems.Insert(RegisterPantsJeansRecipe());
    craftableItems.Insert(RegisterPantsCargoRecipe());
    craftableItems.Insert(RegisterPantsHunterRecipe());
    craftableItems.Insert(RegisterPantsCanvasRecipe());
    craftableItems.Insert(RegisterPantsCanvasMidiRecipe());
    craftableItems.Insert(RegisterPantsTrackSuitRecipe());
    craftableItems.Insert(RegisterPantsGorkaRecipe());
    craftableItems.Insert(RegisterPantsFirefightersRecipe());
    craftableItems.Insert(RegisterPantsUSMCRecipe());
    craftableItems.Insert(RegisterPantsSlacksRecipe());
    craftableItems.Insert(RegisterPantsShortJeansRecipe());
    craftableItems.Insert(RegisterPantsBreechesRecipe());
    craftableItems.Insert(RegisterPantsSkirtsRecipe());
    craftableItems.Insert(RegisterPantsJumpsuitRecipe());
    // TOPS
    craftableItems.Insert(RegisterTopsNurseDressRecipe());
    craftableItems.Insert(RegisterTopsSweaterRecipe());
    craftableItems.Insert(RegisterTopsShirtRecipe());
    craftableItems.Insert(RegisterTopsTShirtRecipe());
    craftableItems.Insert(RegisterTopsHoodieRecipe());
    craftableItems.Insert(RegisterTopsTacticalShirtRecipe());
    craftableItems.Insert(RegisterTopsHikingJacketRecipe());
    craftableItems.Insert(RegisterTopsManSuitJacketRecipe());
    craftableItems.Insert(RegisterTopsM65Recipe());
    craftableItems.Insert(RegisterTopsWomanSuitJacketRecipe());
    craftableItems.Insert(RegisterTopsGorkaJacketRecipe());
    craftableItems.Insert(RegisterTopsRidersJacketRecipe());
    craftableItems.Insert(RegisterTopsWoolCoatRecipe());
    craftableItems.Insert(RegisterTopsTracksuitRecipe());
    craftableItems.Insert(RegisterTopsFirefighterJacketRecipe());
    craftableItems.Insert(RegisterTopsMiniDressRecipe());
    // MISC    
    craftableItems.Insert(Register_DragonPlushie_Recipe());
    craftableItems.Insert(Register_BasicCarpetKit_Recipe());
    craftableItems.Insert(Register_BasicRugKit_Recipe());
  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 200));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 200));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 5));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 30));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 10));
  //   return craftableItem;
  // }  
//===========================VESTS
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
  SRP_CraftableItem RegisterVestBandoilerRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Bandoiler", "Bandoiler");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.GRAY, 108));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 92));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 85));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLACK, 122));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 118));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterVestBandoilerAlchemistsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Bandoiler_Alchemist", "Alchemists Bandoiler");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 91));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.LIGHTBLUE, 121));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.PINK, 89));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 124));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 78));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.COW, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestShoulderSlingRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ShoulderSling", "Shoulder Sling");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 104));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 119));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLACK, 78));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 81));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestPlateCarrierRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("PlateCarrierVest", "Plate Carrier Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.GREEN, 139));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 163));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.YELLOW, 84));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 141));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestSmershRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SmershVest", "Smersh Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.PINK, 115));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 97));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 76));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.GREEN, 108));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 79));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.SHEEP, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 3));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestPressRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("PressVest_LightBlue", "Press Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 77));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 105));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.LIGHTBLUE, 118));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 85));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.PINK, 92));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 2));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestUKAssaultRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("UKAssVest_Camo", "UK Assault Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 117));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 98));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.GRAY, 75));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.YELLOW, 119));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 107));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 4));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestHighCapacityRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("HighCapacityVest_Olive", "High Capacity Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.WHITE, 121));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 115));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 98));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.BLACK, 102));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 2));
    return craftableItem;
  }  
  SRP_CraftableItem RegisterVestHuntingRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("HuntingVest", "HuntingVest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 91));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.ORANGE, 109));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 85));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 88));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.YELLOW, 93));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 2));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterVestReflexRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("ReflexVest", "Reflex Vest");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 78));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.YELLOW, 89));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.ORANGE, 84));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.RED, 103));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 119));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================Backpacks
  SRP_CraftableItem RegisterBackpackLeatherRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_LeatherBackpack_Default", "Leather Backpack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 152));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 194));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 188));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 150));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 155));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackSurvivalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_SurvivalBackpack_Default", "Survival Backpack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 176));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.GREEN, 152));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 166));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 162));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 187));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackSlingRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_SlingBackpack_Default", "Sling Backpack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.YELLOW, 172));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 171));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 190));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 165));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 151));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.SHEEP, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackSmallMilitaryRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Small_Military_Pack_Tan", "Small Military Backpack - Tan");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 194));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 164));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.YELLOW, 183));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 165));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 176));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackLargeMilitaryRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Big_Military_Pack_Tan", "Large Military Backpack - Tan");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 195));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 184));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 173));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 188));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.GRAY, 200));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.BEAR, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackRifleBagRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Rifle_Bag_Green", "Rifle Backpack - Green");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 185));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 190));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 187));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.GREEN, 193));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 200));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackRolltopRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Rolltop_Bag", "Rolltop Backpack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 158));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.RED, 164));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 159));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 152));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 170));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackMessengerRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MessengerBag_Leather", "Messenger Backpack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 175));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 169));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.LIGHTBLUE, 154));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 157));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 186));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBackpackDUBLeathBagRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Leatherbag", "Leather Sling Backpack");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 179));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 158));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 171));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 184));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.BLUE, 160));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem Register_BackpackLetterHolder_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_LetterHolder_Maroon", "Letter Carrier");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.RED, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }  
  SRP_CraftableItem Register_ArmyPouch_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("ArmyPouch_Beige", "Army Pouch");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.GREEN, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.YELLOW, 25));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }  
//===========================BELTS
  SRP_CraftableItem RegisterBeltLegHolsterRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_LegHolster", "Leg Holster");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 63));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 72));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.WHITE, 63));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.COW, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBeltTacticalLegHolsterRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Tactical_Leg_Holster_Black", "Tactical Leg Holster");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLACK, 64));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLACK, 39));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLACK, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLACK, 67));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.BLACK, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterBeltPoliceRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_PoliceBelt", "Police Belt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 38));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 73));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 41));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLACK, 57));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 46));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterBeltTacticalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_TacticalBelt", "Tactical Belt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 67));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 56));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.GREEN, 38));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 42));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 54));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.SHEEP, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterBeltElbowKneePadsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Elbow_Knee_Pads_Green", "Elbow and Knee Pads");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 52));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.GREEN, 68));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 4));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterBeltMilitaryRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Military_Belt_Tan", "Military Belt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.GRAY, 48));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 37));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 58));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 67));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 41));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.COW, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 2));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterBeltHipPouchRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Pouch_Belt", "Hip Pouch Belt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.YELLOW, 71));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 39));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 62));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 54));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterBeltHipHolsterRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Holster_Belt", "Hip Holster");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 62));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.PINK, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 69));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 46));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem Register_LeatherFlagBelt_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_FlagBelt_Basic", "Leather Flag Belt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 98));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 23));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 51));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 27));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 75));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BEAR, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }  
//===========================GLOVES
  SRP_CraftableItem RegisterGlovesWorkingRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("WorkingGloves_Beige", "Working Gloves");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 56));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.YELLOW, 73));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 68));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }  
  SRP_CraftableItem RegisterGlovesTacticalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("TacticalGloves_Beige", "Tactical Gloves");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLUE, 64));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 78));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 40));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 36));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterGlovesCombatRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("OMNOGloves_Brown", "(OMNO) Combat Gloves");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 51));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.RED, 46));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 70));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 45));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterGlovesBoxingRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_BoxingGloves_Red", "Boxing Gloves");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 48));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 56));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.RED, 34));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 38));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 43));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.WOLF, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
//===========================HEADGEAR
  SRP_CraftableItem RegisterHeadTurkeyBeanieRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_TurkeyBeanie_Turkey", "Turkey Hat");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 63));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.PINK, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 56));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }  
  SRP_CraftableItem RegisterHeadBaseballCapMilitaryRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MilitaryPatrolCap_Tan", "Military Patrol Cap");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 61));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 63));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.RED, 59));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadPakolRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("BaseballCap_Pakol", "Pakol");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.PINK, 53));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 43));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 61));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadSkullFacemaskRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_FaceMaskSkull_Tan", "Skull Face Mask");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 65));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLUE, 54));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 56));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.HUMAN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadFaceMaskRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_FaceMask_Tan", "Face Mask");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.LIGHTBLUE, 62));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 53));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 58));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 65));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadMouthCoverRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MouthCover_Tan", "Mouth Cover");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.YELLOW, 63));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 61));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 53));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadShroudRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Shroud_Tan", "Head Shroud");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 57));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 62));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 46));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 58));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.YELLOW, 60));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BOAR, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadCowboyHatRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Cowboy_Hat", "Cowboy Hat");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLACK, 51));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 48));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 62));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 53));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 6));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadBurlapMaskRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Burlap_Mask", "Burlap Mask");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLACK, 63));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 56));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterHeadLeatherCowlRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Leathercowl", "Leather Cowl");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 58));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 61));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLUE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 62));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 53));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterHeadLeatherTricornRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_PirateHat_Leather", "Leather Tricorn");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 48));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLUE, 76));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 17));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 54));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BEAR, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 1));

    return craftableItem;
  }  
//===========================MASKS
  SRP_CraftableItem RegisterMaskSimpleBoneMetalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Scrapmask", "Makeshift Bone Metal Mask");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 45));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 5));
    return craftableItem;
  }    
  SRP_CraftableItem RegisterMaskSimpleBoneMetalBlueRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Scrapmask_Blue", "Makeshift Bone Metal Mask - Blue");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLUE, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLUE, 45));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterMaskSimpleBoneMetalOrangeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Scrapmask_Orange", "Makeshift Bone Metal Mask - Orange");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.ORANGE, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.ORANGE, 45));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterMaskSimpleBoneMetalRustRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Scrapmask_Orange", "Makeshift Bone Metal Mask - Rust");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 59));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.RED, 45));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem RegisterMaskArmoredBoneMetalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_ScrapmaskV2", "Armored Bone Metal Mask");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 52));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 59));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 10));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMaskArmoredBoneMetalBlueRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_ScrapmaskV2_Blue", "Armored Bone Metal Mask - Blue");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLUE, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 52));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLUE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 59));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 10));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMaskArmoredBoneMetalOrangeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_ScrapmaskV2_Orange", "Armored Bone Metal Mask - Orange");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.ORANGE, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 52));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.ORANGE, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 59));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 10));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMaskArmoredBoneMetalRustRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_ScrapmaskV2_Rust", "Armored Bone Metal Mask - Rust");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 49));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 52));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.RED, 45));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 59));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Bones", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalPlate", SRP_COLOR.NONE, 10));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMaskBalaclavaRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("BalaclavaMask_Beige", "Balaclava");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 57));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 63));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.RED, 61));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 47));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMaskBalaclava3HRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Balaclava3Holes_Beige", "Balaclava 3 Holes");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 64));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 47));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 55));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.LIGHTBLUE, 52));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 57));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================PANTS
  SRP_CraftableItem RegisterPantsJeansRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Jeans_Blue", "Jeans");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 87));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLUE, 91));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLUE, 112));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLUE, 92));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 75));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsCargoRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("CargoPants_Blue", "Cargo Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLUE, 89));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLUE, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLUE, 104));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 76));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 104));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsHunterRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("HunterPants_Brown", "Hunter Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 121));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 86));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 105));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 77));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.ORANGE, 122));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 6));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsCanvasRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("CanvasPants_Beige", "Canvas Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 118));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 83));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 91));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.ORANGE, 103));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 116));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsCanvasMidiRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("CanvasPantsMidi_Beige", "Canvas Pants Midi");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 99));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 120));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 116));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.PURPLE, 121));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 78));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsTrackSuitRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("TrackSuitPants_Blue", "TrackSuit Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 81));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 122));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 104));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLUE, 80));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.BLUE, 97));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsGorkaRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("GorkaPants_Flat", "Gorka Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 105));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 118));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.RED, 89));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.GREEN, 90));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 78));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.BOAR, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsFirefightersRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("FirefightersPants_Beige", "Fire Fighter Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 109));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.YELLOW, 92));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.RED, 119));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.WHITE, 88));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 94));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsUSMCRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("USMCPants_Desert", "USMC Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.YELLOW, 121));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 78));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.YELLOW, 110));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 87));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 115));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsSlacksRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SlacksPants_Beige", "Slacks Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 98));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.ORANGE, 120));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 89));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.ORANGE, 104));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 115));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsShortJeansRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("ShortJeans_Black", "Short Jeans");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 115));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLACK, 81));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLACK, 121));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLACK, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 110));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.SHEEP, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsBreechesRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Breeches_Beetcheck", "Breeches");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 105));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLACK, 76));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.RED, 120));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLACK, 86));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 106));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsSkirtsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Skirt_Red", "Skirt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 76));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 120));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 106));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.WHITE, 83));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.RED, 116));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterPantsJumpsuitRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("JumpsuitPants_Green", "Jumpsuit Pants");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 120));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.GREEN, 117));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 97));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.GREEN, 76));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 125));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================TOPS
  SRP_CraftableItem RegisterTopsNurseDressRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("NurseDress_Blue", "Nurse Dress");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.PURPLE, 174));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 165));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 188));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 140));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 126));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsSweaterRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Sweater_Gray", "Sweater");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.GRAY, 149));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 172));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 132));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 146));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.GRAY, 157));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.SHEEP, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsShirtRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Shirt_BlueCheck", "Shirt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 185));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.WHITE, 137));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLUE, 149));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 176));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.COW, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsTShirtRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("TShirt_Blue", "TShirt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 190));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLACK, 153));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 132));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLUE, 189));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 173));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsHoodieRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Hoodie_Blue", "Hoodie");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 176));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 153));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.WHITE, 123));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 167));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.BLUE, 157));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsTacticalShirtRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("TacticalShirt_Olive", "Tactical Shirt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 188));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.GREEN, 165));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 162));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 154));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.GREEN, 134));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.BEAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.WOLF, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsHikingJacketRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("HikingJacket_Blue", "Hiking Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.BLACK, 172));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 137));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 126));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 145));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.YELLOW, 160));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.GOAT, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsManSuitJacketRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("ManSuit_Brown", "Man Suit Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 149));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.PURPLE, 160));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 152));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 127));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.PINK, 153));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsM65Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M65Jacket_Tan", "M65 Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.RED, 127));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 150));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 128));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 185));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.RED, 170));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsWomanSuitJacketRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("WomanSuit_Brown", "Woman Suit Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.GRAY, 167));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 155));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 142));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.PURPLE, 126));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 187));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsGorkaJacketRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("GorkaEJacket_Autumn", "Gorka Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 129));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.BLUE, 176));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 183));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.PINK, 145));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 134));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.DEER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsRidersJacketRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("RidersJacket_Black", "Riders Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 125));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 162));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.BLACK, 167));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.BLACK, 132));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 177));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.BOAR, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.PIG, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsWoolCoatRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("WoolCoat_BlackCheck", "Wool Coat");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 187));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 150));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.GRAY, 140));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 136));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.BLACK, 195));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.COW, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.GOAT, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsTracksuitRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("TrackSuitJacket_Blue", "Tracksuit Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.WHITE, 145));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 132));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.PURPLE, 180));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 137));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 172));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.PIG, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.GOAT, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsFirefighterJacketRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("FirefighterJacket_Beige", "Fire Fighter Jacket");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 193));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.YELLOW, 157));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.WHITE, 146));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.YELLOW, 130));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 156));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.DEER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterTopsMiniDressRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("MiniDress_WhiteChecker", "Minidress");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 143));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.WHITE, 191));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 156));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.WHITE, 140));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 188));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt2", SRP_COLOR.WOLF, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt3", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt4", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt5", SRP_COLOR.GOAT, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================MISC
  SRP_CraftableItem Register_DragonPlushie_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_DragonPlushie_Green", "Dragon Plushie");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 75));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 75));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 100));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Sticks", SRP_COLOR.NONE, 2));    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_MetalWire", SRP_COLOR.NONE, 1));    
    return craftableItem;
  }
  SRP_CraftableItem Register_BasicCarpetKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_CarpetRug_Basic_Kit", "Basic Rug");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 75));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 75));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));   
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));   
    return craftableItem;
  }
  SRP_CraftableItem Register_BasicRugKit_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Carpet_Basic_Kit", "Basic Carpet");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingMachine", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread1", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread2", SRP_COLOR.NONE, 75));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread3", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread4", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_SewingThread5", SRP_COLOR.NONE, 75));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("TailoringPelt1", SRP_COLOR.NONE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Leather", SRP_COLOR.NONE, 2));   
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Tailoring_Fabric", SRP_COLOR.NONE, 4));   
    return craftableItem;
  }
//===========================END

};