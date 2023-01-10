class SRP_CraftingMaterial_Dye_Base extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSRPRecolorClothingOption);
	}

  void ReduceQuantityBySlotType(int slottype)
  {
    // -1 is no slot type so short circuit
    if (slottype == -1)
      return;

    int quantityReduced = 0;
    if (slottype == InventorySlots.HEADGEAR)
      quantityReduced = 15;
    else if (slottype == InventorySlots.MASK)
      quantityReduced = 10;
    else if (slottype == InventorySlots.EYEWEAR)
      quantityReduced = 5;
    else if (slottype == InventorySlots.GLOVES)
      quantityReduced = 15;
    else if (slottype == InventorySlots.ARMBAND)
      quantityReduced = 10;
    else if (slottype == InventorySlots.BODY)
      quantityReduced = 35;
    else if (slottype == InventorySlots.VEST)
      quantityReduced = 30;
    else if (slottype == InventorySlots.BACK)
      quantityReduced = 50;
    else if (slottype == InventorySlots.HIPS)
      quantityReduced = 20;
    else if (slottype == InventorySlots.LEGS)
      quantityReduced = 35;
    else if (slottype == InventorySlots.FEET)
      quantityReduced = 15;

    AddQuantity(-quantityReduced);
  }
};

class SRP_CraftingMaterial_Dye_Bleach extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Black extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Blue extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Brown extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Green extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Pink extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Red extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Yellow extends SRP_CraftingMaterial_Dye_Base{};