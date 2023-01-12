class SRP_Anvil_ColorBase extends ItemBase
{  
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}
  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }
  bool HasAnySlotFilled()
  {    
    return GetInventory().AttachmentCount() > 0;
  }
  SRP_CraftableItem HasCorrectCombination()
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
        if (slotName.Contains("SRP_MetalPlate") || slotName.Contains("SRP_MetalRod"))
          enumId = EnumTools.StringToEnum(SRP_METALTYPE, colorName);
        else if (slotName.Contains("SRP_PreciousStone"))
          enumId = EnumTools.StringToEnum(SRP_CRYSTALTYPE, colorName);

        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4", attachment.GetType(), slotName, colorName, enumId));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, attachment.GetQuantity()));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetDayZGame().GetSRPSmithingRecipesGlobal().IsRecipeMatch(craftableItem);
  }
  string ReduceAttachedQuantities()
  {
    SRP_CraftableItem craftable = HasCorrectCombination();
    if (craftable)
    {
      ItemBase attachment;
      foreach(SRP_ItemRequirement requirement : craftable.m_RequiredIngredients)
      {
        if (Class.CastTo(attachment, GetInventory().FindAttachmentByName(requirement.GetAttachmentSlotName())))
        {
          // players that brute force recipes will find things to be most expensive.
          int quantityToRemove = Math.Max(requirement.GetRequiredQuantity(), attachment.GetQuantity());
          attachment.AddQuantity(-quantityToRemove);
        }        
      }
    }
    return craftable.GetItemClassName();
  }

  vector GetMemoryPointPosition(string selection)
  {
    if ( MemoryPointExists( selection ) )
		{
			vector selection_pos = ModelToWorld( GetMemoryPointPos( selection ) );
      return selection_pos;
		}		
		return GetPosition();
  }
};

class SRP_Anvil_Basic extends SRP_Anvil_ColorBase{};
