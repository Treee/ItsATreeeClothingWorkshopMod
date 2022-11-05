class SRP_UnSealedLetter extends ItemBase
{
  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote")) )
			return super.CanReceiveAttachment( attachment, slotId );

		return false;
	}

  bool CanBeSealed()
  {
    return !IsRuined() && GetInventory().AttachmentCount() > 0;
  }
};
