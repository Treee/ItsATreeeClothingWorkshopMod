class ESP_PistolRail extends ItemBase
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("pistolOptics"))
          return false;
        if (parent.FindAttachmentBySlotName("pistolFlashlight"))
          return false;
      }
      return true;
    }
		return false;
	}
};