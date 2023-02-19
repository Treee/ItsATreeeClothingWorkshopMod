class Craft_SRP_Taxidermy_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Base Mount Taxidermy Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_Taxidermy_Kit");//add results here

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
		Debug.Log("Craft_SRP_Taxidermy_Kit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_TaxidermyWall_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Wall Mount Taxidermy Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_TaxidermyWall_Kit");//add results here

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
		Debug.Log("Craft_SRP_TaxidermyWall_Kit: Recipe Do method called","recipes");
	}
};


//================================================ mounts
class Craft_DUB_Trophy_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Taxidermy Animal - Base";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SRP_Taxidermy_Kit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		// InsertIngredient(1,"LeatherSewingKit");
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("DUB_Wolftrophy");//add results here

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
    SRP_Taxidermy_Kit taxiKit = SRP_Taxidermy_Kit.Cast(ingredients[0]);
    if (taxiKit)
    {
      return taxiKit.IsTaxidermyPuzzleSolved(GetPeltPuzzle());
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_DUB_Trophy_Base: Recipe Do method called: " + m_Name,"recipes");
	}

  TStringArray GetPeltPuzzle()
  {
    return {};
  }
};

class Craft_DUB_Wolftrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Wolf";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Wolftrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"WolfPelt","WolfPelt","WolfPelt","WolfPelt"};
  }
};

class Craft_DUB_Beartrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Bear";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Beartrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"BearPelt","BearPelt","BearPelt","BearPelt"};
  }
};

class Craft_DUB_Pigtrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Pig";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Pigtrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"PigPelt","PigPelt","PigPelt","PigPelt"};
  }
};

class Craft_DUB_Wildboartrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Wild Boar";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Boartrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"WildboarPelt","WildboarPelt","WildboarPelt","WildboarPelt"};
  }
};

class Craft_DUB_Deertrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Deer";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Deertrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DeerPelt","DeerPelt","DeerPelt","DeerPelt"};
  }
};

class Craft_DUB_Goattrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Goat";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Goattrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"GoatPelt","GoatPelt","GoatPelt","GoatPelt"};
  }
};

class Craft_DUB_Sheeptrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Sheep";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Sheeptrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"SheepPelt","SheepPelt","SheepPelt","SheepPelt"};
  }
};

class Craft_DUB_BioWolftrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - BioWolf";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Biowolftrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_Biowolfpelt","DUB_Biowolfpelt","DUB_Biowolfpelt","DUB_Biowolfpelt"};
  }
};

class Craft_DUB_Cowtrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Cow";
    InsertIngredient(1,"LeatherSewingKit");

		//result1
		AddResult("DUB_Cowtrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"CowPelt","CowPelt","CowPelt","CowPelt"};
  }
};

class Craft_DUB_Roostertrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Rooster";
		InsertIngredient(1,"DeadChicken_ColorBase");
		//result1
		AddResult("DUB_Roostertrophy");//add results here
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return true;
	}
};

class Craft_DUB_Moosetrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Moose";
    InsertIngredient(1,"LeatherSewingKit");
		//result1
		AddResult("DUB_Moosetrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_Moosepelt","DUB_Moosepelt","DUB_Moosepelt","DUB_Moosepelt"};
  }
};

class Craft_DUB_Alphatrophy extends Craft_DUB_Trophy_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Taxidermy Animal - Alpha";
    InsertIngredient(1,"LeatherSewingKit");
		//result1
		AddResult("DUB_Alphatrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_Alphapelt","DUB_Alphapelt","DUB_Alphapelt","DUB_Alphapelt"};
  }
};

//================================================= wall mounts
class Craft_DUB_TrophyWall_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Wall Taxidermy Animal - Base";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SRP_TaxidermyWall_Kit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		// InsertIngredient(1,"LeatherSewingKit");
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("DUB_Wolftrophy");//add results here

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
    SRP_TaxidermyWall_Kit taxiKit = SRP_TaxidermyWall_Kit.Cast(ingredients[0]);
    if (taxiKit)
    {
      return taxiKit.IsTaxidermyPuzzleSolved(GetPeltPuzzle());
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_DUB_TrophyWall_Base: Recipe Do method called: " + m_Name,"recipes");
	}

  TStringArray GetPeltPuzzle()
  {
    return {};
  }
};

