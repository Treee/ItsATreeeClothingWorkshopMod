modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
    actions.Insert(ActionSRPApplyWax);
    actions.Insert(ActionSRPSealLetter);
    actions.Insert(ActionCheckPostBoxOwner);
    actions.Insert(ActionSRPDepositLetter);
    actions.Insert(ActionUnlockPostBox);
    actions.Insert(ActionLockPostBox);
    actions.Insert(ActionMachinePostBoxKey);
	}
};