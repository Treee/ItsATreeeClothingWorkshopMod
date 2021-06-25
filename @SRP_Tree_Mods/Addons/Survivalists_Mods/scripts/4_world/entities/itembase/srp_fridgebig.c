class SRP_FridgeBig extends Container_Base
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