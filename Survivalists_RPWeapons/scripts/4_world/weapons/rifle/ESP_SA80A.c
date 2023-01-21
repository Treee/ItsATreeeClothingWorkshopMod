class ESP_SA80a : RifleBoltLock_Base
{



	override bool CanDisplayAttachmentSlot( string slot_name)
    {
        if ( slot_name == "RISLeft" )
		{
            return	( this.FindAttachmentBySlotName("SA80HndGrd") != NULL && this.FindAttachmentBySlotName("SA80HndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
            return	( this.FindAttachmentBySlotName("SA80HndGrd") != NULL && this.FindAttachmentBySlotName("SA80HndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
            return	( this.FindAttachmentBySlotName("SA80HndGrd") != NULL && this.FindAttachmentBySlotName("SA80HndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		return true;
    }
};