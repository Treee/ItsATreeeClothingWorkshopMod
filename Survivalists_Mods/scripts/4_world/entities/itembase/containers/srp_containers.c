/// if you add a new container, make sure you add it to this list so it gets the right stuff

// These are containers that have no kits and are able to be picked up
// without dismantling
class SRP_DeployableContainer_Base extends DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
  }

  // Helper Function for shoulder/melee slot swap
	void UpdateShoulderProxyVisibility(EntityAI item, string slot_name)
	{
		string slot = slot_name;
		bool boo;
		boo = item.IsWeapon();
		if ( slot == "Melee" )
		{
      if (boo)
      {
        SetAnimationPhase("slot_melee_melee",1);
        SetAnimationPhase("slot_melee_rifle",0);		
      }
      else
      {
        SetAnimationPhase("slot_melee_melee",0);
        SetAnimationPhase("slot_melee_rifle",1);		
      }
    }
		else if ( slot == "Shoulder" )
		{
      if (boo)
      {
        SetAnimationPhase("slot_shoulder_melee",1);
        SetAnimationPhase("slot_shoulder_rifle",0);	
      }
      else 
      {
        SetAnimationPhase("slot_shoulder_melee",0);
        SetAnimationPhase("slot_shoulder_rifle",1);	
      }
		}
	}
};

class SRP_DJBooth_ColorBase extends SRP_DeployableContainer_Base{};

class SRP_PotteryPot_ColorBase extends SRP_DeployableContainer_Base{};

class SRP_DeskNamePlate extends SRP_DeployableContainer_Base{};
class SRP_WoodenBox_Cask extends SRP_DeployableContainer_Base{};
class SRP_BedsideTable extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
    override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_MedicalBed_Frame extends SRP_DeployableContainer_Base{};
class SRP_MedicalBed_Mattress extends SRP_DeployableContainer_Base{};
class SRP_MedicalBed_Wood extends SRP_DeployableContainer_Base{};
class SRP_BloodPressureMonitor extends SRP_DeployableContainer_Base{};
class SRP_LatheWorkbench extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }

  bool HasAllAttachments()
  {
    if (GetItemOnSlot("SRP_LatheBelt") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_LatheTable") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_LatheGearDrive") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_LatheClamp") == NULL)
    {
      return false;
    }
    return true;
  }
};
class SRP_WornWorkbench extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_WornWorkbench_Metal extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_Carpet extends SRP_DeployableContainer_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    UpdateShoulderProxyVisibility(item, slot_name);
  }

  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_CarpetRug extends SRP_DeployableContainer_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    UpdateShoulderProxyVisibility(item, slot_name);
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_AdvancedWorkbench extends SRP_DeployableContainer_Base
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionInteractWithGUICraftingWorkbench);
	}
};

class SRP_Furniture_SmallLogPile extends SRP_DeployableContainer_Base
{
  bool CanReceiveItemIntoCargo(EntityAI item)
	{
    return false;
  }

  override bool CanPutIntoHands (EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0;
  }

  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
			if ( player )
			{
				ItemBase itemInHands = player.GetItemInHands();
        if (itemInHands.GetType() == "SRP_Furniture_SmallLogPile")
        {
          return false;
        }
			}
		}
		return super.CanReceiveAttachment(attachment, slotId);
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}

class SRP_Furniture_LargeLogPile extends SRP_DeployableContainer_Base
{
  bool CanReceiveItemIntoCargo(EntityAI item)
	{
    return false;
  }

  override bool CanPutIntoHands (EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0;
  }

  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
			if ( player )
			{
				ItemBase itemInHands = player.GetItemInHands();
        if (itemInHands.GetType() == "SRP_Furniture_LargeLogPile")
        {
          return false;
        }
			}
		}
		return super.CanReceiveAttachment(attachment, slotId);
	}
  
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}

