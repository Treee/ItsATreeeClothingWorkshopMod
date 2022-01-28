modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
    
		actions.Insert(ActionToggleMuteTransmitter);  
		actions.Insert(ActionInteractWithGUICraftingWorkbench);
		actions.Insert(SRP_ActionOpenMap);
    actions.Insert(ActionPaintFace);
    actions.Insert(ActionFacePaintStickSwitch);
    actions.Insert(ActionTeleportToEvent);
    actions.Insert(ActionTeleportAwayFromEvent);

    actions.Insert(ActionTestDrugsTarget);
    actions.Insert(ActionTestDrugsSelf);

    actions.Insert(ActionReadBook);

    actions.Insert(ActionPutGogglesOnHead);
    actions.Insert(ActionPutGogglesOnFace);

    actions.Insert(ActionMortarCrushIntoPowder);

    actions.Insert(ActionConvertStarterForgeKit);
    
    actions.Insert(ActionPourMoltenMetalIntoMold);
    actions.Insert(ActionEmptyIngotMold);

    // Modded Mods Actions
    actions.Insert(ActionSRPHackSecurityDoor);

    actions.Insert(ActionSRPDrawCards);    
    actions.Insert(ActionSRPSwitchDrawMode);    

    // Smoking
    actions.Insert(ActionSmokeSRPSmokableSelf);
    actions.Insert(ActionForceSmokeSRPSmokable);
    actions.Insert(ActionLightSmokableInHands);
    actions.Insert(ActionExtinguishSmokeSRPSmokableSelf);
	}
};