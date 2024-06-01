modded class OpenCan
{
	override void Init()
	{
		m_Name = "#STR_OpenCan0";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = 0.01;// value > 0 for roughness, value < 0 for precision

		m_AnywhereInInventory = false;//is this recipe valid even when neither of the items is in hands
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check

		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check

		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------

		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"BakedBeansCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"PeachesCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"TacticalBaconCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"SpaghettiCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"SardinesCan");//you can insert multiple ingredients this way
		InsertIngredient(0,"UnknownFoodCan");//you can insert multiple ingredients this way
		// MY MODDED ITEM BEING ADDED
    InsertIngredient(0,"SRP_FoodCanPreserved_Colorbase");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"Inventory_Base");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = -0.5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------

		//result1
		//AddResult("");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 0;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value

		//----------------------------------------------------------------------------------------------------------------------
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    if ( player.IsPlacingLocal() )
			return false;

    ItemBase tool;
    if (Class.CastTo(tool, ingredients[1]))
    {
      return tool.IsKnifeTool();
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		ItemBase can;
		Class.CastTo(can, ingredients[0]);
		ItemBase tool;
		Class.CastTo(tool, ingredients[1]);
		PlayerBase playerPB;
		Class.CastTo(playerPB, player);
		OpenItem.OpenAndSwitch(tool, can, playerPB, specialty_weight);
    Debug.Log("OpenCan: Recipe Do method called","recipes");
	}
};

class SRP_CreateVeggiesMeatComboCanned_Raw extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Raw Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 115;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 75;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");
		InsertIngredient(0,"SheepSteakMeat");
		InsertIngredient(0,"FoxSteakMeat");
		InsertIngredient(0,"ChickenBreastMeat");
		InsertIngredient(0,"RabbitLegMeat");
		InsertIngredient(0,"CarpFilletMeat");
		InsertIngredient(0,"MackerelFilletMeat");
		InsertIngredient(0,"Sardines");
		InsertIngredient(0,"MouflonSteakMeat");
		InsertIngredient(0,"BoarSteakMeat");
		InsertIngredient(0,"WolfSteakMeat");
		InsertIngredient(0,"DeerSteakMeat");
		InsertIngredient(0,"PigSteakMeat");
		InsertIngredient(0,"BearSteakMeat");
		// InsertIngredient(0,"HumanSteakMeat");


		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
		InsertIngredient(1,"GreenBellPepper");
		InsertIngredient(1,"Zucchini");
		InsertIngredient(1,"Potato");
		InsertIngredient(1,"SlicedPumpkin");
		InsertIngredient(1,"AmanitaMushroom");
		InsertIngredient(1,"MacrolepiotaMushroom");
		InsertIngredient(1,"LactariusMushroom");
		InsertIngredient(1,"PsilocybeMushroom");
		InsertIngredient(1,"AuriculariaMushroom");
		InsertIngredient(1,"BoletusMushroom");
		InsertIngredient(1,"PleurotusMushroom");


		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanRaw_VeggieMeatCombo");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // ensure ingredients are not burned or rotten
    bool isCraftable = false;
    Edible_Base item0 = Edible_Base.Cast(ingredients[0]);
    Edible_Base item1 = Edible_Base.Cast(ingredients[1]);
    if (item0 && item1)
    {
      isCraftable = !item0.IsFoodBurned() || !item0.IsFoodRotten();
      isCraftable = isCraftable && (!item1.IsFoodBurned() || !item1.IsFoodRotten());
    }
    return isCraftable;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_CreateVeggiesMeatComboCanned_Raw: Recipe Do method called","recipes");
	}
};

