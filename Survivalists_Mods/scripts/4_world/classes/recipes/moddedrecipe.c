modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
   
    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new Deconstruct_PlacedObjectKit);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit_BuildingFrame);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit_StreetSign);     
    RegisterRecipe(new Deconstruct_RockPile);     
	}
};