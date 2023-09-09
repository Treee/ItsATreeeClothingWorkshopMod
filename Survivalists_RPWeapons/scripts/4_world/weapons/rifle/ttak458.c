class ttak458 extends RifleBoltFree_Base
{
  override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
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
        EntityAI attachment;
        if (Class.CastTo(attachment, FindAttachmentBySlotName("weaponButtstockAK")))
        { // if adapter, show m4 stock
          if (attachment.GetType() == "STG_AK_Stck_Adapter")
            return true;
          return false;
        }
        else // no attachment means no m4 buttstock
          return false; 
      }
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
        EntityAI butstockAttachment;
        if (Class.CastTo(butstockAttachment, FindAttachmentBySlotName("weaponButtstockAK")))
        { // if adapter, accept m4 stock
          if (butstockAttachment.GetType() == "STG_AK_Stck_Adapter")
            return true;
          return false;
        }
        else // no attachment means no m4 buttstock
          return false; 
      }
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

  override bool NeedsRailAdapter()
  {
    return true;
  }
  override string GetRailAdapterName()
  {
    return "weaponHandguardAK";
  }
};