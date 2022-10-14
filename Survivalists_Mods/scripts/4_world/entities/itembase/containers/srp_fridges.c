class SRP_Fridge extends SRP_Container_Base
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      TStringArray allowedItems = GetAllowedItems();
      foreach(string allowed : allowedItems)
      {
        if (ibItem.IsKindOf(allowed))
        {
          return true;
        }
      }
    }
		return false;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      TStringArray allowedItems = GetAllowedItems();
      foreach(string allowed : allowedItems)
      {
        if (ibItem.IsKindOf(allowed))
        {
          return true;
        }
      }
    }
		return false;
  }

  TStringArray GetAllowedItems()
  {
    return {
      "DisinfectantSpray",
      "DisinfectantAlcohol",
      "Epinephrine",
      "Morphine",
      "AntiChemInjector",
      "Syringe",
      "ClearSyringe",
      "BloodSyringe",
      "InjectionVial",
      "SalineBag",
      "SalineBagIV",
      "BloodBagFull",
      "BloodBagIV",
      "SRP_LabTube_Colorbase",
    };
  }
};
class SRP_FridgeLarge extends SRP_Fridge{};
class SRP_FridgeRetro extends SRP_Fridge{};

class SRP_FridgeMinsk extends SRP_Openable_Container
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      TStringArray allowedItems = GetAllowedItems();
      foreach(string allowed : allowedItems)
      {
        if (ibItem.IsKindOf(allowed))
        {
          return true;
        }
      }
    }
		return false;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		Edible_Base edible;
    if (Class.CastTo(edible, item))
    {
      return true;
    }
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      TStringArray allowedItems = GetAllowedItems();
      foreach(string allowed : allowedItems)
      {
        if (ibItem.IsKindOf(allowed))
        {
          return true;
        }
      }
    }
		return false;
  }

  TStringArray GetAllowedItems()
  {
    return {
      "DisinfectantSpray",
      "DisinfectantAlcohol",
      "Epinephrine",
      "Morphine",
      "AntiChemInjector",
      "Syringe",
      "ClearSyringe",
      "BloodSyringe",
      "InjectionVial",
      "SalineBag",
      "SalineBagIV",
      "BloodBagFull",
      "BloodBagIV",
      "SRP_LabTube_Colorbase",
    };
  }
};
class SRP_FridgeMinsk_Medical extends SRP_FridgeMinsk{};
