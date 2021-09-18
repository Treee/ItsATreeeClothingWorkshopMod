modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
    
		actions.Insert(ActionToggleMuteTransmitter);  
		actions.Insert(ActionSRPInjectSelf);  
		actions.Insert(ActionSRPInjectTarget);  
		actions.Insert(ActionInteractWithGUICraftingWorkbench);
		actions.Insert(SRP_ActionOpenMap);
    actions.Insert(ActionPaintFace);
    actions.Insert(ActionFacePaintStickSwitch);

	}
};