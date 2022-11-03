modded class ItemManager
{
  void ItemManager(Widget root)
  {
    SRP_PostBoxKeys_ColorBase.SyncEvent_OnPostBoxKeysInfoUpdate.Insert(OnItemInfoUpdate); // hook into our ScriptInvoker to receive updates across script modules
  }
  void ~ItemManager()
  {
    SRP_PostBoxKeys_ColorBase.SyncEvent_OnPostBoxKeysInfoUpdate.Remove(OnItemInfoUpdate); // unsubscribe when ItemManager is destroyed
  }

	override void PrepareTooltip(EntityAI item, int x = 0, int y = 0)
	{
		if( IsDragging() || !item )
		{
			return;
		}
    if (item.IsInherited(SRP_PostBoxKeys_ColorBase))
    {
      SRP_PostBoxKeys_ColorBase keys = SRP_PostBoxKeys_ColorBase.Cast(item);
      keys.TryFetchKeyOwnerInfo();
    }
		super.PrepareTooltip(item,x,y);
	}

  void OnItemInfoUpdate(EntityAI item)
  {
    if (m_HoveredItem != item)
      return;
    
    InspectMenuNew.UpdateItemInfo( m_TooltipWidget, item );    
  }
};
