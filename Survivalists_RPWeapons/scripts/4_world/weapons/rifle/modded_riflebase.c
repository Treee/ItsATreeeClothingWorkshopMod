modded class Rifle_Base
{
  protected int m_RISLeftSlotId;
  protected int m_RISRightSlotId;
  protected int m_RISBottomSlotId;

  override void InitItemVariables()
  {
    super.InitItemVariables();

    m_RISLeftSlotId = InventorySlots.GetSlotIdFromString("RISLeft");
    m_RISRightSlotId = InventorySlots.GetSlotIdFromString("RISRight");
    m_RISBottomSlotId = InventorySlots.GetSlotIdFromString("RISBottom");
  }

  // rail stuff for ar15, sa80a etc
  override bool CanDisplayAttachmentSlot(int slot_id)
  {
    if (super.CanDisplayAttachmentSlot(slot_id))
    {
      if (NeedsRailAdapter() && IsHideableSlot(slot_id))
      {
        ItemBase rifleRail;
        string rifleRailAdapterName = GetRailAdapterName();
        if (rifleRailAdapterName == "")
          return true;
        if (Class.CastTo(rifleRail, FindAttachmentBySlotName(rifleRailAdapterName)))
          return rifleRail.ConfigGetBool("hasRailFunctionality");
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
      if (NeedsRailAdapter() && IsHideableSlot(slotId))
      {
        if (attachment && (attachment.ConfigGetBool("NeedRIS") || attachment.IsInherited(ItemOptics) || attachment.IsInherited(Switchable_Base)))
        {
          ItemBase rifleRail;
          string rifleRailAdapterName = GetRailAdapterName();
          if (rifleRailAdapterName == "")
            return true;
          if (Class.CastTo(rifleRail, FindAttachmentBySlotName(rifleRailAdapterName)))
            return rifleRail.ConfigGetBool("hasRailFunctionality");
          return false;
        }
        return true;
      }
      return true;
    }
		return false;
	}

  bool IsHideableSlot(int slot_id)
  {
    string slotName = InventorySlots.GetSlotName(slot_id);
    
    if (slotName == "RISLeft")
      return true;
    if (slotName == "RISRight")
      return true;
    if (slotName == "RISBottom")
      return true;

    return false;
  }
  bool NeedsRailAdapter()
  {
    return false;
  }
  string GetRailAdapterName()
  {
    return "";
  }
};