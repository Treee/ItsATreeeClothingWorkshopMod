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

  override bool CanDisplayAttachmentSlot(int slot_id)
  {
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slot_id);
      ItemBase weaponOptic;
      if (slotName == "weaponOpticsHunting")
      {
        if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOptics")))
          return false;
      }        
      if (slotName == "weaponOptics")
      {
        if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOpticsHunting")))
          return false;
      }
      return true;
    }
    return false;
  }

  override bool IsHideableSlot(int slot_id)
  {
    string slotName = InventorySlots.GetSlotName(slot_id);
    
    if (slotName == "weaponOpticsHunting")
      return true;
    if (slotName == "weaponOptics")
      return true;

    return super.IsHideableSlot(slot_id);
  }

  override bool NeedsRailAdapter()
  {
    return true;
  }
  override string GetRailAdapterName()
  {
    return "RISAdapter";
  }
};