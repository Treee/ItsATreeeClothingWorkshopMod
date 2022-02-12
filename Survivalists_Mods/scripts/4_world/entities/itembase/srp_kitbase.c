class SRP_KitBase extends ItemBase 
{
  void SRP_KitBase(){}
  
  void ~SRP_KitBase(){}

  string GetKitItemName()
  {
    string kitType = this.GetType();
    if (kitType != "") {
      // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
      kitType = kitType.Substring(0, kitType.Length() - 4);
    }
    return kitType;
  }

  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(GetKitItemName(), position, ECE_PLACE_ON_SURFACE));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);

      this.Delete();
		}
	}

	override bool IsDeployable() 
  {
    return true;
  }

  override bool CanAssignAttachmentsToQuickbar()
	{
		return false;
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
};
// If you add a new kit, add it to this list so it gets the right stuff
//craftable kits
class SRP_BedsideTable_Kit extends SRP_KitBase{};
class SRP_BedsideTableMetal_Kit extends SRP_KitBase{};
class SRP_MedicalBedSmall_Wood_Kit extends SRP_KitBase{};

class SRP_WoodenShelfSimple_Kit extends SRP_KitBase{};
class SRP_WoodenShelfSimpleGround_Kit extends SRP_KitBase{};
class SRP_WoodenShelfGround_Kit extends SRP_KitBase{};
class SRP_WoodenShelfGroundTall_Kit extends SRP_KitBase{};
class SRP_MetalShelfSimpleGround_Kit extends SRP_KitBase{};
class SRP_MetalShelfGround_Kit extends SRP_KitBase{};
class SRP_GunShelfWall_Kit extends SRP_KitBase{};
class SRP_MetalShelfGroundLarge_Kit extends SRP_KitBase{};
class SRP_MetalShelfGroundXL_Kit extends SRP_KitBase{};

class SRP_MetalBarrel_Old_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Blue_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Red_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Yellow_Kit extends SRP_KitBase{};

class SRP_GunShelfGround_Kit extends SRP_KitBase{};
class SRP_Potbelly_Stove_Kit extends SRP_KitBase{};

class SRP_ShootingTarget_Kit extends SRP_KitBase{};
class SRP_ShootingTargets_Kit extends SRP_KitBase{};

class SRP_StreetLightLarge_Kit extends SRP_KitBase{};
class SRP_StreetLightLarge_Metal_Kit extends SRP_KitBase{};
class SRP_StreetLightMedium_Wood_Kit extends SRP_KitBase{};
class SRP_StreetLightMedium_Kit extends SRP_KitBase{};
class SRP_StreetLightSlim_Kit extends SRP_KitBase{};

class SRP_Furniture_BarrelTable_Kit extends SRP_KitBase{};
class SRP_Furniture_Barrel_Kit extends SRP_KitBase{};
class SRP_Furniture_Sofa_Kit extends SRP_KitBase{};
class SRP_Furniture_Sofa_Modern_Kit extends SRP_KitBase{};
class SRP_Furniture_Sofa_Old_Kit extends SRP_KitBase{};
class SRP_Furniture_BarCounter_Kit extends SRP_KitBase{};
class SRP_Furniture_OldWoodenChair_Kit extends SRP_KitBase{};
class SRP_Furniture_WoodenChair_Kit extends SRP_KitBase{};
class SRP_Furniture_WoodenStairs_Kit extends SRP_KitBase{};
class SRP_WoodenBench_Kit extends SRP_KitBase{};

class SRP_BuildingComponentFrame_WornRamp_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornLPlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornUPlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornFlatPlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornFlatDoublePlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornSinglePlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornDoublePlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_WornLongDoublePlatform_Kit extends SRP_KitBase{};

class SRP_BuildingComponentFrame_FineRamp_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineLPlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineUPlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineFlatPlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineFlatDoublePlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineSinglePlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineDoublePlatform_Kit extends SRP_KitBase{};
class SRP_BuildingComponentFrame_FineLongDoublePlatform_Kit extends SRP_KitBase{};


