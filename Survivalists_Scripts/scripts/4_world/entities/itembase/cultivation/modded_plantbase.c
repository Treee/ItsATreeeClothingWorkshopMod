modded class PlantBase
{
	void Harvest( PlayerBase player )
	{
    if (player && player.IsInBioZone() && (m_CropsType == "Cannabis" || m_CropsType == "Pumpkin"))
    {
      if ( !IsSpoiled() )
      {
        for ( int i = 0; i < m_CropsCount; i++ )
        {
          vector pos = player.GetPosition();
          ItemBase item = ItemBase.Cast( GetGame().CreateObjectEx( m_CropsType + "_Irradiated", pos, ECE_PLACE_ON_SURFACE ) );
          item.SetQuantity( item.GetQuantityMax() );
        }
      }      
      m_HasCrops = false;
      SetSynchDirty();
      UpdatePlant();
    }
    else
    {
      super.Harvest(player);
    }
	}
};