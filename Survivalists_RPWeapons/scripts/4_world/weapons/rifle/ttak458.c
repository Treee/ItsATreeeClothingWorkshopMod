class ttak458 extends RifleBoltLock_Base
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
  override bool CanDisplayAttachmentSlot(int slot_id)
  {
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slot_id);

      ItemBase weaponOptic;
      if (slotName == "weaponOpticsAK" || slotName == "weaponOptics")
      {
        // if the adapter is not attached do not show scope slots
        if (!FindAttachmentBySlotName("AKRISAdapter"))
          return false;
        else
        {
          if (slotName == "weaponOpticsAK")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOptics")))
              return false;
          }        
          if (slotName == "weaponOptics")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOpticsAK")))
              return false;
          }
        }
      }
      if (slotName == "weaponButtstockM4")
      {
        if (!FindAttachmentBySlotName("weaponButtstockAK"))
          return false;        
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
      if (slotName == "weaponButtstockM4")
      {
        if (FindAttachmentBySlotName("weaponButtstockAK"))
          return true;
        return false;
      }
      return true;
    }
		return false;
	}

  override bool NeedsRailAdapter()
  {
    return true;
  }
  override string GetRailAdapterName()
  {
    return "weaponHandguardAK";
  }
};