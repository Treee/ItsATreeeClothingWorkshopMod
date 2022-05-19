modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
   
    // Crafting
    //---------Deconstruct Items into Kits
    RegisterRecipe(new Deconstruct_PlacedObjectKit);
    RegisterRecipe(new Deconstruct_RockPile);

    RegisterRecipe(new Deconstruct_DecorativeLight_Long);
    RegisterRecipe(new Deconstruct_DecorativeLight_VerticalLong);
    RegisterRecipe(new Deconstruct_DecorativeLight_Flat);
    RegisterRecipe(new Deconstruct_DecorativeLight_VerticalFlat);
    RegisterRecipe(new Deconstruct_DecorativeLight_LongFancy);
    RegisterRecipe(new Deconstruct_DecorativeLight_VerticalLongFancy);
    RegisterRecipe(new Deconstruct_DecorativeLight_Corner);
    RegisterRecipe(new Deconstruct_DecorativeLight_HorizontalCorner);
    
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit_BuildingFrame);
    RegisterRecipe(new Deconstruct_IntermediaryObjectKit_StreetSign);     
    RegisterRecipe(new Deconstruct_IntermediaryWoodenShelfKit);     
    RegisterRecipe(new Deconstruct_IntermediaryMetalShelfKit);
    RegisterRecipe(new Deconstruct_IntermediaryBarricadeKit);
    RegisterRecipe(new Deconstruct_IntermediaryStreetLightKit);
    RegisterRecipe(new Deconstruct_IntermediaryWoodenFurnitureKit);
   
    RegisterRecipe(new SawWoodenLog_Irradiated);
    RegisterRecipe(new SplitLongWoodenStick_Irradiated);
    RegisterRecipe(new SplitFirewood_Irradiated);
	}
};