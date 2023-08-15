class STG_AK_Stck_Adapter extends ItemBase
{
	override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("weaponButtstockM4"))
          return false;
      }
      return true;
    }
		return false;
	}
};