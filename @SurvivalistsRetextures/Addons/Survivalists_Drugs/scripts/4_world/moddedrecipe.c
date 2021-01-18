modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
    
    // Craft Drugs
		RegisterRecipe(new Drugs_BagOfMeth_Small);
		RegisterRecipe(new Drugs_BagOfMeth_Medium);
		RegisterRecipe(new Drugs_Unpack_BagOfMeth_Medium);
		RegisterRecipe(new Drugs_BagOfMeth_Large);
		RegisterRecipe(new Drugs_Unpack_BagOfMeth_Large);

    RegisterRecipe(new CraftZWeedPack);
    RegisterRecipe(new AddJointToZWeedPack);
    // RegisterRecipe(new RemoveJointFromZWeedPack);
	}
};