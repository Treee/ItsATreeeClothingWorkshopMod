modded class FireplaceBase
{
	const float FUEL_BURN_RATE_DEFAULT				= 0.5; // 1 by default; 50% reduction
	const float FUEL_BURN_RATE_STONES				= 0.35; // 0.92 by default; 60% reduction
	const float FUEL_BURN_RATE_OVEN					= 0.20; // 0.85 by default; 75% reduction

  protected FireConsumable GetItemToConsume()
	{
    m_UTSource.SetIsRadioactiveSource(false);
    // Print("[FireplaceBase] - [FireConsumable] - [GetItemToConsume]");
    if (m_ItemToConsume && m_ItemToConsume.GetItem() && m_ItemToConsume.GetItem().GetType().Contains("_Irradiated"))
    {
      // Print("[FireplaceBase] - [FireConsumable] - [GetItemToConsume]=====================IRADIATED!!");
      m_UTSource.SetIsRadioactiveSource(true);
    }
    return super.GetItemToConsume();		
	}
}