class Snack_DonutPack extends Snack_ColorBase
{
  override void SetActions()
  {
    super.SetActions();
    RemoveAction(ActionForceFeedSmall);
    RemoveAction(ActionEatSmall);

    AddAction(ActionOpenSRPdonutpack);
  }
};

class SRPdonut extends Edible_Base
{
	override bool CanBeCooked()
	{
		return false;
	}
	override bool IsMeat()
	{
		return false;
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
		
    AddAction(ActionForceFeedSmall);
    AddAction(ActionEatSmall);
	}
};