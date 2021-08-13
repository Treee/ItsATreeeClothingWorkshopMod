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

  bool HasAllConsumableAttachments()
  {
    return HasGasCanister() && HasLargeBattery() && HasLightBulb() && HasDisinfectant() && HasChemlight() && HasMaterial_MetalSheets() && HasMaterial_MetalWire();
  }

  bool HasEnoughConsumableAttachments_Meth()
  {
    bool hasGas = HasQuantity("GasCanister", 20);
    bool hasBattery = HasQuantity("LargeBattery", 50);
    bool hasDisinfectant = HasQuantity("Disinfectant", 20);
    bool hasChemlight = HasQuantity("Chemlight", 100);
    bool hasMetalSheets = HasQuantity("Material_MetalSheets", 5);
    return hasGas && hasBattery && hasDisinfectant && hasChemlight && hasMetalSheets;
  }

  bool HasEnoughConsumableAttachments_Acid()
  {
    bool hasGas = HasQuantity("GasCanister", 10);
    bool hasBattery = HasQuantity("LargeBattery", 100);
    bool hasDisinfectant = HasQuantity("Disinfectant", 5);
    bool hasChemlight = HasQuantity("Chemlight", 50);
    bool hasMetalSheets = HasQuantity("Material_MetalSheets", 10);
    return hasGas && hasBattery && hasDisinfectant && hasChemlight && hasMetalSheets;
  }

  bool HasEnoughConsumableAttachments_Salts()
  {
    bool hasGas = HasQuantity("GasCanister", 5);
    bool hasBattery = HasQuantity("LargeBattery", 75);
    bool hasDisinfectant = HasQuantity("Disinfectant", 50);
    bool hasChemlight = HasQuantity("Chemlight", 100);
    bool hasMetalSheets = HasQuantity("Material_MetalSheets", 15);
    return hasGas && hasBattery && hasDisinfectant && hasChemlight && hasMetalSheets;
  }

  void ReduceAttachmentQuantities_Meth()
  {
    ReduceQuantity("GasCanister", -20);
    ReduceQuantity("LargeBattery", -50);
    ReduceQuantity("Disinfectant", -20);
    ReduceQuantity("Chemlight", 100);
    ReduceQuantity("Material_MetalSheets", -5);
  }

  void ReduceAttachmentQuantities_Acid()
  {
    ReduceQuantity("GasCanister", -10);
    ReduceQuantity("LargeBattery", -100);
    ReduceQuantity("Disinfectant", -5);
    ReduceQuantity("Chemlight", 50);
    ReduceQuantity("Material_MetalSheets", -10);
  }

  void ReduceAttachmentQuantities_Salts()
  {
    ReduceQuantity("GasCanister", -5);
    ReduceQuantity("LargeBattery", -75);
    ReduceQuantity("Disinfectant", -50);
    ReduceQuantity("Chemlight", 100);
    ReduceQuantity("Material_MetalSheets", -15);
  }

  void ReduceQuantity(string attachment, int quantityToReduce)
  {
    ItemBase item = ItemBase.Cast(FindAttachmentBySlotName(attachment));
    if (item)
    {
      item.AddQuantity(quantityToReduce);
    }    
  }

  bool HasQuantity(string attachment, int quantityRequired)
  {
    ItemBase item = ItemBase.Cast(FindAttachmentBySlotName(attachment));
    if (item)
    {
      return item.GetQuantity() >= quantityRequired;
    }
    return false;
  }

  bool HasGasCanister()
  {
    return FindAttachmentBySlotName("GasCanister") != null;
  }  
  bool HasLargeBattery()
  {
    return FindAttachmentBySlotName("LargeBattery") != null;
  }
  bool HasLightBulb()
  {
    return FindAttachmentBySlotName("LightBulb") != null;
  }
  bool HasDisinfectant()
  {
    return FindAttachmentBySlotName("Disinfectant") != null;
  }
  bool HasChemlight()
  {
    return FindAttachmentBySlotName("Chemlight") != null;
  }
  bool HasMaterial_MetalSheets()
  {
    return FindAttachmentBySlotName("Material_MetalSheets") != null;
  }
  bool HasMaterial_MetalWire()
  {
    return FindAttachmentBySlotName("Material_MetalWire") != null;
  }
}