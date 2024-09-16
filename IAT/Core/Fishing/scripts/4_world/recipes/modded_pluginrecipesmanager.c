modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new IAT_Fishing_Deconstruct_PlacedObjectKit);
    //=====CRAFTING BAIT
    RegisterRecipe(new IAT_Fishing_Construct_CanOfWorms); 
    //=====CRAFTING LURES
    RegisterRecipe(new IAT_Fishing_Construct_FishLureMetalKit);
    RegisterRecipe(new IAT_Fishing_Construct_FishLureWoodKit);
    //========CRAFTING RODS
    RegisterRecipe(new IAT_Fishing_Construct_FishRodKit);
    RegisterRecipe(new IAT_Fishing_Construct_FishRod);
    //========= Preparing Fish
    RegisterRecipe(new IAT_PrepareCustomFish);
	}
};