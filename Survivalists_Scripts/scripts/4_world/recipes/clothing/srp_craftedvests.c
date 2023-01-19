
class Craft_SRP_VestPouch_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Sew Vest Pouch";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 4;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 10;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Fabric");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		InsertIngredient(1,"SewingKit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -10;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_AssaultBag_Denim");//add results here

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
		Debug.Log("Craft_SRP_BackpackFromKitBase: Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_VestPouch_MapPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Map Pouch";
		AddResult("SRP_Map_Pouch_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_PistolMagPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Pistol Mag Pouch";
		AddResult("SRP_Pistol_Mag_Pouch_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_MedicalPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Medical Pouch";
		AddResult("SRP_IFAK_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_TacticalPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Tactical Pouch";
		AddResult("SRP_TacoPouch_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_MediumPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Medium Pouch";
		AddResult("SRP_MediumPouch_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_MagazinePouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Magazine Pouch";
		AddResult("SRP_Magazine_Pouch_1_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_MagazineDumpPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Magazine Dump Pouch";
		AddResult("SRP_Empty_MagPouch_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_UtilityPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Utility Pouch";
		AddResult("SRP_UtilityPouch_Tan");//add results here
	}
};
class Craft_SRP_VestPouch_HeavyPouch extends Craft_SRP_VestPouch_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Vest Pouch - Heavy Pouch";
		AddResult("SRP_HeavyPouch_Tan");//add results here
	}
};