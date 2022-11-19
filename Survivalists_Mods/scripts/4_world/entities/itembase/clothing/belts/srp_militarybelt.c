class SRP_Military_Belt_ColorBase extends MilitaryBelt
{
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo( parent ) )
		{
			return false;
		}
		
		return IsEmpty();
	}

	override bool CanReceiveAttachment( EntityAI attachment,int slotId )
	{
    if (attachment && (InventorySlots.GetSlotName(slotId) == "Belt_Right" || InventorySlots.GetSlotName(slotId) == "VestHolster" || InventorySlots.GetSlotName(slotId) == "Belt_Back"))
    {
      if (attachment.GetType() == "PlateCarrierPouches" || attachment.IsInherited(PlateCarrierPouches))
      {
        return false;
      }
    }

    if (IsSheathSlotId(slotId))
    {
      return CanEquipSheath();
    }
		return super.CanReceiveAttachment( attachment, slotId );
	}

  bool CanEquipSheath()
  {
    bool canEquip = true;
    // if any slot is equipped then a sheath cannot be attached
    TStringArray sheathSlots = GetSheathSlots();
    foreach( string sheathslot : sheathSlots)
    {
      canEquip &= (FindAttachmentBySlotName(sheathslot) == NULL);
    }
    return canEquip;
  }

  bool IsSheathSlotId(int slotId)
  {
    string slotName = InventorySlots.GetSlotName(slotId);

    TStringArray sheathSlots = GetSheathSlots();
    foreach( string sheathslot: sheathSlots)
    {
      if (sheathslot == slotName)
      {
        return true;
      }      
    }    
    return false;
  }
	
  TStringArray GetSheathSlots()
  {
    return {
      "SRP_KatanaSheath",
      "SRP_MasterSwordSheath",
    };
  }
};
class SRP_Military_Belt_Green extends SRP_Military_Belt_ColorBase{};
class SRP_Military_Belt_Black extends SRP_Military_Belt_ColorBase{};
class SRP_Military_Belt_Tan extends SRP_Military_Belt_ColorBase{};
