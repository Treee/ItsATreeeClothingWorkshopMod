class SRP_Tree_Drugs_CookMeth extends RecipeBase 
{
  bool m_isTainted = true;

	override void Init()
	{
		m_Name = "Cook Meth";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugWorkbench");	// primary ingredient
		
		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_LabTubeRack"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_DrugWorkbench methTub = SRP_DrugWorkbench.Cast(ingredients[0]);
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]);
    if (methTub && methTub.HasMethRecipe()) {
      if (tubeRack && tubeRack.IsMethPuzzleSolved()) {
        m_isTainted = false;
        return true;
      }
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    SRP_DrugWorkbench methTub = SRP_DrugWorkbench.Cast(ingredients[0]);
    if (methTub) {
      if (m_isTainted) {
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_MethSmallTainted");
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_MethSmallTainted");
      } else {
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_MethLarge");
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_MethLarge");
      }
    }
	}
};

class SRP_Tree_Drugs_MakeAcid extends RecipeBase 
{
  bool m_isTainted = true;

	override void Init()
	{
		m_Name = "Make Acid";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugWorkbench");	// primary ingredient
		
		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_LabTubeRack"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_DrugWorkbench methTub = SRP_DrugWorkbench.Cast(ingredients[0]);
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]);
    if (methTub && methTub.HasAcidRecipe()) { // if you have the acid recipe you can craft but it might be tainted
      if (tubeRack && tubeRack.IsAcidPuzzleSolved()) { // if you have the puzzle solved, the drugs are untainted
        m_isTainted = false;
        return true;
      }
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    SRP_DrugWorkbench methTub = SRP_DrugWorkbench.Cast(ingredients[0]);   
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]); 
    if (methTub && tubeRack) {
      if (m_isTainted) {
        if (tubeRack.IsSmileyAcidPuzzleSolved()) {
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SmileyAcidTainted");
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SmileyAcidTainted");
        } else if (tubeRack.IsSkullAcidPuzzleSolved()) {
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SkullAcidTainted");
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SkullAcidTainted");
        }
      } else {
        if (tubeRack.IsSmileyAcidPuzzleSolved()) {
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SmileyAcid");
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SmileyAcid");
        } else if (tubeRack.IsSkullAcidPuzzleSolved()) {
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SkullAcid");
          methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_SkullAcid");
        }
      }
    }
	}
};

class SRP_Tree_Drugs_MakeBathSalts extends RecipeBase 
{
  bool m_isTainted = true;

	override void Init()
	{
		m_Name = "Make Bath Salts";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DrugWorkbench");	// primary ingredient
		
		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_LabTubeRack"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_DrugWorkbench methTub = SRP_DrugWorkbench.Cast(ingredients[0]);
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]);
    if (methTub && methTub.HasBathSaltsRecipe()) { // if you have the bath salts recipe you can craft but it might be tainted
      if (tubeRack && tubeRack.IsBathSaltsPuzzleSolved()) { // if you have the puzzle solved, the drugs are untainted
        m_isTainted = false;
        return true;
      }
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    SRP_DrugWorkbench methTub = SRP_DrugWorkbench.Cast(ingredients[0]);   
    SRP_LabTubeRack tubeRack = SRP_LabTubeRack.Cast(ingredients[1]); 
    if (methTub && tubeRack) {
      if (m_isTainted) {
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_BathSaltsTainted");
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_BathSaltsTainted");
      } else {
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_BathSalts");
        methTub.GetInventory().CreateInInventory("SRP_ConsumableDrug_BathSalts");
      }
    }
	}
};