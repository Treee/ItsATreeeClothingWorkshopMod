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
    RegisterRecipe(new SRP_Fishing_Construct_AquariumKit); 
    //=====CRAFTING BAIT
    RegisterRecipe(new SRP_Fishing_Construct_CanOfWorms); 
    RegisterRecipe(new SRP_Fishing_Construct_CanOfWormsAdd); 
    RegisterRecipe(new SRP_Fishing_Construct_ClamBait); 
    RegisterRecipe(new SRP_Fishing_Construct_ClamBaitBone); 
    RegisterRecipe(new SRP_Fishing_Construct_SmallFishBait); 
    RegisterRecipe(new SRP_Fishing_Construct_SmallFishBaitBone);
    //=====CRAFTING LURES
    RegisterRecipe(new SRP_Fishing_Construct_FishLureMetalKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishLureWoodKit);
    //========CRAFTING RODS
    RegisterRecipe(new SRP_Fishing_Construct_FishRodKit);
    RegisterRecipe(new SRP_Fishing_Construct_FishRod);

    //========= Preparing Fish
    RegisterRecipe(new SRP_PrepareSaltWaterFish);
    RegisterRecipe(new SRP_PrepareFreshWaterFish);
	}
};