class SRP_SentientCrystal_ColorBase extends SRP_DeployableContainer_Base
{
  override bool DisableVicinityIcon()
  {
    return true;
  }
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
};
class SRP_SentientCrystal_LargeSpaceman extends SRP_SentientCrystal_ColorBase{};


class SRP_GiftBoxSmall extends SRP_DeployableContainer_Base{};
class SRP_GiftBoxMedium extends SRP_DeployableContainer_Base{};
class SRP_GiftBoxLarge extends SRP_DeployableContainer_Base{};
class SRP_GiftBoxLetter extends SRP_DeployableContainer_Base{};

class SRP_LabEquipment_Projector extends SRP_DeployableContainer_Base{};
class SRP_LabEquipment_Tuner extends SRP_DeployableContainer_Base{};
class SRP_LabEquipment_Oscilliscope extends SRP_DeployableContainer_Base{};
class SRP_LabEquipment_GeigerCounter extends SRP_DeployableContainer_Base{};

class SRP_TetrisShelf_ColorBase extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_TetrisShelfKit_Kit";
  }
};
class SRP_TetrisShelfLDown extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfLLeft extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfLRight extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfIVertical extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfIHorizontal extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfTUp extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfTDown extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfTVertical extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfSHorizontal extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfSVertical extends SRP_TetrisShelf_ColorBase{};
class SRP_TetrisShelfBox extends SRP_TetrisShelf_ColorBase{};

class SRP_Furniture_LogStump extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_LogBenchSmall extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_WoodBenchSmall extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_WoodBenchSlim extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_PileOfPlanks extends SRP_DeployableContainer_Base{};

class SRP_GarbageBin_ColorBase extends SRP_DeployableContainer_Base
{
  void SRP_GarbageBin_ColorBase()
  {
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(EmptyContents, 600000, false);
  }

  void EmptyContents()
  {
    if (HasAnyCargo())
    {
      CargoBase cargo = GetInventory().GetCargo();
      EntityAI item;
      for (int i = 0; i < cargo.GetItemCount(); i++)
      {
        if (Class.CastTo(item, cargo.GetItem(i)))
        {
          item.Delete();
        }        
      }
    }
    // call every 10 minutes
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(EmptyContents, 600000, false);
  }
};

class SRP_GarbageBin_Waste extends SRP_GarbageBin_ColorBase{};
class SRP_GarbageBin_Recycling extends SRP_GarbageBin_ColorBase{};
class SRP_GarbageBin_Compost extends SRP_GarbageBin_ColorBase{};

class SRP_CollectableSign_Base extends SRP_DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return true;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};
class SRP_CollectableSign2_Base extends SRP_DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return true;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

class SRP_PictureFrame extends SRP_DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return true;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};
class SRP_PictureFrame_Ragnar extends SRP_DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return true;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};


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

  void UpdateShoulderProxyVisibility(EntityAI item, string slot_name)
	{
		const int 						SIMPLE_SELECTION_MELEE_RIFLE = 0;
		const int 						SIMPLE_SELECTION_MELEE_MELEE = 1;
		const int 						SIMPLE_SELECTION_SHOULDER_RIFLE = 2;
		const int 						SIMPLE_SELECTION_SHOULDER_MELEE = 3;
		string slot = slot_name;
		bool boo;
		boo = item.IsWeapon();
		if ( slot == "Melee" )
		{
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_MELEE_RIFLE,boo);
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_MELEE_MELEE,!boo);
		}
		else if ( slot == "Shoulder" )
		{
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_SHOULDER_RIFLE,boo);
			SetSimpleHiddenSelectionState(SIMPLE_SELECTION_SHOULDER_MELEE,!boo);
		}
	}

  override bool CanBeDeconstructed()
  {
    return true;
  }
}

class SRP_SewingTable extends SRP_Container_Base{};

class SRP_PostBox extends SRP_Container_Base{};
class SRP_PostBoxBlue extends SRP_Container_Base{};
class SRP_PostBoxWooden extends SRP_Container_Base{};

