
modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();

    //--------- Modded Item Recipes
    // RegisterRecipe(new Craft_Msp_EmptyPlanterBox);
    // RegisterRecipe(new Craft_Msp_EmptySquarePlanterBox);
    RegisterRecipe(new SRP_DecraftBBPKits);
    RegisterRecipe(new SRP_DecraftBBPBlueprints);
    RegisterRecipe(new SRP_CraftBBPBlueprints);
    
    //==========================================================UNREGISTER RECIPES
      // Vanilla
      UnregisterRecipe("CraftArrow");
      UnregisterRecipe("CraftArrowBone");
      UnregisterRecipe("FillSyringe");
      // BBP
      UnregisterRecipe("BBPCraftStepLadder");
      // SRP
      UnregisterRecipe("SRP_DismantleElectronicJammers");
      // Windstride
      UnregisterRecipe("CraftRagged_Eyepatch");
      // Deer Isle
      UnregisterRecipe("CraftCuttedPeltBrownFromBear");
      UnregisterRecipe("CraftBearPeltGhillieBrown");
      UnregisterRecipe("CraftCuttedPeltWhite");
      UnregisterRecipe("CraftBearPeltGhillieWhite");
      // Dressupbox
      UnregisterRecipe("CraftDBEyepatch");
      UnregisterRecipe("DUB_Guitar_R");
      UnregisterRecipe("DUB_Barbwire_R");

    //==========================================================DECONSTRUCTION
      RegisterRecipe(new Deconstruct_PlacedObjectKit);
      RegisterRecipe(new Deconstruct_PlacedObjectKit_Advanced);
      RegisterRecipe(new Deconstruct_PlacedObjectKit_AdvancedCrude);

      RegisterRecipe(new Deconstruct_RockPile);
      RegisterRecipe(new Deconstruct_PlankPile);
      RegisterRecipe(new Deconstruct_LogPile);

      RegisterRecipe(new SawWoodenLog_Irradiated);
      RegisterRecipe(new SplitLongWoodenStick_Irradiated);
      RegisterRecipe(new SplitFirewood_Irradiated);

    //==========================================================Camping
      RegisterRecipe(new Craft_SRP_ChessBoard);
      RegisterRecipe(new Craft_SRP_ChessBoard_PawnPrimary);
      RegisterRecipe(new Craft_SRP_ChessBoard_RookPrimary);
      RegisterRecipe(new Craft_SRP_ChessBoard_KnightPrimary);
      RegisterRecipe(new Craft_SRP_ChessBoard_BishopPrimary);
      RegisterRecipe(new Craft_SRP_ChessBoard_QueenPrimary);
      RegisterRecipe(new Craft_SRP_ChessBoard_KingPrimary);
      RegisterRecipe(new Craft_SRP_ChessBoard_PawnAlternate);
      RegisterRecipe(new Craft_SRP_ChessBoard_RookAlternate);
      RegisterRecipe(new Craft_SRP_ChessBoard_KnightAlternate);
      RegisterRecipe(new Craft_SRP_ChessBoard_BishopAlternate);
      RegisterRecipe(new Craft_SRP_ChessBoard_QueenAlternate);
      RegisterRecipe(new Craft_SRP_ChessBoard_KingAlternate);
      RegisterRecipe(new Craft_SRP_LabTubeRack);

      RegisterRecipe(new Craft_SRP_DismantleRaft);

      RegisterRecipe(new Craft_SRP_SleepingBag_Basic);

      RegisterRecipe(new Craft_SRP_HandofCards);

      RegisterRecipe(new Craft_SRP_TetrisShelfLDown);
      RegisterRecipe(new Craft_SRP_TetrisShelfLUp);
      RegisterRecipe(new Craft_SRP_TetrisShelfLLeft);
      RegisterRecipe(new Craft_SRP_TetrisShelfLRight);
      RegisterRecipe(new Craft_SRP_TetrisShelfIVertical);
      RegisterRecipe(new Craft_SRP_TetrisShelfIHorizontal);
      RegisterRecipe(new Craft_SRP_TetrisShelfTUp);
      RegisterRecipe(new Craft_SRP_TetrisShelfTDown);
      RegisterRecipe(new Craft_SRP_TetrisShelfTVertical);
      RegisterRecipe(new Craft_SRP_TetrisShelfSHorizontal);
      RegisterRecipe(new Craft_SRP_TetrisShelfSVertical);
      RegisterRecipe(new Craft_SRP_TetrisShelfBox);

      RegisterRecipe(new Craft_SRP_WoodenShelfSimple_Kit);
      RegisterRecipe(new Craft_SRP_WoodenShelfSimpleGround_Kit);
      RegisterRecipe(new Craft_SRP_WoodenShelfGround_Kit);
      RegisterRecipe(new Craft_SRP_WoodenShelfGroundTall_Kit);
      RegisterRecipe(new Craft_SRP_GunShelfWall_Kit);
      RegisterRecipe(new Craft_SRP_GunShelfGround_Kit);
      RegisterRecipe(new Craft_SRP_BoocCaseCube_Kit);

      RegisterRecipe(new Craft_SRP_WoodenDisplayKit_Kit_CoatRackBasic);
      RegisterRecipe(new Craft_SRP_WoodenDisplayKit_Kit_CoatRackSimple);
      RegisterRecipe(new Craft_SRP_WoodenDisplayKit_Kit_CoatRackFancy);

      RegisterRecipe(new Craft_SRP_MetalShelfSimpleGround_Kit);
      RegisterRecipe(new Craft_SRP_MetalShelfGround_Kit);
      RegisterRecipe(new Craft_SRP_MetalShelfGroundLarge_Kit);
      RegisterRecipe(new Craft_SRP_MetalShelfGroundXL_Kit);

      RegisterRecipe(new Craft_SRP_WoodenDiceWhite);
      RegisterRecipe(new Craft_SRP_WoodenDiceWhiteRed);
      RegisterRecipe(new Craft_SRP_WoodenDiceBlackWhite);
      RegisterRecipe(new Craft_SRP_WoodenDiceBlackRed);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD4);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD6);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD8);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD10);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD12);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD20);
      RegisterRecipe(new Craft_SRP_GemRPGDiceD100);

      RegisterRecipe(new Craft_SRP_DecorativeLightKit_KitBase);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_Long);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_VerticalLong);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_Flat);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_VerticalFlat);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_LongFancy);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_VerticalLongFancy);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_Corner);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_HorizontalCorner);
      RegisterRecipe(new Craft_SRP_DecorativeLightKit_IntoColorKit);

      RegisterRecipe(new Craft_SRP_WoodenBowl);
      RegisterRecipe(new Craft_SRP_WoodenBowlDark);
      RegisterRecipe(new Craft_SRP_WoodenBowlCherry);
      RegisterRecipe(new Craft_SRP_WoodenBowlSquare);
      
      RegisterRecipe(new Craft_SRP_WhiteFlag);

    //==========================================================Clothing
      RegisterRecipe(new Craft_SRP_RepairClothing);
      // BACKPACKS
      RegisterRecipe(new Craft_DUB_ShieldBackpack);
      RegisterRecipe(new Craft_DUB_BagFlag);
      // HEADS
      RegisterRecipe(new Craft_SRP_TinfoilHat);      
      RegisterRecipe(new Craft_SRP_GhillieWrapTan);
      RegisterRecipe(new Craft_DUB_GhillieHoodTan);
      RegisterRecipe(new Craft_DUB_GhillieHoodWoodland);
      RegisterRecipe(new Craft_DUB_GhillieHoodMossy);
      RegisterRecipe(new Craft_DUB_GhillieHoodWinter);
      // Mask
      RegisterRecipe(new SRP_Craft_SRP_DUBDismaskFull);
      RegisterRecipe(new Craft_SRP_DrawnEyepatch);
      RegisterRecipe(new Craft_SRP_Eyepatch_Basic);
      RegisterRecipe(new Craft_SRP_Eyepatch_Ragged);
      RegisterRecipe(new Craft_SRP_Eyepatch_RaggedBlack);
      RegisterRecipe(new Craft_SRP_Eyepatch_RaggedBrown);
      RegisterRecipe(new SRP_Craft_SRP_BoneMonsterMask);

      // Jackets / TOPS
		  RegisterRecipe(new Craft_SRP_LeatherArmband);
      RegisterRecipe(new Craft_SRPClothing_TopKit_InsulatedGhillie_Brown);
      RegisterRecipe(new Craft_SRPClothing_TopKit_InsulatedGhillie_White);
      RegisterRecipe(new Craft_SRPClothing_TopKit_InsulatedGhillie_Bear);
      // Vests
      RegisterRecipe(new Craft_SRP_VestPouch_MapPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_PistolMagPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_MedicalPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_TacticalPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_MediumPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_MagazinePouch);
      RegisterRecipe(new Craft_SRP_VestPouch_MagazineDumpPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_UtilityPouch);
      RegisterRecipe(new Craft_SRP_VestPouch_HeavyPouch);
      // Patches
      RegisterRecipe(new Craft_SRP_PatchFlag_StarterKit);
      RegisterRecipe(new Craft_SRP_PatchLogo_StarterKit);
      RegisterRecipe(new Craft_SRP_Armband_StarterKit);
      RegisterRecipe(new Craft_SRP_DoubleArmband_StarterKit);

      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherSack_Natural);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherBelt_Natural);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherKnifeSheath);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherGloves_Natural);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherHat_Natural);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherPants_Natural);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherJacket_Natural);
      RegisterRecipe(new SRP_Craft_LeatherClothing_LeatherStorageVest_Natural);
      RegisterRecipe(new SRP_Craft_LeatherButtstockPouch_Default);
      RegisterRecipe(new SRP_Craft_LeatherButtstockPouch_Black);
      RegisterRecipe(new SRP_Craft_LeatherButtstockPouch_Linen);
      RegisterRecipe(new SRP_Craft_LeatherButtstockPouch_Purple);

    //==========================================================Consumables
      RegisterRecipe(new Craft_SRP_MetalWire);
      RegisterRecipe(new Craft_SRP_BarbedWire);
      RegisterRecipe(new Craft_SRP_CopperWire);
      RegisterRecipe(new Craft_SRP_CopperWire_Black);
      RegisterRecipe(new Craft_SRP_CopperWire_Brown);
      RegisterRecipe(new Craft_SRP_CopperWire_Red);
      RegisterRecipe(new Craft_SRP_CopperWire_Orange);
      RegisterRecipe(new Craft_SRP_CopperWire_Yellow);
      RegisterRecipe(new Craft_SRP_CopperWire_Green);
      RegisterRecipe(new Craft_SRP_CopperWire_Blue);
      RegisterRecipe(new Craft_SRP_CopperWire_Purple);
      RegisterRecipe(new Craft_SRP_CopperWire_Grey);
      RegisterRecipe(new Craft_SRP_CopperWire_White);
      RegisterRecipe(new SRP_Craft_MakeMetalScraps);
      RegisterRecipe(new SRP_Craft_MakeMetalScraps_Advanced);
      RegisterRecipe(new SRP_Craft_MakeMetalScraps_Cut);
      RegisterRecipe(new SRP_Craft_MakeMetalScraps_Cut_Advanced);

      RegisterRecipe(new SRP_Craft_DisplayCaseHook);
      RegisterRecipe(new SRP_Convert_DisplayCaseHook);

      RegisterRecipe(new Craft_SRP_Rag_Bleach);

      RegisterRecipe(new SRP_CraftFishingHook);

      RegisterRecipe(new SRP_RefuelGas_WithCanister_Small);
      RegisterRecipe(new SRP_RefuelGas_WithCanister_Medium);
      RegisterRecipe(new SRP_RefuelGas_WithCanister_Large);
      RegisterRecipe(new SRP_RefuelGas_WithCanister_PetrolLighter);
      RegisterRecipe(new SRP_RefuelGas_WithCanister_Zippo);

      RegisterRecipe(new Craft_SRP_MintedCoin_Platinum);	
      RegisterRecipe(new Craft_SRP_MintedCoin_Iron);	
      RegisterRecipe(new Craft_SRP_MintedCoin_Gold);	
      RegisterRecipe(new Craft_SRP_MintedCoin_Bronze);	
      RegisterRecipe(new Craft_SRP_MintedCoin_Copper);	

      RegisterRecipe(new Craft_SRP_SalvageSewingThread);	
      RegisterRecipe(new Craft_SRP_SalvageSewingThreadWithTool);	

      RegisterRecipe(new Craft_SRP_SalvageClothing);	
      RegisterRecipe(new Craft_SRP_SalvageClothingWithTool);	
      RegisterRecipe(new Craft_SRP_SalvageClothingWithMachine);	

      RegisterRecipe(new SRP_Craft_Netting);	

    //==========================================================Containers
      RegisterRecipe(new Craft_SRP_LeatherPouch_Default);
      RegisterRecipe(new Craft_SRP_LeatherPouch_Medieval);
      RegisterRecipe(new Craft_SRP_LeatherPouch_Small);
      RegisterRecipe(new DeCraft_SRP_LeatherPouches);

      RegisterRecipe(new Craft_SRP_MaterialSpool);

      RegisterRecipe(new Craft_SRP_Notebook);
      RegisterRecipe(new Craft_SRP_ExtraPaper);
      RegisterRecipe(new Craft_SRP_CardboardBox_Kit);

      RegisterRecipe(new Craft_SRP_Container_HiddenStash_Can);
      RegisterRecipe(new Craft_SRP_Container_HiddenStash_Guts);
      RegisterRecipe(new Craft_SRP_Container_HiddenStash_Teddy);
      RegisterRecipe(new Craft_SRP_Container_TeddyDisplay);

      RegisterRecipe(new Craft_SRP_SmallProtectorCase_Syringe);
      RegisterRecipe(new Craft_SRP_SmallProtectorCase_Nails);
      RegisterRecipe(new Craft_SRP_SmallProtectorCase_Flare);
      RegisterRecipe(new Craft_SRP_SmallProtectorCase_Armband);      
      RegisterRecipe(new Craft_SRP_Rebox_Nails);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_556x45);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_556x45Tracer);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_308Win);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_308WinTracer);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_762x54);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_762x54Tracer);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_762x39);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_762x39Tracer);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_22);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_357);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_45ACP);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_9x19);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_380);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_12gaPellets);  
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_12gaSlug);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_545x39);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_545x39Tracer);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_9x39);
      RegisterRecipe(new Craft_SRP_Rebox_Ammo_9x39AP);

    //==========================================================Crafting
      RegisterRecipe(new Craft_SRP_DecorativeClayPot_KitBase);	
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_Bottle);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_Decanter);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_BulbShort);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_BulbWide);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_Cone);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_ShortCone);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_TeardropTall);
      RegisterRecipe(new Craft_SRP_DecorativeClayPotKit_TeardropWide);

      RegisterRecipe(new Craft_SRP_Potbelly_Stove_Kit);		
      RegisterRecipe(new Craft_SRP_ShootingTargets_Kit);		
      RegisterRecipe(new Craft_SRP_PortableGasLamp);

      RegisterRecipe(new Craft_SRP_Barricade_Wood_Kit);
      RegisterRecipe(new Craft_SRP_BarricadeWithWindow_Wood_Kit);
      RegisterRecipe(new Craft_SRP_WindowBarricade_Wood_Kit);
      RegisterRecipe(new Craft_SRP_WindowBarricadeTall_Wood_Kit);
      RegisterRecipe(new Craft_SRP_SpikeBarricade_Wood_Kit);
      RegisterRecipe(new Craft_SRP_Fortifications_BambooWall_Kit);
      RegisterRecipe(new Craft_SRP_Fortifications_BambooWall_Yellow_Kit);
      RegisterRecipe(new Craft_SRP_Fortifications_BambooWallCrossSmall_Kit);
      RegisterRecipe(new Craft_SRP_Fortifications_BambooWallCrossSmall_Yellow_Kit);
      RegisterRecipe(new Craft_SRP_Fortifications_BambooWallCross_Kit);
      RegisterRecipe(new Craft_SRP_Fortifications_BambooWallCross_Yellow_Kit);

      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornRampKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornLPlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornUPlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornFlatPlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornWornSinglePlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornWornDoublePlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameWornFlatDoublePlatformKit);

      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineRampKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineLPlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineUPlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineFlatPlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineWornSinglePlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineWornDoublePlatformKit);
      RegisterRecipe(new SRP_CraftBuildingComponentFrameFineFlatDoublePlatformKit);

      RegisterRecipe(new Craft_SRP_CopyBook);
      RegisterRecipe(new Craft_SRP_CopyBook_Press);

      RegisterRecipe(new Craft_SRP_ArmbandPinCollectable);

      RegisterRecipe(new Craft_SRP_WoodenSignKit_Base);

      RegisterRecipe(new SRP_Craft_BedMetal);
    
      RegisterRecipe(new SRP_Craft_SRP_MetalBarrelKit_Kit);
      RegisterRecipe(new SRP_Craft_MetalBarrelOld);
      RegisterRecipe(new SRP_Craft_MetalBarrelBlue);
      RegisterRecipe(new SRP_Craft_MetalBarrelRed);
      RegisterRecipe(new SRP_Craft_MetalBarrelYellow);
      RegisterRecipe(new SRP_Craft_MetalBarrelConcrete);
      RegisterRecipe(new SRP_Craft_MetalGunWallFence);
      RegisterRecipe(new SRP_Craft_MetalMeleeWallFence);
      // RegisterRecipe(new SRP_Craft_Anvil);
      
      RegisterRecipe(new Craft_SRP_StreetLightKit);		
      RegisterRecipe(new Craft_SRP_StreetLightSlim_Kit);		
      RegisterRecipe(new Craft_SRP_StreetLightLarge_Kit);
      RegisterRecipe(new Craft_SRP_StreetLightLarge_Metal_Kit);
      RegisterRecipe(new Craft_SRP_StreetLightMedium_Kit);
      RegisterRecipe(new Craft_SRP_StreetLightMedium_Wood_Kit);

      RegisterRecipe(new SRP_CraftStreetSignKit);
      RegisterRecipe(new SRP_CraftStreetSignKitCaution);
      RegisterRecipe(new SRP_CraftStreetSignKitNoSmoking);
      RegisterRecipe(new SRP_CraftStreetSignKitYield);
      RegisterRecipe(new SRP_CraftStreetSignKitPedestrians);
      RegisterRecipe(new SRP_CraftStreetSignKitNoBikes);
      RegisterRecipe(new SRP_CraftStreetSignKitNoLeftTurn);
      RegisterRecipe(new SRP_CraftStreetSignKitSpeedLimit);
      RegisterRecipe(new SRP_CraftStreetSignKitBikePath);
      RegisterRecipe(new SRP_CraftStreetSignKitOneWay);
      RegisterRecipe(new SRP_CraftStreetSignKitHandicapSmall);
      RegisterRecipe(new SRP_CraftStreetSignKitHandicap);
      RegisterRecipe(new SRP_CraftStreetSignKitNoParking);
      RegisterRecipe(new SRP_CraftStreetSignKitHighway);

      RegisterRecipe(new Craft_SRP_Taxidermy_Kit);
      RegisterRecipe(new Craft_SRP_TaxidermyWall_Kit);

      RegisterRecipe(new Craft_DUB_Wolftrophy);
      RegisterRecipe(new Craft_DUB_Beartrophy);
      RegisterRecipe(new Craft_DUB_Pigtrophy);
      RegisterRecipe(new Craft_DUB_Wildboartrophy);
      RegisterRecipe(new Craft_DUB_Deertrophy);
      RegisterRecipe(new Craft_DUB_Goattrophy);
      RegisterRecipe(new Craft_DUB_Sheeptrophy);
      RegisterRecipe(new Craft_DUB_BioWolftrophy);
      RegisterRecipe(new Craft_DUB_Cowtrophy);
      RegisterRecipe(new Craft_DUB_Roostertrophy);
      RegisterRecipe(new Craft_DUB_Moosetrophy);
      RegisterRecipe(new Craft_DUB_Alphatrophy);

      RegisterRecipe(new Craft_DUB_Roosterwalltrophy);
      RegisterRecipe(new Craft_DUB_Rabbitwalltrophy);
      RegisterRecipe(new Craft_DUB_Carpwalltrophy);
      RegisterRecipe(new Craft_DUB_Mackerelwalltrophy);
      RegisterRecipe(new Craft_DUB_Sardinewalltrophy);
      RegisterRecipe(new Craft_DUB_Deerskullwalltrophy);
      RegisterRecipe(new Craft_DUB_Skullwalltrophy);
      RegisterRecipe(new Craft_DUB_Headspidertrophy);
      RegisterRecipe(new Craft_DUB_Moosewalltrophy);
      RegisterRecipe(new Craft_DUB_Cowwalltrophy);
      RegisterRecipe(new Craft_DUB_Deerwalltrophy);
      RegisterRecipe(new Craft_DUB_Boarwalltrophy);
      RegisterRecipe(new Craft_DUB_Pigwalltrophy);
      RegisterRecipe(new Craft_DUB_Bearwalltrophy);
      RegisterRecipe(new Craft_DUB_Wolfwalltrophy);
      RegisterRecipe(new Craft_DUB_BioWolfwalltrophy);
      RegisterRecipe(new Craft_DUB_Alphawalltrophy);

      RegisterRecipe(new Craft_SRP_BedsideTable_Kit);
      RegisterRecipe(new Craft_SRP_MedicalBedSmall_Wood_Kit);
      // RegisterRecipe(new Craft_SRP_ToolRack_Hammers_Kit);

    //==========================================================Drugs
      RegisterRecipe(new SRP_Drugs_CreateCocaineStarterBag);	
      RegisterRecipe(new SRP_Drugs_ManufactureCocaineFromRaw);	
      RegisterRecipe(new SRP_Drugs_ManufactureCocaineFromPasteWithTubes);	
      RegisterRecipe(new SRP_Drugs_CutDrugsFromCocaine);	
      RegisterRecipe(new SRP_Drugs_CutDrugsFromCocaineTainted);

      RegisterRecipe(new SRP_Drugs_SplitMediumMethJar);
  		RegisterRecipe(new SRP_Drugs_SplitLargeMethJar);
  
      RegisterRecipe(new SRP_Drugs_DetermineQuality);

      RegisterRecipe(new SRP_Drugs_CraftRollingPapers);		
      RegisterRecipe(new SRP_Craft_DrugPack);
      RegisterRecipe(new SRP_Craft_DrugCarton);	

      RegisterRecipe(new SRP_Drugs_RollZWeedJoint);	
      RegisterRecipe(new SRP_Drugs_RollZWeedJointIrradiated);	
      RegisterRecipe(new SRP_Drugs_RollCigarette);	
      RegisterRecipe(new SRP_Drugs_RollCigar);

    //==========================================================Events
      RegisterRecipe(new SRP_Halloween_TradeCoinsForAmmo);
      RegisterRecipe(new SRP_Halloween_TradeCoinsForCleaningKit);
      RegisterRecipe(new SRP_Halloween_TradeCoinsForFood);
      RegisterRecipe(new SRP_Halloween_TradeCoinsForBoss);

      RegisterRecipe(new SRP_Halloween_TradeCoinsStaff_Fire);
      RegisterRecipe(new SRP_Halloween_TradeCoinsStaff_Ice);
      RegisterRecipe(new SRP_Halloween_TradeCoinsStaff_Curse);
      RegisterRecipe(new SRP_Halloween_TradeCoinsStaff_Healing);
      RegisterRecipe(new SRP_Halloween_TradeCoinsGrimoire_Armageddon);
      RegisterRecipe(new SRP_Halloween_TradeCoinsGrimoire_Regeneration);
      RegisterRecipe(new SRP_Halloween_TradeCoinsGrimoire_Immolation);
      RegisterRecipe(new SRP_Halloween_TradeCoinsGrimoire_Pestilence);

    //==========================================================Drinks
      RegisterRecipe(new SRP_Craft_AlcoholMash_Kit);	

      RegisterRecipe(new SRP_Craft_AddToMashPot_Fruit);		
      RegisterRecipe(new SRP_Craft_AddToMashPot_Sugars);		
      
      RegisterRecipe(new SRP_Craft_BrandAlcoholDrink_Wine);		
      RegisterRecipe(new SRP_Craft_BrandAlcoholDrink_Beer);		

      RegisterRecipe(new Craft_SRP_WaterBottle_Blood);		

    //==========================================================Food
      RegisterRecipe(new SRP_Craft_RiceCrispy);		

      RegisterRecipe(new SRP_CreateVeggiesMeatComboCanned_Raw);		
      RegisterRecipe(new SRP_CreateVeggiesCanned_Raw);		
      RegisterRecipe(new SRP_CreateMeatCanned_Raw);		
      RegisterRecipe(new SRP_CreateHumanMeatCanned_Raw);		
      RegisterRecipe(new SRP_CreateVeggiesHumanMeatComboCanned_Raw);		
      // RegisterRecipe(new SRP_CanRawGoods);		
      RegisterRecipe(new SRP_CanRawGoodsPliers);		
      
      RegisterRecipe(new CutOutPumpkinSeeds_Irradiated);

      RegisterRecipe(new CraftBreadDough);
      RegisterRecipe(new CraftBreadDough_Loaf);
      RegisterRecipe(new CraftBreadDough_Flatbread);

      RegisterRecipe(new CraftSausage);
      RegisterRecipe(new CraftMSausage);

      RegisterRecipe(new CraftSushi);

      RegisterRecipe(new CraftMixStew);
      RegisterRecipe(new CraftMeatStew);
      RegisterRecipe(new CraftVeggieStew);

      RegisterRecipe(new CraftHotdog);


    //==========================================================SMELTING       
      RegisterRecipe(new Craft_SRP_Container_StonePileSmall);
      RegisterRecipe(new Craft_SRP_Container_StonePileLarge);

      RegisterRecipe(new Craft_SRP_CraftingMaterial_Mortar_Crude);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Cement_Crude);

      // RegisterRecipe(new Craft_SRP_StoneForgeWorkbenchStarter_Kit);
      RegisterRecipe(new Craft_SRP_StoneForgeWorkbenchFinisher_Kit);
      RegisterRecipe(new Craft_SRP_StoneForgeWorkbench_Kit);

      RegisterRecipe(new Craft_SRP_MetalCoins);
      RegisterRecipe(new Craft_SRP_ForgeIngotPlate_ColorBase);
      RegisterRecipe(new Craft_SRP_ForgeIngotRod_ColorBase);

      RegisterRecipe(new Craft_SRP_CrushLargeStone_CrudeTool);
      RegisterRecipe(new Craft_SRP_CrushStoneChunk_CrudeTool);
      RegisterRecipe(new Craft_SRP_CrushStoneChunk_JewlingTool);
      RegisterRecipe(new Craft_SRP_RefineUnCutGem_CrudeTool);
      RegisterRecipe(new Craft_SRP_RefineUnCutGem_JewlCuttingTool);
      RegisterRecipe(new Craft_SRP_CrucibleEmptyLime);
      RegisterRecipe(new Craft_SRP_CrucibleEmptyMortar);
      RegisterRecipe(new Craft_SRP_MetalBucket);
      RegisterRecipe(new Craft_SRP_IngotMoldEmptyMetal);
      RegisterRecipe(new Craft_SRP_IngotMold_Lime);
      RegisterRecipe(new Craft_SRP_IngotMold_Mortar);

      RegisterRecipe(new Craft_SRP_SalvageForZinc);

      RegisterRecipe(new Craft_SRP_Crown_Emerald);
      RegisterRecipe(new Craft_SRP_Crown_Amethyst);
      RegisterRecipe(new Craft_SRP_Crown_Sapphire);

    //==========================================================Gunsmithing           
      RegisterRecipe(new SRP_BreakDownPistolCore_Expert);
      RegisterRecipe(new SRP_BreakDownRifleCoreLarge_Expert);
      RegisterRecipe(new SRP_BreakDownRifleCoreMedium_Expert);

      RegisterRecipe(new Craft_SRP_WoodenGunAttachmentKit);
      // RegisterRecipe(new Craft_SRP_WoodenGunAttachmentKit_Body);
      RegisterRecipe(new Craft_SRP_WoodenGunAttachmentKit_Grip);
      RegisterRecipe(new Craft_SRP_WoodenGunAttachmentKit_Buttstock);

      RegisterRecipe(new Craft_SRP_GunBarrelLarge);
      RegisterRecipe(new Craft_SRP_GunBarrelMedium);
      RegisterRecipe(new Craft_SRP_GunBarrelSmall);
      RegisterRecipe(new Craft_SRP_RifledBarrelLarge);
      RegisterRecipe(new Craft_SRP_RifledBarrelMedium);
      RegisterRecipe(new Craft_SRP_RifledBarrelSmall);
      RegisterRecipe(new Craft_SRP_InternalMechanism_Trigger);
      RegisterRecipe(new Craft_SRP_InternalMechanism_Hammer);

      RegisterRecipe(new Craft_SRP_GunReceiverSemiSmall);
      RegisterRecipe(new Craft_SRP_GunReceiverSemiMedium);
      RegisterRecipe(new Craft_SRP_GunReceiverSemiLarge);
      RegisterRecipe(new Craft_SRP_GunReceiverAutoSmall);
      RegisterRecipe(new Craft_SRP_GunReceiverAutoMedium);
      RegisterRecipe(new Craft_SRP_GunReceiverAutoLarge);

    //==========================================================Herbalism
      RegisterRecipe(new SRP_PackSeedsIntoPaperBase);

      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Random);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Black);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Blue);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Brown);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Green);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Pink);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Red);
      RegisterRecipe(new Craft_SRP_CraftingMaterial_Dye_Yellow);

      RegisterRecipe(new Craft_SRP_Dexamphetamine);
      RegisterRecipe(new Craft_SRP_Analgine);
      RegisterRecipe(new Craft_SRP_Drotaverine);
      RegisterRecipe(new Craft_SRP_Macropen);
      RegisterRecipe(new Craft_SRP_Amoxicillin);
      RegisterRecipe(new Craft_SRP_Amosin);
      RegisterRecipe(new Craft_SRP_Ciprolet);
      RegisterRecipe(new Craft_SRP_Toradol);
      RegisterRecipe(new Craft_SRP_MagnesiumSulfate);

      RegisterRecipe(new Craft_SRP_Beer_DoubleTap);
      RegisterRecipe(new Craft_SRP_Beer_Electric);
      RegisterRecipe(new Craft_SRP_Beer_Juggernaut);
      RegisterRecipe(new Craft_SRP_Beer_Reviver);
      RegisterRecipe(new Craft_SRP_Beer_Speedy);

      RegisterRecipe(new Craft_SRP_BandageDressing_Healing);
      RegisterRecipe(new Craft_SRP_BandageDressing_Shock);
      RegisterRecipe(new Craft_SRP_BandageDressing_Antibiotic);

      RegisterRecipe(new Craft_SRP_BandageDressing_Advanced_Healing);
      RegisterRecipe(new Craft_SRP_BandageDressing_Advanced_Shock);
      RegisterRecipe(new Craft_SRP_BandageDressing_Advanced_Antibiotic);
      RegisterRecipe(new Craft_SRP_CrudeStimPack);

      RegisterRecipe(new Craft_SRP_CraftingMisc_BloodTestKit);
      RegisterRecipe(new Craft_SRP_CraftingMisc_DrugTestKit);
      RegisterRecipe(new Craft_SRP_CraftingMisc_FacePaint);

    //==========================================================Medical
      RegisterRecipe(new Craft_SRP_BandageDressing); 

      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Kuru); 
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Salmonella); 
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Influenza); 
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Cholera); 
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_StomachVirus); 
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Bacteria);
      
      RegisterRecipe(new Craft_SRP_CraftVirusCure_Kuru); 
      RegisterRecipe(new Craft_SRP_CraftVirusCure_Salmonella); 
      RegisterRecipe(new Craft_SRP_CraftVirusCure_Influenza); 
      RegisterRecipe(new Craft_SRP_CraftVirusCure_Cholera); 
      RegisterRecipe(new Craft_SRP_CraftVirusCure_StomachVirus); 
      RegisterRecipe(new Craft_SRP_CraftVirusCure_Bacteria);

      RegisterRecipe(new Craft_SRP_FullSyringe_Kuru);
      RegisterRecipe(new Craft_SRP_FullSyringe_KuruCure);
      RegisterRecipe(new Craft_SRP_FullSyringe_Salmonella);
      RegisterRecipe(new Craft_SRP_FullSyringe_SalmonellaCure);
      RegisterRecipe(new Craft_SRP_FullSyringe_Influenza);
      RegisterRecipe(new Craft_SRP_FullSyringe_InfluenzaCure);
      RegisterRecipe(new Craft_SRP_FullSyringe_Cholera);
      RegisterRecipe(new Craft_SRP_FullSyringe_CholeraCure);
      RegisterRecipe(new Craft_SRP_FullSyringe_StomachVirus);
      RegisterRecipe(new Craft_SRP_FullSyringe_StomachVirusCure);
      RegisterRecipe(new Craft_SRP_FullSyringe_Ampicillin);
      RegisterRecipe(new Craft_SRP_FullSyringe_AmpicillinCure);

      RegisterRecipe(new Craft_SRP_TransferContentsToVial_Kuru);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_KuruCure);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_Salmonella);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_SalmonellaCure);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_Influenza);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_InfluenzaCure);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_Cholera);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_CholeraCure);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_StomachVirus);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_StomachVirusCure);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_BacterialInfection);
      RegisterRecipe(new Craft_SRP_TransferContentsToVial_BacterialInfectionCure);

      RegisterRecipe(new Craft_SRP_RefillGasMaskFilter);

      RegisterRecipe(new Craft_SRP_MedicalKit_Kit_Rags); 
      RegisterRecipe(new Craft_SRP_MedicalKit_LegCast); 

      RegisterRecipe(new Craft_SRP_Sterilize_Bloodcontainer); 

    //==========================================================Optics
      RegisterRecipe(new Craft_SRP_CanScopeBacon);
      RegisterRecipe(new Craft_SRP_AKCanScopeBacon);
      RegisterRecipe(new Craft_SRP_CanScopeBeans);
      RegisterRecipe(new Craft_SRP_AKCanScopeBeans);
      RegisterRecipe(new Craft_SRP_CanScopePeaches);
      RegisterRecipe(new Craft_SRP_AKCanScopePeaches);
      RegisterRecipe(new Craft_SRP_CanScopeSpaghetti);
      RegisterRecipe(new Craft_SRP_AKCanScopeSpaghetti);

    //==========================================================Radio
      RegisterRecipe(new Craft_SRP_PersonalRadio_SneakyBear);
      RegisterRecipe(new Craft_SRP_PersonalRadio_NumberStations);
      RegisterRecipe(new Craft_SRP_PersonalRadio_AnimalCaller);
      
      RegisterRecipe(new SRP_DismantleElectronicJammers_Enhanced);
      RegisterRecipe(new SRP_DismantleElectronicJammers_RemoveHackingKit);

      RegisterRecipe(new Craft_SRP_Fuse_1);
      RegisterRecipe(new Craft_SRP_Fuse_2);
      RegisterRecipe(new Craft_SRP_Fuse_3);
      RegisterRecipe(new Craft_SRP_Fuse_4);
      RegisterRecipe(new Craft_SRP_Fuse_5);
      RegisterRecipe(new Craft_SRP_Fuse_6);
      RegisterRecipe(new Craft_SRP_Fuse_7);
      RegisterRecipe(new Craft_SRP_Fuse_8);
      RegisterRecipe(new Craft_SRP_Fuse_9);

    //==========================================================Tools
      RegisterRecipe(new Craft_SRP_Heatpack);

      RegisterRecipe(new Craft_SRP_MakeshiftLighter);

      RegisterRecipe(new Craft_SRP_HandPlane_Crude);
      RegisterRecipe(new Craft_SRP_HandPlane_Metal);

      RegisterRecipe(new Craft_SRP_HackingKit_KitStarter);
      RegisterRecipe(new Craft_SRP_HackingKit_Green);
      RegisterRecipe(new Craft_SRP_HackingKit_Yellow);
      RegisterRecipe(new Craft_SRP_HackingKit_Red);
      RegisterRecipe(new Craft_SRP_HackingKit_Blue);
      RegisterRecipe(new Craft_SRP_HackingKit_Purple);

      RegisterRecipe(new Craft_SRP_FireWorksLauncher);

    //==========================================================Weapons
      RegisterRecipe(new Craft_SRP_WeaponPipeAxe_Kit);
      RegisterRecipe(new Craft_SRP_WeaponPipeAxe);    
      RegisterRecipe(new SRP_CraftPoisonBolt);    
    //==========================================================Liquids
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Pelts);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Flesh);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Meats);

      RegisterRecipe(new SRP_Craft_SRP_LabTube_MutantLiquidBlood);
      RegisterRecipe(new SRP_Craft_SRP_LabTube_MutantLiquidAntibiotic);
      RegisterRecipe(new SRP_Craft_SRP_LabTube_MutantLiquidDisinfected);
      RegisterRecipe(new SRP_Craft_SRP_LabTube_MutantLiquidSterilized);
      RegisterRecipe(new SRP_Craft_SRP_LabTube_MutantLiquidSterilizedIrradiatedNeutral);

      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Clam);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Fish);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_BatteryAcid);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Iron);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Adrenaline);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Fat);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Mint);
      RegisterRecipe(new Craft_SRP_CraftVirusFromIchor_Amanita);

      RegisterRecipe(new Craft_SRP_MutantEvolvedEggKit);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_LongFall);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_Brawler);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_BodyHeat);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_Chameleon);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_Nocturnal);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_Aquatic);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_Armor);
      RegisterRecipe(new Craft_SRP_MutantEvolvedEggOptions_IronStomach);

      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_LongFall);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_Brawler);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_Insulation);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_Chameleon);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_Nocturnal);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_Aquatic);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_Armor);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_IronStomach);

      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_LongFallDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_BrawlerDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_InsulationDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_ChameleonDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_NocturnalDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_AquaticDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_ArmorDQ);
      RegisterRecipe(new Craft_SRP_MutantFinalMutagenOptions_IronStomachDQ);

      RegisterRecipe(new Craft_SRP_SerumOptions_Serum1DQ);
      RegisterRecipe(new Craft_SRP_SerumOptions_Serum2DQ);
      RegisterRecipe(new Craft_SRP_SerumOptions_Serum3DQ);
      RegisterRecipe(new Craft_SRP_SerumOptions_Serum4DQ);
      RegisterRecipe(new Craft_SRP_SerumOptions_Serum5DQ);
      RegisterRecipe(new Craft_SRP_SerumOptions_Serum6DQ);

      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Start);
      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Accel);
      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Accel2);
      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Accel4);
      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Suppressor);
      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Crude);
      RegisterRecipe(new Craft_SRP_MutantSerumInjectors_Crude_Cure);
      RegisterRecipe(new Craft_SRP_BioFlowerPoisonInhectorEnhanced);

    //==========================================================END
	}
};
