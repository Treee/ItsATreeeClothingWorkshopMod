modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
    
    // Crafting
    //---------Kits
		RegisterRecipe(new Craft_SRP_BedsideTable_Kit);
		RegisterRecipe(new Craft_SRP_WoodenShelf_Kit);
		RegisterRecipe(new Craft_SRP_GunShelf_Kit);
		RegisterRecipe(new Craft_SRP_Potbelly_Stove_Kit);		
		RegisterRecipe(new Craft_SRP_ShootingTargetO_Kit);		
		RegisterRecipe(new Craft_SRP_StreetLightLarge_Kit);		
		RegisterRecipe(new Craft_SRP_StreetLightMedium_Kit);		

    //---------Deconstruct Items into Kits
    RegisterRecipe(new Deconstruct_SRP_BedsideTable);		
    RegisterRecipe(new Deconstruct_SRP_Woodenshelf);		
    RegisterRecipe(new Deconstruct_SRP_GunShelf);		
    RegisterRecipe(new Deconstruct_SRP_Potbelly_Stove);
    RegisterRecipe(new Deconstruct_SRP_ShootingTargetO);
    RegisterRecipe(new Deconstruct_SRP_StreetLightLarge);
    RegisterRecipe(new Deconstruct_SRP_StreetLightMedium);

    RegisterRecipe(new Deconstruct_SRP_GChair);
    RegisterRecipe(new Deconstruct_SRP_GChairHigh);
    RegisterRecipe(new Deconstruct_SRP_GOutdoorTable);
    RegisterRecipe(new Deconstruct_SRP_GOutdoorTableUmbrella);
    RegisterRecipe(new Deconstruct_SRP_Umbrella);
    RegisterRecipe(new Deconstruct_SRP_Furniture_WoodenTable);
    RegisterRecipe(new Deconstruct_SRP_AdvancedWorkbench);
    RegisterRecipe(new Deconstruct_SRP_Carpet);

    // Building
    RegisterRecipe(new Craft_SRP_Planks);
    RegisterRecipe(new Craft_SRP_SmallDoor_Kit);
    RegisterRecipe(new Craft_SRP_WideFence_Kit);
    RegisterRecipe(new Craft_SRP_WindowBarricade_Kit);

    // Ammo    
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
    RegisterRecipe(new Craft_SRP_WhiteFlag);

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

    //----------- Clothing
    RegisterRecipe(new Craft_SRP_DrawnEyepatch);
    RegisterRecipe(new Craft_SRP_RemoveHeadphonesTacticalCap);
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
	}
};