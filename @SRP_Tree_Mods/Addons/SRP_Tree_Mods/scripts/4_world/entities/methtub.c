class SRP_DrugWorkbench extends ItemBase
{  
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);		
  }

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}

  override bool CanPutIntoHands( EntityAI parent )
	{
		if ( !super.CanPutIntoHands( parent ) )
			return false;
  
    CargoBase tubInventory = GetInventory().GetCargo();
    if (tubInventory && tubInventory.GetItemCount() != 0) {
      return false;
    }

		return true;
	}

  bool HasMethRecipe()
  {
    return FindAttachmentBySlotName("MethRecipe") != null;
  }
  bool HasAcidRecipe()
  {
    return FindAttachmentBySlotName("AcidRecipe") != null;
  }
  bool HasBathSaltsRecipe()
  {
    return FindAttachmentBySlotName("BathSaltsRecipe") != null;
  }
}