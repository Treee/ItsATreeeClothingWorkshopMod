class SRP_DrugBrick_Cocaine extends ItemBase{};
class SRP_DrugBrick_CocaineTainted extends SRP_DrugBrick_Cocaine{};

class SRP_DrugCraft_CocaineStarter extends DryBag_ColorBase
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    // Debug.Log("SRP_DrugCarton_ColorBase taking " + item);    
		if (item && item.GetType() == "Cocaine")
		{
      return true;
    }
		return false;
	}

  bool IsReadyToCraft()
  {
    bool isReady = true;
    for(int i = 1; i < 11; i++)
    {
      ItemBase plantMaterial = GetItemOnSlot(string.Format("PlantMaterial%1",i));
      if (plantMaterial)
      {
        Edible_Base edible = Edible_Base.Cast(plantMaterial);
        if (edible)
        {
          isReady &= edible.IsFoodDried();
        }
      }
      if (!isReady)
      {
        break;
      }
    }
    return isReady;
  }
};
