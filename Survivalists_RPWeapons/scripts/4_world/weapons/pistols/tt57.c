class tt57tan extends Pistol_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ESP_PistolRail" );
		
		SpawnAttachedMagazine("tt57mag");
	}

  override bool NeedsRailAdapter()
  {
    return true;
  }
};