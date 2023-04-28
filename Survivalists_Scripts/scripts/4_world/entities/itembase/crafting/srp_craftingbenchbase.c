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
    return false;
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
          bool destroyItem = ShouldDestroyItem(attachment.GetType());
          // do 1 hp of dmg to attachments that are not fully consumed
          if (!destroyItem)
          {
            attachment.AddHealth(-1);
          }   
          // players that brute force recipes will find things to be most expensive.
          int quantityToRemove = Math.Max(requirement.GetRequiredQuantity(), attachment.GetQuantity());
          attachment.AddQuantity(-quantityToRemove);
          if (attachment.GetQuantityMax() == 1 && quantityToRemove == 1 && destroyItem)
          {
            // Print("deleting attachment due to max quantity: " + attachment.GetType());
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
  bool ShouldDestroyItem(string item)
  {
    if (item == "SRP_SewingMachine")
      return false;
    if (item == "MethRecipe")
      return false;
    if (item == "BathSaltsRecipe")
      return false;
    if (item == "AcidRecipe")
      return false;
    if (item == "SRP_WoodDrill")
      return false;
    if (item == "SRP_WoodClamp")
      return false;

    return true;
  }
  bool CanAcceptTool(ItemBase item)
  {
    return false;
  }
};
