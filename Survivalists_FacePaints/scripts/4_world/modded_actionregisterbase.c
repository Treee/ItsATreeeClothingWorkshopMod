modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionFacePaintStickSwitch);

		actions.Insert(ActionPaintFace);
		actions.Insert(ActionPaintFaceTarget);

    actions.Insert(ActionWashFace);
		actions.Insert(ActionWashFaceTarget);
	}
};