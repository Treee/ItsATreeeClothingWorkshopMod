class SRPsushi extends Edible_Base
{
	override bool CanBeCooked()
	{
		return false;
	}		
	
	override bool IsMeat()
	{
		return true;
	}
	override bool CanBeCookedOnStick()
	{
		return false;
	}
	override bool CanDecay()
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
