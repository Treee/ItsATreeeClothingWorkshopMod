modded class Cooking
{
  override void ProcessItemToCook(notnull ItemBase pItem, ItemBase cookingEquip, Param2<CookingMethodType, float> pCookingMethod, out Param2<bool, bool> pStateFlags)
	{    
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