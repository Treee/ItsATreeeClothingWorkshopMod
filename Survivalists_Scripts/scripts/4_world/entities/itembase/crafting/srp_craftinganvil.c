class SRP_Anvil_ColorBase extends ItemBase
{  
  ref array<SRP_CraftableItem> potentialCraftableItems = new array<SRP_CraftableItem>;
  protected bool m_HasCraftableMatches = false;

  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
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
        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4", attachment.GetType(), slotName, colorName, enumId));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, attachment.GetQuantity()));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetDayZGame().GetSRPSmithingRecipesGlobal().IsRecipeMatch(craftableItem, craftableItems);
  }

  bool HasCraftableMatches()
  {
    return m_HasCraftableMatches;
  }
  void SetHasCraftableMatches(bool hasMatches)
  {
    m_HasCraftableMatches = hasMatches;
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
