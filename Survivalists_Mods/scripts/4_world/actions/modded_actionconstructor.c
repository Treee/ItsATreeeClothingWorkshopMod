modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
    
		actions.Insert(ActionToggleMuteTransmitter);  
		actions.Insert(ActionInteractWithGUICraftingWorkbench);
    actions.Insert(ActionTeleportToEvent);
    actions.Insert(ActionTeleportAwayFromEvent);

    actions.Insert(ActionPutGogglesOnHead);
    actions.Insert(ActionPutGogglesOnFace);

    actions.Insert(ActionFlipCapForward);
    actions.Insert(ActionFlipCapBackward);

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

    actions.Insert(ActionSRPSealLetter);

    actions.Insert(ActionTriggerDecontaminationShower);

    actions.Insert(ActionLockDisplayCase);
    actions.Insert(ActionUnLockDisplayCase);

    actions.Insert(ActionForageBush);

    actions.Insert(ActionShake8Ball);

    actions.Insert(ActionPackLadder);
    actions.Insert(ActionPackSRPSleepingBag);

    actions.Insert(ActionTurnRubixCubeClockwise_Row1);
    actions.Insert(ActionTurnRubixCubeClockwise_Row2);
    actions.Insert(ActionTurnRubixCubeClockwise_Col1);
    actions.Insert(ActionTurnRubixCubeClockwise_Col2);
    actions.Insert(ActionTurnRubixCubeClockwise_Z1);
    actions.Insert(ActionTurnRubixCubeClockwise_Z2);

    actions.Insert(ActionSwitchLetterOption);
    actions.Insert(ActionSwitchPatchFlagOption);
    actions.Insert(ActionSwitchPatchLogoOption);
    actions.Insert(ActionSwitchSingleArmbandOption);
    actions.Insert(ActionSwitchDoubleArmbandOption);
	}
};