class SRP_Cardboardbox extends SRP_Container_Base{};

class SRP_StonePile_Small extends SRP_Container_Base{};
class SRP_StonePile_Large extends SRP_Container_Base{};

class SRP_BuildingComponentFrame_ColorBase extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_BuildingComponentFrame_Kit";
  }
};
class SRP_BuildingComponentFrame_WornRamp extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornLPlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornUPlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornFlatPlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornFlatDoublePlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornSinglePlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornDoublePlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_WornLongDoublePlatform extends SRP_BuildingComponentFrame_ColorBase{};

class SRP_BuildingComponentFrame_FineRamp extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineLPlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineUPlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineFlatPlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineFlatDoublePlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineSinglePlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineDoublePlatform extends SRP_BuildingComponentFrame_ColorBase{};
class SRP_BuildingComponentFrame_FineLongDoublePlatform extends SRP_BuildingComponentFrame_ColorBase{};

class SRP_MedicalBedSmall_Wood extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_WoodenBench extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_SleepingBag_ColorBase extends SRP_Container_Base{};
class SRP_SleepingBag_Basic extends SRP_SleepingBag_ColorBase{};

class SRP_MetalBarrel_Colorbase extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_MetalBarrelKit_Kit";
  }
};
class SRP_MetalBarrel_Old extends SRP_MetalBarrel_Colorbase{};
class SRP_MetalBarrel_Blue extends SRP_MetalBarrel_Colorbase{};
class SRP_MetalBarrel_Red extends SRP_MetalBarrel_Colorbase{};
class SRP_MetalBarrel_Yellow extends SRP_MetalBarrel_Colorbase{};
class SRP_MetalBarrel_Concrete extends SRP_MetalBarrel_Colorbase
{
  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionTransferLiquid);
		AddAction(ActionEmptyBottleBase);
	}

  int GetNumberOfStonesInCargo()
  {
    if (HasAnyCargo())
    {
      CargoBase cargoItem = GetInventory().GetCargo();
      return cargoItem.GetItemCount();
    }
    return 0;
  }

  bool HasEnoughToCraft(int numStone, int mlPerAction)
  {
    int totalStones = GetNumberOfStonesInCargo();
    int totalLiquid = 0;
    if( GetLiquidType() == LIQUID_WATER)
    {
      totalLiquid = GetQuantity();
    }
    if (totalStones == 0 || totalLiquid == 0)
      return false;

    // Print("requires total water: " + requiredWater);
    return (totalStones >= numStone && totalLiquid >= mlPerAction);
  }

  void ConsumeForOneAction(int numStones, int requiredWater)
  {
    AddQuantity(-requiredWater);
    CargoBase cargo = GetInventory().GetCargo();
    int stonesRemoved = 0;
		if ( cargo.GetItemCount() > 0 )
		{
      //process items
      for ( int i = 0; i < cargo.GetItemCount(); i++ )
      {
        SmallStone stone = SmallStone.Cast( cargo.GetItem( i ) );
        if (stone && stonesRemoved < numStones)
        {
          stone.Delete();
          stonesRemoved++;
        }
      }	
    }
  }

  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		return item.IsKindOf("SmallStone");
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		return item.IsKindOf("SmallStone");
  }
};

class SRP_MetalBox extends SRP_Container_Base{};
class SRP_Fridge extends SRP_Container_Base
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
		return false;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
		return false;
  }
};
class SRP_FridgeLarge extends SRP_Fridge{};
class SRP_FridgeRetro extends SRP_Fridge{};

//======================================================== Wooden shelfs
class SRP_WoodenShelfSimple extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};
class SRP_WoodenShelfSimpleGround extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};
class SRP_WoodenShelfGround extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};
class SRP_WoodenShelfGroundTall extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};
class SRP_GunShelfWall extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};
class SRP_GunShelfGround extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};
class SRP_BookCaseCube extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenShelfKit_Kit";
  }
};

