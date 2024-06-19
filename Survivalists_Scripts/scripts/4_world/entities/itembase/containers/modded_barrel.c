modded class Barrel_ColorBase
{
    override bool CanPutIntoHands(EntityAI parent)
	{
        Clothing eventArmbands;
        if (Class.CastTo(eventArmbands, parent.FindAttachmentBySlotName("Armband")))
        {
            if (eventArmbands.IsEventArmband())
            {
                return true;
            }
        }
		return super.CanPutIntoHands(parent);
	}
};
