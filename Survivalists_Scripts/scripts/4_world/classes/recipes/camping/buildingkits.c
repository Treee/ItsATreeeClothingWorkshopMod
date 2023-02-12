//================================================================================ TETRIS SHELF
class Craft_SRP_TetrisShelfKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Tetris Shelf - Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 35;//-1 = disable check
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
		InsertIngredient(1,"SRP_WornWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -35;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_TetrisShelfKit_Kit");//add results here

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
    SRP_WornWorkbench workbench = SRP_WornWorkbench.Cast(ingredients[1]);
    if (workbench)
    {
      ItemBase drill;
      Class.CastTo(drill, workbench.FindAttachmentBySlotName("SRP_WoodDrill"));

      ItemBase clamp;
      Class.CastTo(clamp, workbench.FindAttachmentBySlotName("SRP_WoodClamp"));
      return (drill && clamp);
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TetrisShelfKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_TetrisShelfKit_OptionsBase extends RecipeBase
{
  int m_RequiredNailsQuantity;
  int m_RequiredWoodenPlanks;
  int m_RequiredMetalSheets;

	override void Init()
	{
		m_Name = "Craft Wooden Furniture - Options";
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
		InsertIngredient(0,"SRP_TetrisShelfKit_Kit");	// primary ingredient
		
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
    SRP_TetrisShelfKit_Kit kit;
    Class.CastTo(kit, ingredients[0]);
    bool canCraft = false;
    if (kit)
    {
      ItemBase slot;
      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_Nails"));
      canCraft |= (slot != NULL && slot.GetQuantity() >= m_RequiredNailsQuantity);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_WoodenPlanks"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredWoodenPlanks);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_MetalSheets"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredMetalSheets);

      canCraft &= (kit.FindAttachmentBySlotName("Material_MetalWire") != NULL);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_TetrisShelfKit_Kit_Kit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_TetrisShelfLDown extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - L Down";
		AddResult("SRP_TetrisShelfLDown");//add results here
	}
};
class Craft_SRP_TetrisShelfLUp extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - L Up";
		AddResult("SRP_TetrisShelfLUp");//add results here
	}
};
class Craft_SRP_TetrisShelfLLeft extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - L Left";
		AddResult("SRP_TetrisShelfLLeft");//add results here
	}
};
class Craft_SRP_TetrisShelfLRight extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - L Right";
		AddResult("SRP_TetrisShelfLRight");//add results here
	}
};
class Craft_SRP_TetrisShelfIVertical extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - I Vertical";
		AddResult("SRP_TetrisShelfIVertical");//add results here
	}
};
class Craft_SRP_TetrisShelfIHorizontal extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - I Horizontal";
		AddResult("SRP_TetrisShelfIHorizontal");//add results here
	}
};
class Craft_SRP_TetrisShelfTUp extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - T Up";
		AddResult("SRP_TetrisShelfTUp");//add results here
	}
};
class Craft_SRP_TetrisShelfTDown extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - T Down";
		AddResult("SRP_TetrisShelfTDown");//add results here
	}
};
class Craft_SRP_TetrisShelfTVertical extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - T Vertical";
		AddResult("SRP_TetrisShelfTVertical");//add results here
	}
};
class Craft_SRP_TetrisShelfSHorizontal extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - S Horizontal";
		AddResult("SRP_TetrisShelfSHorizontal");//add results here
	}
};
class Craft_SRP_TetrisShelfSVertical extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - S Vertical";
		AddResult("SRP_TetrisShelfSVertical");//add results here
	}
};
class Craft_SRP_TetrisShelfBox extends Craft_SRP_TetrisShelfKit_OptionsBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Tetris Shelf - Box";
		AddResult("SRP_TetrisShelfBox");//add results here
	}
};


//================================================================================ WOODEN SHELF