class SRP_CreateVeggiesCanned_Raw extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Raw Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 75;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 75;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"Tomato");//you can insert multiple ingredients this way
		InsertIngredient(0,"GreenBellPepper");
		InsertIngredient(0,"Zucchini");
		InsertIngredient(0,"Potato");
		InsertIngredient(0,"SlicedPumpkin");
		InsertIngredient(0,"AmanitaMushroom");
		InsertIngredient(0,"MacrolepiotaMushroom");
		InsertIngredient(0,"LactariusMushroom");
		InsertIngredient(0,"PsilocybeMushroom");
		InsertIngredient(0,"AuriculariaMushroom");
		InsertIngredient(0,"BoletusMushroom");
		InsertIngredient(0,"PleurotusMushroom");


		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
		InsertIngredient(1,"GreenBellPepper");
		InsertIngredient(1,"Zucchini");
		InsertIngredient(1,"Potato");
		InsertIngredient(1,"SlicedPumpkin");
		InsertIngredient(1,"AmanitaMushroom");
		InsertIngredient(1,"MacrolepiotaMushroom");
		InsertIngredient(1,"LactariusMushroom");
		InsertIngredient(1,"PsilocybeMushroom");
		InsertIngredient(1,"AuriculariaMushroom");
		InsertIngredient(1,"BoletusMushroom");
		InsertIngredient(1,"PleurotusMushroom");


		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanRaw_Veggies");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // ensure ingredients are not burned or rotten
    bool isCraftable = false;
    Edible_Base item0 = Edible_Base.Cast(ingredients[0]);
    Edible_Base item1 = Edible_Base.Cast(ingredients[1]);
    if (item0 && item1)
    {
      isCraftable = !item0.IsFoodBurned() && !item0.IsFoodRotten();
      isCraftable = isCraftable && (!item1.IsFoodBurned() && !item1.IsFoodRotten());
    }
    return isCraftable;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_CreateVeggiesCanned_Raw: Recipe Do method called","recipes");
	}
};

class SRP_CreateMeatCanned_Raw extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Raw Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 115;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 115;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"CowSteakMeat");
		InsertIngredient(0,"SheepSteakMeat");
		InsertIngredient(0,"FoxSteakMeat");
		InsertIngredient(0,"ChickenBreastMeat");
		InsertIngredient(0,"RabbitLegMeat");
		InsertIngredient(0,"CarpFilletMeat");
		InsertIngredient(0,"MackerelFilletMeat");
		InsertIngredient(0,"Sardines");
		InsertIngredient(0,"MouflonSteakMeat");
		InsertIngredient(0,"BoarSteakMeat");
		InsertIngredient(0,"WolfSteakMeat");
		InsertIngredient(0,"DeerSteakMeat");
		InsertIngredient(0,"PigSteakMeat");
		InsertIngredient(0,"BearSteakMeat");
		// InsertIngredient(0,"HumanSteakMeat");


		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"CowSteakMeat");
		InsertIngredient(1,"SheepSteakMeat");
		InsertIngredient(1,"FoxSteakMeat");
		InsertIngredient(1,"ChickenBreastMeat");
		InsertIngredient(1,"RabbitLegMeat");
		InsertIngredient(1,"CarpFilletMeat");
		InsertIngredient(1,"MackerelFilletMeat");
		InsertIngredient(1,"Sardines");
		InsertIngredient(1,"MouflonSteakMeat");
		InsertIngredient(1,"BoarSteakMeat");
		InsertIngredient(1,"WolfSteakMeat");
		InsertIngredient(1,"DeerSteakMeat");
		InsertIngredient(1,"PigSteakMeat");
		InsertIngredient(1,"BearSteakMeat");
		// InsertIngredient(1,"HumanSteakMeat");


		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanRaw_Meat");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // ensure ingredients are not burned or rotten
    bool isCraftable = false;
    Edible_Base item0 = Edible_Base.Cast(ingredients[0]);
    Edible_Base item1 = Edible_Base.Cast(ingredients[1]);
    if (item0 && item1)
    {
      isCraftable = !item0.IsFoodBurned() && !item0.IsFoodRotten();
      isCraftable = isCraftable && (!item1.IsFoodBurned() && !item1.IsFoodRotten());
    }
    return isCraftable;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_CreateMeatCanned_Raw: Recipe Do method called","recipes");
	}
};

class SRP_CreateHumanMeatCanned_Raw extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Raw Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 115;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 115;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"HumanSteakMeat");


		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"HumanSteakMeat");


		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanRaw_HumanMeat");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // ensure ingredients are not burned or rotten
    bool isCraftable = false;
    Edible_Base item0 = Edible_Base.Cast(ingredients[0]);
    Edible_Base item1 = Edible_Base.Cast(ingredients[1]);
    if (item0 && item1)
    {
      isCraftable = !item0.IsFoodBurned() && !item0.IsFoodRotten();
      isCraftable = isCraftable && (!item1.IsFoodBurned() && !item1.IsFoodRotten());
    }
    return isCraftable;
  }

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_CreateHumanMeatCanned_Raw: Recipe Do method called","recipes");
	}
};

