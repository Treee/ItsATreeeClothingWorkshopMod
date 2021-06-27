modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
    
    // Crafting
    //---------Kits
		RegisterRecipe(new Craft_SRP_BedsideTable_Kit);
		RegisterRecipe(new Craft_SRP_WoodenShelf_Kit);
		RegisterRecipe(new Craft_SRP_GunShelf_Kit);
		RegisterRecipe(new Craft_SRP_Potbelly_Stove_Kit);		
    //---------Deconstruct ITems into Kits
    RegisterRecipe(new Deconstruct_SRP_BedsideTable);		
    RegisterRecipe(new Deconstruct_SRP_Woodenshelf);		
    RegisterRecipe(new Deconstruct_SRP_GunShelf);		
    RegisterRecipe(new Deconstruct_SRP_Potbelly_Stove);		
	}
};