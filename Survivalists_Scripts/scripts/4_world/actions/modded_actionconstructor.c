modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

    actions.Insert(ActionIncreaseVolume);
    actions.Insert(ActionDecreaseVolume);

    actions.Insert(SRP_ActionDismantlePlacedObject);

    actions.Insert(SRP_ActionMetalWorkingCraft);
    actions.Insert(SRP_ActionCarpentryCraft);
    actions.Insert(SRP_ActionCookDrugs);
    actions.Insert(SRP_ActionCraftAmmo);
    actions.Insert(ActionConvertStarterForgeKit);
    actions.Insert(ActionPourMoltenMetalIntoMold);
    actions.Insert(ActionEmptyIngotMold);

		actions.Insert(ActionReadBook); 

		actions.Insert(SRP_PatDownTarget); 
    
		actions.Insert(SRP_ActionSawPlanks); 

		actions.Insert(SRP_ActionTailor); 
		actions.Insert(SRP_ActionMetalSmith); 
		actions.Insert(SRP_ActionHarvestCrops_All); 

		actions.Insert(ActionSearchChickenCoop); 

		actions.Insert(ActionSwapLens_Black); 
		actions.Insert(ActionSwapLens_Blue); 
		actions.Insert(ActionSwapLens_Green); 
		actions.Insert(ActionSwapLens_Orange); 

		actions.Insert(ActionSalvageCarWreck); 

		actions.Insert(ActionBlowIntoHorn); 

		actions.Insert(ActionToggleMuteTransmitter);  
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
    
		actions.Insert(ActionOpenSRPdonutpack);

		actions.Insert(ActionCheckJammerCurrent);

    // Modded Mods Actions
    actions.Insert(ActionSRPHackSecurityDoor);

    actions.Insert(ActionSRPDrawCards);    
    actions.Insert(ActionSRPSwitchDrawMode); 

    actions.Insert(ActionFlipPlayingCard); 

    actions.Insert(ActionTuneCrypticFrequency);

    actions.Insert(ActionTriggerDecontaminationShower);

    actions.Insert(ActionLockDisplayCase);
    actions.Insert(ActionUnLockDisplayCase);

    actions.Insert(ActionForageBush);

    actions.Insert(ActionShake8Ball);

    actions.Insert(ActionPackLadder);
    actions.Insert(ActionPackSRPSleepingBag);

    actions.Insert(ActionToggleGrindstoneOn);
    actions.Insert(ActionToggleGrindstoneOff);

    actions.Insert(ActionTurnRubixCubeClockwise_Row1);
    actions.Insert(ActionTurnRubixCubeClockwise_Row2);
    actions.Insert(ActionTurnRubixCubeClockwise_Col1);
    actions.Insert(ActionTurnRubixCubeClockwise_Col2);
    actions.Insert(ActionTurnRubixCubeClockwise_Z1);
    actions.Insert(ActionTurnRubixCubeClockwise_Z2);

    actions.Insert(ActionSRPRakeFireplaceAshes);
    actions.Insert(ActionSRPSwapClayPotOption);
    actions.Insert(ActionSRPRecolorClothingOption);
    actions.Insert(ActionSwitchLetterColorOption);
    actions.Insert(ActionSwitchLetterOption);
    actions.Insert(ActionSwitchPatchFlagOption);
    actions.Insert(ActionSwitchPatchLogoOption);
    actions.Insert(ActionSwitchSingleArmbandOption);
    actions.Insert(ActionSwitchDoubleArmbandOption);
	}
};