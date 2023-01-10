class srpStew_Base extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
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
}