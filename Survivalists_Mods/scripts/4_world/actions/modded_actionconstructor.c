modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
    
		actions.Insert(ActionToggleMuteTransmitter);  
		actions.Insert(ActionInteractWithGUICraftingWorkbench);
		actions.Insert(SRP_ActionOpenMap);
    actions.Insert(ActionTeleportToEvent);
    actions.Insert(ActionTeleportAwayFromEvent);

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

    actions.Insert(ActionFlipPlayingCard); 

    actions.Insert(ActionTuneCrypticFrequency);
	}
};