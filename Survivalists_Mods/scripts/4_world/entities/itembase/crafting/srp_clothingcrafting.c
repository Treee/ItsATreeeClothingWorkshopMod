class SRP_IntermediateClothingKitBase extends ItemBase
{
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}

  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }

  bool HasAttachmentFilledWithItem(string slotName, string itemName, int minHealthLevel = 2)
  {
    EntityAI eai = FindAttachmentBySlotName(slotName);
    if (eai)
    {
      ItemBase item = ItemBase.Cast(eai);
      return (item && item.GetType() == itemName && item.GetHealthLevel() <= minHealthLevel );    
    }
    return false;
  }

  bool HasAttachmentFilledWithQuantity(string slotName, float quantity)
  {
    EntityAI eai = FindAttachmentBySlotName(slotName);
    if (eai)
    {
      ItemBase item = ItemBase.Cast(eai);
      return (item && item.GetQuantity() >= quantity);    
    }
    return false;
  }

  bool HasAttachmentFilledWithItemQuantity(string slotName, string itemName, float quantity)
  {
    EntityAI eai = FindAttachmentBySlotName(slotName);
    if (eai)
    {
      ItemBase item = ItemBase.Cast(eai);
      return (item && item.GetType() == itemName && item.GetQuantity() >= quantity);    
    }
    return false;
  }

  bool HasAttachmentFilledWithCorrectItemAndQuantity(string slotName, TStringArray types, TIntArray quantities, bool reduceQuantity = false)
  {
    for(int i=0; i<types.Count(); i++)
    {
      if (HasAttachmentFilledWithItemQuantity(slotName, types.Get(i), quantities.Get(i)))
      {
        return true;
      }
    }
    return false;
  };

  bool HasAttachmentFilledWithCorrectItem(string slotName, TStringArray types, int minHealthLevel = 2)
  {
    for(int i=0; i<types.Count(); i++)
    {
      if (HasAttachmentFilledWithItem(slotName, types.Get(i), minHealthLevel))
      {
        return true;
      }
    }
    return false;
  };
};

class SRP_ClothingBackpacks_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingBelts_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingGloves_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingHeadgear_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingMasks_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingPants_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingTops_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingVests_Kit extends SRP_IntermediateClothingKitBase{};
class SRP_ClothingVestsPouches_Kit extends SRP_IntermediateClothingKitBase{};