class SRP_Furniture_WoodenTable_Kit extends SRP_KitBase{};
class SRP_ArmorStandBasic_Kit extends SRP_KitBase{};

class SRP_MetalBox_Kit extends SRP_KitBase{};

// Building Kits
class SRP_Carpentry_WoodenHouseOuthouse_Kit extends SRP_KitBase{};
class SRP_Carpentry_WoodenBarn_Kit extends SRP_KitBase{};
class SRP_Carpentry_WoodenShanty_Kit extends SRP_KitBase{};

class SRP_Carpentry_WoodenShed_Kit extends SRP_KitBase{};
class SRP_Carpentry_WoodenShedDoor_Kit extends SRP_KitBase{};

class SRP_Carpentry_RussianHouse_Kit extends SRP_KitBase{};
class SRP_Carpentry_RussianHouse1_Kit extends SRP_KitBase{};

class SRP_Carpentry_RussianHouseDoor_Kit extends SRP_KitBase{};
class SRP_Carpentry_RussianHouseDoor1_Kit extends SRP_KitBase{};

class SRP_Carpentry_WoodenHouseSingleRoom_Kit extends SRP_KitBase{};

class SRP_Barricade_Wood_Kit extends SRP_KitBase{};
class SRP_BarricadeWithWindow_Wood_Kit extends SRP_KitBase{};
class SRP_WindowBarricade_Wood_Kit extends SRP_KitBase{};
class SRP_WindowBarricadeTall_Wood_Kit extends SRP_KitBase{};
class SRP_SpikeBarricade_Wood_Kit extends SRP_KitBase{};


// non craftable kits
class SRP_Fridge_Kit extends SRP_KitBase{};
class SRP_FridgeLarge_Kit extends SRP_KitBase{};
class SRP_FridgeRetro_Kit extends SRP_KitBase{};
class SRP_FridgeMinsk_Kit extends SRP_KitBase{};

class SRP_MilitaryCaseSmall_Kit extends SRP_KitBase{};
class SRP_MilitaryCaseSmallBlack_Kit extends SRP_KitBase{};
class SRP_MilitaryCaseMedium_Kit extends SRP_KitBase{};
class SRP_MilitaryCaseLong_Kit extends SRP_KitBase{};
class SRP_MilitaryCaseLarge_Kit extends SRP_KitBase{};
class SRP_MilitaryCaseLongBlue_Kit extends SRP_KitBase{};
class SRP_MilitaryCaseLongTan_Kit extends SRP_KitBase{};

class SRP_GChair_Kit extends SRP_KitBase{};
class SRP_GChairHigh_Kit extends SRP_KitBase{};
class SRP_GOutdoorTable_Kit extends SRP_KitBase{};
class SRP_GOutdoorTableUmbrella_Kit extends SRP_KitBase{};
class SRP_Umbrella_Kit extends SRP_KitBase{};
class SRP_Carpet_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Kit extends SRP_KitBase{};
class SRP_MedicalCurtains_Kit extends SRP_KitBase{};
class SRP_BarricadeMetal_Kit extends SRP_KitBase{};
class SRP_SewingTable_Kit extends SRP_KitBase{};
class SRP_LatheWorkbench_Kit extends SRP_KitBase{};
class SRP_WornWorkbench_Kit extends SRP_KitBase{};
class SRP_WornWorkbench_Metal_Kit extends SRP_KitBase{};
class SRP_StoneForgeWorkbench_Kit extends SRP_KitBase{};
class SRP_AdvancedStoneForgeWorkbench_Kit extends SRP_KitBase{};

