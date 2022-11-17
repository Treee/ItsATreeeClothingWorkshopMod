class ttp90 extends RifleBoltLock_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ESP_P90_UpgradeKit" );
    inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "Battery9V" );
    inventory.CreateInInventory( "ESP_RedDot" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("ttp90mag");
	}

	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if(!IsInitialized() && !attachment.IsInitialized())
		{
		  return true;
		}
		if ( attachment.IsKindOf("Switchable_Base"))
    {
      if ( this.FindAttachmentBySlotName("P90UpgradeKit") )
      {
        if ( slotId == InventorySlots.GetSlotIdFromString("weaponFlashlight") )
        {
          if ( this.FindAttachmentBySlotName("pistolFlashlight") == NULL )
          {
            return true;
          }
          return false;
        }
        if ( slotId == InventorySlots.GetSlotIdFromString("pistolFlashlight") )
        {
          if ( this.FindAttachmentBySlotName("weaponFlashlight") == NULL )
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
		if ( slot_name == "pistolFlashlight" )
		{
      return ( this.FindAttachmentBySlotName("P90UpgradeKit") && this.FindAttachmentBySlotName("weaponFlashlight") == NULL );
		}
		if ( slot_name == "weaponFlashlight" )
		{
      return ( this.FindAttachmentBySlotName("P90UpgradeKit") && this.FindAttachmentBySlotName("weaponFlashlight") != NULL );
		}
		return true;
	}
};