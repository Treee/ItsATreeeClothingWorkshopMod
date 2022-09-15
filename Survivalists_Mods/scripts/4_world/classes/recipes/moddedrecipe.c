modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
   
    // Crafting
    //---------Deconstruct Items into Kits    
    RegisterRecipe(new Deconstruct_PlacedObjectKit);
    RegisterRecipe(new Deconstruct_PlacedObjectKit_Advanced);

    RegisterRecipe(new Deconstruct_RockPile);
    RegisterRecipe(new Deconstruct_PlankPile);
    RegisterRecipe(new Deconstruct_LogPile);

    RegisterRecipe(new SawWoodenLog_Irradiated);
    RegisterRecipe(new SplitLongWoodenStick_Irradiated);
    RegisterRecipe(new SplitFirewood_Irradiated);
	}
};