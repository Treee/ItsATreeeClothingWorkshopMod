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
        Clothing eventArmbands;
        if (Class.CastTo(eventArmbands, parent.FindAttachmentBySlotName("Armband")))
        {
            if (eventArmbands.IsEventArmband())
            {
                return true;
            }
        }

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
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
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
    bool HasAllAttachments()
    {
        if (GetItemOnSlot("SRP_WoodDrill") == NULL)
        {
            return false;
        }
        if (GetItemOnSlot("SRP_WoodClamp") == NULL)
        {
            return false;
        }
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


class SRP_SentientCrystal_ColorBase extends SRP_DeployableContainer_Base
{
    override bool DisableVicinityIcon()
    {
        return true;
    }
    override bool IsHealthVisible()
    {
        return false;
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

class SRP_LabEquipment_Projector extends SRP_DeployableContainer_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
};
class SRP_LabEquipment_Tuner extends SRP_DeployableContainer_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
};
class SRP_LabEquipment_Oscilliscope extends SRP_DeployableContainer_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
};
class SRP_LabEquipment_GeigerCounter extends SRP_DeployableContainer_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
};

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
    override bool IsHealthVisible()
	{
		return false;
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
    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
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
    override bool IsHealthVisible()
	{
		return false;
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
  override bool IsHealthVisible()
	{
		return false;
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
    override bool IsHealthVisible()
	{
		return false;
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
    override bool IsHealthVisible()
	{
		return false;
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
        Clothing eventArmbands;
        if (Class.CastTo(eventArmbands, parent.FindAttachmentBySlotName("Armband")))
        {
            if (eventArmbands.IsEventArmband())
            {
                return true;
            }
        }
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

class SRP_Cardboardbox extends SRP_Container_Base{};

class SRP_StonePile_Small extends SRP_Container_Base{};
class SRP_StonePile_Large extends SRP_Container_Base{};

class SRP_MedicalBedSmall_Wood extends SRP_Container_Base
{
    override string GetCraftingKitName()
    {
        return "SRP_WoodenFurnitureKit_Kit";
    }
};
class SRP_SleepingBag_ColorBase extends SRP_Container_Base{};
class SRP_SleepingBag_Basic extends SRP_SleepingBag_ColorBase{};

class SRP_MetalBox extends SRP_Container_Base{};
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

class SRP_GunWall_Fence extends SRP_Container_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
    override bool IgnoreOutOfReachCondition()
    {
        return true;
    }
};
class SRP_MeleeWall_Fence extends SRP_Container_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
    override bool IgnoreOutOfReachCondition()
    {
        return true;
    }
};
class SRP_MaskWall_Fence extends SRP_Container_Base
{
    override bool IsHealthVisible()
	{
		return false;
	}
    override bool IgnoreOutOfReachCondition()
    {
        return true;
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
    override bool IsHealthVisible()
	{
		return false;
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

class SRP_SignBoard_Basic extends SRP_StreetSign_Base{};
class SRP_SignBoard_Medieval extends SRP_StreetSign_Base{};
class SRP_SignBoard_Medieval_2 extends SRP_StreetSign_Base{};

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

	override protected vector GetSmokeEffectPosition()
	{
		return Vector( -0.611, 2.033, 0 );
	}

    override bool CanDisplayAttachmentCategory( string category_name )
	{
		if ( ( category_name == "CookingEquipment" ) || ( category_name == "Smoking" ) )
		{
			return true;
		}
				//super
		return super.CanDisplayAttachmentCategory( category_name );
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
        super.UpdateVisualState();
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
        return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
    }
};

class SRP_WoodenBox_Long extends SRP_Openable_Container
{
    override bool CanPutIntoHands(EntityAI parent)
    {
        return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
    }
};

class SRP_WoodenBox_Square extends SRP_Openable_Container
{
    override bool CanPutIntoHands(EntityAI parent)
    {
        return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
    }
};
class SRP_MedicalCurtains extends SRP_Openable_Container{};

class SRP_MetalSafe_ColorBase extends SRP_Openable_Container{};
class SRP_MetalSafe_Red extends SRP_MetalSafe_ColorBase{};
class SRP_MetalSafe_Tall extends SRP_MetalSafe_ColorBase{};
