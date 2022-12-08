class ESPAR22 extends RifleBoltLock_Base
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
      return	( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
      return	( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
      return	( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
    return true;
  }
	
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
				
		inventory.CreateInInventory( "ESP_Short_Range" );
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "ESP_M16_Stck_Black" );
		inventory.CreateInInventory( "ESP_RIS_Erg_HndGrd_Tan" );
    
    SpawnAttachedMagazine("Mag_Ruger1022_30Rnd");
	}	
};
