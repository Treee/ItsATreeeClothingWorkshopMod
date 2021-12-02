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
    SRP_ForgeIngotMold_Mortar mortarIngotMold = SRP_ForgeIngotMold_Mortar.Cast(item);
    if (mortarIngotMold)
    {
      mortarIngotMold.ResetCounter();
    };
    SRP_ForgeCrucible_Empty crucible = SRP_ForgeCrucible_Empty.Cast(item);
    if (crucible)
    {
      crucible.ResetCounter();
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
    SRP_ForgeIngotMold_Mortar mortarIngotMold = SRP_ForgeIngotMold_Mortar.Cast(item);
    if (mortarIngotMold)
    {
      mortarIngotMold.AddHealth( PARAM_BURN_DAMAGE_COEF );
      mortarIngotMold.IncrementHeatTimer(1);
      mortarIngotMold.HandleHardenEvent();
    }
    SRP_ForgeCrucible_Empty crucible = SRP_ForgeCrucible_Empty.Cast(item);
    if (crucible)
    {
      crucible.AddHealth( PARAM_BURN_DAMAGE_COEF );
      crucible.IncrementHeatTimer(1);
      crucible.HandleHardenEvent();
    }
	}
};