class SRP_ConvertOldMiningGemBase extends RecipeBase
{	
	override void Init()
	{    
		m_Name = "Convert Gem";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = 1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"SRP_Mining_UnCutGem_ColorBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("FireWood_Irradiated");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
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
    Debug.Log("Recipe SRP_ConvertOldMiningGemBase Do method called","recipes");
	}
};

class SRP_ConvertOldMiningGemAqua extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Aqua");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_LightBlue");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemAqua Do method called","recipes");
	}
};

class SRP_ConvertOldMiningGemAmethyst extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Amethyst");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_Pink");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemAmethyst Do method called","recipes");
	}
};

class SRP_ConvertOldMiningGemJade extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Jade");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_Green");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemJade Do method called","recipes");
	}
};

class SRP_ConvertOldMiningGemAmber extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Amber");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_Orange");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemAmber Do method called","recipes");
	}
};

class SRP_ConvertOldMiningGemQuartz extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Quartz");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_Purple");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemQuartz Do method called","recipes");
	}
};

class SRP_ConvertOldMiningGemRuby extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Ruby");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_Red");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemRuby Do method called","recipes");
	}
};


class SRP_ConvertOldMiningGemTopaz extends SRP_ConvertOldMiningGemBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_Mining_UnCutGem_Topaz");//you can insert multiple ingredients this way
		
		AddResult("SRP_Mining_Crystal_A_Yellow");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    Debug.Log("Recipe SRP_ConvertOldMiningGemTopaz Do method called","recipes");
	}
};