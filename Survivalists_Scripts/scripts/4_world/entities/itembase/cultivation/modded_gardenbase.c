modded class GardenBase
{
  void HarvestAllPlots(PlayerBase player)
  {
    PlantBase plant;
    foreach (Slot plantSlot : m_Slots)
    {
      if (Class.CastTo(plant, plantSlot.GetPlant()))
      {
        // Print("plant found while harvesting: " + plant.GetType());
        if (!plant.IsSpoiled() && plant.IsMature() && plant.HasCrops())
        {
			    plant.Harvest( player );
        }
        else
        {
          plant.RemovePlantEx( player.GetPosition() );
        }
      }
    }
  }

  bool HasAnySeedsAttached()
  {
    return GetInventory().AttachmentCount() > 0;
  }
};