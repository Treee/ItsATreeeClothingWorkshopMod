class SRP_WeaponCraftingKitBase extends ItemBase
{
  override bool IsCraftingKit()
  {
    return true;
  }

  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}

  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }
	// const int STATE_RUINED 		 	= 4;
	// const int STATE_BADLY_DAMAGED 	= 3;
	// const int STATE_DAMAGED 	  	= 2;
	// const int STATE_WORN 		  	= 1;
	// const int STATE_PRISTINE 	  	= 0;
  bool HasAttachmentFilledWithHealthLevel(string slotName, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState;
    }
    return false;
  }

  bool HasAttachmentFilledWithItem(string slotName, string itemName, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment && attachment.GetType() == itemName)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState;
    }
    return false;
  }

  bool HasAttachmentFilledWithItemAndQuantity(string slotName, string itemName, int quantity=0, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment && attachment.GetType() == itemName)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState && attachment.GetQuantity() >= quantity;
    }
    return false;
  }

  bool HasAttachmentFilledWithQuantity(string slotName, int quantity=0, int maxItemDamageState=1)
  {
    EntityAI attachment = FindAttachmentBySlotName(slotName);
    if (attachment)
    {
      return attachment.GetHealthLevel() <= maxItemDamageState && attachment.GetQuantity() >= quantity;
    }
    return false;
  }

  bool HasAllAttachmentsFilled()
  {
    return false;
  }

  bool AreCorrectTypesAndSlots(TStringArray slots, TStringArray types)
  {
    bool isValid = true;
    for(int slotIndex=0; slotIndex<slots.Count(); slotIndex++)
    {
      isValid &= HasAttachmentFilledWithItem(slots.Get(slotIndex), types.Get(slotIndex));
      // if any slot is invalid, break the look 
      if (!isValid)
      {
        break;
      }
    }
    return isValid;
  }
  
  void DamageAttachments()
  {
  }

  void DamageItemSlot(string slotName, int minDamage=0, int maxDamage=10)
  {
  }

  bool CanCraft()
  {
    return false;
  }
};