class aek extends AK101_Base
{
  // override bool CanEnterIronsights()
	// {
	// 	ItemOptics optic = GetAttachedOptics();
	// 	if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KazuarOptic.Cast(optic))
	// 		return true;
	// 	return super.CanEnterIronsights();
	// }
  override bool CanDisplayAttachmentSlot(int slot_id)
  {
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slot_id);
      if (slotName == "weaponBayonetAK")
      {
        if (FindAttachmentBySlotName("weaponMuzzleAK"))
          return false; // do not show bayonet slot if suppressor is attached
        return true;
      }
      if (slotName == "weaponMuzzleAK")
      {
        if (FindAttachmentBySlotName("weaponBayonetAK"))
          return false; // do not show suppressor slot if suppressor is attached
        return true;
      }
      return true;
    }
    return false;
  }
  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
    if (super.CanReceiveAttachment(attachment, slotId))
    {
      string slotName = InventorySlots.GetSlotName(slotId);
      if (slotName == "weaponBayonetAK")
      {
        if (FindAttachmentBySlotName("weaponMuzzleAK"))
          return false; // do not show bayonet slot if suppressor is attached
        return true;
      }
      if (slotName == "weaponMuzzleAK")
      {
        if (FindAttachmentBySlotName("weaponBayonetAK"))
          return false; // do not show suppressor slot if suppressor is attached
        return true;
      }
      return true;
    }
		return false;
	}
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
				
		inventory.CreateInInventory( "STG_PBS5_Suppressor" );
		inventory.CreateInInventory( "ESP_Short_Range" );
		inventory.CreateInInventory( "Battery9V" );
    
		SpawnAttachedMagazine("Mag_AK101_30Rnd_Black");
	}	
};