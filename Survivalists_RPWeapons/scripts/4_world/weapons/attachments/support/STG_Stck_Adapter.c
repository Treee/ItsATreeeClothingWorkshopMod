class STG_AK_Stck_Adapter : ItemBase
{
	override bool CanDetachAttachment (EntityAI parent)
	{
		if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponButtstockM4"))
		{
			return false;
		}
		return super.CanDetachAttachment(parent);
	}
}