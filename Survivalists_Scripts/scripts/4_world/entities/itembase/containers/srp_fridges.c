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

class SRP_FridgeRetro_HerbRack extends SRP_Container_Base
{
  protected float m_CollectionLifespan;
  protected const int HERB_DRYING_TIME = 1;
  // protected const int HERB_DRYING_TIME = 60;
  protected const float HERB_DRYING_AMOUNT = 12.6; // controls for 10ish minutes of drying

  void SRP_FridgeRetro_HerbRack()
  {
    SetEventMask(EntityEvent.POSTSIMULATE);
  }
  override void EOnPostSimulate(IEntity other, float timeSlice)
	{
    if (!GetGame().IsDedicatedServer())
      return;
    if (m_CollectionLifespan > 10) // wait 10 seconds before doing things 
    {
      DryHerbs();
      m_CollectionLifespan = 0;
    }
    m_CollectionLifespan += timeSlice;
	}
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    SRP_PlantHerbEdible_Colorbase herb;
    if (Class.CastTo(herb, item))
    {
      return true;
    }
		return false;
	}
  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		SRP_PlantHerbEdible_Colorbase herb;
    if (Class.CastTo(herb, item))
    {
      return true;
    }
		return false;
  }

  void DryHerbs()
  {
    if (!HasAnyCargo())
      return;

    Edible_Base inItem;
    int inItemCount = GetInventory().GetCargo().GetItemCount();
    float new_cook_time;
    for (int i = 0; i < inItemCount; i++)
    {
      if (inItem.GetFoodStageType() != FoodStageType.RAW)
        continue;

      new_cook_time = inItem.GetCookingTime() + HERB_DRYING_AMOUNT;
      inItem.SetCookingTime(new_cook_time);
      if (inItem.GetCookingTime() >= HERB_DRYING_TIME)
      {
        inItem.ChangeFoodStage(FoodStageType.DRIED);
        inItem.RemoveAllAgents();
        inItem.SetCookingTime(0);
      }  
    }
  }
};