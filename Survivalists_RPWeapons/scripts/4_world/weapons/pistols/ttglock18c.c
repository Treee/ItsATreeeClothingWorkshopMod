class ttglock18c extends Pistol_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ESP_PistolRail" );
		

		
		SpawnAttachedMagazine("tt57mag");
	}
};