class Craft_SRP_WoodenShelfKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Wooden Shelf - Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
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
		InsertIngredient(1,"SRP_WornWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -35;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_WoodenShelfKit_Kit");//add results here

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
    SRP_WornWorkbench workbench = SRP_WornWorkbench.Cast(ingredients[1]);
    if (workbench)
    {
      ItemBase drill;
      Class.CastTo(drill, workbench.FindAttachmentBySlotName("SRP_WoodDrill"));

      ItemBase clamp;
      Class.CastTo(clamp, workbench.FindAttachmentBySlotName("SRP_WoodClamp"));
      return (drill && clamp);
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_WoodenShelfKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_WoodenShelfKit_Kit_OptionsBase extends RecipeBase
{
  int m_RequiredNailsQuantity;
  int m_RequiredWoodenPlanks;
  int m_RequiredMetalSheets;

	override void Init()
	{
		m_Name = "Craft Wooden Shelf - Options";
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
		InsertIngredient(0,"SRP_WoodenShelfKit_Kit");	// primary ingredient
		
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
    SRP_WoodenShelfKit_Kit kit;
    Class.CastTo(kit, ingredients[0]);
    bool canCraft = false;
    if (kit)
    {
      ItemBase slot;
      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_Nails"));
      canCraft |= (slot != NULL && slot.GetQuantity() >= m_RequiredNailsQuantity);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_WoodenPlanks"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredWoodenPlanks);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_MetalSheets"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredMetalSheets);

      canCraft &= (kit.FindAttachmentBySlotName("Material_MetalWire") != NULL);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_WoodenShelfKit_Kit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_WoodenShelfSimple_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 45;
    m_RequiredWoodenPlanks = 10;
    m_RequiredMetalSheets = 5;

		m_Name = "Create Wooden Shelf - Simple";
		AddResult("SRP_WoodenShelfSimple_Kit");//add results here
	}
};

class Craft_SRP_WoodenShelfSimpleGround_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 45;
    m_RequiredWoodenPlanks = 10;
    m_RequiredMetalSheets = 5;

		m_Name = "Create Wooden Shelf - Simple Ground";
		AddResult("SRP_WoodenShelfSimpleGround_Kit");//add results here
	}
};

class Craft_SRP_WoodenShelfGround_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 45;
    m_RequiredWoodenPlanks = 15;
    m_RequiredMetalSheets = 10;

		m_Name = "Create Wooden Shelf - Ground";
		AddResult("SRP_WoodenShelfGround_Kit");//add results here
	}
};

class Craft_SRP_WoodenShelfGroundTall_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 70;
    m_RequiredWoodenPlanks = 20;
    m_RequiredMetalSheets = 10;

		m_Name = "Create Wooden Shelf - Tall";
		AddResult("SRP_WoodenShelfGroundTall_Kit");//add results here
	}
};

class Craft_SRP_GunShelfWall_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{	
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 70;
    m_RequiredWoodenPlanks = 20;
    m_RequiredMetalSheets = 10;

		m_Name = "Create Wooden Shelf - Gun Shelf";
		AddResult("SRP_GunShelfWall_Kit");//add results here
	}
};

class Craft_SRP_GunShelfGround_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{	
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 70;
    m_RequiredWoodenPlanks = 20;
    m_RequiredMetalSheets = 10;

		m_Name = "Create Wooden Shelf - Gun Shelf Ground";
		AddResult("SRP_GunShelfGround_Kit");//add results here
	}
};

class Craft_SRP_BoocCaseCube_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
{	
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 65;
    m_RequiredWoodenPlanks = 15;
    m_RequiredMetalSheets = 5;

		m_Name = "Create Book Case - Cubed";
		AddResult("SRP_BookCaseCube_Kit");//add results here
	}
};

//================================================================================ WOODEN DISPLAY

