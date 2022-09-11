class SRP_BrownBottle extends Bottle_Base
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

class SRP_BrownBottle_LakeOfFire extends SRP_BrownBottle{};
class SRP_BrownBottle_LucifersTears extends SRP_BrownBottle{};
