class SRP_KitBase extends ItemBase 
{
	override bool IsDeployable() 
  {
    return true;
  }
  override bool IsSprintRemoved()
  {
    return true;
  }
  override bool IsPlacingKit()
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
class SRP_Ladder_Opened_Kit extends SRP_KitBase
{
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }  
};

class SRP_MasonryMetallurgy_KitBase extends SRP_KitBase{};

class SRP_HoneyCombStand_Kit extends SRP_KitBase{};
class SRP_GlassDisplayCase_Kit extends SRP_KitBase{};
class SRP_GlassDisplayCaseLarge_Kit extends SRP_KitBase{};
class SRP_MuseumTable_Kit extends SRP_KitBase{};

class SRP_CoatRack_Basic_Kit extends SRP_KitBase{};
class SRP_CoatRack_Fancy_Kit extends SRP_KitBase{};
class SRP_CoatRack_Simple_Kit extends SRP_KitBase{};

class SRP_Cardboardbox_Kit extends SRP_KitBase{};
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

class SRP_GunShelfGround_Kit extends SRP_KitBase{};
class SRP_Potbelly_Stove_Kit extends SRP_KitBase{};

class SRP_BBQ_Basic_Kit extends SRP_KitBase{};
class SRP_BBQ_Grill_Kit extends SRP_KitBase{};
class SRP_BBQ_FirePit_Kit extends SRP_KitBase{};
class SRP_FireplaceIndoor_Medieval_Kit extends SRP_KitBase{};
class SRP_FireplaceIndoor_Fancy_Kit extends SRP_KitBase{};
class SRP_FireplaceIndoor_FancyPink_Kit extends SRP_KitBase{};
class SRP_FireplaceIndoor_FancyBlue_Kit extends SRP_KitBase{};
class SRP_FireplaceIndoor_FancyGreen_Kit extends SRP_KitBase{};

class SRP_ShootingTarget_Kit extends SRP_KitBase{};
class SRP_ShootingTargets_Kit extends SRP_KitBase{};

class SRP_GunWall_Fence_Kit extends SRP_KitBase{};
class SRP_MeleeWall_Fence_Kit extends SRP_KitBase{};
class SRP_MaskWall_Fence_Kit extends SRP_KitBase{};

class SRP_MetalSafe_Red_Kit extends SRP_KitBase{};
class SRP_MetalSafe_Tall_Kit extends SRP_KitBase{};

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
class SRP_Furniture_Gazebo_Kit extends SRP_KitBase{};

class SRP_Furniture_LogStump_Kit extends SRP_KitBase{};
class SRP_Furniture_LogBenchSmall_Kit extends SRP_KitBase{};
class SRP_Furniture_WoodBenchSmall_Kit extends SRP_KitBase{};
class SRP_Furniture_WoodBenchSlim_Kit extends SRP_KitBase{};

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

class SRP_DecontaminationShower_Kit extends SRP_KitBase{};
class SRP_DecontaminationShower_Red_Kit extends SRP_KitBase{};
class SRP_DecontaminationShower_Yellow_Kit extends SRP_KitBase{};

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

class SRP_Fridge_Kit extends SRP_KitBase{};
class SRP_FridgeLarge_Kit extends SRP_KitBase{};
class SRP_FridgeRetro_Kit extends SRP_KitBase{};
class SRP_FridgeRetro_HerbRack_Kit extends SRP_KitBase{};
class SRP_FridgeMinsk_Kit extends SRP_KitBase{};
class SRP_FridgeMinsk_Medical_Kit extends SRP_KitBase{};

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

class SRP_LockerSingle_Pelt_Kit extends SRP_KitBase{};
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

class SRP_GuitarCase_Blue_Kit extends SRP_KitBase{};

class SRP_SleepingBag_Basic_Kit extends SRP_KitBase{};

class SRP_DrugWorkbench_Kit extends SRP_KitBase{};

class SRP_BrewingWorkbench_Alchemy_Kit extends SRP_KitBase{};
class SRP_BrewingWorkbench_Ceramic_Kit extends SRP_KitBase{};
class SRP_BrewingWorkbench_Copper_Kit extends SRP_KitBase{};

class SRP_PropaneLocker_Basic_Kit extends SRP_KitBase{};

