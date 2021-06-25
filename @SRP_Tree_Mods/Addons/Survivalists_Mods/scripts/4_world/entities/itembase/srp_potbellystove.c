class SRP_Potbelly_Stove extends BarrelHoles_ColorBase
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTakeFireplaceFromBarrel);
    RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}

  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
}