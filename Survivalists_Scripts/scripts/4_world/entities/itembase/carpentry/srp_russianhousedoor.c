// The buildings are house no destructs which do not need a .c file
class SRP_Carpentry_HouseDoor extends Fence {
  override string GetConstructionKitType()
	{
		return "";
	}

  // this forces the base state to be constructed after the store loads.
	override void SetPartsAfterStoreLoad()
	{
		//update server data
		SetPartsFromSyncData();
		
		//set base state
		SetBaseState( true ) ;
			
		//synchronize after load
		SynchronizeBaseState();
	}

  // fold into kit if there is no codelock on the door
  override bool CanFoldBaseBuildingObject()
	{
		if ( GetInventory().AttachmentCount() > 0 )
		{
			return false;
		}		
		return true;
	}

  // Do not override the name for the gate/door visual UI element
  override bool NameOverride(out string output)
  {
    return false;
  }

  override bool HasHinges()
	{
		return true; // hack, doors are fully built when placed
	}

  override bool CanDisplayAttachmentCategory( string category_name )
	{
		return true;
	}

	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		return true;
	}

  // this is for att_combinationlock. Always show because it is only one item to "build"
  override bool CanDisplayAttachmentSlot(int slot_id)
	{
		return true;
	}
};

class SRP_Carpentry_RussianHouseDoor extends SRP_Carpentry_HouseDoor
{
  override string GetConstructionKitType()
	{
		return "SRP_Carpentry_RussianHouseDoor_Kit";
	}
}

class SRP_Carpentry_RussianHouse1Door extends SRP_Carpentry_HouseDoor
{
  override string GetConstructionKitType()
	{
		return "SRP_Carpentry_RussianHouse1Door_Kit";
	}
}


class SRP_Carpentry_WoodenShedDoor extends SRP_Carpentry_HouseDoor
{
  override string GetConstructionKitType()
	{
		return "SRP_Carpentry_WoodenShedDoor_Kit";
	}
}