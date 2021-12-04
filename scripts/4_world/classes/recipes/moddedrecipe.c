modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
   
    //--------- Modded Item Recipes
    RegisterRecipe(new Craft_Msp_EmptyPlanterBox);
    RegisterRecipe(new Craft_Msp_EmptySquarePlanterBox);

    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new Deconstruct_PlacedObjectKit);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit_BuildingFrame);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit_StreetSign);     

    // Sneaky Stash Replacement
    RegisterRecipe(new SRP_Craft_BedSmall);
    RegisterRecipe(new SRP_Craft_BedMetal);
    RegisterRecipe(new SRP_Craft_ModernCouch);
    RegisterRecipe(new SRP_Craft_OldCouch);
    RegisterRecipe(new SRP_Craft_MetalBarrelOld);
    RegisterRecipe(new SRP_Craft_MetalBarrelBlue);
    RegisterRecipe(new SRP_Craft_MetalBarrelRed);
    RegisterRecipe(new SRP_Craft_MetalBarrelYellow);
    RegisterRecipe(new SRP_Craft_MetalShelf);
    RegisterRecipe(new SRP_Craft_MetalShelfLarge);
    RegisterRecipe(new SRP_Craft_PlankPile);
    RegisterRecipe(new SRP_Craft_SmallLogPile);
    RegisterRecipe(new SRP_Craft_LargeLogPile);
    RegisterRecipe(new SRP_Craft_StairKit);
    RegisterRecipe(new SRP_Craft_LogStumpSeat);
    RegisterRecipe(new SRP_Craft_LogBench);
    RegisterRecipe(new SRP_Craft_SmallWoodBench);
    RegisterRecipe(new SRP_Craft_SlimWoodBench);
    RegisterRecipe(new SRP_Craft_PicnicBench);
    
    //---------Events
    RegisterRecipe(new SRP_Halloween_TradeCoinsForAmmo);
    RegisterRecipe(new SRP_Halloween_TradeCoinsForCleaningKit);
    RegisterRecipe(new SRP_Halloween_TradeCoinsForFood);
    RegisterRecipe(new SRP_Halloween_TradeCoinsForBoss);

    //----------Mutants
    RegisterRecipe(new SRP_Craft_MutantShredMeat);
    RegisterRecipe(new SRP_Craft_MutantShredFlesh);
    RegisterRecipe(new SRP_Craft_MutantShredPelt);
    RegisterRecipe(new SRP_Craft_MutantSuppressorSerum);
    RegisterRecipe(new SRP_Craft_MutantCrudeSerum);
    RegisterRecipe(new SRP_Craft_MutantCrudeSerumCure);
    RegisterRecipe(new SRP_Craft_MutantCrudeSerumUpgrade);

    //---------Kits
		RegisterRecipe(new Craft_SRP_BedsideTable_Kit);
		RegisterRecipe(new Craft_SRP_WoodenShelfSimple_Kit);
		RegisterRecipe(new Craft_SRP_WoodenShelfSimpleGround_Kit);
		RegisterRecipe(new Craft_SRP_GunShelfWall_Kit);
		RegisterRecipe(new Craft_SRP_GunShelfGround_Kit);
		RegisterRecipe(new Craft_SRP_Potbelly_Stove_Kit);		
		RegisterRecipe(new Craft_SRP_ShootingTargets_Kit);		
		RegisterRecipe(new Craft_SRP_StreetLightLarge_Kit);		
		RegisterRecipe(new Craft_SRP_StreetLightMedium_Kit);		
		RegisterRecipe(new Craft_SRP_StreetLightMedium_Wood_Kit);

		RegisterRecipe(new Craft_SRP_Container_WoodenBarrelKit);
		RegisterRecipe(new Craft_SRP_Container_WoodenBarrelTableKit);

    // Masks
		RegisterRecipe(new Craft_SRP_RefillGasMaskFilter);

    // Mining
		RegisterRecipe(new Craft_SRP_CrushLargeStone_CrudeTool);
		RegisterRecipe(new Craft_SRP_CrushStoneChunk_CrudeTool);
		RegisterRecipe(new Craft_SRP_RefineUnCutGem_CrudeTool);
		RegisterRecipe(new Craft_SRP_CrucibleEmptyLime);
		RegisterRecipe(new Craft_SRP_CrucibleEmptyMortar);

		RegisterRecipe(new Craft_SRP_IngotMoldEmptyMetal);
		RegisterRecipe(new Craft_SRP_IngotMold_Lime);
		RegisterRecipe(new Craft_SRP_IngotMold_Mortar);

		RegisterRecipe(new Craft_SRP_GoldenCoinsWorn);
		RegisterRecipe(new Craft_SRP_MetalCoins);

    // Building
    RegisterRecipe(new Craft_SRP_Planks);

    // Ammo    
    RegisterRecipe(new SRP_Recipe_CraftGunpowder_Simple);
    RegisterRecipe(new SRP_Recipe_CraftGunpowder_Explosives);
    RegisterRecipe(new Craft_SRP_NailBullets);
    RegisterRecipe(new Craft_SRP_StoneBullets);
    RegisterRecipe(new Disassemble_SRP_ShotgunAmmo);
    RegisterRecipe(new Disassemble_SRP_PistolAmmo);
    RegisterRecipe(new Disassemble_SRP_RifleAmmo);

    //---------Scopes
    RegisterRecipe(new Craft_SRP_CanScopeBacon);
    RegisterRecipe(new Craft_SRP_AKCanScopeBacon);
    RegisterRecipe(new Craft_SRP_CanScopeBeans);
    RegisterRecipe(new Craft_SRP_AKCanScopeBeans);
    RegisterRecipe(new Craft_SRP_CanScopePeaches);
    RegisterRecipe(new Craft_SRP_AKCanScopePeaches);
    RegisterRecipe(new Craft_SRP_CanScopeSpaghetti);
    RegisterRecipe(new Craft_SRP_AKCanScopeSpaghetti);


    //---------- Drugs
    RegisterRecipe(new SRP_Drugs_DetermineQuality);
    // Meth Recipes
		RegisterRecipe(new SRP_Drugs_SplitMediumMethJar);
		RegisterRecipe(new SRP_Drugs_SplitLargeMethJar);

    // Meth Tub Recipes
		RegisterRecipe(new SRP_Drugs_CookMeth);
		RegisterRecipe(new SRP_Drugs_MakeAcid);
		RegisterRecipe(new SRP_Drugs_MakeBathSalts);

    // Smokable Recipe
		RegisterRecipe(new SRP_Drugs_CraftRollingPapers);		
		RegisterRecipe(new SRP_Drugs_RollZWeedJoint);
		RegisterRecipe(new SRP_Drugs_RollCigarette);		    
		RegisterRecipe(new SRP_Drugs_RollCigar);		    
    RegisterRecipe(new SRP_Craft_DrugPack);
    RegisterRecipe(new SRP_Craft_DrugCarton);	

    RegisterRecipe(new SRP_Drugs_CreateCocaineStarterBag);	
    RegisterRecipe(new SRP_Drugs_ManufactureCocaineFromRaw);	
    RegisterRecipe(new SRP_Drugs_ManufactureCocaineFromPasteWithTubes);	
    RegisterRecipe(new SRP_Drugs_CutDrugsFromCocaine);	
    RegisterRecipe(new SRP_Drugs_CutDrugsFromCocaineTainted);

    //---------- RP Craftables
    RegisterRecipe(new Craft_SRP_Notebook);
    RegisterRecipe(new Craft_SRP_ExtraPaper);
    RegisterRecipe(new Craft_SRP_WhiteFlag);

    RegisterRecipe(new Craft_SRP_WoodenBowl);
    RegisterRecipe(new Craft_SRP_WoodenBowlDark);
    RegisterRecipe(new Craft_SRP_WoodenBowlCherry);
    RegisterRecipe(new Craft_SRP_WoodenBowlSquare);

    RegisterRecipe(new Craft_SRP_HandofCards);

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

    RegisterRecipe(new Craft_SRP_TetrisShelfKit);
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

    RegisterRecipe(new SRP_CraftBuildingComponentFrameKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornRampKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornLPlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornUPlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornFlatPlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornFlatDoublePlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornWornSinglePlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornWornDoublePlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameWornFlatDoublePlatformKit);

    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineRampKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineLPlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineUPlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineFlatPlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineFlatDoublePlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineWornSinglePlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineWornDoublePlatformKit);
    RegisterRecipe(new SRP_CraftBuildingComponentFrameFineFlatDoublePlatformKit);

    // Signs
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

    // Food Recipes	
    RegisterRecipe(new SRP_CreateVeggiesMeatComboCanned_Raw);		
    RegisterRecipe(new SRP_CreateVeggiesCanned_Raw);		
    RegisterRecipe(new SRP_CreateMeatCanned_Raw);		
    RegisterRecipe(new SRP_CreateHumanMeatCanned_Raw);		
    RegisterRecipe(new SRP_CreateVeggiesHumanMeatComboCanned_Raw);		
    RegisterRecipe(new SRP_CanRawGoods);		

    //--------------- Patches
    RegisterRecipe(new Craft_SRP_Patch_Russian);

    //---------Armbands
    // Mass Double Armband General Crafting
		RegisterRecipe(new SRP_SkullAndCrossbones_Double_Armband);
		// Mass Double Armband Medical Insignia
		RegisterRecipe(new SRP_Red_Cross_Double_Armband);
		RegisterRecipe(new SRP_Red_Medical_Double_Armband);
		RegisterRecipe(new SRP_Medical_Corps_Double_Armband);
		RegisterRecipe(new SRP_Blue_Medical_Double_Armband);
		RegisterRecipe(new SRP_Runic_Medical_Double_Armband);
		// Mass Double Armband Rainbow Colors
		RegisterRecipe(new SRP_Black_Double_Armband);
		RegisterRecipe(new SRP_DarkBlue_Double_Armband);
		RegisterRecipe(new SRP_DarkPurple_Double_Armband);
		RegisterRecipe(new SRP_Green_Double_Armband);
		RegisterRecipe(new SRP_Grey_Double_Armband);
		RegisterRecipe(new SRP_Light_Blue_Double_Armband);
		RegisterRecipe(new SRP_Light_Grey_Double_Armband);
		RegisterRecipe(new SRP_Lime_Double_Armband);
		RegisterRecipe(new SRP_Orange_Double_Armband);
		RegisterRecipe(new SRP_Pink_Double_Armband);
		RegisterRecipe(new SRP_Purple_Double_Armband);
		RegisterRecipe(new SRP_Red_Double_Armband);
		RegisterRecipe(new SRP_Teal_Double_Armband);

    //---------- Refil Gas Canisters
    RegisterRecipe(new SRP_RefuelGas_SmallGasCanister);
    RegisterRecipe(new SRP_RefuelGas_MediumGasCanister);
    RegisterRecipe(new SRP_RefuelGas_LargeGasCanister);
    RegisterRecipe(new SRP_RefuelGas_PetrolLighter);

    //----------- Tools
    RegisterRecipe(new Craft_SRP_Heatpack);

    RegisterRecipe(new Craft_SRP_GhillieWrapTan);
    RegisterRecipe(new Craft_SRP_GhillieWrapWoodland);
    RegisterRecipe(new Craft_SRP_GhillieWrapMossy);
    RegisterRecipe(new Craft_SRP_GhillieWrapWinter);
    RegisterRecipe(new Craft_SRP_GhillieWrapBlack);

    RegisterRecipe(new Craft_SRP_GhillieBushragBlack);
    RegisterRecipe(new Craft_SRP_GhillieBushragWinter);

    RegisterRecipe(new Craft_SRP_GhillieTopBlack);
    RegisterRecipe(new Craft_SRP_GhillieTopWinter);

    RegisterRecipe(new Craft_SRP_GhillieSuitBlack);
    RegisterRecipe(new Craft_SRP_GhillieSuitWinter);
    //----------- Clothing

    // Backpack    
    RegisterRecipe(new Craft_SRP_AssaultBag_Denim);
    // Heads
    RegisterRecipe(new Craft_SRP_RemoveHeadphonesTacticalCap);
    RegisterRecipe(new Craft_SRP_PersonalRadio_EarPhones);    
    RegisterRecipe(new Craft_SRP_Ushanka_Star);
    RegisterRecipe(new Craft_SRP_BallisticHelmet_Rain);
    RegisterRecipe(new Craft_SRP_GorkaHelmetVisor_K6);
    RegisterRecipe(new Craft_SRP_GorkaHelmetVisor_K6Open);


    // Mask
    RegisterRecipe(new Craft_SRP_DrawnEyepatch);
    RegisterRecipe(new Repaint_SRP_Bandana_65Black);
    RegisterRecipe(new Repaint_SRP_Bandana_65Desert);
    RegisterRecipe(new Repaint_SRP_Bandana_65Tan);
    RegisterRecipe(new Repaint_SRP_Bandana_CheckBlue);
    RegisterRecipe(new Repaint_SRP_Bandana_CheckBlueBright);
    RegisterRecipe(new Repaint_SRP_Bandana_CheckGreen);
    RegisterRecipe(new Repaint_SRP_Bandana_CheckRed);
    RegisterRecipe(new Repaint_SRP_Bandana_CheckWhite);
    RegisterRecipe(new Repaint_SRP_Bandana_Denim);
    RegisterRecipe(new Repaint_SRP_Bandana_Kamysh);
    RegisterRecipe(new Repaint_SRP_Bandana_USMC_D);
    RegisterRecipe(new Repaint_SRP_Bandana_USMC_W);
    RegisterRecipe(new Repaint_SRP_SurgicalMask_Black);


    // Pants
    RegisterRecipe(new Repaint_SRP_PolicePantsOrel_WKPants);
    RegisterRecipe(new Repaint_SRP_CargoPants_Rain);
    RegisterRecipe(new Repaint_SRP_CargoPants_Janek);
    RegisterRecipe(new Repaint_SRP_CargoPants_Denim);
    RegisterRecipe(new Repaint_SRP_HunterPants_Janek);
    RegisterRecipe(new Repaint_SRP_PrisonUniformPants_Blue);

    // Jackets
    RegisterRecipe(new Craft_SRP_M65Jacket_janekm65);
    RegisterRecipe(new Craft_SRP_M65Jacket_sndwch65);
    RegisterRecipe(new Craft_SRP_QuiltedJacket_janekq);
    RegisterRecipe(new Craft_SRP_PoliceJacketOrel_wktop);
    RegisterRecipe(new Craft_SRP_HuntingJacket_RainJacket);
    RegisterRecipe(new Craft_SRP_Hoodie_Janek);
    RegisterRecipe(new Craft_SRP_TacticalShirt_Dentac);

    // Boots
    RegisterRecipe(new Craft_SRP_JungleBoots_Yellow);
    RegisterRecipe(new Craft_SRP_DenShoes_Brown);

    // Vests
    RegisterRecipe(new Craft_SRP_PlateCarrierHolster_Black);
    RegisterRecipe(new Craft_SRP_HighCapacityVest_Jan);
    RegisterRecipe(new Craft_SRP_PlateCarrierVest_Black);
    RegisterRecipe(new Craft_SRP_PlateCarrierPouches_Black);
    


    // ------------------------------ Food and Drinks
    RegisterRecipe(new Craft_SRP_Blood_Bottle);   

    // -------------------------------- MEDICAL
    RegisterRecipe(new Craft_SRP_FullSyringe_Kuru);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_Kuru);   
    RegisterRecipe(new Craft_SRP_FullSyringe_KuruCure);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_KuruCure);   

    RegisterRecipe(new Craft_SRP_FullSyringe_Salmonella);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_Salmonella);   
    RegisterRecipe(new Craft_SRP_FullSyringe_SalmonellaCure);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_SalmonellaCure);  

    RegisterRecipe(new Craft_SRP_FullSyringe_Influenza);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_Influenza);   
    RegisterRecipe(new Craft_SRP_FullSyringe_InfluenzaCure);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_InfluenzaCure); 

    RegisterRecipe(new Craft_SRP_FullSyringe_Cholera);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_Cholera);   
    RegisterRecipe(new Craft_SRP_FullSyringe_CholeraCure);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_CholeraCure); 

    RegisterRecipe(new Craft_SRP_FullSyringe_Ampicillin);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_Ampicillin); 

    RegisterRecipe(new Craft_SRP_FullSyringe_Ceftazidim);   
    RegisterRecipe(new Craft_AddTo_SRP_InjectionVial_Ceftazidim); 
	}
};