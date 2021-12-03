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
    actions.Insert(ActionTeleportToEvent);
    actions.Insert(ActionTeleportAwayFromEvent);

    actions.Insert(ActionTestDrugsTarget);
    actions.Insert(ActionTestDrugsSelf);

    actions.Insert(ActionPourMoltenMetalIntoMold);

    // Smoking
    actions.Insert(ActionSmokeSRPSmokableSelf);
    actions.Insert(ActionForceSmokeSRPSmokable);
    actions.Insert(ActionLightSmokableInHands);
    actions.Insert(ActionExtinguishSmokeSRPSmokableSelf);

	}
};