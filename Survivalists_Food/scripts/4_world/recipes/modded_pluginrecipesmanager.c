modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{	
		super.RegisterRecipies();
	
		RegisterRecipe(new CraftBreadDough);
		RegisterRecipe(new CraftBreadDough_Loaf);
		RegisterRecipe(new CraftBreadDough_Flatbread);

		RegisterRecipe(new CraftSausage);
		RegisterRecipe(new CraftMSausage);

		RegisterRecipe(new CraftSushi);

		RegisterRecipe(new CraftMixStew);
		RegisterRecipe(new CraftMeatStew);
		RegisterRecipe(new CraftVeggieStew);

		RegisterRecipe(new CraftHotdog);
	}
};