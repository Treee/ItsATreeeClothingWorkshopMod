modded class ItemBase
{ 
  protected int m_HeatCounter = 0;  

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
      // Print("OnInventoryEnter Item in hands: " + entity + " this item: " + GetType());
      ItemBase item = ItemBase.Cast(entity);
      // Print("OnInventoryEnter item cast: " + item);
      if (item.IsContainerFilledToRemoveSprint(80))
      {
        PlayerBase playerPB = PlayerBase.Cast(player);
        // Print("OnInventoryEnter container is filled above max and player cast: " + playerPB);
        if (playerPB)
        {
          if (!playerPB.IsSprintDisabled())
          {
            // Print("OnInventoryEnter: sprint is not disabled so disable it");
            playerPB.SetIsSprintDisabled(true);            
          }
        }      
      }
    }
	}
	override void OnInventoryExit(Man player)
	{
    EntityAI entity = player.GetHumanInventory().GetEntityInHands();    
    EntityAI owner = GetHierarchyParent();	
    if (entity && !owner)
    {
      // Print("OnInventoryExit Item in hands: " + entity + " this item: " + GetType());
      ItemBase item = ItemBase.Cast(entity);
      // Print("OnInventoryExit item cast: " + item);
      if (!item.IsContainerFilledToRemoveSprint(80))
      {
        PlayerBase playerPB = PlayerBase.Cast(player);
        // Print("OnInventoryExit container is not filled above max and player cast: " + playerPB);
        if (playerPB)
        {
          if (playerPB.IsSprintDisabled())
          {
            // Print("OnInventoryExit: sprint is disabled so disable it");
            playerPB.SetIsSprintDisabled(false);            
          }
        }      
      }
    }
    super.OnInventoryExit(player);
	}  

  bool HasAlcoholEffect()
  {
    return false;
  }
  float GetAlcoholAmount()
  {
    return 0.0;
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
  bool IsContainerFilledToRemoveSprint(int maxCargo=80)
  {
    // Print("IsContainerFilledToRemoveSprint: maxCargo: " + maxCargo);
    if (HasAnyCargo()) // if the item exists and has cargo
    {
      CargoBase cargoItem = GetInventory().GetCargo();
      int currentWeight = 0;
      int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y    
      // Print("has cargo with this size: " + maxWeight);
      if (maxWeight >= maxCargo)  
      {
        for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
        {
          int x, y;
          cargoItem.GetItemSize( i, x, y );
          currentWeight += x * y;
        }
        float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
        // Print("Percent filled: " + percentFilled);
        return percentFilled >= GetPercentWeightToRemoveSprint();          
      }
    }
    return false;
  }  
  float GetPercentWeightToRemoveSprint()
  {
    return 0.45;
  }
  bool IsSmeltable()
  {
    return false;
  }
  bool IsTransformedByHeat()
  {
    return false;
  }
  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }
  void ResetHeatTimer()
  {
    m_HeatCounter = 0;
  }
  int GetHeatTimer()
  {
    return m_HeatCounter;
  }
  int GetHeatTimerThreshold()
  {
    return -1;
  }
  void HandleHeatTransformation()
  {
    Print("Item is max heat and can transform: " + GetType());    
  }
  bool HasCorrectQuantityAndType(int quantity, string acceptedType, bool exactAmount=false)
  {
    if (exactAmount)
    {
      return GetQuantity() == quantity && acceptedType == GetColor();
    }
    return GetQuantity() >= quantity && acceptedType == GetColor();
  }
  string GetColor()
  {
    return ConfigGetString("color");
  }
  int GetResistorDigit()
  {
    return -1;
  }
  int GetResistorMultiplier()
  {
    return 0;
  }
  float GetResistorTolerance()
  {
    return 0;
  }
  int GetResistorTemperaturCoeffcient()
  {
    return 0;
  }
  // make sure to use the slot name not the item name....
	ItemBase GetItemOnSlot(string slot_type)
	{    
		int slot_id = InventorySlots.GetSlotIdFromString( slot_type );
		EntityAI item_EAI = GetInventory().FindAttachment( slot_id );
		ItemBase item_IB = ItemBase.Cast(item_EAI);
		
		if (item_EAI && !item_IB)
		{
			string str = "Warning! GetItemOnSlot() >> found item on slot " + slot_type + " can't be cast to ItemBase! Found item is " + item_EAI.GetType() + " and the player is " + GetType() + "!";
			Error(str);
			return null;
		}
		return item_IB;
	}
};
