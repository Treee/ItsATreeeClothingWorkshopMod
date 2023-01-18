class CraftVeggieStew extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Vegetable Stew";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BakedBeansCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(0,"SpaghettiCan_Opened");
		InsertIngredient(0,"UnknownFoodCan_Opened");
		InsertIngredient(0,"Tomato");
		InsertIngredient(0,"GreenBellPepper");
		InsertIngredient(0,"Zucchini");
		InsertIngredient(0,"SlicedPumpkin");
		InsertIngredient(0,"Potato");
		InsertIngredient(0,"AgaricusMushroom");
		InsertIngredient(0,"AmanitaMushroom");
		InsertIngredient(0,"MacrolepiotaMushroom");
		InsertIngredient(0,"LactariusMushroom");
		InsertIngredient(0,"PsilocybeMushroom");
		InsertIngredient(0,"AuriculariaMushroom");
		InsertIngredient(0,"BoletusMushroom");
		InsertIngredient(0,"PleurotusMushroom");
		
	
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"SpaghettiCan_Opened");
		InsertIngredient(1,"UnknownFoodCan_Opened");
		InsertIngredient(1,"Tomato");
		InsertIngredient(1,"GreenBellPepper");
		InsertIngredient(1,"Zucchini");
		InsertIngredient(1,"SlicedPumpkin");
		InsertIngredient(1,"Potato");
		InsertIngredient(1,"AgaricusMushroom");
		InsertIngredient(1,"AmanitaMushroom");
		InsertIngredient(1,"MacrolepiotaMushroom");
		InsertIngredient(1,"LactariusMushroom");
		InsertIngredient(1,"PsilocybeMushroom");
		InsertIngredient(1,"AuriculariaMushroom");
		InsertIngredient(1,"BoletusMushroom");
		InsertIngredient(1,"PleurotusMushroom");


		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("srpStew_Veggie");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
};

class CraftMeatStew extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Meat Stew";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");
		InsertIngredient(0,"SheepSteakMeat");
		InsertIngredient(0,"ChickenBreastMeat");
		InsertIngredient(0,"MouflonSteakMeat");
		InsertIngredient(0,"BoarSteakMeat");
		InsertIngredient(0,"WolfSteakMeat");
		InsertIngredient(0,"DeerSteakMeat");
		InsertIngredient(0,"PigSteakMeat");
		InsertIngredient(0,"BearSteakMeat");
		InsertIngredient(0,"Lunchmeat_Opened");
		InsertIngredient(0,"TacticalBaconCan_Opened");
		InsertIngredient(0,"PorkCan_Opened");
		InsertIngredient(0,"UnknownFoodCan_Opened");
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"CowSteakMeat");
		InsertIngredient(1,"SheepSteakMeat");
		InsertIngredient(1,"ChickenBreastMeat");
		InsertIngredient(1,"MouflonSteakMeat");
		InsertIngredient(1,"BoarSteakMeat");
		InsertIngredient(1,"WolfSteakMeat");
		InsertIngredient(1,"DeerSteakMeat");
		InsertIngredient(1,"PigSteakMeat");
		InsertIngredient(1,"BearSteakMeat");
		InsertIngredient(1,"Lunchmeat_Opened");
		InsertIngredient(1,"TacticalBaconCan_Opened");
		InsertIngredient(1,"PorkCan_Opened");
		InsertIngredient(1,"UnknownFoodCan_Opened");

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("srpStew_Meat");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
};

class CraftMixStew extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Stew";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");
		InsertIngredient(0,"SheepSteakMeat");
		InsertIngredient(0,"ChickenBreastMeat");
		InsertIngredient(0,"MouflonSteakMeat");
		InsertIngredient(0,"BoarSteakMeat");
		InsertIngredient(0,"WolfSteakMeat");
		InsertIngredient(0,"DeerSteakMeat");
		InsertIngredient(0,"PigSteakMeat");
		InsertIngredient(0,"BearSteakMeat");
		InsertIngredient(0,"Lunchmeat_Opened");
		InsertIngredient(0,"TacticalBaconCan_Opened");
		InsertIngredient(0,"PorkCan_Opened");
		InsertIngredient(0,"UnknownFoodCan_Opened");
		InsertIngredient(0,"srpStew_Meat");
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"BakedBeansCan_Opened");//you can insert multiple ingredients this way
		InsertIngredient(1,"SpaghettiCan_Opened");
		InsertIngredient(1,"UnknownFoodCan_Opened");
		InsertIngredient(1,"Tomato");
		InsertIngredient(1,"GreenBellPepper");
		InsertIngredient(1,"Zucchini");
		InsertIngredient(1,"SlicedPumpkin");
		InsertIngredient(1,"Potato");
		InsertIngredient(1,"AgaricusMushroom");
		InsertIngredient(1,"AmanitaMushroom");
		InsertIngredient(1,"MacrolepiotaMushroom");
		InsertIngredient(1,"LactariusMushroom");
		InsertIngredient(1,"PsilocybeMushroom");
		InsertIngredient(1,"AuriculariaMushroom");
		InsertIngredient(1,"BoletusMushroom");
		InsertIngredient(1,"PleurotusMushroom");
		InsertIngredient(1,"srpStew_Veggie");

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("srpStew_Mix");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
};