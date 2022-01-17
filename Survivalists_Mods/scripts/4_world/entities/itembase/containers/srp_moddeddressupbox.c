modded class DUB_Bigsac
{
  void SetActions()
	{
		super.SetActions();

		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}	
};