class ESP_M110 extends M4A1_Base
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
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "ESP_Wrapped_Suppressor" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "SRP_ButtstockPouch_Purple" );

    
    SpawnAttachedMagazine("Mag_FAL_20Rnd");
	}	
};

class ESP_M110_Tan extends ESP_M110{};
class ESP_M110_Green extends ESP_M110{};
