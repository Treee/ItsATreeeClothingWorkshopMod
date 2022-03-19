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
    RegisterRecipe(new SRP_Fishing_Construct_FishDisplayStarterKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishDisplay);
    RegisterRecipe(new SRP_Fishing_Construct_FishRackStarterKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishRack);
    RegisterRecipe(new SRP_Fishing_Construct_AquariumStarterKit);    
    RegisterRecipe(new SRP_Fishing_Construct_AquariumStarterKit_Top);    
    RegisterRecipe(new SRP_Fishing_Construct_AquariumStarterKit_Bot);    
    RegisterRecipe(new SRP_Fishing_Construct_AquariumStarterKit_Glass);    
    RegisterRecipe(new SRP_Fishing_Construct_AquariumKit); 
    //=====CRAFTING LURES
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetalKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWoodKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Slim1);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Slim2);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Slim3);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Slim4);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_TearDrop1);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_TearDrop2);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_TearDrop3);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_TearDrop4);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Rounded1);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Rounded2);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Rounded3);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetal_Rounded4);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_SmallScale1);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_SmallScale2);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_SmallScale3);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_SmallScale4);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_PatternScale1);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_PatternScale2);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_PatternScale3);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_PatternScale4);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_LargeScale1);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_LargeScale2);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_LargeScale3);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWood_LargeScale4);
    //========CRAFTING RODS
    RegisterRecipe(new SRP_Fishing_Construct_FishRodKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishRod);
    RegisterRecipe(new SRP_Fishing_Construct_FishRod_Red);
    RegisterRecipe(new SRP_Fishing_Construct_FishRod_Blue);
    RegisterRecipe(new SRP_Fishing_Construct_FishRod_Purple);

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