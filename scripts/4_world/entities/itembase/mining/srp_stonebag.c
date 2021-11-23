class SRP_MiningCraft_StoneBagStarter extends DryBag_ColorBase
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    // Debug.Log("SRP_DrugCarton_ColorBase taking " + item);    
		if (item && item.GetType() == "Stone")
		{
      return true;
    }
		return false;
	}
};
