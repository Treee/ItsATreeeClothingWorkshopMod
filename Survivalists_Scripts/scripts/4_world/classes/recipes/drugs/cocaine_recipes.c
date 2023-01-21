class SRP_Drugs_CreateCocaineStarterBag extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Make Drug Mixing Bag";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 10;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 4;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"Cocaine");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"Fabric");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -4;// 0 = do nothing
		m_IngredientDestroy[1] = true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_DrugCraft_CocaineStarter");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    Edible_Base cocaine = Edible_Base.Cast(ingredients[0]);
    if (cocaine)
    {
      return cocaine.IsFoodDried();
    }    
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_Drugs_CreateCocaineStarterBag Do method called","recipes");
	}
};

class SRP_Drugs_ManufactureCocaineFromRaw extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Reduce Cocaine Plant Material";	// action name in game
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
		m_MinQuantityIngredient[1] = 20000;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugCraft_CocaineStarter");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"CanisterGasoline");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -10;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -20000;// 0 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_ConsumableDrug_CocainePaste");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_DrugCraft_CocaineStarter kit = SRP_DrugCraft_CocaineStarter.Cast(ingredients[0]);
    if (kit && ingredients[1].GetLiquidType() == LIQUID_GASOLINE)
    {
      return kit.IsReadyToCraft();
    }    
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_Drugs_ManufactureCocaineFromRaw Do method called","recipes");
	}
};

class SRP_Drugs_ManufactureCocaineFromPasteWithTubes extends RecipeBase  
{
  bool m_isTainted = true;

	override void Init()
	{
		m_Name = "Synthesize Cocaine";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 75;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1 
		InsertIngredient(0,"SRP_LabTubeRack");	// primary ingredient
		
		m_IngredientAddHealth[0] = -20;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = false;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"SRP_ConsumableDrug_CocainePaste");
		
		m_IngredientAddHealth[1] = 0;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[0]);
    if (tubeRack && tubeRack.GetInventory().AttachmentCount() > 0) {
      if (tubeRack.IsCocainePuzzleSolved()) { // if you have the puzzle solved, the drugs are untainted
        m_isTainted = false;
        return true;
      }
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_Drugs_ManufactureCocaineFromPasteWithTubes Do method called","recipes");
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[0]); 
    if (tubeRack) 
    {
      ItemBase cocaine;
      if (m_isTainted) 
      {
        cocaine = ItemBase.Cast(GetGame().CreateObjectEx("SRP_DrugBrick_CocaineTainted", player.GetPosition(), false));
        results.Insert(cocaine);
      } 
      else 
      {
        cocaine = ItemBase.Cast(GetGame().CreateObjectEx("SRP_DrugBrick_Cocaine", player.GetPosition(), false));
        results.Insert(cocaine);
      }
      tubeRack.ApplyTestTubeUsageDamage();
    }
	}
};

class SRP_Drugs_CutDrugsFromCocaine extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Cut Cocaine";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 20;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugBrick_Cocaine");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"HuntingKnife");//you can insert multiple ingredients this way
		InsertIngredient(1,"KukriKnife");
		InsertIngredient(1,"FangeKnife");
		InsertIngredient(1,"Cleaver");
		InsertIngredient(1,"CombatKnife");
		InsertIngredient(1,"Machete");
		InsertIngredient(1,"Hatchet");
		
		m_IngredientAddHealth[1] = -20;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_ConsumableDrug_Cocaine");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 30;			// result quantity
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
    Debug.Log("SRP_Drugs_CutDrugsFromCocaine Do method called","recipes");
	}
};

class SRP_Drugs_CutDrugsFromCocaineTainted extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Cut Cocaine";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 20;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugBrick_CocaineTainted");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"HuntingKnife");//you can insert multiple ingredients this way
		InsertIngredient(1,"KukriKnife");
		InsertIngredient(1,"FangeKnife");
		InsertIngredient(1,"Cleaver");
		InsertIngredient(1,"CombatKnife");
		InsertIngredient(1,"Machete");
		InsertIngredient(1,"Hatchet");
		
		m_IngredientAddHealth[1] = -20;	// -10 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// 0 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_ConsumableDrug_CocaineTainted");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 30;			// result quantity
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
    Debug.Log("SRP_Drugs_CutDrugsFromCocaineTainted Do method called","recipes");
	}
};