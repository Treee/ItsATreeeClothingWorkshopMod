modded class ItemBase
{
  override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached(parent, slot_id);
    // Print("OnWasAttached");
    if (IsSprintRemoved())
    {
      EntityAI owner = GetHierarchyRootPlayer();        
      if (owner && owner.IsPlayer())
      {
        PlayerBase owner_PB = PlayerBase.Cast(owner);
        owner_PB.SetIsSprintDisabled(true);
      }
    }    
	}
	
	override void OnWasDetached( EntityAI parent, int slot_id )
	{
		super.OnWasDetached(parent, slot_id);
    // Print("OnWasDetached");
    if (IsSprintRemoved())
    {
      PlayerBase player = PlayerBase.Cast(parent);
  		if (player)
      {
        player.SetIsSprintDisabled(false);
      }
    }
	}

  override void OnInventoryEnter(Man player)
	{
    super.OnInventoryEnter(player);

    EntityAI entity = player.GetHumanInventory().GetEntityInHands();
    if (entity)
    {
      ItemBase item = ItemBase.Cast(entity);
      if (item && item.HasAnyCargo()) // if the item exists and has cargo
      {
        CargoBase cargoItem = item.GetInventory().GetCargo();
        int currentWeight = 0;
        int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y    
        if (maxWeight >= 80)  
        {
          for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
          {
            int x, y;
            cargoItem.GetItemSize( i, x, y );
            currentWeight += x * y;
          }
          float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
          PlayerBase playerPB = PlayerBase.Cast(player);
          if (playerPB)
          {
            if (percentFilled >= 0.6)
            {
              playerPB.SetIsSprintDisabled(true);
            }
            else
            {
              playerPB.SetIsSprintDisabled(false);
            }
          }
        }
      }
    }
	}
		
	override void OnInventoryExit(Man player)
	{
    super.OnInventoryExit(player);
    EntityAI entity = player.GetHumanInventory().GetEntityInHands();
    if (entity)
    {
      ItemBase item = ItemBase.Cast(entity);
      if (item && item.HasAnyCargo()) // if the item exists and has cargo
      {
        CargoBase cargoItem = item.GetInventory().GetCargo();
        int currentWeight = 0;
        int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y    
        if (maxWeight >= 80)  
        {
          for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
          {
            int x, y;
            cargoItem.GetItemSize( i, x, y );
            currentWeight += x * y;
          }
          float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
          PlayerBase playerPB = PlayerBase.Cast(player);
          if (playerPB)
          {
            if (percentFilled >= 0.45)
            {
              playerPB.SetIsSprintDisabled(true);
            }
            else
            {
              playerPB.SetIsSprintDisabled(false);
            }
          }
        }
      }
    }
	}

  bool HasAlcoholEffect()
  {
    return false;
  }
  bool HasEpinephrineEffect()
  {
    return false;
  }
  bool HasRadioactiveEffect()
  {
    return false;
  }
  bool HasCharcoalEffect()
  {
    return false;
  }
  bool IsBloodDrink()
  {
    return false;
  }
  bool HasAntibioticEffect()
  {
    return false;
  }
  bool HasHealthRegenEffect()
  {
    return false;
  }
  int GetHealthRegenEffectTotal()
  {
    return 0;
  }
  bool HasShockRegenEffect()
  {
    return false;
  }
  int GetShockRegenEffectTotal()
  {
    return 0;
  }
  bool HasBloodRegenEffect()
  {
    return false;
  }
  int GetBloodRegenEffectTotal()
  {
    return 0;
  }
  bool IsAlchemyReagent()
  {
    return false;
  }
  bool IsPlacingKit()
  {
    return false;
  }
  bool IsCraftingKit()
  {
    return false;
  }
  bool IsSprintRemoved()
  {
    return false;
  }
};
