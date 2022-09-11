class Winebottle extends Bottle_Base
{
  override bool HasAlcoholEffect()
  {
    return true;
  }
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionFillFuel);
		RemoveAction(ActionFillCoolant);
		RemoveAction(ActionFillGeneratorTank);
		RemoveAction(ActionWaterGardenSlot);
		RemoveAction(ActionWaterPlant);
		RemoveAction(ActionExtinguishFireplaceByLiquid);
		RemoveAction(ActionFillBottleBase);
		// RemoveAction(ActionDrink);
		// RemoveAction(ActionForceDrink);

		// AddAction(ActionDrainLiquid);
		// AddAction(ActionPourLiquid);
		// AddAction(ActionEmptyBottleBase);
		// AddAction(ActionWashHandsItem);
	}

};

class Winebottle_two extends Winebottle{};
class Winebottle_DillardTequilla extends Winebottle{};
class Winebottle_SwampWater extends Winebottle{};
