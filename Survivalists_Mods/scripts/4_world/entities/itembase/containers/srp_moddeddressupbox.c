modded class DUB_Bigsac
{
  override bool IsInventoryVisible()
  {
    return false;
  }

  void SetActions()
	{
		super.SetActions();

		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}	
};