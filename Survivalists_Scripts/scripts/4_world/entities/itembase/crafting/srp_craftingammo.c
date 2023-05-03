class SRP_PrefabCrafting_ammocrafting extends SRP_CraftingBench_Base
{
  override void EEInit()
	{
		super.EEInit();
    if (GetGame().IsDedicatedServer())
    {
      if (!GetItemOnSlot("SRP_CasePrep"))
        GetInventory().CreateInInventory("SRP_CasePrep");
      
      if (!GetItemOnSlot("SRP_AmmoPress"))
        GetInventory().CreateInInventory("SRP_AmmoPress");
    }
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(attachment)
    {
      if (attachment.GetType() == "SRP_CasePrep")
        return false;
      if (attachment.GetType() == "SRP_AmmoPress")
        return false;
    }
		return super.CanReleaseAttachment(attachment);
	}
  SRP_RecipeManager GetRecipeManager()
  {
    return GetDayZGame().GetSRPAmmoRecipesGlobal();
  }
  override int GetCraftingDamage()
  {
    return 0;
  }
  override bool CanBeDeconstructed()
  {
    return false;
  }
  override bool CanAcceptTool(ItemBase item)
  {
    return item.IsAmmoCraftingWorkbenchTool();
  }
};

class SRP_AdvancedWorkbench extends SRP_CraftingBench_Base
{
  SRP_RecipeManager GetRecipeManager()
  {
    return GetDayZGame().GetSRPAmmoRecipesGlobal();
  }
  override int GetCraftingDamage()
  {
    return 10;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override bool CanAcceptTool(ItemBase item)
  {
    return item.IsAmmoCraftingWorkbenchTool();
  }
};

class SRP_AmmoPress extends ItemBase
{
  override bool IsAugmentAttachment()
  {
    return true;
  }
};
class SRP_CasePrep extends ItemBase
{
  override bool IsAugmentAttachment()
  {
    return true;
  }
};