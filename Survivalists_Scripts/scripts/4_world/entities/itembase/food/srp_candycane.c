class SRP_CandyCane extends Edible_Base
{
	override bool CanBeCooked()
	{
		return false;
	}
	
	override bool CanBeCookedOnStick()
	{
		return false;
	}
	
	override bool IsFruit()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return false;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionForceFeed);
		AddAction(ActionEatFruit);
	}
};

class SRP_CandyCane1 extends SRP_CandyCane{};