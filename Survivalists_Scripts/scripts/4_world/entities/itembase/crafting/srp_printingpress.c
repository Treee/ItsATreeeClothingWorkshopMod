class SRP_PrefabCrafting_printingpress extends SRP_CraftingBench_Base
{ 
  override bool CheckPotentialRecipeMatches(out array<SRP_CraftableItem> craftableItems)
  {        
    return false;
  }
  override int GetCraftingDamage()
  {
    return 0;
  }
  override bool CanAcceptTool(ItemBase item)
  {
    return item.IsPrintingPressTool();
  }
};