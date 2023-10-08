modded class Pistol_Base
{
  protected int m_PistolRailSlotId;
  protected int m_PistolOpticSlotId;
  protected int m_PistolFlashlightSlotId;

  override void InitItemVariables()
  {
    super.InitItemVariables();

    m_PistolRailSlotId = InventorySlots.GetSlotIdFromString("PistolRail");
    m_PistolOpticSlotId = InventorySlots.GetSlotIdFromString("pistolOptics");
    m_PistolFlashlightSlotId = InventorySlots.GetSlotIdFromString("pistolFlashlight");
  }

  // rail stuff for tt57, ttglock,ttm9
  override bool CanDisplayAttachmentSlot(int slot_id)
  {
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      if (NeedsRailAdapter() && (slot_id == m_PistolOpticSlotId || slot_id == m_PistolFlashlightSlotId))
      {
        ItemBase pistolRail;
        if (Class.CastTo(pistolRail, FindAttachmentBySlotName("PistolRail")))
        {
          return pistolRail.ConfigGetBool("hasRailFunctionality");
        }
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
      if (NeedsRailAdapter())
      {
        if (attachment && (attachment.ConfigGetBool("NeedRIS") || attachment.IsInherited(ItemOptics) || attachment.IsInherited(Switchable_Base)))
        {
          ItemBase pistolRail;
          if (Class.CastTo(pistolRail, GetItemOnSlot("PistolRail")))
          {
            return pistolRail.ConfigGetBool("hasRailFunctionality");    
          }
          return false;
        }
      }      
      return true;
    }
		return false;
	}

  bool NeedsRailAdapter()
  {
    return false;
  }
};