class Craft_SRP_Barricade_OptionsBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Barricade - Options";
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 50;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_BarricadeKit_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"EpoxyPutty"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("");	// recipe result
		
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
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_Barricade_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};
class Craft_SRP_Barricade_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Wood Wall";		
		AddResult("SRP_Barricade_Wood_Kit");//add results here
	}
};
class Craft_SRP_BarricadeWithWindow_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Wall with Window";
		AddResult("SRP_BarricadeWithWindow_Wood_Kit");//add results here
	}
};
class Craft_SRP_WindowBarricade_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Window Short";
		AddResult("SRP_WindowBarricade_Wood_Kit");//add results here
	}
};
class Craft_SRP_WindowBarricadeTall_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Window Tall";
		AddResult("SRP_WindowBarricadeTall_Wood_Kit");//add results here
	}
};
class Craft_SRP_SpikeBarricade_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Wooden Spike";
		AddResult("SRP_SpikeBarricade_Wood_Kit");//add results here
	}
};
class Craft_SRP_BarricadeMetal_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Metal";
		AddResult("SRP_BarricadeMetal_Kit");//add results here
	}
};
class Craft_SRP_Fortifications_BambooWall_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Bamboo Wall";
		AddResult("SRP_Fortifications_BambooWall_Kit");//add results here
	}
};
class Craft_SRP_Fortifications_BambooWall_Yellow_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Yellow Bamboo Wall";
		AddResult("SRP_Fortifications_BambooWall_Yellow_Kit");//add results here
	}
};
class Craft_SRP_Fortifications_BambooWallCrossSmall_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Bamboo Wall - Small X";
		AddResult("SRP_Fortifications_BambooWallCrossSmall_Kit");//add results here
	}
};
class Craft_SRP_Fortifications_BambooWallCrossSmall_Yellow_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Yellow Bamboo Wall - Small X";
		AddResult("SRP_Fortifications_BambooWallCrossSmall_Yellow_Kit");//add results here
	}
};
class Craft_SRP_Fortifications_BambooWallCross_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Bamboo Wall - X";
		AddResult("SRP_Fortifications_BambooWallCross_Kit");//add results here
	}
};
class Craft_SRP_Fortifications_BambooWallCross_Yellow_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Create Barricade - Yellow Bamboo Wall - X";
		AddResult("SRP_Fortifications_BambooWallCross_Yellow_Kit");//add results here
	}
};