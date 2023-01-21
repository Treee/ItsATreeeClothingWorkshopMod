class SRP_PackSeedsIntoPaperBase extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Pack Seeds";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1.5;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 20;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SeedBase");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"Paper");		
	
		m_IngredientAddHealth[1] = 0;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		// AddResult("SRP_ConsumableDrug_CocaineTainted");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 20;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
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
    ItemBase seedpack = ItemBase.Cast(GetGame().CreateObjectEx(ingredients[0].GetType() + "Pack", player.GetPosition(), false));
    results.Insert(seedpack);
    Debug.Log("SRP_PackSeedsIntoPaperBase " + ingredients[0].GetType() + " Do method called","recipes");
	}
};