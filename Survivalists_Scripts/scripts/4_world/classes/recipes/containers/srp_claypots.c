class Craft_SRP_DecorativeClayPot_KitBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Decorative Clay Pot Starter Kit";
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = 12;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 12;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_Mining_StoneChunk_Clay");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_Mining_StoneChunk_Clay"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		AddResult("SRP_PotteryPotKit_Kit");	// recipe result
		
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
		Debug.Log("Craft_SRP_DecorativeClayPot_KitBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_DecorativeClayPotKit_OptionsBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Decorative Clay Pot Kit - Options";
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
		m_MinQuantityIngredient[1] = 12;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_PotteryPotKit_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_Mining_StoneChunk_Clay"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = true;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_DecorativeLightKit_Kit");	// recipe result
		
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
		Debug.Log("Craft_SRP_DecorativeClayPotKit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_DecorativeClayPotKit_Bottle extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Bottle";
		AddResult("SRP_PotteryPot1Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_TeardropTall extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Teardrop Tall";
		AddResult("SRP_PotteryPot2Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_BulbWide extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Bulb Wide";
		AddResult("SRP_PotteryPot3Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_Cone extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Cone";
		AddResult("SRP_PotteryPot4Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_ShortCone extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Short Cone";
		AddResult("SRP_PotteryPot5Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_Decanter extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Decanter";
		AddResult("SRP_PotteryPot6Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_TeardropWide extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Teardrop Wide";
		AddResult("SRP_PotteryPot7Kit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeClayPotKit_BulbShort extends Craft_SRP_DecorativeClayPotKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Clay Pot Kit - Bulb Short";
		AddResult("SRP_PotteryPot8Kit_Kit");	// recipe result
	}
};