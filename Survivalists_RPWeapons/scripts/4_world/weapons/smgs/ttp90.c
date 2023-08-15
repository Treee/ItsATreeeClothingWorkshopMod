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

	override bool CanDisplayAttachmentSlot(int slot_id)
	{
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slot_id);

      ItemBase weaponOptic;
      if (slotName == "pistolFlashlight" || slotName == "weaponFlashlight")
      {
        // if the adapter is not attached do not show scope slots
        if (!FindAttachmentBySlotName("P90UpgradeKit"))
          return false;
        else
        {
          if (slotName == "pistolFlashlight")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponFlashlight")))
              return false;
          }        
          if (slotName == "weaponFlashlight")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("pistolFlashlight")))
              return false;
          }
        }
      }
      return true;
    }
		return false;
	}
};