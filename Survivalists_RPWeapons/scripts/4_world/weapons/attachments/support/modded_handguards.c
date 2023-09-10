modded class AK_WoodHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};
modded class AK74_Hndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};
modded class AK_RailHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};
modded class AK_PlasticHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};
modded class M4_PlasticHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};
modded class M4_RISHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};
modded class M4_MPHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
          return false;
      }
      return true;
    }
		return false;
	}
};