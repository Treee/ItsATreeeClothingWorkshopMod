
modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();				// Calling base RegisterRecipies()
		// UnregisterRecipe("CraftStoneKnife");	// Removing an existing recipe

    RegisterRecipe(new Craft_SRP_Container_StonePileSmall);
    RegisterRecipe(new Craft_SRP_Container_StonePileLarge);

    RegisterRecipe(new Craft_SRP_CraftingMaterial_Mortar_Crude);
    RegisterRecipe(new Craft_SRP_CraftingMaterial_Cement_Crude);

    RegisterRecipe(new Craft_SRP_StoneForgeWorkbenchStarter_Kit);
    RegisterRecipe(new Craft_SRP_StoneForgeWorkbenchFinisher_Kit);
    RegisterRecipe(new Craft_SRP_StoneForgeWorkbench_Kit);

    RegisterRecipe(new Craft_SRP_MetalCoins);
    RegisterRecipe(new Craft_SRP_ForgeIngotPlate_ColorBase);
    RegisterRecipe(new Craft_SRP_ForgeIngotRod_ColorBase);
    // RegisterRecipe(new Craft_SRP_MiningPick);
    // RegisterRecipe(new Craft_SRP_WoodAxe);

    RegisterRecipe(new Craft_SRP_CrushLargeStone_CrudeTool);
    RegisterRecipe(new Craft_SRP_CrushStoneChunk_CrudeTool);
    RegisterRecipe(new Craft_SRP_CrushStoneChunk_JewlingTool);
    RegisterRecipe(new Craft_SRP_RefineUnCutGem_CrudeTool);
    RegisterRecipe(new Craft_SRP_RefineUnCutGem_JewlCuttingTool);
    RegisterRecipe(new Craft_SRP_CrucibleEmptyLime);
    RegisterRecipe(new Craft_SRP_CrucibleEmptyMortar);
    RegisterRecipe(new Craft_SRP_MetalBucket);
    RegisterRecipe(new Craft_SRP_IngotMoldEmptyMetal);
    RegisterRecipe(new Craft_SRP_IngotMold_Lime);
    RegisterRecipe(new Craft_SRP_IngotMold_Mortar);
	}
};