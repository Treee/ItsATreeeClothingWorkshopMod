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
        RegisterRecipe(new Craft_SRPBeanBasher);

        RegisterRecipe(new Craft_SRP_Dynamite_Stick_Kit);
        RegisterRecipe(new Craft_SRP_Dynamite_StackItem);
        RegisterRecipe(new Craft_SRP_Dynamite_StackQuantity);

        RegisterRecipe(new Craft_SRP_Ammo_FlareRed);
        RegisterRecipe(new Craft_SRP_Ammo_FlareGreen);
        RegisterRecipe(new Craft_SRP_Ammo_FlareBlue);

        RegisterRecipe(new Craft_SRP_UpgradeKatana);

	}
};