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

// modded class ActionHarvestCrops
// {
// 	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
// 		GardenBase garden_base;
// 		if ( Class.CastTo(garden_base, target.GetObject()))
// 		{
// 			Slot slot = GetPlantSlot(target);
// 			print(string.Format("slot: %1 plant: %2", slot, slot.GetPlant()));
// 			if (slot)
// 			{
// 				m_Plant = PlantBase.Cast(slot.GetPlant());
// 				bool is_mature = m_Plant.IsMature();
// 				bool is_spoiled = m_Plant.IsSpoiled();
// 				bool has_crops = m_Plant.HasCrops();
// 				int plant_state = m_Plant.GetPlantState();
//         print(string.Format("type: %1 mature: %2 spoiled: %3 crops: %4 state: %5", m_Plant.GetType(), is_mature, is_spoiled, has_crops, plant_state));
// 				if ( is_mature && has_crops )
// 				{
// 					return true;
// 				}
// 			}
// 		}
// 		return false;

// 	}
// };

// modded class ActionRemovePlant
// {
// 	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
// 		GardenBase garden_base;
// 		if ( Class.CastTo(garden_base, target.GetObject()))
// 		{
// 			Slot slot;
			
// 			array<string> selections = new array<string>;
// 			garden_base.GetActionComponentNameList(target.GetComponentIndex(), selections);
// 			string selection;      
//       print(string.Format("looking at: %1", target.GetComponentIndex()));

// 			for (int s = 0; s < selections.Count(); s++)
// 			{
// 				selection = selections[s];
// 				slot = garden_base.GetSlotBySelection( selection );
//         print(string.Format("selection: %1 slot: %2", selection, slot));
// 				if (slot)
// 					break;
// 			}
			
// 			if ( slot && slot.GetPlant() )
// 			{
// 				m_Plant = PlantBase.Cast(slot.GetPlant());
// 				if ( m_Plant.IsGrowing()  ||  m_Plant.IsDry()  ||  !m_Plant.HasCrops() || m_Plant.IsSpoiled())
// 				{
// 					return true;
// 				}
// 			}
// 		}
// 		return false;
// 	}  
// };