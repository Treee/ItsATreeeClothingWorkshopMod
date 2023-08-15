class ttm9 extends Pistol_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "ESP_PistolRail" );
	}

  override bool NeedsRailAdapter()
  {
    return true;
  }
};