class Craft_SRP_BuildingComponentFrame_OptionsBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Scaffolding - Options";
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
		InsertIngredient(0,"SRP_BuildingComponentFrame_Kit");	// primary ingredient
		
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
		Debug.Log("Craft_SRP_BuildingComponentFrame_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

// ------------------------------ WORN COMPONENTS
  class SRP_CraftBuildingComponentFrameWornRampKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn Ramp";
      AddResult("SRP_BuildingComponentFrame_WornRamp_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameWornLPlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn L Platform";
      AddResult("SRP_BuildingComponentFrame_WornLPlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameWornUPlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn U Platform";
      AddResult("SRP_BuildingComponentFrame_WornUPlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameWornFlatPlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn Flat Platform";
      AddResult("SRP_BuildingComponentFrame_WornFlatPlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameWornWornSinglePlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn Single Rail Platform";
      AddResult("SRP_BuildingComponentFrame_WornSinglePlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameWornWornDoublePlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn Double Rail Platform";
      AddResult("SRP_BuildingComponentFrame_WornDoublePlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameWornFlatDoublePlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Worn Flat Platform";
      AddResult("SRP_BuildingComponentFrame_WornFlatDoublePlatform_Kit");//add results here
    }
  };
// ------------------------ FINE COMPONENTS
  class SRP_CraftBuildingComponentFrameFineRampKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine Ramp";
      AddResult("SRP_BuildingComponentFrame_FineRamp_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameFineLPlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine L Platform";
      AddResult("SRP_BuildingComponentFrame_FineLPlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameFineUPlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine U Platform";
      AddResult("SRP_BuildingComponentFrame_FineUPlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameFineFlatPlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine Flat Platform";
      AddResult("SRP_BuildingComponentFrame_FineFlatPlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameFineWornSinglePlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine Single Rail Platform";
      AddResult("SRP_BuildingComponentFrame_FineSinglePlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameFineWornDoublePlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine Double Rail Platform";
      AddResult("SRP_BuildingComponentFrame_FineSinglePlatform_Kit");//add results here
    }
  };
  class SRP_CraftBuildingComponentFrameFineFlatDoublePlatformKit extends Craft_SRP_BuildingComponentFrame_OptionsBase
  {	
    override void Init()
    {
      super.Init();
      m_Name = "Create Building Component Frame Kit - Fine Flat Platform";
      AddResult("SRP_BuildingComponentFrame_FineFlatDoublePlatform_Kit");//add results here
    }
  };
