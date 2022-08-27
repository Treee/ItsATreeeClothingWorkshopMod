class srpBreadFlatDough extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool IsMeat()
	{
		return false;
	}
	override bool CanDecay()
	{
		return true;
	}
  override bool CanBeCookedOnStick()
	{
		return false;
	}
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
	}
};

class srpBreadLoaf extends srpBreadFlatDough{};
class srpBreadRoundDough extends srpBreadFlatDough{};
