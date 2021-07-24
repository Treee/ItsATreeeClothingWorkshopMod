class Craft_SRP_BedsideTable_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Bedside Table Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 99;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -99;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_BedsideTable_Kit");//add results here

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
		Debug.Log("Craft_SRP_BedsideTable_Kit: Recipe Do method called","recipes");
	}
};

// final craft on the workbench
// class Craft_SRP_BedsideTable_Kit1 extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "Create Bedside Table Kit";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 6;//animation length in relative time units
// 		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"BP1_Workbench");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"SRP_BedsideTable_Kit");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = true;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("BP_tumba");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}

// 	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
// 	{
// 		Debug.Log("Recipe Do method called","recipes");
// 	}
// };

class Craft_SRP_WoodenShelf_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Wooden Shelf Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 99;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -99;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_WoodenShelf_Kit");//add results here

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
		Debug.Log("Craft_SRP_WoodenShelf_Kit Recipe Do method called","recipes");
	}
};

// // final craft on the workbench
// class craft_BP_Shelf extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "Create";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 6;//animation length in relative time units
// 		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"BP1_Workbench");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"BP_Shelf_kit");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = true;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("BP_Shelf");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}

// 	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
// 	{
// 		Debug.Log("Recipe Do method called","recipes");
// 	}
// };

class Craft_SRP_GunShelf_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Gun Shelf Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 99;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -99;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_GunShelf_Kit");//add results here

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
		Debug.Log("Craft_SRP_GunShelf_Kit: Recipe Do method called","recipes");
	}
};

// adv worbench final product
// class craft_BP_GunShelf extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "Create";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 6;//animation length in relative time units
// 		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"BP1_Workbench");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"BP_GunShelf_kit");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = true;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("BP_GunShelf");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}

// 	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
// 	{
// 		Debug.Log("Recipe Do method called","recipes");
// 	}
// };

class Craft_SRP_Potbelly_Stove_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Potbelly Stove Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MetalPlate");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Pipe");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_Potbelly_Stove_Kit");//add results here

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
		Debug.Log("Craft_SRP_Potbelly_Stove_Kit Recipe Do method called","recipes");
	}
};

// adv workbench finalize
// class craft_BPPech extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "Create";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 6;//animation length in relative time units
// 		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"BP1_Workbench");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"BP_Pech_kit");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = true;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("BPPech");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}

// 	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
// 	{
// 		Debug.Log("Recipe Do method called","recipes");
// 	}
// };

class Craft_SRP_ShootingTargetO_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Shooting Range Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 5;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"MetalPlate");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -5;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_ShootingTargetO_Kit");//add results here

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
		Debug.Log("Craft_SRP_ShootingTargetO_Kit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_StreetLightLarge_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Large Street Light Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 15;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -15;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -35;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_StreetLightLarge_Kit");//add results here

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
		Debug.Log("Craft_SRP_StreetLightLarge_Kit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_StreetLightMedium_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Medium Street Light Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 15;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -20;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_StreetLightMedium_Kit");//add results here

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
		Debug.Log("Craft_SRP_StreetLightMedium_Kit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_WoodenTable_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Wooden Table Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 15;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -15;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_Furniture_WoodenTable_Kit");//add results here

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
		Debug.Log("Craft_SRP_WoodenTable_Kit: Recipe Do method called","recipes");
	}
};