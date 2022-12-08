class ttscarl extends RifleBoltLock_Base
{
  // override bool CanEnterIronsights()
	// {
	// 	ItemOptics optic = GetAttachedOptics();
	// 	if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KazuarOptic.Cast(optic))
	// 		return true;
	// 	return super.CanEnterIronsights();
	// }
	override bool CanDisplayAttachmentSlot( string slot_name)
  {
    if ( slot_name == "RISLeft" )
		{
      return	( this.FindAttachmentBySlotName("ScarHndGrd") != NULL && this.FindAttachmentBySlotName("ScarHndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
      return	( this.FindAttachmentBySlotName("ScarHndGrd") != NULL && this.FindAttachmentBySlotName("ScarHndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
      return	( this.FindAttachmentBySlotName("ScarHndGrd") != NULL && this.FindAttachmentBySlotName("ScarHndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		return true;
  }
    
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ESP_SCAR_URGI_HNDGRD_Black" );
		inventory.CreateInInventory( "ESP_Wrapped_Suppressor_Green" );
		inventory.CreateInInventory( "ESP_SCAR_Collapse_Stck_Tan" );
    inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "Battery9V" );
    inventory.CreateInInventory( "ESP_RedDot" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Mag_STANAG_60Rnd");
	}
};

class ttscarl_Tan extends ttscarl{};