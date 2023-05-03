class SRP_CraftingBench_Base extends ItemBase
{  
  ref array<SRP_CraftableItem> potentialCraftableItems = new array<SRP_CraftableItem>;
  protected bool m_HasCraftableMatches = false;  

  override bool CanPutInCargo( EntityAI parent )
	{
    return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
  // when an item is attached, go through the recipes once and see if anything can be crafted
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    potentialCraftableItems = new array<SRP_CraftableItem>;
    if (CheckPotentialRecipeMatches(potentialCraftableItems))
    {
      // Print("Has matches");
      SetHasCraftableMatches(true);
    }
    else
    {
      // Print("Has no matches");
      SetHasCraftableMatches(false);
    }
  }
  // when an item is attached, go through the recipes once and see if anything can be crafted
  override void EEItemDetached(EntityAI item, string slot_name)
  {
    super.EEItemDetached(item, slot_name);
    potentialCraftableItems = new array<SRP_CraftableItem>;
    if (CheckPotentialRecipeMatches(potentialCraftableItems))
    {
      // Print("Has matches");
      SetHasCraftableMatches(true);
    }
    else
    {
      // Print("Has no matches");
      SetHasCraftableMatches(false);
    }
  }
  bool CheckPotentialRecipeMatches(out array<SRP_CraftableItem> craftableItems)
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
        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4 quantity: %5", attachment.GetType(), slotName, colorName, enumId, quantity));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, quantity));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetRecipeManager().IsRecipeMatch(craftableItem, craftableItems);
  }
  
  SRP_RecipeManager GetRecipeManager()
  {
    return NULL;
  }
  bool HasCraftableMatches()
  {
    // Print(string.Format("has matches? %1 has array count? %2", m_HasCraftableMatches, potentialCraftableItems.Count()));
    return m_HasCraftableMatches;
  }
  void SetHasCraftableMatches(bool hasMatches)
  {
    m_HasCraftableMatches = hasMatches;
  }
  SRP_CraftableItem GetCraftableItemByIndex(int index)
  {
    if (potentialCraftableItems && potentialCraftableItems.IsValidIndex(index));
    {
      return potentialCraftableItems.Get(index);    
    }
    return NULL;
  }
  string GetCraftableItemDisplayNameByIndex(int index)
  {
    if (potentialCraftableItems && potentialCraftableItems.IsValidIndex(index));
    {
      return potentialCraftableItems.Get(index).GetDisplayName();    
    }
    return "No Item Found";      
  }
  int GetPotentialCraftableItemCount()
  {
    if (!potentialCraftableItems)
      return 0;
    return potentialCraftableItems.Count();    
  }
  void GetPotentialRecipeMatchesDisplayName(out TStringArray recipeDisplayNames)
  {
    foreach (SRP_CraftableItem craftable : potentialCraftableItems)
    {
      recipeDisplayNames.Insert(craftable.GetDisplayName());
    }
  }
  string ReduceAttachedQuantities(SRP_CraftableItem craftable)
  {
    if (craftable)
    {
      ItemBase attachment;
      foreach(SRP_ItemRequirement requirement : craftable.m_RequiredIngredients)
      {
        if (Class.CastTo(attachment, GetInventory().FindAttachmentByName(requirement.GetAttachmentSlotName())))
        {
          // attached augments do not get damaged
          if (attachment.IsAugmentAttachment())
            continue;
          // if the item is hp reduced and is not an augment attchment
          if (requirement.ShouldReduceHP())
            attachment.AddHealth(requirement.GetRequiredQuantity());
          else
          {
            // players that brute force recipes will find things to be most expensive.
            int quantityToRemove = Math.Max(requirement.GetRequiredQuantity(), attachment.GetQuantity());
            attachment.AddQuantity(-quantityToRemove);
            if (attachment.GetQuantityMax() == 1 && quantityToRemove == 1)
              attachment.Delete();
          } 
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
  int GetCraftingDamage()
  {
    return 0;
  }
  bool CanAcceptTool(ItemBase item)
  {
    return false;
  }
};
