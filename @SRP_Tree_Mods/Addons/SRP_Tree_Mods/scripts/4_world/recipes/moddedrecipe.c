modded class PluginRecipesManagerBase extends PluginBase
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe
    
    // Gunpowder Recipes
		RegisterRecipe(new SRP_Tree_Recipe_CraftGunpowder_Simple);
		RegisterRecipe(new SRP_Tree_Recipe_CraftGunpowder_Explosives);

    // Meth Recipes
		RegisterRecipe(new SRP_Tree_Drugs_SplitMediumMethJar);
		RegisterRecipe(new SRP_Tree_Drugs_SplitLargeMethJar);

    // Meth Tub Recipes
		RegisterRecipe(new SRP_Tree_Drugs_CookMeth);
		RegisterRecipe(new SRP_Tree_Drugs_MakeAcid);
		RegisterRecipe(new SRP_Tree_Drugs_MakeBathSalts);

    // Smokable Recipe
		RegisterRecipe(new SRP_Tree_Drugs_RollZWeedJoint);		
    RegisterRecipe(new SRP_Craft_DrugPack);
    RegisterRecipe(new SRP_Craft_DrugCarton);
		RegisterRecipe(new SRP_Tree_Drug_LightSmokable);		
	}
};