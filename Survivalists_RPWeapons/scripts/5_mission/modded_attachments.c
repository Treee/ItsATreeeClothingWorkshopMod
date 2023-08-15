modded class Attachments
{
  override void UpdateInterval()
	{
		SlotsIcon icon;
		int slot_id;
		m_AttachmentSlotDisplayable.Clear();
		int i = 0;
		for (i = m_AttachmentSlotNames.Count() - 1; i >=0; --i)
		{
			slot_id = InventorySlots.GetSlotIdFromString( m_AttachmentSlotNames[i] );
			if (m_Entity.CanDisplayAttachmentSlot(slot_id))
			{
				m_AttachmentSlotDisplayable.Insert(m_AttachmentSlotNames[i]);
			}
			else
			{
				icon = m_AttachmentSlots.Get( slot_id );
				if (icon)
				{
					icon.GetMainWidget().Show( false );
					if( GetFocusedSlotsIcon() == icon )
					{
						SetDefaultFocus();
					}
					// radial icon (collabsable icon handling)
					icon.UpdateInterval();
				}
			}
			
		}
		
		if ( m_AttachmentSlotDisplayable.Count() == 0 )
		{
			if (m_Parent)
			{
				m_Parent.UpdateRadialIcon();
				//m_Parent.Close();
			}
		}
		
		for (i = 0; i < m_AttachmentSlotDisplayable.Count(); ++i)
		{
			slot_id = InventorySlots.GetSlotIdFromString( m_AttachmentSlotDisplayable[i] );
			icon = m_AttachmentSlots.Get( slot_id );
			EntityAI item = icon.GetEntity();
			icon.GetMainWidget().Show( true );
			icon.UpdateInterval();
			if ( item )
			{
				bool draggable = true;
				if(icon.IsReserved())
				{
					draggable = false;
				}
				
				if( m_Entity.GetInventory().GetSlotLock( slot_id ) && ItemManager.GetInstance().GetDraggedItem() != item )
				{
					icon.GetMountedWidget().Show( true );
					draggable = false;
				}
				else
				{
					icon.GetMountedWidget().Show( false );
				}
				
				PlayerBase p = PlayerBase.Cast( GetGame().GetPlayer() );
				bool in_hands_condition		= m_Entity.GetHierarchyRoot() && item.GetInventory().CanRemoveEntity();
				bool in_vicinity_condition	= !m_Entity.GetHierarchyRoot() && AttachmentsOutOfReach.IsAttachmentReachable( m_Entity, m_AttachmentSlotDisplayable[i] );
				if( in_hands_condition || in_vicinity_condition )
				{
					icon.GetOutOfReachWidget().Show( false );
				}
				else
				{
					icon.GetOutOfReachWidget().Show( true );
					draggable = false;
				}
				
				if( draggable )
				{
					icon.GetPanelWidget().SetFlags( WidgetFlags.DRAGGABLE );
				}
				else
				{
					icon.GetPanelWidget().ClearFlags( WidgetFlags.DRAGGABLE );
				}
			}
		}
		m_AttachmentsContainer.GetRootWidget().Update();
	}
};