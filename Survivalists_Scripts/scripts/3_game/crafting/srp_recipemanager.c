enum SRP_COLOR
{
  NONE=-1, // base case
  COPPER, //metals
  TIN,
  BRONZE,
  IRON,
  GOLD,
  PLATINUM,
  SILVER,
  ZINC,
  BRASS,
  RUBY,  //crystals
  SAPPHIRE,
  JADE,
  AMETHYST,
  AQUA,
  AMBER,
  DIAMOND,
  TOPAZ,
  QUARTZ,
  OPAL,
  BOAR, // animal pelts
  RABBIT,
  COW,
  PIG,
  DEER,
  GOAT,
  BEAR,
  WOLF,
  SHEEP,
  MOUFLON,  // unused
  FOX,      // unused
  BIOWOLF,
  MOOSE,
  HUMAN,
  ALPHA,
  CLEAR,
  WHITE, //thread colors (double up for all colors?)
  BLACK,
  GREEN,
  LIGHTBLUE,
  RED,
  BLUE,
  GRAY,
  ORANGE,
  PINK,
  PURPLE,
  YELLOW
}

class SRP_ItemRequirement
{
  protected string m_AttachmentSlotName;
  protected int m_RequiredColor;
  protected int m_RequiredQuantity;

  void SRP_ItemRequirement(string attachmentSlotName, int requiredColor=-1, int requiredQuantity=1)
  {
    m_AttachmentSlotName = attachmentSlotName;
    m_RequiredColor = requiredColor;
    m_RequiredQuantity = requiredQuantity;
  }

  bool IsRequirementMatch(SRP_ItemRequirement requirement)
  {
    bool correctAttachment = IsAttchmentMatch(requirement.GetAttachmentSlotName());
    bool correctColor = IsColorMatch(requirement.GetRequiredColor());    
    bool correctQuantity = IsQuantityMatch(requirement.GetRequiredQuantity());

    if (GetRequiredColor() == -1)
      correctColor = true;

    // Print(string.Format("%1", PrintDebug()));
    return correctAttachment && correctColor && correctQuantity;
  }

  bool IsAttchmentMatch(string otherAttachmentName)
  {
    return m_AttachmentSlotName == otherAttachmentName;
  }
  bool IsColorMatch(int otherColor)
  {
    return m_RequiredColor == otherColor;
  }
  bool IsQuantityMatch(int otherQuantity)
  {
    return otherQuantity >= m_RequiredQuantity;
  }
  string GetAttachmentSlotName()
  {
    return m_AttachmentSlotName;
  }
  int GetRequiredColor()
  {
    return m_RequiredColor;
  }
  int GetRequiredQuantity()
  {
    return m_RequiredQuantity;
  }
  string PrintDebug()
  {
    return string.Format("%1 || %2 || %3", GetAttachmentSlotName(), GetRequiredColor(), GetRequiredQuantity());
  }
};

class SRP_CraftableItem
{
  protected string m_DisplayName;
  protected string m_ItemName;
  ref array<ref SRP_ItemRequirement> m_RequiredIngredients;

  void SRP_CraftableItem(string itemName, string displayName)
  {
    m_ItemName = itemName;
    m_DisplayName = displayName;
    if (!m_RequiredIngredients)
    {
      m_RequiredIngredients = new array<ref SRP_ItemRequirement>;
    }
  }
  void RegisterIngredient(SRP_ItemRequirement craftingIngredient)
  {
    if (m_RequiredIngredients.Find(craftingIngredient) == -1)
      m_RequiredIngredients.Insert(craftingIngredient);
  }
  void RemoveIngredient(SRP_ItemRequirement craftingIngredient)
  {    
    m_RequiredIngredients.RemoveItem(craftingIngredient);
  }
  string GetDisplayName()
  {
    return m_DisplayName;
  }
  string GetItemClassName()
  {
    return m_ItemName;
  }
  bool CompareToOtherIngredients(SRP_CraftableItem otherCraftable)
  {
    bool isCompleteMatch = true;
    bool isIngredientMatch = false;
    // start with my ingredients
    foreach(SRP_ItemRequirement ingredient : m_RequiredIngredients)
    {
      // Print(string.Format("Comparring Recipe %1 || Ingredients %2", GetItemClassName(), ingredient.PrintDebug()));
      // look at all the other ingredients
      foreach(SRP_ItemRequirement otherIngredient : otherCraftable.m_RequiredIngredients)
      {
        // Print(string.Format("Against Recipe %1 || Ingredients %2", otherCraftable.GetItemClassName(), otherIngredient.PrintDebug()));
        // if there is a match
        if (ingredient.IsRequirementMatch(otherIngredient))
        {
          // set we matched to true; break out of the inner for loop
          isIngredientMatch = true;
          break;
        }        
      }
      // if the other ingredients have a match
      if (isIngredientMatch)
      {
        // reset the boolean flag for ingredients
        isIngredientMatch = false;
        isCompleteMatch &= true;
        // Print("Ingredient MATCH!!");
        continue;
      }
      else
      {
        // the other craftable has no ingredients that match this; break loop
        isCompleteMatch &= false;
        // Print("NO MATCHING INGREDIENTS QUICK FAIL");
        break;
      }
    }
    return isCompleteMatch;
  }
  void PrintIngredients()
  {
    foreach(SRP_ItemRequirement requirement : m_RequiredIngredients)
    {
      Print(requirement.PrintDebug());
    }
  }
};

class SRP_RecipeManager
{
  protected ref array<ref SRP_CraftableItem> craftableItems;

  void SRP_RecipeManager()
  {
    Init();
  }
  void Init()
  {
    if (!craftableItems)
    {
      craftableItems = new array<ref SRP_CraftableItem>;
    }
  }
  //===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 2));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 3));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 3));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.SILVER, 2));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.SILVER, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.SILVER, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.JADE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AMETHYST, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.AMBER, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.TOPAZ, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.DIAMOND, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 5));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
  //   return craftableItem;
  // }
  bool IsRecipeMatch(SRP_CraftableItem otherCraftable, out array<SRP_CraftableItem> craftableResults)
  {    
    foreach(SRP_CraftableItem craftableItem : craftableItems)
    {      
      if (craftableItem.CompareToOtherIngredients(otherCraftable))
      {
        craftableResults.Insert(craftableItem);
        // Print(string.Format("Found Recipe Match %1", craftableItem.GetDisplayName()));
        // return craftableItem;
      }
    }
    return craftableResults.Count() > 0;
  }
  void PrintRecipes()
  {
    foreach(SRP_CraftableItem craftableItem : craftableItems)
    {      
      craftableItem.PrintIngredients();
    }
  }
};