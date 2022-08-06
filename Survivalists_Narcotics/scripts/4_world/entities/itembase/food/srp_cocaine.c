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
};
