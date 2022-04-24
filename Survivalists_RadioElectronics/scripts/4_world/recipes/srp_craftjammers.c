class SRP_CraftElectronics_JammerIntermediateKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Radio Jamming Starter Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		//INGREDIENTS
		//ingredient 1
    InsertIngredient(0,"MetalPlate");
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 2 
    InsertIngredient(1,"ElectronicRepairKit");	    
		m_IngredientAddHealth[1] = -15;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_RadioElectronicsJammer_Intermediate_Kit");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("SRP_CraftElectronics_JammerIntermediateKit: Recipe Do method called.","recipes");
	}
};

class SRP_Craft_ElectronicsJammingKit_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Radio Tower Jammer - Base";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		//INGREDIENTS
		//ingredient 1
    InsertIngredient(0,"SRP_RadioElectronicsJammer_Intermediate_Kit");
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 2 
    InsertIngredient(1,"ElectronicRepairKit");	    
		m_IngredientAddHealth[1] = -50;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		// //result1
		// AddResult("SRP_WoodenFishRack_Kit");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    // do logic check for slots filled
    SRP_RadioElectronicsJammer_Intermediate_Kit kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      return kit.CanCraft();
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("SRP_Craft_ElectronicsJammingKit_Base: Recipe Do method called.","recipes");
	}
};

class SRP_Craft_ElectronicsJammingKit_Dish extends SRP_Craft_ElectronicsJammingKit_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Radio Tower Jammer - Dish";

		AddResult("SRP_ElectronicsJammer_Dish_Kit");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("SRP_Craft_ElectronicsJammingKit_Dish: Recipe Do method called.","recipes");
	}
};

class SRP_Craft_ElectronicsJammingKit_Tower extends SRP_Craft_ElectronicsJammingKit_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Radio Tower Jammer - Tower";

		AddResult("SRP_ElectronicsJammer_Tower_Kit");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("SRP_Craft_ElectronicsJammingKit_Tower: Recipe Do method called.","recipes");
	}
};

class SRP_Craft_ElectronicsJammingKit_TowerAdvanced extends SRP_Craft_ElectronicsJammingKit_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Radio Tower Jammer - Advanced Tower";

		AddResult("SRP_ElectronicsJammer_TowerAdvanced_Kit");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("SRP_Craft_ElectronicsJammingKit_TowerAdvanced: Recipe Do method called.","recipes");
	}
};