class ttak458poli extends ttak458
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "AK_RailHndgrd" );
		inventory.CreateInInventory( "AK_Bayonet" );
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "KobraOptic" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
	}	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		// RIS Adapter Script - Allows for 1 scope
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
		{
			if ( this.FindAttachmentBySlotName("AKRISAdapter") == NULL )
			{
				return false;
			}
			return true;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("AKRISAdapter") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsAK") )
		{
			if ( this.FindAttachmentBySlotName("AKRISAdapter") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsAK") )
		{
			if ( this.FindAttachmentBySlotName("weaponOptics") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL )
			{
				return true;
			}
			return false;
		}

		// Stock Adapter
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponButtstockM4") )
		{
			if ( this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").ConfigGetBool("IsStockAdapter") )
			{
				return true;
			}
			return false;
		}
        return true;
	}

	// Script shows whether additional attachments can be taken if adapters / RIS is
	override bool CanDisplayAttachmentSlot( string slot_name)
	{
		if ( slot_name == "weaponButtstockM4" )
		{
            return	( this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").ConfigGetBool("IsStockAdapter") == true );
		}
		if ( slot_name == "weaponOpticsAK" )
		{
            return ( this.FindAttachmentBySlotName("AKRISAdapter") == NULL );
		}
		if ( slot_name == "AKRISAdapter" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL );
		}
		if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("AKRISAdapter") && this.FindAttachmentBySlotName("weaponOpticsAK") == NULL );
		}
		if ( slot_name == "RISLeft" )
		{
            return	( this.FindAttachmentBySlotName("weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
            return	( this.FindAttachmentBySlotName("weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
            return	( this.FindAttachmentBySlotName("weaponHandguardAK") != NULL && this.FindAttachmentBySlotName("weaponHandguardAK").ConfigGetBool("hasRailFunctionality") == true );
		}
		return true;
		
	}
};