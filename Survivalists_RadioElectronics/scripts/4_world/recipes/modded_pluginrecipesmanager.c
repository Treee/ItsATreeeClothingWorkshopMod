modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
  
    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new SRP_DismantleElectronicJammers);

    RegisterRecipe(new SRP_CraftElectronics_JammerIntermediateKit);
    RegisterRecipe(new SRP_Craft_ElectronicsJammingKit_Dish);
    RegisterRecipe(new SRP_Craft_ElectronicsJammingKit_Tower);
    RegisterRecipe(new SRP_Craft_ElectronicsJammingKit_TowerAdvanced);
	}
};