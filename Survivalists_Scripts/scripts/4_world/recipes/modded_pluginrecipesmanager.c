
modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();

    //--------- Modded Item Recipes
    RegisterRecipe(new Craft_Msp_EmptyPlanterBox);
    RegisterRecipe(new Craft_Msp_EmptySquarePlanterBox);
    RegisterRecipe(new SRP_DecraftBBPKits);
    
    //==========================================================UNREGISTER RECIPES
      UnregisterRecipe("FillSyringe");
      UnregisterRecipe("BBPCraftStepLadder");
      UnregisterRecipe("SRP_DismantleElectronicJammers");
      UnregisterRecipe("CraftMassStew");
      UnregisterRecipe("CraftMassLadsDryingRackSticks");
      UnregisterRecipe("CraftMassLadsDryingRackBundle");
      UnregisterRecipe("MassmakeDrawer");
      UnregisterRecipe("MassmakeDresser");
      UnregisterRecipe("MassCreateSlottedPlank");
      UnregisterRecipe("MassUnfinishedImprovGunrack");
      UnregisterRecipe("MassFinishImprovGunrack");
      UnregisterRecipe("MassLRSscope");
      UnregisterRecipe("SawoffStevensonColored");
      UnregisterRecipe("MassHuntingscope");
      UnregisterRecipe("SawOffStevenson");
      UnregisterRecipe("SawOffMP153");
      UnregisterRecipe("MassPaint");
      UnregisterRecipe("MassPaint1");
      UnregisterRecipe("MassPaint2");
      UnregisterRecipe("MassPaint3");
      UnregisterRecipe("MassPaint4");
      UnregisterRecipe("MassPaint5");
      UnregisterRecipe("MassPaint6");
      UnregisterRecipe("MassPaint7");
      UnregisterRecipe("Massmakepawn");
      UnregisterRecipe("MassmakeQueen");
      UnregisterRecipe("MassmakeKing");
      UnregisterRecipe("MassmakeBishop");
      UnregisterRecipe("MassmakeRook");
      UnregisterRecipe("MassmakeKnight");
      UnregisterRecipe("MassmakeWKnight");
      UnregisterRecipe("MassmakeWpawn");
      UnregisterRecipe("MassmakeWRook");
      UnregisterRecipe("MassmakeWBishop");
      UnregisterRecipe("MassmakeWKing");
      UnregisterRecipe("Massmakeboard");
      UnregisterRecipe("MassmakeWQueen");
      UnregisterRecipe("SawOffStevensonShort");
      UnregisterRecipe("SawoffStevensonColoredshorty");
      UnregisterRecipe("CraftSplitPipe");
      UnregisterRecipe("CraftPipeBundle");
      UnregisterRecipe("CraftUnfinishedPipeHarness");
      UnregisterRecipe("CraftFinishedPipeHarness");
      UnregisterRecipe("GhillieWrapsnow");
      UnregisterRecipe("CraftRaincoatBag");
      UnregisterRecipe("CraftRaincoatCourier");
      UnregisterRecipe("MassArmband");
      UnregisterRecipe("MassArmband2");
      UnregisterRecipe("MassArmband2Double");
      UnregisterRecipe("CraftHeavyVest");
      UnregisterRecipe("combinePlates");
      UnregisterRecipe("deconCourier");
      UnregisterRecipe("deconImprov");
      UnregisterRecipe("MassArmbandDouble");
      UnregisterRecipe("MassSmiley");
      UnregisterRecipe("MassSmileyMask");
      UnregisterRecipe("RepairRatnikPair");
      UnregisterRecipe("RepairRatnikSingle");
      UnregisterRecipe("RepairHeavyPair");
      UnregisterRecipe("RepairHeavySingle");
      UnregisterRecipe("CraftMassscrap");
      UnregisterRecipe("CraftMassArmorlow");
      UnregisterRecipe("CraftMassArmormed");
      UnregisterRecipe("CraftMassArmorfull");
      UnregisterRecipe("CraftMassArmorUpgradeKit");
      UnregisterRecipe("PaintArmorLowRed");
      UnregisterRecipe("PaintArmorMedRed");
      UnregisterRecipe("PaintArmorLowBlue");
      UnregisterRecipe("PaintArmorMedBlue");
      UnregisterRecipe("PaintArmorBlue");
      UnregisterRecipe("PaintArmorLowGreen");
      UnregisterRecipe("PaintArmorMedGreen");
      UnregisterRecipe("PaintArmorGreen");
      UnregisterRecipe("PaintArmorLowPink");
      UnregisterRecipe("PaintArmorMedPink");
      UnregisterRecipe("PaintArmorPink");
      UnregisterRecipe("PaintArmorLowOrange");
      UnregisterRecipe("PaintArmorMedOrange");
      UnregisterRecipe("PaintArmorOrange");
      UnregisterRecipe("PaintArmorLowYellow");
      UnregisterRecipe("PaintArmorMedYellow");
      UnregisterRecipe("PaintArmorYellow");
      UnregisterRecipe("PaintArmorLowBlack");
      UnregisterRecipe("PaintArmorMedBlack");
      UnregisterRecipe("PaintArmorBlack");
      UnregisterRecipe("PaintArmorLowWhite");
      UnregisterRecipe("PaintArmorMedWhite");
      UnregisterRecipe("PaintArmorWhite");
      UnregisterRecipe("PaintArmorLowRed");
      UnregisterRecipe("PaintArmorMedRed");
      UnregisterRecipe("PaintArmorRed");
      UnregisterRecipe("PaintcanBrush");
      UnregisterRecipe("PaintMassGhillieMossy");
      UnregisterRecipe("PaintMassGhillieWoodland");
      UnregisterRecipe("PaintMassGhillieTopSnow");
      UnregisterRecipe("PaintMassGhillieTopWoodland");
      UnregisterRecipe("PaintMassGhillieHoodMossy");
      UnregisterRecipe("PaintMassGhillieHoodWoodland");
      UnregisterRecipe("PaintMassGhillieHoodSnow");
      UnregisterRecipe("MassNDCPlateCarrier");
      UnregisterRecipe("CraftBurlapShoesB");
      UnregisterRecipe("CraftBurlapShoesD");
      UnregisterRecipe("CraftRagShoesD");
      UnregisterRecipe("CraftRagShoesB");
      UnregisterRecipe("craftsandwich");
      UnregisterRecipe("CraftJointMung");
      UnregisterRecipe("CraftGunwallMung");
      UnregisterRecipe("CraftGunwallMetalMung");
      UnregisterRecipe("CraftMakeshiftsheltermung");
      UnregisterRecipe("CraftMakeshiftshelter2mung");
      UnregisterRecipe("CraftMolotovMung");
      UnregisterRecipe("CraftBulletCanGrenade_mung");
      UnregisterRecipe("craft_trap_tripwire_mung");
      UnregisterRecipe("SawoffShotgunIzh54");
      UnregisterRecipe("CraftBaseBallBatBarbed_mung");
      UnregisterRecipe("craftghillieponcho_mung");
      UnregisterRecipe("craftWolfcowl_mung");
      UnregisterRecipe("craftBearcowl_mung");
      UnregisterRecipe("CraftDBEyepatch");
      UnregisterRecipe("CraftRagged_Eyepatch");
      UnregisterRecipe("CraftCuttedPeltBrownFromBear");
      UnregisterRecipe("CraftBearPeltGhillieBrown");
      UnregisterRecipe("CraftCuttedPeltWhite");
      UnregisterRecipe("CraftBearPeltGhillieWhite");
      UnregisterRecipe("DUB_Barbwire_R");

    //==========================================================Camping
      RegisterRecipe(new Craft_SRP_ChessBoard_Kit);
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

      RegisterRecipe(new Craft_SRP_DismantleRaft);

      RegisterRecipe(new Craft_SRP_SleepingBag_Basic);

      RegisterRecipe(new Craft_SRP_HandofCards);

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

      RegisterRecipe(new Craft_SRP_WoodenShelfKit);
      RegisterRecipe(new Craft_SRP_WoodenShelfSimple_Kit);
      RegisterRecipe(new Craft_SRP_WoodenShelfSimpleGround_Kit);
      RegisterRecipe(new Craft_SRP_WoodenShelfGround_Kit);
      RegisterRecipe(new Craft_SRP_WoodenShelfGroundTall_Kit);
      RegisterRecipe(new Craft_SRP_GunShelfWall_Kit);
      RegisterRecipe(new Craft_SRP_GunShelfGround_Kit);
      RegisterRecipe(new Craft_SRP_BoocCaseCube_Kit);

      RegisterRecipe(new Craft_SRP_WoodenDisplayKit);
      RegisterRecipe(new Craft_SRP_WoodenDisplayKit_Kit_CoatRackBasic);
      RegisterRecipe(new Craft_SRP_WoodenDisplayKit_Kit_CoatRackSimple);
      RegisterRecipe(new Craft_SRP_WoodenDisplayKit_Kit_CoatRackFancy);

      RegisterRecipe(new Craft_SRP_MetalShelfKit);
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

      RegisterRecipe(new Craft_SRPClothing_BackpackKit);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_LeatherBackpack_Default);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_SurvivalBackpack_Default);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_SlingBackpack_Default);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_Small_Military_Pack_Tan);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_Big_Military_Pack_Tan);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_Rifle_Bag_Green);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_Rolltop_Bag);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_MessengerBag_Leather);
      RegisterRecipe(new Craft_SRP_BackpackFromKit_DUB_Leatherbag);
      RegisterRecipe(new Craft_DUB_ShieldBackpack);
      RegisterRecipe(new Craft_DUB_BagFlag);

      // Belts    
      RegisterRecipe(new Craft_SRPClothing_BeltKit);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_LegHolster);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_PoliceBelt);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_TacticalBelt);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_ElbowAndKneePads);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_MilitaryBelt);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_HipPouch);
      RegisterRecipe(new Craft_SRP_BeltFromKit_Base_HipHolster);
      
      // Heads
      RegisterRecipe(new Craft_SRP_TinfoilHat);
      RegisterRecipe(new Craft_SRPClothing_HeadgearKit);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_BeanieHat_Turkey);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_BaseballCap_MilitaryPatrolTan);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_BaseballCap_Pakol);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_FaceMaskSkull_Tan);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_MouthCover_Tan);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_Shroud_Tan);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_Cowboy_Hat);
      RegisterRecipe(new Craft_SRP_HeadgearFromKit_Burlap_Mask);
      RegisterRecipe(new Craft_SRP_LeatherCowl);
      
      // Mask
      RegisterRecipe(new SRP_Craft_MakeshiftMetalTuskMask);
      RegisterRecipe(new SRP_Craft_ArmoredMetalTuskMask);

      RegisterRecipe(new SRP_Craft_RecolorScrapMaskBlue);
      RegisterRecipe(new SRP_Craft_RecolorScrapMaskOrange);
      RegisterRecipe(new SRP_Craft_RecolorScrapMaskRust);
      RegisterRecipe(new SRP_Craft_RecolorScrapMaskV2Blue);
      RegisterRecipe(new SRP_Craft_RecolorScrapMaskV2Orange);
      RegisterRecipe(new SRP_Craft_RecolorScrapMaskV2Rust);
      RegisterRecipe(new SRP_Craft_SRP_ShatteredMask);
      RegisterRecipe(new SRP_Craft_SRP_DUBDismaskFull);
      RegisterRecipe(new Craft_SRP_DrawnEyepatch);
      RegisterRecipe(new Craft_SRP_Eyepatch_Basic);
      RegisterRecipe(new Craft_SRP_Eyepatch_Ragged);
      RegisterRecipe(new Craft_SRP_Eyepatch_RaggedBlack);
      RegisterRecipe(new Craft_SRP_Eyepatch_RaggedBrown);

      // Jackets / TOPS
      RegisterRecipe(new Craft_SRPClothing_TopKit);    
      RegisterRecipe(new Craft_SRPClothing_TopKit_NurseDress);
      RegisterRecipe(new Craft_SRPClothing_TopKit_Sweater);
      RegisterRecipe(new Craft_SRPClothing_TopKit_Shirt);
      RegisterRecipe(new Craft_SRPClothing_TopKit_TShirt);
      RegisterRecipe(new Craft_SRPClothing_TopKit_Hoodie);
      RegisterRecipe(new Craft_SRPClothing_TopKit_TacticalShirt);
      RegisterRecipe(new Craft_SRPClothing_TopKit_HikingJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_ManSuitJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_M65Jacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_WomanSuitJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_GorkaJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_RidersJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_WoolCoat);
      RegisterRecipe(new Craft_SRPClothing_TopKit_TracksuitJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_FirefighterJacket);
      RegisterRecipe(new Craft_SRPClothing_TopKit_Minidress);

      RegisterRecipe(new Craft_SRPClothing_TopKit_InsulatedGhillie_Brown);
      RegisterRecipe(new Craft_SRPClothing_TopKit_InsulatedGhillie_White);
		  RegisterRecipe(new Craft_SRP_LeatherArmband);

      // PANTS
      RegisterRecipe(new Craft_SRPClothing_PantsKit);

      RegisterRecipe(new Craft_SRP_PantsFromKit_Jeans);
      RegisterRecipe(new Craft_SRP_PantsFromKit_CargoPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_HunterPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_CanvasPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_CanvasPantsMidi);
      RegisterRecipe(new Craft_SRP_PantsFromKit_TrackSuitPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_GorkaPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_FireFighterPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_USMCPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_SlacksPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_ShortJeans);
      RegisterRecipe(new Craft_SRP_PantsFromKit_BreechesPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_SkirtPants);
      RegisterRecipe(new Craft_SRP_PantsFromKit_JumpsuitPants);

      // Vests
      RegisterRecipe(new Craft_SRPClothing_VestKit);
      RegisterRecipe(new Craft_SRPClothing_VestKit_Bandoiler);
      RegisterRecipe(new Craft_SRPClothing_VestKit_Bandoiler_Alchemist);
      RegisterRecipe(new Craft_SRPClothing_VestKit_ShoulderSling);

      RegisterRecipe(new Craft_SRPClothing_VestPouchesKit);
      RegisterRecipe(new Craft_SRPClothing_VestKit_MapPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_PistolMagPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_MedicalPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_TacticalPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_MediumPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_MagazinePouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_MagazineDumpPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_UtilityPouch);
      RegisterRecipe(new Craft_SRPClothing_VestKit_HeavyPouch);

      // Gloves
      RegisterRecipe(new Craft_SRPClothing_GlovesKit);
      RegisterRecipe(new Craft_SRP_GlovesFromKit_WorkingGloves);
      RegisterRecipe(new Craft_SRP_GlovesFromKit_TacticalGloves);
      RegisterRecipe(new Craft_SRP_GlovesFromKit_CombatGloves);
      RegisterRecipe(new Craft_SRP_GlovesFromKit_BoxingGloves);

      // Masks
      RegisterRecipe(new Craft_SRPClothing_MasksKit);
      RegisterRecipe(new Craft_SRP_MasksFromKit_Balaclava);
      RegisterRecipe(new Craft_SRP_MasksFromKit_Balaclava3H);

      RegisterRecipe(new Craft_SRP_GhillieWrapTan);
      RegisterRecipe(new Craft_DUB_GhillieHoodTan);
      RegisterRecipe(new Craft_DUB_GhillieHoodWoodland);
      RegisterRecipe(new Craft_DUB_GhillieHoodMossy);
      RegisterRecipe(new Craft_DUB_GhillieHoodWinter);

      // RegisterRecipe(new Craft_SRP_AccessoryRing_StarterKit);

      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Ruby);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Stone);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Skull);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Turquoise);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Rune);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_SnakeEye);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Azurite);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Wedding);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Earthen);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AccessoryRing_Celtic);

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

      RegisterRecipe(new SRP_Craft_DisplayCaseHook_SingleArmband);
      RegisterRecipe(new SRP_Craft_DisplayCaseHook_DoubleArmband);
      RegisterRecipe(new SRP_Craft_DisplayCaseHook_LeatherArmband);
      RegisterRecipe(new SRP_Craft_DisplayCaseHook_PatchArmband);

      RegisterRecipe(new Craft_SRP_Rag_Bleach);	
      RegisterRecipe(new Craft_SRP_Rag_Black);	
      RegisterRecipe(new Craft_SRP_Rag_Blue);	
      RegisterRecipe(new Craft_SRP_Rag_Brown);	
      RegisterRecipe(new Craft_SRP_Rag_Green);	
      RegisterRecipe(new Craft_SRP_Rag_Pink);	
      RegisterRecipe(new Craft_SRP_Rag_Red);	
      RegisterRecipe(new Craft_SRP_Rag_Yellow);

      RegisterRecipe(new SRP_RefuelGas_SmallGasCanister);
      RegisterRecipe(new SRP_RefuelGas_MediumGasCanister);
      RegisterRecipe(new SRP_RefuelGas_LargeGasCanister);
      RegisterRecipe(new SRP_RefuelGas_PetrolLighter);

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

    //==========================================================Containers
      RegisterRecipe(new Craft_SRP_LeatherPouch_Default);
      RegisterRecipe(new Craft_SRP_LeatherPouch_Medieval);
      RegisterRecipe(new Craft_SRP_LeatherPouch_Small);

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

      RegisterRecipe(new Craft_SRP_BarricadeKit);
      RegisterRecipe(new Craft_SRP_Barricade_Wood_Kit);
      RegisterRecipe(new Craft_SRP_BarricadeWithWindow_Wood_Kit);
      RegisterRecipe(new Craft_SRP_WindowBarricade_Wood_Kit);
      RegisterRecipe(new Craft_SRP_WindowBarricadeTall_Wood_Kit);
      RegisterRecipe(new Craft_SRP_SpikeBarricade_Wood_Kit);
      RegisterRecipe(new Craft_SRP_BarricadeMetal_Kit);

      RegisterRecipe(new SRP_CraftBuildingComponentFrameKit);
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

      RegisterRecipe(new Craft_SRP_Furniture_WoodenStairs_Kit);

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

      RegisterRecipe(new Craft_SRP_WoodenFurnitureKit);
      RegisterRecipe(new Craft_SRP_BedsideTable_Kit);
      RegisterRecipe(new Craft_SRP_Furniture_WoodenTable_Kit);
      RegisterRecipe(new Craft_SRP_Furniture_Barrel_Kit);
      RegisterRecipe(new Craft_SRP_Furniture_BarrelTable_Kit);
      RegisterRecipe(new Craft_SRP_MedicalBedSmall_Wood_Kit);
      RegisterRecipe(new Craft_SRP_Furniture_Sofa_Modern_Kit);
      RegisterRecipe(new Craft_SRP_Furniture_Sofa_Old_Kit);
      RegisterRecipe(new Craft_SRP_WoodenBench_Kit);
      RegisterRecipe(new Craft_SRP_Furniture_LogStump);
      RegisterRecipe(new Craft_SRP_Furniture_LogBenchSmall);
      RegisterRecipe(new Craft_SRP_Furniture_WoodBenchSmall);
      RegisterRecipe(new Craft_SRP_Furniture_WoodBenchSlim);
      RegisterRecipe(new Craft_SRP_Furniture_PileOfPlanks);
      RegisterRecipe(new Craft_SRP_Furniture_SmallLogPile);
      RegisterRecipe(new Craft_SRP_Furniture_LargeLogPile);
      RegisterRecipe(new Craft_SRP_ToolRack_Hammers_Kit);
      RegisterRecipe(new Craft_SRP_Gazebo_Kit);


    //==========================================================Drugs
      RegisterRecipe(new SRP_Drugs_CreateCocaineStarterBag);	
      RegisterRecipe(new SRP_Drugs_ManufactureCocaineFromRaw);	
      RegisterRecipe(new SRP_Drugs_ManufactureCocaineFromPasteWithTubes);	
      RegisterRecipe(new SRP_Drugs_CutDrugsFromCocaine);	
      RegisterRecipe(new SRP_Drugs_CutDrugsFromCocaineTainted);

      RegisterRecipe(new SRP_Drugs_SplitMediumMethJar);
  		RegisterRecipe(new SRP_Drugs_SplitLargeMethJar);

      RegisterRecipe(new SRP_Drugs_CookBleach);
      RegisterRecipe(new SRP_Drugs_CookMeth);
      RegisterRecipe(new SRP_Drugs_MakeAcid);
      RegisterRecipe(new SRP_Drugs_MakeBathSalts);
  
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
      RegisterRecipe(new SRP_CanRawGoods);		
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

    //==========================================================Gunsmithing           
      RegisterRecipe(new SRP_BreakDownPistolCore_Expert);
      RegisterRecipe(new SRP_BreakDownRifleCoreLarge_Expert);
      RegisterRecipe(new SRP_BreakDownRifleCoreMedium_Expert);

      RegisterRecipe(new SRP_Craft_AmmoCasing_Crude);
      RegisterRecipe(new SRP_Craft_AmmoCasing_Advanced);

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

      RegisterRecipe(new Craft_SRP_BandageDressing_Healing);
      RegisterRecipe(new Craft_SRP_BandageDressing_Shock);
      RegisterRecipe(new Craft_SRP_BandageDressing_Antibiotic);

      RegisterRecipe(new Craft_SRP_BandageDressing_Advanced_Healing);
      RegisterRecipe(new Craft_SRP_BandageDressing_Advanced_Shock);
      RegisterRecipe(new Craft_SRP_BandageDressing_Advanced_Antibiotic);

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

    //==========================================================Tools
      RegisterRecipe(new Craft_SRP_Heatpack);

      RegisterRecipe(new Craft_SRP_HandPlane_Crude);
      RegisterRecipe(new Craft_SRP_HandPlane_Metal);

      RegisterRecipe(new Craft_SRP_HackingKit_KitStarter);
      RegisterRecipe(new Craft_SRP_HackingKit_Green);
      RegisterRecipe(new Craft_SRP_HackingKit_Yellow);
      RegisterRecipe(new Craft_SRP_HackingKit_Red);
      RegisterRecipe(new Craft_SRP_HackingKit_Blue);
      RegisterRecipe(new Craft_SRP_HackingKit_Purple);

    //==========================================================Weapons
      // RegisterRecipe(new SRP_Craft_ThrowingKnivesBasic);

      // RegisterRecipe(new Craft_SRP_WeaponBladeKit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeKit1);
      // RegisterRecipe(new Craft_SRP_WeaponBluntKit_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBluntKit_Kit1);
      // RegisterRecipe(new Craft_SRP_WeaponBluntWarHammerKit_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponStaffKit_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponSpearKit_Kit);
      RegisterRecipe(new Craft_SRP_WeaponPipeAxe_Kit);
      RegisterRecipe(new Craft_SRP_WeaponPipeAxe);
      // RegisterRecipe(new Craft_SRP_WeaponBladeKarambitKnife_Kit);
      // RegisterRecipe(new Craft_SRP_KarambitKnife);
      // RegisterRecipe(new Craft_SRP_KarambitKnife_Red);
      // RegisterRecipe(new Craft_SRP_KarambitKnife_Blue);
      // RegisterRecipe(new Craft_SRP_WeaponBladeSnakeDagger_Kit);
      // RegisterRecipe(new Craft_SRP_SnakeDagger);
      // RegisterRecipe(new Craft_SRP_WeaponBladeKnifeOld_Kit);
      // RegisterRecipe(new Craft_SRP_KnifeOld);
      // RegisterRecipe(new Craft_SRP_WeaponBladeCelticAxe_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBluntMacerator_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeBerserkSword_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeAerondightSword_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeAndurilSword_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeGladiusSword_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeCrystalMace_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeKatana_Kit);
      // RegisterRecipe(new Craft_SRP_WeaponBladeWarCleaver_Kit);  
      // RegisterRecipe(new Craft_SRP_WeaponBluntFireygreatsowrd_Kit);  
      // RegisterRecipe(new Craft_SRP_WeaponBladeGreatRuneSword_Kit);  

      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GreatRuneSword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GreatRuneSword_Black);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GreatRuneSword_Gold);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GreatRuneSword_Silver);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GreatRuneSword_Red);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GreatRuneSword_Blue);

      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_BerserkSword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AerondightSword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_AndurilSword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_KatanaSlim);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarCleaver);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_ttcelticaxe);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_Macerator);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_CrystalMace);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_FireyGreatsword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GladiusSword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_GladiusSwordSheath);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_OrnamentalGladiusSword);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_OrnamentalGladiusSwordSheath);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerBasic);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerBrutal);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerEngraved);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerHeavy);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerMallet);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerSimple);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerLong);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerPike);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerProng);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarhammerSkullCrusher);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarspearPike);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarspearPikeHook);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarstaffWooden);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarstaffSkull);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarstaffSun);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarstaffCopper);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarstaffSpear);
      // RegisterRecipe(new Craft_SRP_SmeltingWeapon_WarstaffMoon);
    
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

    //==========================================================END
	}
};
