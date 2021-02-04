modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
    
    // Craft Drugs
		// RegisterRecipe(new Drugs_BagOfMeth_Small);
		// RegisterRecipe(new Drugs_BagOfMeth_Medium);
		// RegisterRecipe(new Drugs_Unpack_BagOfMeth_Medium);
		// RegisterRecipe(new Drugs_BagOfMeth_Large);
		// RegisterRecipe(new Drugs_Unpack_BagOfMeth_Large);

    RegisterRecipe(new SRP_Craft_DrugPack);
    RegisterRecipe(new SRP_Craft_DrugCarton);
    RegisterRecipe(new SRP_Add_JointToPack);
    RegisterRecipe(new SRP_Add_CigaretteToPack);
	}
};