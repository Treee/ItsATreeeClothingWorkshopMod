class SRP_Craft_DisplayCaseHookBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Display Hook";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1.5;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 2;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -2;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Pliers");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("Rag");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
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
		Debug.Log("SRP_Craft_DisplayCaseHookBase: Recipe Do method called","recipes");
	}
};

class SRP_Craft_DisplayCaseHook_SingleArmband extends SRP_Craft_DisplayCaseHookBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Display Hook - Single Armband";		

		AddResult("SRP_GlassDisplayCase_Hook_Armband");//add results here
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{    
		Debug.Log("SRP_Craft_DisplayCaseHook_SingleArmband: Recipe Do method called","recipes");
	}
};

class SRP_Craft_DisplayCaseHook_DoubleArmband extends SRP_Craft_DisplayCaseHookBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Display Hook - Double Armband";		

		AddResult("SRP_GlassDisplayCase_Hook_ArmbandDouble");//add results here
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{    
		Debug.Log("SRP_Craft_DisplayCaseHook_DoubleArmband: Recipe Do method called","recipes");
	}
};

class SRP_Craft_DisplayCaseHook_LeatherArmband extends SRP_Craft_DisplayCaseHookBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Display Hook - Leather Armband";		

		AddResult("SRP_GlassDisplayCase_Hook_ArmbandLeather");//add results here
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{    
		Debug.Log("SRP_Craft_DisplayCaseHook_LeatherArmband: Recipe Do method called","recipes");
	}
};

class SRP_Craft_DisplayCaseHook_PatchArmband extends SRP_Craft_DisplayCaseHookBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Display Hook - Patch Armband";		

		AddResult("SRP_GlassDisplayCase_Hook_ArmbandPatch");//add results here
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{    
		Debug.Log("SRP_Craft_DisplayCaseHook_PatchArmband: Recipe Do method called","recipes");
	}
};