class Craft_SRP_WoodenDisplayKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Wooden Display - Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
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
		InsertIngredient(1,"SRP_WornWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_WoodenDisplayKit_Kit");//add results here

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
    SRP_WornWorkbench workbench = SRP_WornWorkbench.Cast(ingredients[1]);
    if (workbench)
    {
      ItemBase drill;
      Class.CastTo(drill, workbench.FindAttachmentBySlotName("SRP_WoodDrill"));

      ItemBase clamp;
      Class.CastTo(clamp, workbench.FindAttachmentBySlotName("SRP_WoodClamp"));
      return (drill && clamp);
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_WoodenDisplayKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_WoodenDisplayKit_Kit_OptionsBase extends RecipeBase
{
  int m_RequiredNailsQuantity;
  int m_RequiredWoodenPlanks;
  int m_RequiredMetalSheets;

	override void Init()
	{
		m_Name = "Craft Wooden Display - Options";
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
		InsertIngredient(0,"SRP_WoodenDisplayKit_Kit");	// primary ingredient
		
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
    SRP_WoodenDisplayKit_Kit kit;
    Class.CastTo(kit, ingredients[0]);
    bool canCraft = false;
    if (kit)
    {
      ItemBase slot;
      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_Nails"));
      canCraft |= (slot != NULL && slot.GetQuantity() >= m_RequiredNailsQuantity);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_WoodenPlanks"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredWoodenPlanks);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_MetalSheets"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredMetalSheets);

      canCraft &= (kit.FindAttachmentBySlotName("Material_MetalWire") != NULL);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_WoodenDisplayKit_Kit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_WoodenDisplayKit_Kit_CoatRackBasic extends Craft_SRP_WoodenDisplayKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 75;
    m_RequiredWoodenPlanks = 10;
    m_RequiredMetalSheets = 5;

		m_Name = "Create Coat Rack - Basic";
		AddResult("SRP_CoatRack_Basic_Kit");//add results here
	}
};
class Craft_SRP_WoodenDisplayKit_Kit_CoatRackSimple extends Craft_SRP_WoodenDisplayKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 85;
    m_RequiredWoodenPlanks = 15;
    m_RequiredMetalSheets = 10;

		m_Name = "Create Coat Rack - Simple";
		AddResult("SRP_CoatRack_Simple_Kit");//add results here
	}
};
class Craft_SRP_WoodenDisplayKit_Kit_CoatRackFancy extends Craft_SRP_WoodenDisplayKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 99;
    m_RequiredWoodenPlanks = 20;
    m_RequiredMetalSheets = 15;

		m_Name = "Create Coat Rack - Fancy";
		AddResult("SRP_CoatRack_Fancy_Kit");//add results here
	}
};

//================================================================================ METAL SHELF


class Craft_SRP_MetalShelfKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Metal Shelf - Kit";
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
		
		m_MinQuantityIngredient[1] = 35;//-1 = disable check
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
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -35;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_MetalShelfKit_Kit");//add results here

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
		Debug.Log("Craft_SRP_MetalShelfKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_MetalShelfKit_Kit_OptionsBase extends RecipeBase
{
  int m_RequiredNailsQuantity;
  int m_RequiredWoodenPlanks;
  int m_RequiredMetalSheets;

	override void Init()
	{
		m_Name = "Craft Metal Shelf - Options";
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
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_MetalShelfKit_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"Pipe"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
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
    SRP_MetalShelfKit_Kit kit;
    Class.CastTo(kit, ingredients[0]);
    bool canCraft = false;
    if (kit)
    {
      ItemBase slot;
      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_Nails"));
      canCraft |= (slot != NULL && slot.GetQuantity() >= m_RequiredNailsQuantity);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_WoodenPlanks"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredWoodenPlanks);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_MetalSheets"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredMetalSheets);

      canCraft &= (kit.FindAttachmentBySlotName("Material_MetalWire") != NULL);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_MetalShelfKit_Kit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};


class Craft_SRP_MetalShelfSimpleGround_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 45;
    m_RequiredWoodenPlanks = 5;
    m_RequiredMetalSheets = 5;

		m_Name = "Create Metal Shelf - Simple";
		AddResult("SRP_MetalShelfSimpleGround_Kit");//add results here
	}
};

class Craft_SRP_MetalShelfGround_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 70;
    m_RequiredWoodenPlanks = 5;
    m_RequiredMetalSheets = 10;

		m_Name = "Create Metal Shelf - Ground";
		AddResult("SRP_MetalShelfGround_Kit");//add results here
	}
};

class Craft_SRP_MetalShelfGroundLarge_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 99;
    m_RequiredWoodenPlanks = 15;
    m_RequiredMetalSheets = 15;

		m_Name = "Create Metal Shelf - Ground Large";
		AddResult("SRP_MetalShelfGroundLarge_Kit");//add results here
	}
};

class Craft_SRP_MetalShelfGroundXL_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 99;
    m_RequiredWoodenPlanks = 15;
    m_RequiredMetalSheets = 20;

		m_Name = "Create Metal Shelf - Ground Extra Large";
		AddResult("SRP_MetalShelfGroundXL_Kit");//add results here
	}
};