class SRP_StreetSign_Caution_Kit extends SRP_KitBase{};
class SRP_StreetSign_CautionBiohazard_Kit extends SRP_KitBase{};
class SRP_StreetSign_NoSmoking_Kit extends SRP_KitBase{};
class SRP_StreetSign_Handicap_Kit extends SRP_KitBase{};
class SRP_StreetSign_NoParking_Kit extends SRP_KitBase{};
class SRP_StreetSign_Yield_Kit extends SRP_KitBase{};
class SRP_StreetSign_Pedestrians_Kit extends SRP_KitBase{};
class SRP_StreetSign_NoBikes_Kit extends SRP_KitBase{};
class SRP_StreetSign_NoLeftTurn_Kit extends SRP_KitBase{};
class SRP_StreetSign_SpeedLimit_Kit extends SRP_KitBase{};
class SRP_StreetSign_BikePath_Kit extends SRP_KitBase{};
class SRP_StreetSign_OneWay_Kit extends SRP_KitBase{};
class SRP_StreetSign_HandicapSmall_Kit extends SRP_KitBase{};
class SRP_StreetSign_Highway_Kit extends SRP_KitBase{};
class SRP_HangingWoodenSign_Kit extends SRP_KitBase{};

class SRP_ComputerTerminal_Kit extends SRP_KitBase{};
class SRP_ComputerTerminalSlim_Kit extends SRP_KitBase{};
class SRP_ComputerTerminalWide_Kit extends SRP_KitBase{};

class SRP_PortalBone_Kit extends SRP_KitBase{};
class SRP_PortalDruid_Kit extends SRP_KitBase{};
class SRP_PortalArch_Kit extends SRP_KitBase{};
class SRP_PortalReturn_Kit extends SRP_KitBase{};

class SRP_AltarBone_Kit extends SRP_KitBase{};
class SRP_AltarWraith_Kit extends SRP_KitBase{};
class SRP_AltarDog_Kit extends SRP_KitBase{};
class SRP_AltarWendigo_Kit extends SRP_KitBase{};
class SRP_AltarBigBoss_Kit extends SRP_KitBase{};

class SRP_ToolRack_Hammers_Kit extends SRP_KitBase{};

// Gravestones
class SRP_ForestSign_Original_Kit extends SRP_KitBase{};
class SRP_ForestSign_Sanctuary_Kit extends SRP_KitBase{};
class SRP_Gravestone_1Stone_Kit extends SRP_KitBase{};
class SRP_Gravestone_1Moss_Kit extends SRP_KitBase{};
class SRP_Gravestone_2_Kit extends SRP_KitBase{};
class SRP_Gravestone_3_Kit extends SRP_KitBase{};
class SRP_Gravestone_4_Kit extends SRP_KitBase{};
class SRP_Gravestone_5_Kit extends SRP_KitBase{};
class SRP_Gravestone_6_Kit extends SRP_KitBase{};
class SRP_Gravestone_7_Kit extends SRP_KitBase{};
class SRP_Gravestone_8_Kit extends SRP_KitBase{};
class SRP_Gravestone_8Moss_Kit extends SRP_KitBase{};
class SRP_Gravestone_9_Kit extends SRP_KitBase{};
class SRP_Gravestone_10_Kit extends SRP_KitBase{};
class SRP_Gravestone_11_Kit extends SRP_KitBase{};
class SRP_Gravestone_11Worn_Kit extends SRP_KitBase{};
class SRP_Gravestone_1Mud_Kit extends SRP_KitBase{};
class SRP_Gravestone_2Mud_Kit extends SRP_KitBase{};
class SRP_Gravestone_3Mud_Kit extends SRP_KitBase{};
class SRP_Gravestone_1MudGrass_Kit extends SRP_KitBase{};
class SRP_Gravestone_2MudGrass_Kit extends SRP_KitBase{};
class SRP_Gravestone_3MudGrass_Kit extends SRP_KitBase{};
class SRP_Gravestone_12_Kit extends SRP_KitBase{};
class SRP_Gravestone_13_Kit extends SRP_KitBase{};
class SRP_Gravestone_14_Kit extends SRP_KitBase{};
class SRP_Gravestone_14Moss_Kit extends SRP_KitBase{};
class SRP_Gravestone_15_Kit extends SRP_KitBase{};
class SRP_Gravestone_15Moss_Kit extends SRP_KitBase{};
class SRP_Gravestone_16_Kit extends SRP_KitBase{};
class SRP_Gravestone_16Moss_Kit extends SRP_KitBase{};
class SRP_Gravestone_17_Kit extends SRP_KitBase{};
class SRP_Gravestone_18_Kit extends SRP_KitBase{};
class SRP_Gravestone_19_Kit extends SRP_KitBase{};
class SRP_Gravestone_19Open_Kit extends SRP_KitBase{};

