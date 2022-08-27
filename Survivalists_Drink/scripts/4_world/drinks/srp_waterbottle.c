class WaterBottle_Pepsi extends WaterBottle{};
class WaterBottle_ZhiguliBeer extends WaterBottle
{
  override bool IsAlcoholDrink()
  {
    return true;
  }
};

class WaterBottle_Blood extends WaterBottle
{
  override bool IsBloodDrink()
  {
    return true;
  }

  override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionFillBottleBase);
	}
};