class Craft_DUB_Roosterwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Rooster";

		InsertIngredient(1,"DeadChicken_ColorBase");		
		//result1
		AddResult("DUB_Roosterwalltrophy");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return true;
	}
};

class Craft_DUB_Rabbitwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Rabbit";		
		//ingredient 2
		InsertIngredient(1,"LeatherSewingKit");
		//result1
		AddResult("DUB_Rabbitwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"RabbitPelt","RabbitPelt","RabbitPelt","RabbitPelt"};
  }
};

class Craft_DUB_Carpwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Carp";

		//ingredient 2
		InsertIngredient(1,"Carp");
		//result1
		AddResult("DUB_Carpwalltrophy");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return true;
	}
};

class Craft_DUB_Mackerelwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Mackerel";

		InsertIngredient(1,"Mackerel");
		//result1
		AddResult("DUB_Mackerelwalltrophy");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return true;
	}
};

class Craft_DUB_Sardinewalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Sardine";
		//ingredient 2
		InsertIngredient(1,"Sardines");
		//result1
		AddResult("DUB_Sardinewalltrophy");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return true;
	}
};

class Craft_DUB_Deerskullwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Deer Skull";

		//ingredient 2
		InsertIngredient(1,"LeatherSewingKit");
		AddResult("DUB_Deerskullwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DeerPelt","DeerPelt","DeerPelt","DeerPelt"};
  }
};

class Craft_DUB_Skullwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy - Skull";
		InsertIngredient(1,"LeatherSewingKit");
		//result1
		AddResult("DUB_Skullwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"SRP_SkeletonFrame_Skull","SRP_SkeletonFrame_Skull","SRP_SkeletonFrame_Skull","SRP_SkeletonFrame_Skull"};
  }
};

class Craft_DUB_Headspidertrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Head Spider";
		InsertIngredient(1,"LeatherSewingKit");
		
		//result1
		AddResult("DUB_Headspidertrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_Spiderlegs","DUB_Spiderlegs","DUB_Spiderlegs","DUB_Spiderlegs"};
  }
};

class Craft_DUB_Moosewalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Moose";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Moosewalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_Moosepelt","DUB_Moosepelt","DUB_Moosepelt","DUB_Moosepelt"};
  }
};

class Craft_DUB_Cowwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Cow";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Cowwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"CowPelt","CowPelt","CowPelt","CowPelt"};
  }
};

class Craft_DUB_Deerwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Deer";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Deerwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DeerPelt","DeerPelt","DeerPelt","DeerPelt"};
  }
};

class Craft_DUB_Boarwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Boar";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Boarwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"WildboarPelt","WildboarPelt","WildboarPelt","WildboarPelt"};
  }
};

class Craft_DUB_Pigwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Pig";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Pigwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"PigPelt","PigPelt","PigPelt","PigPelt"};
  }
};

class Craft_DUB_Bearwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Bear";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Bearwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"BearPelt","BearPelt","BearPelt","BearPelt"};
  }
};

class Craft_DUB_Wolfwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Wolf";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Wolfwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"WolfPelt","WolfPelt","WolfPelt","WolfPelt"};
  }
};

class Craft_DUB_BioWolfwalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - BioWolf";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_BioWolfwalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_Biowolfpelt","DUB_Biowolfpelt","DUB_Biowolfpelt","DUB_Biowolfpelt"};
  }
};

class Craft_DUB_Alphawalltrophy extends Craft_DUB_TrophyWall_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Wall Taxidermy Animal - Alpha";
		InsertIngredient(1,"LeatherSewingKit");
    //result1
		AddResult("DUB_Alphawalltrophy");//add results here
	}

  override TStringArray GetPeltPuzzle()
  {
    return {"DUB_AlphaPelt","DUB_AlphaPelt","DUB_AlphaPelt","DUB_AlphaPelt"};
  }
};
