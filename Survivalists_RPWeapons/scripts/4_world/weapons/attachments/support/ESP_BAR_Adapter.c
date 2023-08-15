class ESP_RIS_Adapter extends ItemBase
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("weaponOpticsHunting"))
          return false;
        if (parent.FindAttachmentBySlotName("weaponOptics"))
          return false;
      }
      return true;
    }
		return false;
	}
};