//======================================================== Metal Shelfs
class SRP_MetalShelfSimpleGround extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_MetalShelfKit_Kit";
  }
};
class SRP_MetalShelfGround extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_MetalShelfKit_Kit";
  }
};
class SRP_MetalShelfGroundLarge extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_MetalShelfKit_Kit";
  }
};
class SRP_MetalShelfGroundXL extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_MetalShelfKit_Kit";
  }
};

//======================================================= Wooden Furniture Kits
class SRP_Furniture_WoodenTable extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_GChair extends SRP_Container_Base{};
class SRP_GChairHigh extends SRP_Container_Base{};
class SRP_GOutdoorTable extends SRP_Container_Base{};
class SRP_GOutdoorTableUmbrella extends SRP_Container_Base{};
class SRP_Umbrella extends SRP_Container_Base{};
class SRP_ShootingTarget extends SRP_Container_Base{};
class SRP_ShootingTargets extends SRP_Container_Base{};

class SRP_StreetLightLarge extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_StreetLightKit_Kit";
  }
};
class SRP_StreetLightMedium extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_StreetLightKit_Kit";
  }
};
class SRP_StreetLightLarge_Metal extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_StreetLightKit_Kit";
  }
};
class SRP_StreetLightMedium_Wood extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_StreetLightKit_Kit";
  }
};
class SRP_StreetLightSlim extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_StreetLightKit_Kit";
  }
};

class SRP_MilitaryCaseSmall extends SRP_Container_Base{};
class SRP_MilitaryCaseSmallBlack extends SRP_Container_Base{};
class SRP_MilitaryCaseMedium extends SRP_Container_Base{};
class SRP_MilitaryCaseLarge extends SRP_Container_Base{};
class SRP_MilitaryCaseLong extends SRP_Container_Base{};
class SRP_MilitaryCaseLongBlue extends SRP_Container_Base{};
class SRP_MilitaryCaseLongTan extends SRP_Container_Base{};
class SRP_ComputerTerminal extends SRP_Container_Base{};
class SRP_ComputerTerminalSlim extends SRP_Container_Base{};
class SRP_ComputerTerminalWide extends SRP_Container_Base{};

class SRP_StreetSign_Base extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_StreetSign_Kit";
  }
};
class SRP_StreetSign_Caution extends SRP_StreetSign_Base{};
class SRP_StreetSign_CautionBiohazard extends SRP_StreetSign_Base{};
class SRP_StreetSign_NoSmoking extends SRP_StreetSign_Base{};
class SRP_StreetSign_Handicap extends SRP_StreetSign_Base{};
class SRP_StreetSign_NoParking extends SRP_StreetSign_Base{};
class SRP_StreetSign_Yield extends SRP_StreetSign_Base{};
class SRP_StreetSign_Pedestrians extends SRP_StreetSign_Base{};
class SRP_StreetSign_NoBikes extends SRP_StreetSign_Base{};
class SRP_StreetSign_NoLeftTurn extends SRP_StreetSign_Base{};
class SRP_StreetSign_SpeedLimit extends SRP_StreetSign_Base{};
class SRP_StreetSign_BikePath extends SRP_StreetSign_Base{};
class SRP_StreetSign_OneWay extends SRP_StreetSign_Base{};
class SRP_StreetSign_HandicapSmall extends SRP_StreetSign_Base{};
class SRP_StreetSign_Highway extends SRP_StreetSign_Base{};
class SRP_HangingWoodenSign extends SRP_StreetSign_Base{};

class SRP_Barricade_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_BarricadeWithWindow_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_WindowBarricade_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_WindowBarricadeTall_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_SpikeBarricade_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_BarricadeMetal extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_Furniture_WitchTable extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
};

