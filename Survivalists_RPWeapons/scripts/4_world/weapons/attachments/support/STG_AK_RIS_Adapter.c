class STG_AK_RIS_Adapter extends ItemBase
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && (parent.FindAttachmentBySlotName("weaponOpticsHunting") || parent.FindAttachmentBySlotName("weaponOptics")))
		{
			return false;
		}
		return super.CanDetachAttachment(parent);
	}
}