class Craft_SRP_DiceBase extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Carve Wooden Dice - Options";
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
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
    // InsertIngredient(0,"Firewood");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"HuntingKnife");//you can insert multiple ingredients this way
		InsertIngredient(1,"KukriKnife");
		InsertIngredient(1,"FangeKnife");
		InsertIngredient(1,"Cleaver");
		InsertIngredient(1,"CombatKnife");
		InsertIngredient(1,"Machete");
		InsertIngredient(1,"Hatchet");
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_DiceSingle_White");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
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
		Debug.Log(m_Name+": Recipe Do method called","recipes");
	}
};
class Craft_SRP_WoodenDiceWhite extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Wooden Dice - White";
    InsertIngredient(0,"Firewood");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceSingle_White");//add results here
	}
};
class Craft_SRP_WoodenDiceWhiteRed extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Wooden Dice - White Red";
    InsertIngredient(0,"Firewood");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceSingle_WhiteRed");//add results here
	}
};
class Craft_SRP_WoodenDiceBlackWhite extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Wooden Dice - Black White";
    InsertIngredient(0,"Firewood");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceSingle_BlackWhite");//add results here
	}
};
class Craft_SRP_WoodenDiceBlackRed extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Wooden Dice - Black Red";
    InsertIngredient(0,"Firewood");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceSingle_BlackRed");//add results here
	}
};

class Craft_SRP_GemRPGDiceD4 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D4";
		InsertIngredient(0,"SRP_DiceRpg_d6");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d4");//add results here
	}
};
class Craft_SRP_GemRPGDiceD6 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D6";
		InsertIngredient(0,"SRP_DiceRpg_d8");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d6");//add results here
	}
};
class Craft_SRP_GemRPGDiceD8 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D8";
		InsertIngredient(0,"SRP_DiceRpg_d10");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d8");//add results here
	}
};
class Craft_SRP_GemRPGDiceD10 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D10";
		InsertIngredient(0,"SRP_DiceRpg_d12");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d10");//add results here
	}
};
class Craft_SRP_GemRPGDiceD12 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D12";
		InsertIngredient(0,"SRP_DiceRpg_d20");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d12");//add results here
	}
};
class Craft_SRP_GemRPGDiceD20 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D20";
		InsertIngredient(0,"SRP_DiceRpg_d100");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d20");//add results here
	}
};
class Craft_SRP_GemRPGDiceD100 extends Craft_SRP_DiceBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Carve Gem Dice - D100";
		InsertIngredient(0,"SRP_Mining_Crystal_ColorBase");//you can insert multiple ingredients this way
		//result1
		AddResult("SRP_DiceRpg_d100");//add results here
	}
};
