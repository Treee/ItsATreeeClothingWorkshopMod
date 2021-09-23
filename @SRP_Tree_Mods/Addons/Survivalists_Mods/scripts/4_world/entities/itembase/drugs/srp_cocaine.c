class SRP_DrugBrick_Cocaine extends ItemBase {};

class SRP_DrugCraft_CocaineStarter extends DryBag_ColorBase
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    // Debug.Log("SRP_DrugCarton_ColorBase taking " + item);    
		if (item && item.GetType() == "Cocaine")
		{
      Edible_Base driedSmokable = Edible_Base.Cast( item );
      return (driedSmokable && driedSmokable.IsFoodDried());
    }
		return false;
	}
};
