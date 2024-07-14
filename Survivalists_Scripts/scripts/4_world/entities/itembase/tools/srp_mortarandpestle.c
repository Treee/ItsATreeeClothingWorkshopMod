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
    bool CanCrushFlowerIntoHerbs()
    {
        SRP_MortarPestle pestleAttachment;
        if (Class.CastTo(pestleAttachment, FindAttachmentBySlotName("SRP_Pestle")))
        {
            SRP_PlantHerbEdible_Colorbase herb;
            if (Class.CastTo(herb, FindAttachmentBySlotName("SRP_Flower1")))
            {
                if (herb.GetQuantity() > 0 && !herb.IsDamageDestroyed() && herb.IsFoodDried())
                {
                    return true;
                }
            }
        }
        return false;
    }
    void CrushFlowerIntoHerbs()
    {
        SRP_PlantHerbEdible_Colorbase herb;
        // if there is a herb in the mortar
        if (Class.CastTo(herb, FindAttachmentBySlotName("SRP_Flower1")))
        {
            int result = 0;
            if (herb.GetType() == "SRP_PlantPulp")
                result = herb.GetQuantity() * Math.RandomIntInclusive(4, 8);
            else
                result = herb.GetQuantity() * Math.RandomIntInclusive(1, 3);

            // replace it with powder
            string newItemName = string.Format("SRP_CrushedHerb_%1", herb.ConfigGetString("color"));
            ItemBase newItemBase;
            if (Class.CastTo(newItemBase, GetInventory().CreateAttachment(newItemName)))
            {
                newItemBase.SetQuantity(result);
            }
            herb.DeleteSafe();
        }
    }

    override bool CanReceiveAttachment (EntityAI attachment, int slotId)
    {
        if (super.CanReceiveAttachment(attachment, slotId))
        {
            if (attachment.IsInherited(SRP_PlantHerbEdible_Colorbase))
            {
                Edible_Base driedHerb;
                if (Class.CastTo(driedHerb, attachment))
                {
                    return driedHerb.IsFoodDried();
                }
            }
            else if (attachment.IsInherited(SRP_CrushedHerb_Colorbase))
            {
                return true;
            }
            return true;
        }
        return false;
    }

    override void SetActions()
	{
		super.SetActions();

		AddAction(ActionMortarCrushIntoPowder);
	}
};

class SRP_MortarPestle extends ItemBase{};