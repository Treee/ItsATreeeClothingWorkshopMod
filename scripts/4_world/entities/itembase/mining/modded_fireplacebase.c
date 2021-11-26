modded class FireplaceBase
{
  int m_DamageCounter = 0;

  protected void AddTemperatureToItemByFire( ItemBase item )
	{
    super.AddTemperatureToItemByFire(item);
    SRP_MetalBucket_Mortar mortarBucket = SRP_MetalBucket_Mortar.Cast(item);
    if (mortarBucket)
    {
      item.AddHealth( PARAM_BURN_DAMAGE_COEF );
      m_DamageCounter++;
      if (m_DamageCounter > 600)
      {
        mortarBucket.Delete();
        GetGame().CreateObject("SRP_ForgeCrucible_Empty", this.GetPosition(), false);
      }
    }
	}
};