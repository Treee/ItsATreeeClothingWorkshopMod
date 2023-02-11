modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();

    RegisterRecipe(new Migrate_Old_Ammo);

    RegisterRecipe(new Disassemble_SRP_ShotgunAmmo);
    RegisterRecipe(new Disassemble_SRP_PistolAmmo);
    RegisterRecipe(new Disassemble_SRP_RifleAmmo);

    RegisterRecipe(new SRP_Recipe_CraftGunpowder_Simple);
    RegisterRecipe(new SRP_Recipe_CraftGunpowder_Explosives);

    RegisterRecipe(new SRP_BreakDownPistolCore);
    RegisterRecipe(new SRP_BreakDownRifleCoreLarge);
    RegisterRecipe(new SRP_BreakDownRifleCoreMedium);

    RegisterRecipe(new SRP_BreakDownPistolCore_Advanced);
    RegisterRecipe(new SRP_BreakDownRifleCoreLarge_Advanced);
    RegisterRecipe(new SRP_BreakDownRifleCoreMedium_Advanced);
    RegisterRecipe(new Craft_SRP_RepairSalvagedPart);

    RegisterRecipe(new Craft_SRP_WeaponLongBarrel_Kit);
    RegisterRecipe(new Craft_SRP_WeaponMediumBarrel_Kit);
    RegisterRecipe(new Craft_SRP_WeaponShortBarrel_Kit);
    RegisterRecipe(new Craft_TT_GunKit_Salvage);
    RegisterRecipe(new Craft_TT_GunKit_Tools);

    RegisterRecipe(new Craft_SRP_WeaponShortBarrel_Kit_ColtSA_Revolver);
    RegisterRecipe(new Craft_SRP_WeaponShortBarrel_Kit_JunkShotgun);
    RegisterRecipe(new Craft_SRP_WeaponMediumBarrel_Kit_Contender);
    RegisterRecipe(new Craft_SRP_WeaponLongBarrel_Kit_Model18871);
    RegisterRecipe(new Craft_SRP_WeaponLongBarrel_Kit_JunkerAK);
    RegisterRecipe(new Craft_SRP_WeaponMediumBarrel_Kit_OTS71);
    RegisterRecipe(new Craft_SRP_WeaponMediumBarrel_Kit_Boomstick);

    RegisterRecipe(new Craft_SRPBeanBasher);

    RegisterRecipe(new Craft_SRP_Dynamite_Stick_Kit);
    RegisterRecipe(new Craft_SRP_Dynamite_StackItem);
    RegisterRecipe(new Craft_SRP_Dynamite_StackQuantity);

    RegisterRecipe(new Craft_SRP_Ammo_FlareRed);
    RegisterRecipe(new Craft_SRP_Ammo_FlareGreen);
    RegisterRecipe(new Craft_SRP_Ammo_FlareBlue);

	}
};