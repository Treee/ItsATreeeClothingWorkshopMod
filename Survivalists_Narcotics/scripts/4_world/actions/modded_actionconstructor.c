modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

    actions.Insert(ActionTestDrugsTarget);
    actions.Insert(ActionTestDrugsSelf);

    // Smoking
    actions.Insert(ActionSmokeSRPSmokableSelf);
    actions.Insert(ActionForceSmokeSRPSmokable);
    actions.Insert(ActionLightSmokableInHands);
    actions.Insert(ActionExtinguishSmokeSRPSmokableSelf);
	}
};