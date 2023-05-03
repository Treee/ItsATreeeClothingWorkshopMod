class SRP_DrugWorkbench extends SRP_CraftingBench_Base
{ 
  SRP_RecipeManager GetRecipeManager()
  {
    return GetDayZGame().GetSRPDrugRecipesGlobal();
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override int GetCraftingDamage()
  {
    return 5;
  }
  override bool CanAcceptTool(ItemBase item)
  {
    return item.IsDrugWorkbenchTool();
  }
};
class SRP_PrefabCrafting_drugtub extends SRP_DrugWorkbench
{
  override int GetCraftingDamage()
  {
    return 0;
  }
  override bool CanBeDeconstructed()
  {
    return false;
  }
};

class SRP_Drug_Blueprint_Meth extends ItemBase
{
  override bool IsAugmentAttachment()
  {
    return true;
  }
};
class SRP_Drug_Blueprint_BathSalts extends ItemBase
{
  override bool IsAugmentAttachment()
  {
    return true;
  }
};
class SRP_Drug_Blueprint_Acid extends ItemBase
{
  override bool IsAugmentAttachment()
  {
    return true;
  }
};