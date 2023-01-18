class Craft_SRP_SmallProtectorCase_Syringe extends RecipeBase 
{
	override void Init()
	{
		m_Name = "Make Syringe Box";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 1;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SmallProtectorCase");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"Syringe"); //  secondary ingredient
		InsertIngredient(1,"ClearSyringe"); //  secondary ingredient
		InsertIngredient(1,"BloodSyringe"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
    //result1
		AddResult("SRP_SmallProtectorCase_Syringe");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_SmallProtectorCase_Syringe protectorCase = SRP_SmallProtectorCase_Syringe.Cast(ingredients[0]);
    if (protectorCase)
    {
      return false;
    }
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_SmallProtectorCase_Syringe: Recipe Do method called","recipes");
	}
};
class Craft_SRP_SmallProtectorCase_Nails extends RecipeBase 
{
	override void Init()
	{
		m_Name = "Make Nail Box";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 1;	//-1 = disable check
		m_MinQuantityIngredient[1] = 10;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SmallProtectorCase");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"Nail"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -10;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
    //result1
		AddResult("SRP_SmallProtectorCase_Nails");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_SmallProtectorCase_Nails protectorCase = SRP_SmallProtectorCase_Nails.Cast(ingredients[0]);
    if (protectorCase)
    {
      return false;
    }
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_SmallProtectorCase_Nails: Recipe Do method called","recipes");
	}
};
class Craft_SRP_SmallProtectorCase_Flare extends RecipeBase 
{
	override void Init()
	{
		m_Name = "Make Flare Box";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 1;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SmallProtectorCase");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"Ammo_Flare"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
    //result1
		AddResult("SRP_SmallProtectorCase_FlareBox");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_SmallProtectorCase_FlareBox protectorCase = SRP_SmallProtectorCase_FlareBox.Cast(ingredients[0]);
    if (protectorCase)
    {
      return false;
    }
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_SmallProtectorCase_FlareBox: Recipe Do method called","recipes");
	}
};
class Craft_SRP_ReboxResourcesBase extends RecipeBase 
{
	override void Init()
	{
		m_Name = "Repack Box of Resources";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 1;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 1;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"Paper");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		// InsertIngredient(1,"Nail"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
    //result1
		// AddResult("NailBox");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log(m_Name+": Recipe Do method called","recipes");
	}
};
class Craft_SRP_Rebox_Nails extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Nails";	// action name in game

		m_MinQuantityIngredient[1] = 70;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Nail"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -70;// -1 = do nothing
		
    //result1
		AddResult("NailBox");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_556x45 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 556x45";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_556x45"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_556x45_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_556x45Tracer extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 556x45 Tracer";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_556x45Tracer"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_556x45Tracer_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_308Win extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 308 Win";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_308Win"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_308Win_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_308WinTracer extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 308 Win Tracer";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_308WinTracer"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_308WinTracer_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_762x54 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 762x54";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_762x54"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_762x54_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_762x54Tracer extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 762x54 Tracer";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_762x54Tracer"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_762x54Tracer_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_762x39 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 762x39";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_762x39"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_762x39_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_762x39Tracer extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 762x39 Tracer";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_762x39Tracer"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_762x39Tracer_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_22 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 22";	// action name in game

		m_MinQuantityIngredient[1] = 50;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_22"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -50;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_22_50Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_357 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 357";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_357"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_357_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_45ACP extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 45 ACP";	// action name in game

		m_MinQuantityIngredient[1] = 25;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_45ACP"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -25;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_45ACP_25rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_9x19 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 9x19";	// action name in game

		m_MinQuantityIngredient[1] = 25;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_9x19"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -25;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_9x19_25rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_380 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 380";	// action name in game

		m_MinQuantityIngredient[1] = 35;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_380"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -35;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_380_35rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_12gaPellets extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 12ga Buckshot";	// action name in game

		m_MinQuantityIngredient[1] = 10;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_12gaPellets"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -10;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_00buck_10rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_12gaSlug extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 12ga Slugs";	// action name in game

		m_MinQuantityIngredient[1] = 10;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_12gaSlug"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -10;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_12gaSlug_10Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_545x39 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 545x39";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_545x39"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_545x39_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_545x39Tracer extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 545x39 Tracer";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_545x39Tracer"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_545x39Tracer_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_9x39 extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 9x39";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_9x39"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_9x39_20Rnd");//add results here
	}
};
class Craft_SRP_Rebox_Ammo_9x39AP extends Craft_SRP_ReboxResourcesBase 
{
	override void Init()
	{
    super.Init();
		m_Name = "Repack Box of Ammo - 9x39AP";	// action name in game

		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		//ingredient 2	
		InsertIngredient(1,"Ammo_9x39AP"); //  secondary ingredient
		
    m_IngredientAddQuantity[1] = -20;// -1 = do nothing
		
    //result1
		AddResult("AmmoBox_9x39AP_20Rnd");//add results here
	}
};
