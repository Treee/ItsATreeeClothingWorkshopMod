class Craft_SRP_TinfoilHat extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Make Tinfoil";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_LatheWorkbench");	// primary ingredient
		InsertIngredient(0,"Pliers");	// primary ingredient
		
		m_IngredientAddHealth[0] = -2;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 1;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"SRP_CraftingMaterial_MetalScraps");
		
		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 10;// 0 = do nothing
		m_IngredientDestroy[1] = 1;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_BaseballCap_Tinfoil");	// recipe result
		
		m_ResultSetFullQuantity[0] = 1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = 1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_TinfoilHat: Recipe Do method called","recipes");
	}
};

class Craft_SRP_Crown extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Encrust With Gems";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 5;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"MetalCrown_Basic");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		// InsertIngredient(1,"SRP_CraftingMaterial_MetalScraps");
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = false;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		// AddResult("SRP_BaseballCap_Tinfoil");	// recipe result
		
		m_ResultSetFullQuantity[0] = 1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = 1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_Crown: Recipe Do method called","recipes");
	}
};
class Craft_SRP_Crown_Emerald extends Craft_SRP_Crown  
{
	override void Init()
	{
    super.Init();
		m_Name = "Encrust With Gems - Emerald";	// action name in game		
		//ingredient 2					
		InsertIngredient(1,"SRP_Mining_Crystal_ColorBase");
		//result 1
		AddResult("MetalCrown_Emerald");	// recipe result
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    if (ingredients[1])
    {
      return ingredients[1].GetColor() == "jade";
    }
		return false;
	}
};
class Craft_SRP_Crown_Amethyst extends Craft_SRP_Crown  
{
	override void Init()
	{
    super.Init();
		m_Name = "Encrust With Gems - Amethyst";	// action name in game		
		//ingredient 2					
		InsertIngredient(1,"SRP_Mining_Crystal_ColorBase");
		//result 1
		AddResult("MetalCrown_Amethyst");	// recipe result
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    if (ingredients[1])
    {
      return ingredients[1].GetColor() == "amethyst";
    }
		return false;
	}
};
class Craft_SRP_Crown_Sapphire extends Craft_SRP_Crown  
{
	override void Init()
	{
    super.Init();
		m_Name = "Encrust With Gems - Sapphire";	// action name in game		
		//ingredient 2					
		InsertIngredient(1,"SRP_Mining_Crystal_ColorBase");
		//result 1
		AddResult("MetalCrown_Sapphire");	// recipe result
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    if (ingredients[1])
    {
      return ingredients[1].GetColor() == "sapphire";
    }
		return false;
	}
};