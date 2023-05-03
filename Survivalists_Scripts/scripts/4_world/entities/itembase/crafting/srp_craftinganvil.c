class SRP_Anvil_ColorBase extends SRP_CraftingBench_Base
{
  SRP_RecipeManager GetRecipeManager()
  {
    return GetDayZGame().GetSRPSmithingRecipesGlobal();
  }
  override int GetCraftingDamage()
  {
    return 10;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override bool CanReceiveAttachment( EntityAI attachment,int slotId )
	{
    SRP_Mining_Crystal_ColorBase crystal;
		if (Class.CastTo(crystal, attachment))
      return false;
		return super.CanReceiveAttachment( attachment, slotId );
	}
  override bool CanAcceptTool(ItemBase item)
  {
    return item.IsAnvilWorkbenchTool();
  }
};

class SRP_Anvil_Basic_Kit extends SRP_KitBase{};
class SRP_Anvil_Basic extends SRP_Anvil_ColorBase{};

class SRP_PrefabCrafting_smithing extends SRP_Anvil_ColorBase
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