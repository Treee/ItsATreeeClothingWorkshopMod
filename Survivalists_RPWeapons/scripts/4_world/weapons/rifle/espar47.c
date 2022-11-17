class ESPAR47 extends M4A1_Base
{
  // override bool CanEnterIronsights()
	// {
	// 	ItemOptics optic = GetAttachedOptics();
	// 	if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KazuarOptic.Cast(optic))
	// 		return true;
	// 	return super.CanEnterIronsights();
	// }
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
				
		inventory.CreateInInventory( "ESP_Short_Range" );
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "STG_PBS5_Suppressor" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "ESP_M16_Stck_Black" );
		inventory.CreateInInventory( "ESP_RIS_Erg_HndGrd_Tan" );
    
    SpawnAttachedMagazine("Mag_AKM_Drum75Rnd_Black");
	}	
};
