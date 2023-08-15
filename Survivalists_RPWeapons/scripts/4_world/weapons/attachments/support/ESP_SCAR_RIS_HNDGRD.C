class ESP_SCAR_RIS_HNDGRD extends Inventory_Base
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
        return false;
      }
      return true;
    }
		return false;
	}
};