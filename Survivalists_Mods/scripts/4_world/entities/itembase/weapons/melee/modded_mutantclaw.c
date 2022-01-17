modded class DUB_Monsterclawkill
{
	override bool CanPutIntoHands (EntityAI parent)
	{
		EntityAI suitAttachment = parent.FindAttachmentBySlotName("Back");
    return (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)));
	}
};

modded class DUB_Monsterclawstun
{	
	override bool CanPutIntoHands (EntityAI parent)
	{
    EntityAI suitAttachment = parent.FindAttachmentBySlotName("Back");
    return (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)));
  }
};