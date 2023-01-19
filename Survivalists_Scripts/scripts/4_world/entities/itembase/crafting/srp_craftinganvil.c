class SRP_Anvil_ColorBase extends SRP_CraftingBench_Base
{
  override bool CheckPotentialRecipeMatches(out array<SRP_CraftableItem> craftableItems)
  {        
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("", "");
    EntityAI attachment;
    int totalSlots = GetInventory().AttachmentCount();
    int slotId;
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
        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4 quantity: %5", attachment.GetType(), slotName, colorName, enumId, attachment.GetQuantity()));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, attachment.GetQuantity()));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetDayZGame().GetSRPSmithingRecipesGlobal().IsRecipeMatch(craftableItem, craftableItems);
  }
  override int GetCraftingDamage()
  {
    return 10;
  }
};

class SRP_Anvil_Basic_Kit extends SRP_KitBase{};
class SRP_Anvil_Basic extends SRP_Anvil_ColorBase{};
