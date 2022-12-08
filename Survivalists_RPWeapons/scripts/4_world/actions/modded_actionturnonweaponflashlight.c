modded class ActionTurnOnWeaponFlashlight
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if ( item.IsInherited(Rifle_Base) )
		{
      ItemBase risAttachment;
      if (Class.CastTo(risAttachment, item.FindAttachmentBySlotName("weaponFlashlight")))
      {
        m_flashlight = risAttachment;
      }
      if (Class.CastTo(risAttachment, item.FindAttachmentBySlotName("RISLeft")))
      {
        if (risAttachment.GetType() == "UniversalLight" && CanSwitchLightOn(risAttachment))
        {
          m_flashlight = risAttachment;
        }
      }
      if (Class.CastTo(risAttachment, item.FindAttachmentBySlotName("RISRight")))
      {
        if (risAttachment.GetType() == "UniversalLight" && CanSwitchLightOn(risAttachment))
        {
          m_flashlight = risAttachment;
        }
      }
      if (Class.CastTo(risAttachment, item.FindAttachmentBySlotName("RISBottom")))
      {
        if (risAttachment.GetType() == "UniversalLight" && CanSwitchLightOn(risAttachment))
        {
          m_flashlight = risAttachment;
        }
      }

      if ( m_flashlight && CanSwitchLightOn(m_flashlight) ) //TODO review conditions for turning off
      {
        return true;
      }
      return false;
		}
    else
    {
      return super.ActionCondition(player, target, item);
    }
	}

  bool CanSwitchLightOn(ItemBase item)
  {
    return (item.HasEnergyManager() && item.GetCompEM().CanSwitchOn() && item.GetCompEM().CanWork());
  }
};