/// if you add a new container, make sure you add it to this list so it gets the right stuff

// These are containers that have no kits and are able to be picked up
// without dismantling
class SRP_DeployableContainer_Base extends DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands (EntityAI parent)
  {
    return true;
  }
};

class SRP_WoodenBox_Cask extends SRP_DeployableContainer_Base{};
class SRP_BedsideTable extends SRP_DeployableContainer_Base{};
class SRP_MedicalBed_Frame extends SRP_DeployableContainer_Base{};
class SRP_MedicalBed_Mattress extends SRP_DeployableContainer_Base{};
class SRP_MedicalBed_Wood extends SRP_DeployableContainer_Base{};
class SRP_BloodPressureMonitor extends SRP_DeployableContainer_Base{};
class SRP_Carpet extends SRP_DeployableContainer_Base{};
class SRP_CarpetRug extends SRP_DeployableContainer_Base{};
class SRP_AdvancedWorkbench extends SRP_DeployableContainer_Base
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionInteractWithGUICraftingWorkbench);
	}
};
modded class SRP_DrugWorkbench
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionInteractWithGUICraftingWorkbench);
	}
};

// remove eventually
modded class SneakySmallLogPile
{
  bool CanReceiveItemIntoCargo(EntityAI item)
	{
    return false;
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}
// remove eventually
modded class SneakyLargeLogPile
{
  bool CanReceiveItemIntoCargo(EntityAI item)
	{
    return false;
  }
  
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}

class SRP_PostBox extends SRP_DeployableContainer_Base{};
class SRP_PostBoxBlue extends SRP_DeployableContainer_Base{};
class SRP_PostBoxWooden extends SRP_DeployableContainer_Base{};

class SRP_TetrisShelfLDown extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfLUp extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfLLeft extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfLRight extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfIVertical extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfIHorizontal extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfTUp extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfTDown extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfTVertical extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfSHorizontal extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfSVertical extends SRP_DeployableContainer_Base{};
class SRP_TetrisShelfBox extends SRP_DeployableContainer_Base{};

class SRP_GiftBoxSmall extends SRP_DeployableContainer_Base{};
class SRP_GiftBoxMedium extends SRP_DeployableContainer_Base{};
class SRP_GiftBoxLarge extends SRP_DeployableContainer_Base{};
class SRP_GiftBoxLetter extends SRP_DeployableContainer_Base{};


// These are containers that cannot be put in your hands and need to be dismantled to re-place
class SRP_Container_Base extends DeployableContainer_Base
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
}
class SRP_Fridge extends SRP_Container_Base{};
class SRP_FridgeLarge extends SRP_Container_Base{};
class SRP_FridgeRetro extends SRP_Container_Base{};
class SRP_GunShelfWall extends SRP_Container_Base{};
class SRP_GunShelfGround extends SRP_Container_Base{};
class SRP_WoodenShelfSimple extends SRP_Container_Base{};
class SRP_WoodenShelfSimpleGround extends SRP_Container_Base{};
class SRP_WoodenShelfGround extends SRP_Container_Base{};
class SRP_WoodenShelfGroundTall extends SRP_Container_Base{};
class SRP_MetalShelfSimpleGround extends SRP_Container_Base{};
class SRP_MetalShelfGround extends SRP_Container_Base{};
class SRP_Furniture_WoodenTable extends SRP_Container_Base{};
class SRP_GChair extends SRP_Container_Base{};
class SRP_GChairHigh extends SRP_Container_Base{};
class SRP_GOutdoorTable extends SRP_Container_Base{};
class SRP_GOutdoorTableUmbrella extends SRP_Container_Base{};
class SRP_Umbrella extends SRP_Container_Base{};
class SRP_ShootingTarget extends SRP_Container_Base{};
class SRP_ShootingTargets extends SRP_Container_Base{};
class SRP_StreetLightLarge extends SRP_Container_Base{};
class SRP_StreetLightMedium extends SRP_Container_Base{};
class SRP_StreetLightLarge_Metal extends SRP_Container_Base{};
class SRP_StreetLightMedium_Wood extends SRP_Container_Base{};
class SRP_MilitaryCaseSmall extends SRP_Container_Base{};
class SRP_MilitaryCaseSmallBlack extends SRP_Container_Base{};
class SRP_MilitaryCaseMedium extends SRP_Container_Base{};
class SRP_MilitaryCaseLarge extends SRP_Container_Base{};
class SRP_MilitaryCaseLong extends SRP_Container_Base{};
class SRP_MilitaryCaseLongBlue extends SRP_Container_Base{};
class SRP_MilitaryCaseLongTan extends SRP_Container_Base{};
class SRP_BarricadeMetal extends SRP_Container_Base{};

class SRP_Potbelly_Stove extends BarrelHoles_ColorBase
{
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid2",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid2",1);
		}
	}

	override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTakeFireplaceFromBarrel);
    RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}
};

class SRP_Openable_Container extends Barrel_ColorBase
{
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid2",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid2",1);
		}
	}

	override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
};

class SRP_BedsideTableMetal extends SRP_Openable_Container{};

class SRP_WoodenBox_Locked extends SRP_Openable_Container
{
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

class SRP_WoodenBox_Long extends SRP_Openable_Container
{
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

class SRP_WoodenBox_Square extends SRP_Openable_Container
{
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

class SRP_MedicalCurtains extends SRP_Openable_Container{};