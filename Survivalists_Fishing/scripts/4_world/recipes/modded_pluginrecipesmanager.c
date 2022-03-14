modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
   
    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new SRP_Fishing_Deconstruct_PlacedObjectKit);
    //---------Crafting Kits
    RegisterRecipe(new SRP_Fishing_Construct_FishDisplay);
    RegisterRecipe(new SRP_Fishing_Construct_AquariumStarterKit);    
    RegisterRecipe(new SRP_Fishing_Construct_AquariumKit);    
    //========= Preparing Fish
    RegisterRecipe(new PrepareCoralFish);
    RegisterRecipe(new PrepareAngelFish);
    RegisterRecipe(new PrepareSailFish);
    RegisterRecipe(new PrepareAnglerFish);
    RegisterRecipe(new PrepareHammerHeadFish);
    
    RegisterRecipe(new PrepareTroutFish);
    RegisterRecipe(new PrepareMutantFish);
    RegisterRecipe(new PrepareSplakeFish);
    RegisterRecipe(new PreparePerchFish);
    RegisterRecipe(new PrepareTilapiaFish);
	}
};