class ttar9 extends M4A1_Base
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
		inventory.CreateInInventory( "MakarovPBSuppressor" );
		inventory.CreateInInventory( "Battery9V" );
    
    SpawnAttachedMagazine("Mag_MP5_30Rnd");
	}	
};
