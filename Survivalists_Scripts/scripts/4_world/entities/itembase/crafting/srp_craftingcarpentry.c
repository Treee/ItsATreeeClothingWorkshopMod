class SRP_PrefabCrafting_carpentry extends SRP_CraftingBench_Base
{
    override void EEInit()
	{
		super.EEInit();
        if (GetGame().IsDedicatedServer())
        {
            if (!GetItemOnSlot("SRP_WoodClamp"))
                GetInventory().CreateInInventory("SRP_WorkbenchClamp");

            if (!GetItemOnSlot("SRP_WoodDrill"))
                GetInventory().CreateInInventory("SRP_WorkbenchDrill");
        }
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(attachment)
        {
            if (attachment.GetType() == "SRP_WorkbenchClamp")
                return false;
            if (attachment.GetType() == "SRP_WorkbenchDrill")
                return false;
        }
		return super.CanReleaseAttachment(attachment);
	}
    override SRP_RecipeManager GetRecipeManager()
    {
        return GetDayZGame().GetSRPWoodWorkbenchRecipesGlobal();
    }
    override int GetCraftingDamage()
    {
        return 10;
    }
    override bool CanAcceptTool(ItemBase item)
    {
        return item.IsCarpentryWorkbenchTool();
    }
};

class SRP_PrefabCrafting_metalworking extends SRP_CraftingBench_Base
{
    override void EEInit()
	{
		super.EEInit();
        if (GetGame().IsDedicatedServer())
        {
            if (!GetItemOnSlot("SRP_WoodClamp"))
                GetInventory().CreateInInventory("SRP_WorkbenchClamp");

            if (!GetItemOnSlot("SRP_WoodDrill"))
                GetInventory().CreateInInventory("SRP_WorkbenchDrill");
        }
	}
    override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(attachment)
        {
            if (attachment.GetType() == "SRP_WorkbenchClamp")
                return false;
            if (attachment.GetType() == "SRP_WorkbenchDrill")
                return false;
        }
		return super.CanReleaseAttachment(attachment);
	}
    override SRP_RecipeManager GetRecipeManager()
    {
        return GetDayZGame().GetSRPMetalWorkbenchRecipesGlobal();
    }
    override int GetCraftingDamage()
    {
        return 10;
    }
    override bool CanAcceptTool(ItemBase item)
    {
        return item.IsMetalWorkbenchTool();
    }
};


class SRP_WorkbenchDrill extends ItemBase
{
    override bool IsAugmentAttachment()
    {
        return true;
    }
};
class SRP_WorkbenchClamp extends ItemBase
{
    override bool IsAugmentAttachment()
    {
        return true;
    }
};