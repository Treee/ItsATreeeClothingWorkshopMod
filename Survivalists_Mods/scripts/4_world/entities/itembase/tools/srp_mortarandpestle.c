class SRP_MortarBowl extends Inventory_Base
{
  bool HasSlotFilledWithCorrectPowder(string slotName, TStringArray types, TIntArray quantities, bool reduceQuantity = false)
  {
    SRP_CrushedHerb_Colorbase herb = SRP_CrushedHerb_Colorbase.Cast(FindAttachmentBySlotName(slotName));
    if (herb)
    {
      return herb.AreCorrectTypesAndQuantities(types, quantities, reduceQuantity);
    }
    else
    {
      return false;
    }
  };

  bool HasAllPowderSlotsFilled()
  {
    bool isFull = FindAttachmentBySlotName("SRP_CrushedPowder1") != null;
    isFull &= FindAttachmentBySlotName("SRP_CrushedPowder2") != null;
    isFull &= FindAttachmentBySlotName("SRP_CrushedPowder3") != null;
    isFull &= FindAttachmentBySlotName("SRP_CrushedPowder4") != null;
    isFull &= FindAttachmentBySlotName("SRP_CrushedPowder5") != null;
    // Print("is it full of powders? " + isFull);
    return isFull;
  }

  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    bool canAttach = super.CanReceiveAttachment(attachment, slotId);
    EntityAI flowerSlot;
    // when the SRP_Flower1 slot is empty, we can place things in SRP_CrushedPowder1
    // when the SRP_CrushedPowder1 slot is empty, we can place things in SRP_Flower1
    if (attachment && attachment.IsInherited(SRP_CrushedHerb_Colorbase))
    {
      canAttach = FindAttachmentBySlotName("SRP_Flower1") == null;      
    }
    else if (attachment && attachment.IsInherited(SRP_PlantHerbEdible_Colorbase))
    {
      canAttach = FindAttachmentBySlotName("SRP_CrushedPowder1") == null;
      canAttach &= FindAttachmentBySlotName("SRP_CrushedPowder2") == null;
      canAttach &= FindAttachmentBySlotName("SRP_CrushedPowder3") == null;
      canAttach &= FindAttachmentBySlotName("SRP_CrushedPowder4") == null;
      canAttach &= FindAttachmentBySlotName("SRP_CrushedPowder5") == null;

      Edible_Base driedHerb = Edible_Base.Cast( attachment );
      canAttach &= driedHerb.IsFoodDried();
    }
		return canAttach;
	}

  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionMortarCrushIntoPowder);
	}
};

class SRP_MortarPestle extends ItemBase{};