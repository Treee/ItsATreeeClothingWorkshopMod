class ESP_PistolRail extends ItemBase
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && (parent.FindAttachmentBySlotName("pistolOptics")))
		{
			return false;
		}
		return super.CanDetachAttachment(parent);
	}
};