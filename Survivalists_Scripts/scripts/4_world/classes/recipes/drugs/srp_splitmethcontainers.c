class SRP_Drugs_SplitLargeMethJar extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Split Large Jar of Meth";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 375;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_ConsumableDrug_MethLarge");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"Inventory_Base");//you can insert multiple ingredients this way
    
		m_IngredientAddHealth[1] = -10;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_ConsumableDrug_MethMedium");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing

    //result 2
		AddResult("SRP_ConsumableDrug_MethMedium");	// recipe result
		
		m_ResultSetFullQuantity[1] = -1;	// -1 = do nothing
		m_ResultSetQuantity[1] = -1;			// result quantity
		m_ResultSetHealth[1] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[1] = -1;		// -1 = do nothing
		m_ResultInheritsColor[1] = -1;		// -1 = do nothing
		m_ResultToInventory[1] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[1] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    ToolBase tool;
    if (Class.CastTo(tool, ingredients[1]))
    {
      return tool.IsKnifeTool();
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_Drugs_SplitLargeMethJar Do method called","recipes");
	}
};

class SRP_Drugs_SplitMediumMethJar extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Split Medium Jar of Meth";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 175;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_ConsumableDrug_MethMedium");	// primary ingredient
		
		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"Inventory_Base");//you can insert multiple ingredients this way
    
		m_IngredientAddHealth[1] = -10;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_ConsumableDrug_MethSmall");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing

    //result 2
		AddResult("SRP_ConsumableDrug_MethSmall");	// recipe result
		
		m_ResultSetFullQuantity[1] = -1;	// -1 = do nothing
		m_ResultSetQuantity[1] = -1;			// result quantity
		m_ResultSetHealth[1] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[1] = -1;		// -1 = do nothing
		m_ResultInheritsColor[1] = -1;		// -1 = do nothing
		m_ResultToInventory[1] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[1] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    ToolBase tool;
    if (Class.CastTo(tool, ingredients[1]))
    {
      return tool.IsKnifeTool();
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_Drugs_SplitMediumMethJar Do method called","recipes");
	}
};