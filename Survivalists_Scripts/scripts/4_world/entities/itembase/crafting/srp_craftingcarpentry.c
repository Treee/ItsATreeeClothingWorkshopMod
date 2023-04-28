class SRP_PrefabCrafting_carpentry extends SRP_CraftingBench_Base
{
  override void EEInit()
	{
		super.EEInit();
    if (GetGame().IsDedicatedServer())
    {
      ItemBase attachment;
      attachment = GetItemOnSlot("SRP_WoodClamp");
      if (attachment == NULL)
        GetInventory().CreateInInventory("SRP_WorkbenchClamp");
      
      attachment = GetItemOnSlot("SRP_WoodDrill");
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
  override bool CheckPotentialRecipeMatches(out array<SRP_CraftableItem> craftableItems)
  {        
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("", "");
    EntityAI attachment;
    int totalSlots = GetInventory().AttachmentCount();
    int slotId;
    int quantity;
    string slotName;
    string colorName;
    int enumId = -1;
    
    for (int i = 0; i < totalSlots; i++)
    {
      // Print("Sending: index " + i + " with max " + totalSlots);
      if (Class.CastTo(attachment, GetInventory().GetAttachmentFromIndex(i)))
      {        
        attachment.GetInventory().GetCurrentAttachmentSlotInfo(slotId, slotName);
        colorName = attachment.ConfigGetString("color");
        colorName.ToUpper();
        
        enumId = EnumTools.StringToEnum(SRP_COLOR, colorName);
        // non null items with 0 quantity should be seen as 1
        quantity = Math.Max(1, attachment.GetQuantity());
        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4 quantity: %5", attachment.GetType(), slotName, colorName, enumId, attachment.GetQuantity()));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, quantity));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetDayZGame().GetSRPWoodWorkbenchRecipesGlobal().IsRecipeMatch(craftableItem, craftableItems);
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
      ItemBase attachment;
      attachment = GetItemOnSlot("SRP_WoodClamp");
      if (attachment == NULL)
        GetInventory().CreateInInventory("SRP_WorkbenchClamp");
      
      attachment = GetItemOnSlot("SRP_WoodDrill");
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
  override bool CheckPotentialRecipeMatches(out array<SRP_CraftableItem> craftableItems)
  {        
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("", "");
    EntityAI attachment;
    int totalSlots = GetInventory().AttachmentCount();
    int slotId;
    int quantity;
    string slotName;
    string colorName;
    int enumId = -1;
    
    for (int i = 0; i < totalSlots; i++)
    {
      // Print("Sending: index " + i + " with max " + totalSlots);
      if (Class.CastTo(attachment, GetInventory().GetAttachmentFromIndex(i)))
      {        
        attachment.GetInventory().GetCurrentAttachmentSlotInfo(slotId, slotName);
        colorName = attachment.ConfigGetString("color");
        colorName.ToUpper();
        
        enumId = EnumTools.StringToEnum(SRP_COLOR, colorName);
        // non null items with 0 quantity should be seen as 1
        quantity = Math.Max(1, attachment.GetQuantity());
        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4 quantity: %5", attachment.GetType(), slotName, colorName, enumId, attachment.GetQuantity()));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, quantity));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetDayZGame().GetSRPMetalWorkbenchRecipesGlobal().IsRecipeMatch(craftableItem, craftableItems);
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
