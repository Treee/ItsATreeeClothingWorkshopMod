class ttglock18c extends Pistol_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ESP_PistolRail" );
		
		SpawnAttachedMagazine("Mag_Glock_15Rnd");
	}

  override bool NeedsRailAdapter()
  {
    return true;
  }
};