class SRP_MetalBarrel_Colorbase extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_MetalBarrelKit_Kit";
  }
};
// general storage
class SRP_MetalBarrel_Old extends SRP_MetalBarrel_Colorbase{};
//ammo
class SRP_MetalBarrel_Blue extends SRP_MetalBarrel_Colorbase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      if (ibItem.IsAmmoPile())
      {
        return true;
      }
      if (ibItem.IsMagazine())
      {
        return true;
      }
      if (ibItem.IsKindOf("Grenade_Base"))
      {
        return true;
      }
      if (ibItem.GetType().Contains("AmmoBox_"))
      {
        return true;
      }
      if (ibItem.GetType().Contains("SRP_Explosive_"))
      {
        return true;
      }
    }
    return false;		
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      if (ibItem.IsAmmoPile())
      {
        return true;
      }
      if (ibItem.IsMagazine())
      {
        return true;
      }
      if (ibItem.IsKindOf("Grenade_Base"))
      {
        return true;
      }
      if (ibItem.GetType().Contains("AmmoBox_"))
      {
        return true;
      }
      if (ibItem.GetType().Contains("SRP_Explosive_"))
      {
        return true;
      }
    }
    return false;		
  }
};
//medical
class SRP_MetalBarrel_Red extends SRP_MetalBarrel_Colorbase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
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
      "BandageDressing",
      "DisinfectantSpray",
      "DisinfectantAlcohol",
      "PurificationTablets",
      "CharcoalTablets",
      "PainkillerTablets",
      "VitaminBottle",
      "IodineTincture",
      "TetracyclineAntibiotics",
      "Epinephrine",
      "Morphine",
      "AntiChemInjector",
      "Syringe",
      "ClearSyringe",
      "BloodSyringe",
      "InjectionVial",
      "SalineBag",
      "StartKitIV",
      "SalineBagIV",
      "BloodBagEmpty",
      "BloodBagFull",
      "BloodBagIV",
      "BloodTestKit",
      "SRP_LabTube_Colorbase",
    };
  }
};
//radioactive
class SRP_MetalBarrel_Yellow extends SRP_MetalBarrel_Colorbase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      if (ibItem.HasRadioactiveEffect())
      {
        return true;
      }
    }
    return false;		
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    ItemBase ibItem;
    if (Class.CastTo(ibItem, item))
    {
      if (ibItem.HasRadioactiveEffect())
      {
        return true;
      }
    }
    return false;		
  }
};
//concrete
class SRP_MetalBarrel_Concrete extends SRP_MetalBarrel_Colorbase
{
  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionEmptyBottleBase);
	}

  int GetNumberOfStonesInCargo()
  {
    if (HasAnyCargo())
    {
      CargoBase cargoItem = GetInventory().GetCargo();
      return cargoItem.GetItemCount();
    }
    return 0;
  }

  bool HasEnoughToCraft(int numStone, int mlPerAction)
  {
    int totalStones = GetNumberOfStonesInCargo();
    int totalLiquid = 0;
    if( GetLiquidType() == LIQUID_WATER)
    {
      totalLiquid = GetQuantity();
    }
    if (totalStones == 0 || totalLiquid == 0)
      return false;

    // Print("requires total water: " + requiredWater);
    return (totalStones >= numStone && totalLiquid >= mlPerAction);
  }

  void ConsumeForOneAction(int numStones, int requiredWater)
  {
    AddQuantity(-requiredWater);
    CargoBase cargo = GetInventory().GetCargo();
    int stonesRemoved = 0;
		if ( cargo.GetItemCount() > 0 )
		{
      //process items
      for ( int i = 0; i < cargo.GetItemCount(); i++ )
      {
        SmallStone stone = SmallStone.Cast( cargo.GetItem( i ) );
        if (stone && stonesRemoved < numStones)
        {
          stone.Delete();
          stonesRemoved++;
        }
      }	
    }
  }

  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		return item.IsKindOf("SmallStone");
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		return item.IsKindOf("SmallStone");
  }
};