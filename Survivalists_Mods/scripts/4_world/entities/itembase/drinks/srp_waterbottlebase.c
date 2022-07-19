class SRP_WaterBottleBase extends Bottle_Base {};


class SRP_Blood_Bottle extends SRP_WaterBottleBase
{
  override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionFillBottleBase);
	}
};