class SRP_StonePile_Small_Kit extends SRP_KitBase{};
class SRP_StonePile_Large_Kit extends SRP_KitBase{};

class SRP_LockerSingle_Black_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Blue_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Brown_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Gray_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Green_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Orange_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Pink_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Purple_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Red_Kit extends SRP_KitBase{};
class SRP_LockerSingle_White_Kit extends SRP_KitBase{};
class SRP_LockerSingle_Yellow_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Black_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Blue_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Brown_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Gray_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Green_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Orange_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Pink_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Purple_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Red_Kit extends SRP_KitBase{};
class SRP_LockerTriple_White_Kit extends SRP_KitBase{};
class SRP_LockerTriple_Yellow_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Black_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Blue_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Brown_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Gray_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Green_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Orange_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Pink_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Purple_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Red_Kit extends SRP_KitBase{};
class SRP_LockerQuad_White_Kit extends SRP_KitBase{};
class SRP_LockerQuad_Yellow_Kit extends SRP_KitBase{};
class SRP_LockerMilitary_Green_Kit extends SRP_KitBase{};
class SRP_LockerMilitary_Black_Kit extends SRP_KitBase{};
class SRP_LockerMilitary_Gray_Kit extends SRP_KitBase{};
class SRP_LockerMilitary_Tan_Kit extends SRP_KitBase{};

// This crafted item is not placeable. Most of these represent intermediate kits
class SRP_IntermediateCraftingKitBase extends ItemBase
{
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}

  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }
};
class SRP_TetrisShelfKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_BuildingComponentFrame_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WoodenShelfKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_MetalShelfKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_BarricadeKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_StreetLightKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WoodenFurnitureKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_StoneForgeWorkbenchStarter_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionConvertStarterForgeKit);
	}
};
class SRP_StoneForgeWorkbenchIntermediate_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_StoneForgeWorkbenchFinisher_Kit extends SRP_IntermediateCraftingKitBase{};

// armor
class SRP_ArmorKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WoodenStickArmor_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_SimpleBoneArmor_Kit extends SRP_IntermediateCraftingKitBase{};

// weapons

// gun smithing
// class TT_WoodAttachmentGunKit_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_WeaponBladeKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladeKarambitKnife_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladeSnakeDagger_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladeBerserkSword_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladeCrystalMace_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladeKatana_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladeWarCleaver_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WeaponBladePipeAxe_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Dynamite_Stick_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_LetterKit1_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_LetterKit2_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_LetterSignsKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_StreetSign_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_LetterNumberKit_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_Taxidermy_Kit extends SRP_IntermediateCraftingKitBase
{
	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
    if (attachment && attachment.IsInherited(Pelt_Base))
    {
      return attachment.GetHealthLevel() == GameConstants.STATE_PRISTINE;
    }
    return super.CanReceiveAttachment(attachment, slotId);
	}

  bool IsTaxidermyPuzzleSolved(TStringArray requiredPelts)
  {
    bool isSolved = true;
    ItemBase animalPelt;
    for(int i=requiredPelts.Count(); i > 0; i--)
    {
      animalPelt = GetItemInSlot("AnimalPelt"+i);
      if (animalPelt)
      {
        isSolved &= requiredPelts.Get(i) == animalPelt.GetType();
      }
    }
    ItemBase tannedLeather = GetItemInSlot("Material_Shelter_Leather");
    isSolved &= (tannedLeather && tannedLeather.GetQuantity() == 8);
    ItemBase leatherStrips = GetItemInSlot("DUB_Leatherstrip");
    isSolved &= (leatherStrips && leatherStrips.GetQuantity() == 5);
    ItemBase rope = GetItemInSlot("Rope");
    isSolved &= (rope);
    
    return isSolved;
  }

  ItemBase GetItemInSlot(string slotName)
  {
    return ItemBase.Cast(FindAttachmentBySlotName(slotName));
  }
};
class SRP_TaxidermyWall_Kit extends SRP_Taxidermy_Kit{};
