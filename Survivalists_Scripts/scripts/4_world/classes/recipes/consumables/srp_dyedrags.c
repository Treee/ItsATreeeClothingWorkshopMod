class Craft_SRP_Rag_Bleach extends RecipeBase
{
	override void Init()
	{
		m_Name = "Bleach Rags";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 6;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Rag_Black");//you can insert multiple ingredients this way
		InsertIngredient(0,"Rag_Blue");//you can insert multiple ingredients this way
		InsertIngredient(0,"Rag_Brown");//you can insert multiple ingredients this way
		InsertIngredient(0,"Rag_Green");//you can insert multiple ingredients this way
		InsertIngredient(0,"Rag_Pink");//you can insert multiple ingredients this way
		InsertIngredient(0,"Rag_Red");//you can insert multiple ingredients this way
		InsertIngredient(0,"Rag_Yellow");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -6;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Bleach");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("Rag");//add results here

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
		Debug.Log("Craft_SRP_Rag_Bleach: Recipe Do method called","recipes");
	}
};

class Craft_SRP_DyeRag_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Dye Rags - Option";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 6;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 20;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Rag");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -6;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		// InsertIngredient(1,"SRP_CraftingMaterial_Dye_Black");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -20;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("Rag_Black");//add results here

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
		Debug.Log(m_Name + ": Recipe Do method called","recipes");
	}
};
class Craft_SRP_Rag_Black extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Black";	
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Black");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Black");//add results here
	}
};
class Craft_SRP_Rag_Blue extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Blue";
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Blue");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Blue");//add results here
	}
};
class Craft_SRP_Rag_Brown extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Brown";
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Brown");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Brown");//add results here
	}
};
class Craft_SRP_Rag_Green extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Green";
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Green");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Green");//add results here
	}
};
class Craft_SRP_Rag_Pink extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Pink";
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Pink");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Pink");//add results here
	}
};
class Craft_SRP_Rag_Red extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Red";
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Red");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Red");//add results here
	}
};
class Craft_SRP_Rag_Yellow extends Craft_SRP_DyeRag_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dye Rags - Yellow";
		//ingredient 2
		InsertIngredient(1,"SRP_CraftingMaterial_Dye_Yellow");//you can insert multiple ingredients this way
		//result1
		AddResult("Rag_Yellow");//add results here
	}
};