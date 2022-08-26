class WaterBottle_Pepsi extends WaterBottle{};
class WaterBottle_ZhiguliBeer extends WaterBottle
{
  override bool IsAlcohol()
  {
    return true;
  }
};

class WaterBottle_Blood extends WaterBottle
{
  override bool IsBlood()
  {
    return true;
  }

  override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionFillBottleBase);
	}
};