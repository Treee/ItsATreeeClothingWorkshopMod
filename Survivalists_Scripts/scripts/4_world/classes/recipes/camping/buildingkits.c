//================================================================================ TETRIS SHELF
  class Craft_SRP_TetrisShelfKit_OptionsBase extends RecipeBase
  {
    override void Init()
    {
      m_Name = "Finish Tetris Shelf - Options";
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
      m_MinQuantityIngredient[1] = 10;	//quantity 1 required for secondary ingredient
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
      m_IngredientAddQuantity[1] = -10;// -1 = do nothing
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
  class Craft_SRP_WoodenShelfKit_Kit_OptionsBase extends RecipeBase
  {
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
      m_MinQuantityIngredient[1] = 10;	//quantity 1 required for secondary ingredient
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
      m_IngredientAddQuantity[1] = -10;// -1 = do nothing
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
      Debug.Log("Craft_SRP_WoodenShelfKit_Kit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
    }
  };
  class Craft_SRP_WoodenShelfSimple_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Wooden Shelf - Simple";
      AddResult("SRP_WoodenShelfSimple_Kit");//add results here
    }
  };
  class Craft_SRP_WoodenShelfSimpleGround_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Wooden Shelf - Simple Ground";
      AddResult("SRP_WoodenShelfSimpleGround_Kit");//add results here
    }
  };
  class Craft_SRP_WoodenShelfGround_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Wooden Shelf - Ground";
      AddResult("SRP_WoodenShelfGround_Kit");//add results here
    }
  };
  class Craft_SRP_WoodenShelfGroundTall_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Wooden Shelf - Tall";
      AddResult("SRP_WoodenShelfGroundTall_Kit");//add results here
    }
  };
  class Craft_SRP_GunShelfWall_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Wooden Shelf - Gun Shelf";
      AddResult("SRP_GunShelfWall_Kit");//add results here
    }
  };
  class Craft_SRP_GunShelfGround_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Wooden Shelf - Gun Shelf Ground";
      AddResult("SRP_GunShelfGround_Kit");//add results here
    }
  };
  class Craft_SRP_BoocCaseCube_Kit extends Craft_SRP_WoodenShelfKit_Kit_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Book Case - Cubed";
      AddResult("SRP_BookCaseCube_Kit");//add results here
    }
  };
//================================================================================ WOODEN DISPLAY
  class Craft_SRP_WoodenDisplayKit_Kit_OptionsBase extends RecipeBase
  {
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
      m_MinQuantityIngredient[1] = 10;	//quantity 1 required for secondary ingredient
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
      m_IngredientAddQuantity[1] = -10;// -1 = do nothing
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
      Debug.Log("Craft_SRP_WoodenDisplayKit_Kit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
    }
  };
  class Craft_SRP_WoodenDisplayKit_Kit_CoatRackBasic extends Craft_SRP_WoodenDisplayKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Coat Rack - Basic";
      AddResult("SRP_CoatRack_Basic_Kit");//add results here
    }
  };
  class Craft_SRP_WoodenDisplayKit_Kit_CoatRackSimple extends Craft_SRP_WoodenDisplayKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Coat Rack - Simple";
      AddResult("SRP_CoatRack_Simple_Kit");//add results here
    }
  };
  class Craft_SRP_WoodenDisplayKit_Kit_CoatRackFancy extends Craft_SRP_WoodenDisplayKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Coat Rack - Fancy";
      AddResult("SRP_CoatRack_Fancy_Kit");//add results here
    }
  };
//================================================================================ METAL SHELF
  class Craft_SRP_MetalShelfKit_Kit_OptionsBase extends RecipeBase
  {
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
      return true;
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
      m_Name = "Create Metal Shelf - Simple";
      AddResult("SRP_MetalShelfSimpleGround_Kit");//add results here
    }
  };
  class Craft_SRP_MetalShelfGround_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Metal Shelf - Ground";
      AddResult("SRP_MetalShelfGround_Kit");//add results here
    }
  };
  class Craft_SRP_MetalShelfGroundLarge_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Metal Shelf - Ground Large";
      AddResult("SRP_MetalShelfGroundLarge_Kit");//add results here
    }
  };
  class Craft_SRP_MetalShelfGroundXL_Kit extends Craft_SRP_MetalShelfKit_Kit_OptionsBase
  {
    override void Init()
    {
      super.Init();
      m_Name = "Create Metal Shelf - Ground Extra Large";
      AddResult("SRP_MetalShelfGroundXL_Kit");//add results here
    }
  };