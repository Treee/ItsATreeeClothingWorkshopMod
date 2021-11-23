modded class ChernarusMap
{
  override void SetActions()
	{
		super.SetActions();
		
    // get rid of the default map opening action
		RemoveAction(ActionUnfoldMap);
    // add our own custom map action
		AddAction(SRP_ActionOpenMap);
	}
}