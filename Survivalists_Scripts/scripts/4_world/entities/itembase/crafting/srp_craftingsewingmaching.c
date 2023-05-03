class SRP_SewingTable extends SRP_CraftingBench_Base
{
  SRP_RecipeManager GetRecipeManager()
  {
    return GetDayZGame().GetSRPTailoringRecipesGlobal();
  }
  override int GetCraftingDamage()
  {
    return 10;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  bool HasAllThreadSlotsFilledAndFull()
  {
    ItemBase attachment;
    bool isFilledAndFull = true;
    for(int i = 1; i < 6; i++)
    {
      if (Class.CastTo(attachment, GetInventory().FindAttachmentByName(string.Format("SRP_SewingThread%1",i))))
        isFilledAndFull &= attachment.GetQuantity() == attachment.GetQuantityMax();
      else
        return false;
    }
    return isFilledAndFull;
  }
  void ConsumeAllThreadSlots()
  {
    ItemBase attachment;
    for(int i = 1; i < 6; i++)
    {
      if (Class.CastTo(attachment, GetInventory().FindAttachmentByName(string.Format("SRP_SewingThread%1",i))))
        attachment.AddQuantity(-attachment.GetQuantityMax());
    }
  }
  override bool CanAcceptTool(ItemBase item)
  {
    return item.IsSewingWorkbenchTool();
  }
};

class SRP_PrefabCrafting_tailoring extends SRP_SewingTable
{
  override void EEInit()
	{
		super.EEInit();
    if (GetGame().IsDedicatedServer())
    {
      if (!GetItemOnSlot("SRP_SewingMachine"))
        GetInventory().CreateInInventory("SRP_SewingMachine");
    }
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if( attachment && attachment.GetType() == "SRP_SewingMachine" )
			return false;
		return super.CanReleaseAttachment(attachment);
	}
  override int GetCraftingDamage()
  {
    return 0;
  }
  override bool CanBeDeconstructed()
  {
    return false;
  }
};

class SRP_SewingMachine extends ItemBase
{
  override bool IsAugmentAttachment()
  {
    return true;
  }
};