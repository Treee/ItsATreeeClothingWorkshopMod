class SRP_Drugs_CookBleach extends RecipeBase 
{
	override void Init()
	{
		m_Name = "Prepare Bleach";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugWorkbench");	// primary ingredient
		
		m_IngredientAddHealth[0] = -1;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_LabTubeRack"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
    //----------------------------------------------------------------------------------------------------------------------
		//result1
		AddResult("SRP_CraftingMaterial_Dye_Bleach");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 20;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_DrugWorkbench drugtub = SRP_DrugWorkbench.Cast(ingredients[0]);
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]);

    if (drugtub && drugtub.HasAllConsumableAttachments() && drugtub.HasEnoughConsumableAttachments_Meth() && tubeRack && tubeRack.GetInventory().AttachmentCount() > 0) 
    {
      if (tubeRack.IsBleachPuzzleSolved()) 
      {
        return true;
      }
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    SRP_DrugWorkbench drugtub = SRP_DrugWorkbench.Cast(ingredients[0]);
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]);

    if (drugtub && tubeRack) 
    {
      // drugtub.GetInventory().CreateInInventory("SRP_ConsumableDrug_MethLarge");
      // drugtub.GetInventory().CreateInInventory("SRP_ConsumableDrug_MethLarge");
      // reduce attachments quantity
      drugtub.ReduceAttachmentQuantities_Meth();
      tubeRack.ApplyTestTubeUsageDamage();
    }
	}
};