modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
   
    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new PrepareCoralFish);
    RegisterRecipe(new PrepareAngelFish);
    RegisterRecipe(new PrepareTroutFish);
	}
};