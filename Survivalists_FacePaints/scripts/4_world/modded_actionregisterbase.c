modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionFacePaintStickSwitch);  
		actions.Insert(ActionPaintFace);  
		actions.Insert(ActionPaintFaceTarget);  
	}
};