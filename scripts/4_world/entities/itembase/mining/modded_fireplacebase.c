modded class FireplaceBase
{
  override void EECargoOut(EntityAI item)
	{
		super.EECargoOut(item);
    SRP_MetalBucket_Mortar mortarBucket = SRP_MetalBucket_Mortar.Cast(item);
    if (mortarBucket)
    {
      mortarBucket.ResetCounter();
    };
	}

  override protected void AddTemperatureToItemByFire( ItemBase item )
	{
    super.AddTemperatureToItemByFire(item);
    SRP_MetalBucket_Mortar mortarBucket = SRP_MetalBucket_Mortar.Cast(item);
    if (mortarBucket)
    {
      mortarBucket.AddHealth( PARAM_BURN_DAMAGE_COEF );
      mortarBucket.IncrementHeatTimer(1);
      mortarBucket.HandleHardenEvent();
    }
	}
};