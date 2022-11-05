modded class ItemManager
{
  void ItemManager(Widget root)
  {
    SRP_OwnedItem_Base.SyncEvent_OnSRPOwnerInfoUpdate.Insert(OnItemInfoUpdate); // hook into our ScriptInvoker to receive updates across script modules
  }
  void ~ItemManager()
  {
    SRP_OwnedItem_Base.SyncEvent_OnSRPOwnerInfoUpdate.Remove(OnItemInfoUpdate); // unsubscribe when ItemManager is destroyed
  }

	override void PrepareTooltip(EntityAI item, int x = 0, int y = 0)
	{
		if( IsDragging() || !item )
		{
			return;
		}
    if (item.IsInherited(SRP_OwnedItem_Base))
    {
      SRP_OwnedItem_Base ownedItem = SRP_OwnedItem_Base.Cast(item);
      ownedItem.TryFetchKeyOwnerInfo();
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
