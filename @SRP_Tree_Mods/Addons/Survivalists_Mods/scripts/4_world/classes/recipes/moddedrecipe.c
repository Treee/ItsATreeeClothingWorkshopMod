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

    //---------- RP Craftables
    RegisterRecipe(new Craft_SRP_Notebook);
    RegisterRecipe(new Craft_SRP_ExtraPaper);
    RegisterRecipe(new Craft_SRP_WhiteFlag);

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