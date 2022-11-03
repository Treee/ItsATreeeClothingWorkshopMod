class SRP_UnSealedLetter extends ItemBase
{
  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote")) )
			return super.CanReceiveAttachment( attachment, slotId );

		return false;
	}
};


class SRP_SealedLetter_ColorBase extends ItemBase
{ 
  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (!IsRuined())
    {
      itemName = itemName + " - Sealed";
    }
    else
    {
      itemName = itemName + " - Opened";
    }
		return itemName;
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote") || attachment.GetType() == "WrittenNote") )
			return super.CanReceiveAttachment( attachment, slotId );
		
		return false;
	}

  override bool CanDisplayAttachmentSlot( string slot_name )
	{
		return IsRuined();
	}

};
class SRP_SealedLetter_Black extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Blue extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Brown extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Green extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Pink extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Red extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_White extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Yellow extends SRP_SealedLetter_ColorBase{};
