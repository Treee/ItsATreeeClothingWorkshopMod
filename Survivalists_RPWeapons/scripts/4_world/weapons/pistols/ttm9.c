class ttm9 extends Pistol_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ESP_PistolRail" );
		
	}
	override bool CanDisplayAttachmentSlot( string slot_name)
  {
    if ( slot_name == "pistolOptics" )
    {
      return ( this.FindAttachmentBySlotName("PistolRail") != NULL && this.FindAttachmentBySlotName("PistolRail").ConfigGetBool("hasRailFunctionality") == true );
    }
    return true;
  }
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if(!IsInitialized() && !attachment.IsInitialized())
		{
		  return true;
		};
    if ( attachment.ConfigGetBool("NeedRIS")|| attachment.IsKindOf("ItemOptics"))
    {
      if ( this.FindAttachmentBySlotName("PistolRail") != NULL && this.FindAttachmentBySlotName("PistolRail").ConfigGetBool("hasRailFunctionality") )
      {
        return true;
      }
      return false;
    }
		return true;
	}
};