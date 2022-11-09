modded class PluginRecipesManager
{	
	override void RegisterRecipies()
	{
		super.RegisterRecipies();

    RegisterRecipe(new Craft_WaxStick);
    RegisterRecipe(new Craft_DyeWaxStick);	
    RegisterRecipe(new Craft_SRP_OpenSealedLetter);	
    RegisterRecipe(new Craft_SRP_UnSealedLetter);

    RegisterRecipe(new SRP_DismantlePostBox);
    RegisterRecipe(new SRP_DismantlePostBox_Blue);
    RegisterRecipe(new SRP_DismantlePostBox_Wooden);
  }
};
