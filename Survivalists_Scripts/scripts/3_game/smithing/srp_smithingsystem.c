enum SRP_METALTYPE
{
  COPPER,
  TIN,
  BRONZE,
  IRON,
  GOLD,
  PLATINUM,
  SILVER,
  ZINC,
  BRASS
};
enum SRP_CRYSTALTYPE
{
  RUBY,
  SAPPHIRE,
  JADE,
  AMETHYST,
  AQUA,
  AMBER,
  DIAMOND,
  TOPAZ,
  QUARTZ,
  OPAL
};

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
    bool isCompleteMatch = false;
    bool isIngredientMatch = false;
    // start with my ingredients
    foreach(SRP_ItemRequirement ingredient : m_RequiredIngredients)
    {
      // Print(string.Format("Comparring %1", ingredient.PrintDebug()));
      // look at all the other ingredients
      foreach(SRP_ItemRequirement otherIngredient : otherCraftable.m_RequiredIngredients)
      {
        // Print(string.Format("Against %1", otherIngredient.PrintDebug()));
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
        isCompleteMatch = true;
        // Print("Ingredient MATCH!!");
      }
      else
      {
        // the other craftable has no ingredients that match this; break loop
        isCompleteMatch = false;
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

class SRP_SmithingRecipes
{
  protected ref array<ref SRP_CraftableItem> craftableItems;

  void SRP_SmithingRecipes()
  {
    Init();
  }
  // no repeat recipes allowed
  void Init()
  {
    if (!craftableItems)
    {
      craftableItems = new array<ref SRP_CraftableItem>;
    }
    craftableItems.Insert(RegisterSwordRecipe());
    craftableItems.Insert(RegisterKarambitKnife());
    // PrintRecipes();
  }
  
  SRP_CraftableItem IsRecipeMatch(SRP_CraftableItem otherCraftable)
  {
    foreach(SRP_CraftableItem craftableItem : craftableItems)
    {      
      if (craftableItem.CompareToOtherIngredients(otherCraftable))
      {
        return craftableItem;
      }
    }
    return NULL;
  }
  void PrintRecipes()
  {
    foreach(SRP_CraftableItem craftableItem : craftableItems)
    {      
      craftableItem.PrintIngredients();
    }
  }

  SRP_CraftableItem RegisterSwordRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_LotR_SwordAnduril_Basic", "Anduril");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_METALTYPE.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_METALTYPE.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_METALTYPE.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_METALTYPE.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_METALTYPE.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_METALTYPE.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_METALTYPE.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_METALTYPE.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_METALTYPE.ZINC, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_METALTYPE.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_CRYSTALTYPE.JADE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_CRYSTALTYPE.AMETHYST, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_CRYSTALTYPE.AMBER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_CRYSTALTYPE.TOPAZ, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_CRYSTALTYPE.DIAMOND, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", -1, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", -1, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", -1, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", -1, 3));
    return craftableItem;
  }

  //===========================KNIFES
  SRP_CraftableItem RegisterKarambitKnife()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KarambitKnife", "Karambit Knife - Steel");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_METALTYPE.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_METALTYPE.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", -1, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", -1, 3));
    return craftableItem;
  }
};