class SRP_PersonalRadio_TerminalBasic_Kit extends SRP_KitBase
{
  bool CanTransferHPOnDeploy()
  {
    return false;
  }
};
class SRP_PersonalRadio_TerminalEspen_Kit extends SRP_KitBase
{
  bool CanTransferHPOnDeploy()
  {
    return false;
  }
};
class SRP_PersonalRadio_TerminalStag_Kit extends SRP_KitBase
{
  bool CanTransferHPOnDeploy()
  {
    return false;
  }
};

// This crafted item is not placeable. Most of these represent intermediate kits
class SRP_IntermediateCraftingKitBase extends ItemBase
{
  override bool IsCraftingKit()
  {
    return true;
  }

  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}

  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }
	// const int STATE_RUINED 		 	= 4;
	// const int STATE_BADLY_DAMAGED 	= 3;
	// const int STATE_DAMAGED 	  	= 2;
	// const int STATE_WORN 		  	= 1;
	// const int STATE_PRISTINE 	  	= 0;
  bool HasAttachmentFilledWithHealthLevel(string slotName, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState;
    }
    return false;
  }

  bool HasAttachmentFilledWithItem(string slotName, string itemName, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment && attachment.GetType() == itemName)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState;
    }
    return false;
  }

  bool HasAttachmentFilledWithItemAndQuantity(string slotName, string itemName, int quantity=0, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment && attachment.GetType() == itemName)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState && attachment.GetQuantity() >= quantity;
    }
    return false;
  }

  bool HasAttachmentFilledWithQuantity(string slotName, int quantity=0, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState && attachment.GetQuantity() >= quantity;
    }
    return false;
  }

  bool HasAllAttachmentsFilled()
  {
    return false;
  }

  bool AreCorrectTypesAndSlots(TStringArray types, TStringArray slots)
  {
    bool isValid = true;
    for(int slotIndex=0; slotIndex<slots.Count(); slotIndex++)
    {
      isValid &= HasAttachmentFilledWithItem(slots.Get(slotIndex), types.Get(slotIndex));
      // if any slot is invalid, break the look 
      if (!isValid)
      {
        break;
      }
    }
    return isValid;
  }
  
  void DamageAttachments()
  {
  }

  void DamageItemSlot(string slotName, int minDamage=0, int maxDamage=10)
  {
  }

  bool CanCraft()
  {
    return false;
  }
};

class SRP_MasonryMetallurgy_Intermediate_KitBase extends SRP_IntermediateCraftingKitBase{};
class SRP_TetrisShelfKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_BuildingComponentFrame_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WoodenShelfKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_WoodenDisplayKit_Kit extends SRP_IntermediateCraftingKitBase{};
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

class SRP_ChessBoard_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_AccessoryRing_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_StreetSign_Kit extends SRP_IntermediateCraftingKitBase{};

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
    bool isSolved = false;

    ItemBase tannedLeather = GetItemInSlot("Material_Shelter_Leather");
    isSolved |= (tannedLeather && tannedLeather.GetQuantity() == 8);
    // Print("leather: " + isSolved);
    ItemBase animalSkull = GetItemInSlot("AnimalSkull");
    isSolved &= (animalSkull != null);
    // Print("skull: " + isSolved);
    ItemBase woodenSticks = GetItemInSlot("Material_Shelter_FrameSticks");
    isSolved &= (woodenSticks && woodenSticks.GetQuantity() == 4);
    // Print("sticks: " + isSolved);
    ItemBase fabric = GetItemInSlot("Material_Shelter_Fabric");
    isSolved &= (fabric && fabric.GetQuantity() == 4);
    // Print("fabric: " + isSolved);
    ItemBase rags = GetItemInSlot("Rags");
    isSolved &= (rags && rags.GetQuantity() == 6);
    // Print("rags: " + isSolved);    
    ItemBase rope = GetItemInSlot("Rope");
    isSolved &= (rope != null);
    // Print("rope: " + isSolved);
    ItemBase wire1 = GetItemInSlot("Material_MetalWire");
    isSolved &= (wire1 != null);
    // Print("wire1: " + isSolved);
    ItemBase wire2 = GetItemInSlot("Material_FPole_MetalWire");
    isSolved &= (wire2 != null);
    // Print("wire2: " + isSolved);
    ItemBase wire3 = GetItemInSlot("MetalWire");
    isSolved &= (wire3 != null);
    // Print("wire3: " + isSolved);
    EntityAI animalPelt;
    int requiredIndex;
    for(int i=requiredPelts.Count(); i > 0; i--)
    {
      requiredIndex = i - 1;
      animalPelt = FindAttachmentBySlotName("AnimalPelt"+i);
      if (animalPelt)
      {
        string requiredPelt = requiredPelts.Get(requiredIndex);
        requiredPelt.ToLower();
        string actualPelt = animalPelt.GetType();
        actualPelt.ToLower();
        isSolved &= (requiredPelt == actualPelt);
        // Print("AnimalPelt"+i + ": " + requiredPelt + " this pelt: " + actualPelt + ": " + isSolved);
      }
      else
      {
        // Print("wut");
        isSolved &= false;
      }
    }
    // Print("pelts: " + isSolved);
    // Print("rope check: " + isSolved);
    return isSolved;
  }

  ItemBase GetItemInSlot(string slotName)
  {
    return ItemBase.Cast(FindAttachmentBySlotName(slotName));
  }
};
class SRP_TaxidermyWall_Kit extends SRP_Taxidermy_Kit{};

