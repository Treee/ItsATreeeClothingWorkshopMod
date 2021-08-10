class SRP_FoodCanRaw_Colorbase extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool IsMeat()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
	}
};

class SRP_FoodCanRaw_Veggies extends SRP_FoodCanRaw_Colorbase {};
class SRP_FoodCanRaw_Meat extends SRP_FoodCanRaw_Colorbase {};
class SRP_FoodCanRaw_HumanMeat extends SRP_FoodCanRaw_Colorbase {};
class SRP_FoodCanRaw_VeggieMeatCombo extends SRP_FoodCanRaw_Colorbase {};
class SRP_FoodCanRaw_VeggieHumanMeatCombo extends SRP_FoodCanRaw_Colorbase {};


class SRP_FoodCanPreserved_Colorbase : Edible_Base {};
class SRP_FoodCanPreserved_Veggies : SRP_FoodCanPreserved_Colorbase
{
	override void Open()
	{
		ReplaceEdibleWithNew("SRP_PreservedFoodCan_Veggies_Opened");
	}
};

class SRP_FoodCanPreserved_Meat : SRP_FoodCanPreserved_Colorbase
{
	override void Open()
	{
		ReplaceEdibleWithNew("SRP_PreservedFoodCan_Meat_Opened");
	}
};

class SRP_FoodCanPreserved_HumanMeat : SRP_FoodCanPreserved_Colorbase
{
	override void Open()
	{
		ReplaceEdibleWithNew("SRP_PreservedFoodCan_HumanMeat_Opened");
	}
};

class SRP_FoodCanPreserved_VeggieMeatCombo : SRP_FoodCanPreserved_Colorbase
{
	override void Open()
	{
		ReplaceEdibleWithNew("SRP_PreservedFoodCan_VeggieMeatCombo_Opened");
	}
};

class SRP_FoodCanPreserved_VeggieHumanMeatCombo : SRP_FoodCanPreserved_Colorbase
{
	override void Open()
	{
		ReplaceEdibleWithNew("SRP_PreservedFoodCan_VeggieHumanMeatCombo_Opened");
	}
};

class SRP_FoodCanPreserved_Opened_Colorbase: Edible_Base
{
	void SRP_FoodCanPreserved_Opened_Colorbase()
	{
    float chance = Math.RandomFloat01();
    if (chance < 0.01) // 1% chance to get food poisoning
    {
		  InsertAgent(eAgents.FOOD_POISON, 1);
    }
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeedSmall);
		AddAction(ActionEatSmallCan);
	}
};
class SRP_PreservedFoodCan_Veggies_Opened: SRP_FoodCanPreserved_Opened_Colorbase {};
class SRP_PreservedFoodCan_Meat_Opened: SRP_FoodCanPreserved_Opened_Colorbase {};
class SRP_PreservedFoodCan_HumanMeat_Opened: SRP_FoodCanPreserved_Opened_Colorbase {
	void SRP_PreservedFoodCan_HumanMeat_Opened()
	{
    InsertAgent(eAgents.BRAIN, 1);
	}
};
class SRP_PreservedFoodCan_VeggiesMeatCombo_Opened: SRP_FoodCanPreserved_Opened_Colorbase {};
class SRP_PreservedFoodCan_VeggiesHumanMeatCombo_Opened: SRP_FoodCanPreserved_Opened_Colorbase {
	void SRP_PreservedFoodCan_VeggiesHumanMeatCombo_Opened()
	{
    InsertAgent(eAgents.BRAIN, 1);
	}
};
