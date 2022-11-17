class aek extends AK101_Base
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
				
		inventory.CreateInInventory( "STG_PBS5_Suppressor" );
		inventory.CreateInInventory( "ESP_Short_Range" );
		inventory.CreateInInventory( "Battery9V" );
    
		SpawnAttachedMagazine("Mag_AK101_30Rnd_Black");
	}	
};