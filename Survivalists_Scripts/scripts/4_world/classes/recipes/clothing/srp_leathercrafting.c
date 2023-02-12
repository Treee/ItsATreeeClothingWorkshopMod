class Craft_SRP_LeatherCrafting_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Leather Item";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 35;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -35;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("LeatherSack_Natural");//add results here

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
		Debug.Log("Craft_SRP_LeatherCrafting_Base: Recipe Do method called: " + m_Name,"recipes");
	}
};

class SRP_Craft_LeatherClothing_LeatherSack_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Bag";
		
    m_MinQuantityIngredient[0] = 3;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -3;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 65;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -65;// 0 = do nothing
		
		AddResult("LeatherSack_Natural");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherBelt_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Belt";
		
    m_MinQuantityIngredient[0] = 2;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -2;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 35;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -35;// 0 = do nothing
		
		AddResult("LeatherBelt_Natural");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherKnifeSheath extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Knife Sheath";
		
    m_MinQuantityIngredient[0] = 1;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 15;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -15;// 0 = do nothing
		
		AddResult("LeatherKnifeSheath");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherGloves_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Gloves";
		
    m_MinQuantityIngredient[0] = 2;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -2;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 25;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -25;// 0 = do nothing
		
		AddResult("LeatherGloves_Natural");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherHat_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Hat";
		
    m_MinQuantityIngredient[0] = 3;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -3;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 25;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -25;// 0 = do nothing
		
		AddResult("LeatherHat_Natural");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherPants_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Pants";
		
    m_MinQuantityIngredient[0] = 6;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -6;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 65;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -65;// 0 = do nothing
		
		AddResult("LeatherPants_Natural");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherJacket_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Jacket";
		
    m_MinQuantityIngredient[0] = 8;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -8;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 75;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -75;// 0 = do nothing
		
		AddResult("LeatherJacket_Natural");//add results here
	}
};
class SRP_Craft_LeatherClothing_LeatherStorageVest_Natural extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Leather Vest";
		
    m_MinQuantityIngredient[0] = 6;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -6;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 75;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -75;// 0 = do nothing
		
		AddResult("LeatherStorageVest_Natural");//add results here
	}
};
class SRP_Craft_LeatherButtstockPouch_Default extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Buttstock Pouch - Basic";
		
    m_MinQuantityIngredient[0] = 6;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -6;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 75;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -75;// 0 = do nothing
		
		AddResult("SRP_ButtstockPouch_Red");//add results here
	}
};
class SRP_Craft_LeatherButtstockPouch_Black extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Buttstock Pouch - Black";
		
    m_MinQuantityIngredient[0] = 8;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -8;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		
		AddResult("SRP_ButtstockPouch_Black");//add results here
	}
};
class SRP_Craft_LeatherButtstockPouch_Linen extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Buttstock Pouch - Linen";
		
    m_MinQuantityIngredient[0] = 4;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -4;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 55;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -55;// 0 = do nothing
		
		AddResult("SRP_ButtstockPouch_Linen");//add results here
	}
};
class SRP_Craft_LeatherButtstockPouch_Purple extends Craft_SRP_LeatherCrafting_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Buttstock Pouch - Purple";
		
    m_MinQuantityIngredient[0] = 8;//-1 = disable check
		InsertIngredient(0,"TannedLeather");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[0] = -8;// 0 = do nothing
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		InsertIngredient(1,"LeatherSewingKit");//you can insert multiple ingredients this way
		m_IngredientAddQuantity[1] = -100;// 0 = do nothing
		
		AddResult("SRP_ButtstockPouch_Purple");//add results here
	}
};