class SRP_MedicalKit_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_MetalBarrelKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_MetalBarrel_Old_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Blue_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Red_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Yellow_Kit extends SRP_KitBase{};
class SRP_MetalBarrel_Concrete_Kit extends SRP_KitBase{};

class TireRepairKit_ElectronicsKit_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_Deconstruction_Kit extends SRP_IntermediateCraftingKitBase
{
  override bool HasAllAttachmentsFilled()
  {
    bool isAllFilled = false;
    isAllFilled |= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Hammer",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Hatchet",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_HandSaw",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Pliers",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Screwdriver",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Shovel",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Caliper",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Handdrill",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Crowbar",GameConstants.STATE_BADLY_DAMAGED);
    isAllFilled &= HasAttachmentFilledWithHealthLevel("SRP_ToolKit_Wrench",GameConstants.STATE_BADLY_DAMAGED);
    return isAllFilled;
  }

  override void DamageAttachments()
  {
    DamageItemSlot("SRP_ToolKit_Hammer", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Hatchet", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_HandSaw", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Pliers", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Screwdriver", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Shovel", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Caliper", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Handdrill", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Crowbar", Math.RandomIntInclusive(10,20));
    DamageItemSlot("SRP_ToolKit_Wrench", Math.RandomIntInclusive(10,20));
    
    AddHealth( Math.RandomIntInclusive(2, 10));
  }
};

class SRP_Mutation_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_Mutation_Brawler_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Mutation_BodyHeat_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Mutation_Chameleon_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Mutation_Nocturnal_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Mutation_Aquatic_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Mutation_Armor_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_Mutation_IronStomach_Kit extends SRP_IntermediateCraftingKitBase{};

class SRP_PotteryPotKit_Kit extends SRP_IntermediateCraftingKitBase{};
class SRP_PotteryPot1Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot2Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot3Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot4Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot5Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot6Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot7Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};
class SRP_PotteryPot8Kit_Kit extends SRP_IntermediateCraftingKitBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwapClayPotOption);
	}
};

class SRP_PotteryPot1_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Basic_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Basic_Kit extends SRP_KitBase{};

class SRP_PotteryPot1_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Ornament_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Ornament_Kit extends SRP_KitBase{};

class SRP_PotteryPot1_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Flower_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Flower_Kit extends SRP_KitBase{};

class SRP_PotteryPot1_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Geometric_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Geometric_Kit extends SRP_KitBase{};

class SRP_PotteryPot1_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Modern_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Modern_Kit extends SRP_KitBase{};

class SRP_PotteryPot1_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Celtic_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Celtic_Kit extends SRP_KitBase{};

class SRP_PotteryPot1_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot2_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot3_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot4_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot5_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot6_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot7_Rossetta_Kit extends SRP_KitBase{};
class SRP_PotteryPot8_Rossetta_Kit extends SRP_KitBase{};