class SRP_CreateVeggiesHumanMeatComboCanned_Raw extends RecipeBase
{
	override void Init()
	{
		m_Name = "Create Raw Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 115;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 75;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"HumanSteakMeat");


		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = 1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"Tomato");//you can insert multiple ingredients this way
		InsertIngredient(1,"GreenBellPepper");
		InsertIngredient(1,"Zucchini");
		InsertIngredient(1,"Potato");
		InsertIngredient(1,"SlicedPumpkin");
		InsertIngredient(1,"AmanitaMushroom");
		InsertIngredient(1,"MacrolepiotaMushroom");
		InsertIngredient(1,"LactariusMushroom");
		InsertIngredient(1,"PsilocybeMushroom");
		InsertIngredient(1,"AuriculariaMushroom");
		InsertIngredient(1,"BoletusMushroom");
		InsertIngredient(1,"PleurotusMushroom");


		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -2;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanRaw_VeggieHumanMeatCombo");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // ensure ingredients are not burned or rotten
    bool isCraftable = false;
    Edible_Base item0 = Edible_Base.Cast(ingredients[0]);
    Edible_Base item1 = Edible_Base.Cast(ingredients[1]);
    if (item0 && item1)
    {
      isCraftable = !item0.IsFoodBurned() && !item0.IsFoodRotten();
      isCraftable = isCraftable && (!item1.IsFoodBurned() && !item1.IsFoodRotten());
    }
    return isCraftable;
  }

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("SRP_CreateVeggiesHumanMeatComboCanned_Raw: Recipe Do method called","recipes");
	}
};

class SRP_CanRawGoods extends RecipeBase
{
	override void Init()
	{
		m_Name = "Seal Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"SRP_AdvancedWorkbench");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -2;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"SRP_FoodCanRaw_Colorbase");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanPreserved_");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = 1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // check to see if the food can is baked or boiled. do not let them can the food if it is not cooked
    SRP_FoodCanRaw_Colorbase can = SRP_FoodCanRaw_Colorbase.Cast(ingredients[1]);
    if (can && (can.IsFoodBaked() || can.IsFoodBoiled()))
    {
      return true;
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    SRP_FoodCanRaw_Colorbase can = SRP_FoodCanRaw_Colorbase.Cast(ingredients[1]);
    if (can && results[0])
    {
      // transfer the quantity properties
      results[0].SetQuantity(can.GetQuantity());
    }
    Debug.Log("SRP_CanRawGoods: Recipe Do method called","recipes");
	}
};

class SRP_CanRawGoodsPliers extends RecipeBase
{
	override void Init()
	{
		m_Name = "Seal Canned Goods";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"Pliers");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -2;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"SRP_FoodCanRaw_Colorbase");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_FoodCanPreserved_");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = 1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    // check to see if the food can is baked or boiled. do not let them can the food if it is not cooked
    SRP_FoodCanRaw_Colorbase can = SRP_FoodCanRaw_Colorbase.Cast(ingredients[1]);
    if (can && (can.IsFoodBaked() || can.IsFoodBoiled()))
    {
      return true;
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    SRP_FoodCanRaw_Colorbase can = SRP_FoodCanRaw_Colorbase.Cast(ingredients[1]);
    if (can && results[0])
    {
      // transfer the quantity properties
      results[0].SetQuantity(can.GetQuantity());
    }
    Debug.Log("SRP_CanRawGoods: Recipe Do method called","recipes");
	}
};

class SRP_Craft_Haggis extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Haggis";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 75;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 75;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MouflonSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"SheepSteakMeat");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -2;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"GoatSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"MouflonSteakMeat");//you can insert multiple ingredients this way
		InsertIngredient(1,"SheepSteakMeat");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] =true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_Haggis");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = 1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

    override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
        // check to see if the food can is baked or boiled. do not let them can the food if it is not cooked
        Edible_Base ingredient1;
        Edible_Base ingredient2;
        // if both items are edible_base
        if (Class.CastTo(ingredient1, ingredients[0]) && Class.CastTo(ingredient2, ingredients[1]))
        {
            // only allow cooked foods
            if (ingredient1.IsFoodBurned() || ingredient1.IsFoodRotten() || ingredient1.IsFoodRaw())
                return false;
            if (ingredient2.IsFoodBurned() || ingredient2.IsFoodRotten() || ingredient2.IsFoodRaw())
                return false;
            return true;
        }
        return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
        Debug.Log("SRP_Craft_Haggis: Recipe Do method called","recipes");
	}
};

class SRP_Craft_HaggisMeme extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Scottish Flag";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"SRP_Haggis");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -2;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"SRP_Haggis");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] =true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		AddResult("SRP_PatchFlag_Scotland");	// recipe result

		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -2;		// -1 = do nothing
		m_ResultInheritsColor[0] = 1;		// -1 = do nothing
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
        Debug.Log("SRP_Craft_HaggisMeme: Recipe Do method called","recipes");
	}
};