class SRP_Furniture_Barrel extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_BarrelTable extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_Sofa extends SRP_Container_Base{};
class SRP_Furniture_Sofa_Modern extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_Sofa_Old extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_BarCounter extends SRP_Container_Base{};
class SRP_Furniture_OldWoodenChair extends SRP_Container_Base{};
class SRP_Furniture_WoodenChair extends SRP_Container_Base{};
class SRP_Furniture_WoodenStairs extends SRP_Container_Base{};

// These need to be deleted by an admin after placement.
class SRP_ForestSign_Original extends SRP_Container_Base{};
class SRP_ForestSign_Sanctuary extends SRP_Container_Base{};
class SRP_Gravestone_1Stone extends SRP_Container_Base{};
class SRP_Gravestone_1Moss extends SRP_Container_Base{};
class SRP_Gravestone_2 extends SRP_Container_Base{};
class SRP_Gravestone_3 extends SRP_Container_Base{};
class SRP_Gravestone_4 extends SRP_Container_Base{};
class SRP_Gravestone_5 extends SRP_Container_Base{};
class SRP_Gravestone_6 extends SRP_Container_Base{};
class SRP_Gravestone_7 extends SRP_Container_Base{};
class SRP_Gravestone_8 extends SRP_Container_Base{};
class SRP_Gravestone_8Moss extends SRP_Container_Base{};
class SRP_Gravestone_9 extends SRP_Container_Base{};
class SRP_Gravestone_10 extends SRP_Container_Base{};
class SRP_Gravestone_11 extends SRP_Container_Base{};
class SRP_Gravestone_11Worn extends SRP_Container_Base{};
class SRP_Gravestone_1Mud extends SRP_Container_Base{};
class SRP_Gravestone_2Mud extends SRP_Container_Base{};
class SRP_Gravestone_3Mud extends SRP_Container_Base{};
class SRP_Gravestone_1MudGrass extends SRP_Container_Base{};
class SRP_Gravestone_2MudGrass extends SRP_Container_Base{};
class SRP_Gravestone_3MudGrass extends SRP_Container_Base{};
class SRP_Gravestone_12 extends SRP_Container_Base{};
class SRP_Gravestone_13 extends SRP_Container_Base{};
class SRP_Gravestone_14 extends SRP_Container_Base{};
class SRP_Gravestone_14Moss extends SRP_Container_Base{};
class SRP_Gravestone_15 extends SRP_Container_Base{};
class SRP_Gravestone_15Moss extends SRP_Container_Base{};
class SRP_Gravestone_16 extends SRP_Container_Base{};
class SRP_Gravestone_16Moss extends SRP_Container_Base{};
class SRP_Gravestone_17 extends SRP_Container_Base{};
class SRP_Gravestone_18 extends SRP_Container_Base{};
class SRP_Gravestone_19 extends SRP_Container_Base{};
class SRP_Gravestone_19Open extends SRP_Container_Base{};

class SRP_ToolRack_Hammers extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_ArmorStandBasic extends SRP_Container_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    ItemBase itemb = ItemBase.Cast( item );
    int idx = itemb.GetHiddenSelectionIndex("personality");
    if (idx > -1)
    {
        itemb.SetObjectTexture(idx, "");
        itemb.SetObjectMaterial(idx, "");
    }
    UpdateShoulderProxyVisibility(item, slot_name);
  }
};

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

  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_Openable_Container extends Barrel_ColorBase
{
  override void EEInit()
	{
		super.EEInit();		
    if(IsOpen())
    {
      GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
    }
		else
    {
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
    }
	}

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

  override void Open()
	{
    super.Open();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override void Close()
	{
    super.Close();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}

  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_BedsideTableMetal extends SRP_Openable_Container{};

class SRP_GuitarCase_ColorBase extends SRP_Openable_Container{};
class SRP_GuitarCase_Blue extends SRP_GuitarCase_ColorBase{};

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
class SRP_FridgeMinsk extends SRP_Openable_Container
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
		return false;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
		return false;
  }
};
