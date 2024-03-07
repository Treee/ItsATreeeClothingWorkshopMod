class ttsok94 extends RifleBoltFree_Base
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

    SpawnAttachedMagazine("Mag_AKM_Drum75Rnd_Green");
	}	
  override bool CanDisplayAttachmentSlot(int slot_id)
  {
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slot_id);

      ItemBase weaponOptic;
      if (slotName == "weaponOpticsAK" || slotName == "weaponOpticsHunting")
      {
        // if the adapter is not attached do not show scope slots
        if (!FindAttachmentBySlotName("AKRISAdapter"))
          return false;
        else
        {
          if (slotName == "weaponOpticsAK")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOpticsHunting")))
              return false;
          }        
          if (slotName == "weaponOpticsHunting")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOpticsAK")))
              return false;
          }
        }
      }
      if (slotName == "weaponFlashlight")
      {
        if (FindAttachmentBySlotName("weaponHandguardAK"))
          return true; // show slot when handguard is attached
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
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slotId);

      ItemBase weaponOptic;
      if (slotName == "weaponOpticsAK" || slotName == "weaponOpticsHunting")
      {
        // if the adapter is not attached do not show scope slots
        if (!FindAttachmentBySlotName("AKRISAdapter"))
          return false;
        else
        {
          if (slotName == "weaponOpticsAK")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOpticsHunting")))
              return false;
          }        
          if (slotName == "weaponOpticsHunting")
          {
            if (Class.CastTo(weaponOptic, FindAttachmentBySlotName("weaponOpticsAK")))
              return false;
          }
        }
      }
      if (slotName == "weaponFlashlight")
      {
        if (FindAttachmentBySlotName("weaponHandguardAK"))
          return true; // show slot when handguard is attached
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
    return "AKRISAdapter";
  }

};