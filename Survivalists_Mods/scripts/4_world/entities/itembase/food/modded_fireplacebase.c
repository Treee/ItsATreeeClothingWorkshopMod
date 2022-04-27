modded class FireplaceBase
{
	const float FUEL_BURN_RATE_DEFAULT				= 0.5; // 1 by default; 50% reduction
	const float FUEL_BURN_RATE_STONES				= 0.35; // 0.92 by default; 60% reduction
	const float FUEL_BURN_RATE_OVEN					= 0.20; // 0.85 by default; 75% reduction

  int m_IrradiatedFuelCount = 0;

  override protected FireConsumable GetItemToConsume()
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

  override void EEInit()
	{
		super.EEInit();
    // Print("[FireplaceBase] - [EEInit] - Start");
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
      // Print("[FireplaceBase] - [EEInit] - IS COMFORT HEAT SOURCE");
      m_UTSource.SetIsComfortHeatSource(true);
		}		
	}

  override protected bool IsKindling( ItemBase item )
	{
    bool isKindling = super.IsKindling(item);
		if ( item.GetType() == "Bark_Oak_Irradiated" || item.GetType() == "Bark_Birch_Irradiated" )
		{
			isKindling = true;
		}
		return isKindling;
	}

	//returns if item attached to fireplace is fuel
	override protected bool IsFuel( ItemBase item )
	{
		bool isFuel = super.IsFuel(item);
		if ( item.GetType() == "Firewood_Irradiated" || item.GetType() == "WoodenStick_Irradiated" )
		{
			isFuel = true;
		}
		return isFuel;
	}

  
	override protected float GetFireConsumableTypeEnergy( ItemBase item )
	{
		float energy = super.GetFireConsumableTypeEnergy(item);
    if (energy == 0)
    {
      if (item.GetType() == "WoodenStick_Irradiated")
      {
        energy = 40;
      }
      else if (item.GetType() == "Firewood_Irradiated")
      {
        energy = 100;
      }
      else if (item.GetType() == "Bark_Oak_Irradiated")
      {
        energy = 20;
      }
      else if (item.GetType() == "Bark_Birch_Irradiated")
      {
        energy = 14;
      }
    }
    return energy;
	}
}