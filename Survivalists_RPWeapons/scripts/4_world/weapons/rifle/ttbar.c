class ttbar extends RifleBoltLock_Base
{
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ESP_Spectre" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "SRP_ButtstockPouch_Purple" );
		inventory.CreateInInventory( "ESP_RIS_Adapter" );
    SpawnAttachedMagazine("Mag_FAL_20Rnd");
	}

	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if(!IsInitialized() && !attachment.IsInitialized())
		{
		  return true;
		};
		if ( attachment.IsKindOf("ItemOptics"))
    {
      if ( this.FindAttachmentBySlotName("RISAdapter") )
      {
				if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsHunting") )
				{
					if ( this.FindAttachmentBySlotName("weaponOptics") == NULL )
					{
						return true;
					}
					return false;
				}
				if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
				{
					if ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL )
					{
						return true;
					}
					return false;
				}
				return false;
			}
			return false;
		}
		return true;
	}
	override bool CanDisplayAttachmentSlot( string slot_name)
	{
		if ( slot_name == "weaponOptics" )
		{
      return this.FindAttachmentBySlotName("RISAdapter") && this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL;
		}
		if ( slot_name == "weaponOpticsHunting" )
		{
      return this.FindAttachmentBySlotName("RISAdapter") && this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL;
		}
		return true;
	}
};