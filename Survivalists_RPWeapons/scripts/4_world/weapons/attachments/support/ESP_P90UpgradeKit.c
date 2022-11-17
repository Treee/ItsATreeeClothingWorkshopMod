class ESP_P90_UpgradeKit extends ItemBase
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && (parent.FindAttachmentBySlotName("weaponFlashlight") || parent.FindAttachmentBySlotName("pistolFlashlight")))
		{
			return false;
		}
		return super.CanDetachAttachment(parent);
	}
}