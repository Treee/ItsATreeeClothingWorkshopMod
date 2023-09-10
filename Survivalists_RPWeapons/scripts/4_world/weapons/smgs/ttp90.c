class ttp90 extends RifleBoltLock_Base
{
  override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
	}
  //some command is different for this weapon
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.CHAMBERING)
		{
			switch (subCommand)
			{
				case WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_UNIQUE_CLOSED:
					return WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_OPENED;
				
				default:
					return subCommand;
			}
		}
		return subCommand;
	}
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
  
  override bool NeedsRailAdapter()
  {
    return true;
  }
  override string GetRailAdapterName()
  {
    return "ESP_P90_UpgradeKit";
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

  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
    if (super.CanReceiveAttachment(attachment, slotId))
    {
      // restrict only one optic showing at a time when others are attached
      string slotName = InventorySlots.GetSlotName(slotId);

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