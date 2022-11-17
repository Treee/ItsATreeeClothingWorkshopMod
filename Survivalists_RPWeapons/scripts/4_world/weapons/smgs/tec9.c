class tec9 extends FNX45_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		
		SpawnAttachedMagazine("Mag_UMP_25Rnd");
	}
};