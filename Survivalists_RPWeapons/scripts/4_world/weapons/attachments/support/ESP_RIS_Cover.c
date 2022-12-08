class ESP_RIS_Cover_Colorbase : ItemBase
{
	ref array<int> 		m_AttachmentSlotsCheck;
    
	void ESP_RIS_Cover_Colorbase()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
      AttSlots.Insert(InventorySlots.GetSlotIdFromString("ScarHndGrd"));  
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));   
		}
	}
};