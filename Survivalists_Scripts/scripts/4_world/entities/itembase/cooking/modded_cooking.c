modded class Cooking
{
    override void ProcessItemToCook(notnull ItemBase pItem, ItemBase cookingEquip, Param2<CookingMethodType, float> pCookingMethod, out Param2<bool, bool> pStateFlags)
    {
        PlantMaterial plantMaterial;
        if (Class.CastTo(plantMaterial, pItem))
        {
            if (plantMaterial.GetHealth() < 0.1 && plantMaterial.GetWet() > 0)
            {
                plantMaterial.DeleteSafe();
                // cookingEquip.GetInventory().CreateInInventory("SRP_PlantPulp");
                GetGame().CreateObjectEx("SRP_PlantPulp", cookingEquip.GetPosition(), ECE_PLACE_ON_SURFACE|ECE_SETUP|ECE_KEEPHEIGHT|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
            }
        }

        super.ProcessItemToCook(pItem, cookingEquip, pCookingMethod, pStateFlags);
        if (pItem.IsTransformedByHeat())
        {
            Rag rag;
            if (Class.CastTo(rag, pItem))
            {
                rag.IncrementHeatTimer();
                if (rag.GetHeatTimer() > rag.GetHeatTimerThreshold())
                {
                    rag.SetCleanness(1);
                }

                if (rag.GetHealthLevel() == 0)
                {
                    // hack: since they automagically damage items that are not edible in containers
                    pItem.AddHealth("", "", PARAM_BURN_DAMAGE_COEF * 100);
                }
            }
        }
	}
};