modded class UniversalLight
{
  //! Enter att slot types to check on attach
  void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
  {
    super.InitAttachmentsSlotsToCheck(AttSlots);
    if (AttSlots)
    {
      AttSlots.Insert(InventorySlots.GetSlotIdFromString("ScarHndGrd"));  
    }
  }
}