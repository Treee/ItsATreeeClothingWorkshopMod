//================================================ METAL BUCKETS
class SRP_MetalBucket extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }
};
class SRP_MetalBucket_Lime extends SRP_MetalBucket{};
class SRP_MetalBucket_Mortar extends SRP_MetalBucket
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 600)
    {
      GetGame().CreateObjectEx("SRP_ForgeCrucible_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }
};

//==================================================INGOT MOLDS
class SRP_ForgeIngotMold_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }

  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_MetalEmpty extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Lime extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Mortar extends SRP_ForgeIngotMold_ColorBase
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 600)
    {
      GetGame().CreateObjectEx("SRP_ForgeIngotMold_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }

  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Empty extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Copper extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Tin extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Bronze extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Iron extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Gold extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Platinum extends SRP_ForgeIngotMold_ColorBase{};

//=====================================================INGOTS
class SRP_ForgeIngot_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }

  string GetIngotColor()
  {
    return ConfigGetString("color");
  }

  bool IsHotEnough(int expectedTemperature)
  {
    // Print("Current Temperature of " + GetType() + " is " + GetTemperature() + " Max: " + GetTemperatureMax() + " expected: " + expectedTemperature);
    return (GetTemperature() >= expectedTemperature);
  }
};

class SRP_ForgeIngot_Copper extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Tin extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Bronze extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Iron extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Gold extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Platinum extends SRP_ForgeIngot_ColorBase{};


//=====================================================CRUCIBLES
class SRP_ForgeCrucible_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

    override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_BURNING );
      }
    }
  }
};

class SRP_ForgeCrucible_Empty extends SRP_ForgeCrucible_ColorBase
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    // only increment heat if there is something inside the raw ore slot
    if (HasOreInSlot("SRP_RawOre1") || HasOreInSlot("SRP_RawOre2"))
    {
      m_HeatCounter += increment;
    }
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

    // if we have ore in slot 1 and we are attaching to slot 2
    if (HasOreInSlot("SRP_RawOre1") && InventorySlots.GetSlotIdFromString("SRP_RawOre2") == slotId)
    {
      SRP_Mining_RawOre_ColorBase rawOre1 = SRP_Mining_RawOre_ColorBase.Cast(FindAttachmentBySlotName("SRP_RawOre1"));
      SRP_Mining_RawOre_ColorBase attachingOre1 = SRP_Mining_RawOre_ColorBase.Cast(attachment);
      return rawOre1.GetOreColor() != attachingOre1.GetOreColor();
    }
    // if we have ore in slot 2 and we are attaching to slot 1
    else if (HasOreInSlot("SRP_RawOre2") && InventorySlots.GetSlotIdFromString("SRP_RawOre1") == slotId)
    {
      SRP_Mining_RawOre_ColorBase rawOre2 = SRP_Mining_RawOre_ColorBase.Cast(FindAttachmentBySlotName("SRP_RawOre2"));
      SRP_Mining_RawOre_ColorBase attachingOre2 = SRP_Mining_RawOre_ColorBase.Cast(attachment);
      return rawOre2.GetOreColor() != attachingOre2.GetOreColor();
    }
    else
    { // if empty, allow ores
      return !(HasOreInSlot("SRP_RawOre1") && HasOreInSlot("SRP_RawOre2"));
    }
		return false;
	}
	

  bool HasOreInSlot(string slotName)
  {
    return (FindAttachmentBySlotName(slotName) != null);
  }

  bool HasMoreThanOneOreAttached()
  {
    return (HasOreInSlot("SRP_RawOre1") && HasOreInSlot("SRP_RawOre2"));
  }

  void SimpleSmelting()
  {
    EntityAI slot1 = FindAttachmentBySlotName("SRP_RawOre1");
    EntityAI slot2 = FindAttachmentBySlotName("SRP_RawOre2");
    SRP_Mining_RawOre_ColorBase rawOre;
    if (slot1)
    {
      rawOre = SRP_Mining_RawOre_ColorBase.Cast(slot1);
    }
    else
    {
      rawOre = SRP_Mining_RawOre_ColorBase.Cast(slot2);
    }
    if (rawOre && rawOre.GetQuantity() == 4)
    {
      string color = rawOre.ConfigGetString("color");
      string newClassName = "SRP_ForgeCrucible_" + color;
      ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(newClassName, this.GetPosition(), false));
      newItem.SetTemperature(200);
      this.Delete();
    }
  }

  void ComplexSmelting()
  {
    SRP_Mining_RawOre_ColorBase rawOre1 = SRP_Mining_RawOre_ColorBase.Cast(FindAttachmentBySlotName("SRP_RawOre1"));
    SRP_Mining_RawOre_ColorBase rawOre2 = SRP_Mining_RawOre_ColorBase.Cast(FindAttachmentBySlotName("SRP_RawOre2"));
    if (rawOre1 && rawOre2)
    {
      bool combination1 = rawOre1.HasCorrectQuantityAndType(4, "copper") && rawOre2.HasCorrectQuantityAndType(4, "tin");
      bool combination2 = rawOre1.HasCorrectQuantityAndType(4, "tin") && rawOre2.HasCorrectQuantityAndType(4, "copper");
      if (combination1 || combination2)
      {
        // for now only bronze is complex, if you see this, study because it will be hidden soon.
        string color = "bronze";// rawOre.ConfigGetString("color");
        string newClassName = "SRP_ForgeCrucible_" + color;
        ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(newClassName, this.GetPosition(), false));
        newItem.SetTemperature(200);
        this.Delete();
      }
    }
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 10)
    {
      if (HasMoreThanOneOreAttached())
      {
        ComplexSmelting();
      }
      else 
      {
        SimpleSmelting();
      }
    }
  }
};

class SRP_ForgeCrucible_Copper extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Tin extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Bronze extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Iron extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Gold extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Platinum extends SRP_ForgeCrucible_ColorBase{};

//======================================================= ORE
class SRP_Mining_RawOre_ColorBase extends Inventory_Base
{
  bool HasCorrectQuantityAndType(int quantity, string acceptedType)
  {
    return GetQuantity() >= quantity && acceptedType == GetOreColor();
  }

  string GetOreColor()
  {
    return ConfigGetString("color");
  }
};
class SRP_Mining_RawOre_Copper extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Tin extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Bronze extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Iron extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Gold extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Platinum extends SRP_Mining_RawOre_ColorBase{};



class SRP_MiningTool_IronTongsSmall extends Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionPourMoltenMetalIntoMold);
	}

  bool HasIngotAttached()
  {
    return FindAttachmentBySlotName("SRP_Ingot") != null;
  }

  string GetIngotColor()
  {
    string ingotColor = "";
    SRP_ForgeIngot_ColorBase ingot = SRP_ForgeIngot_ColorBase.Cast(FindAttachmentBySlotName("SRP_Ingot"));
    if (ingot)
    {
      ingotColor = ingot.GetIngotColor();
    }
    return ingotColor;
  }

  bool IsAttachedIngotHotEnough(int expectedTemperature)
  {
    bool isHotEnough = false;
    SRP_ForgeIngot_ColorBase ingot = SRP_ForgeIngot_ColorBase.Cast(FindAttachmentBySlotName("SRP_Ingot"));
    if (ingot)
    {
      isHotEnough = ingot.IsHotEnough(expectedTemperature);
    }
    return isHotEnough;
  }

  bool HasEnoughIngots(int quantity)
  {
    bool hasEnough = false;
    SRP_ForgeIngot_ColorBase ingot = SRP_ForgeIngot_ColorBase.Cast(FindAttachmentBySlotName("SRP_Ingot"));
    if (ingot)
    {
      hasEnough = ingot.GetQuantity() >= quantity;
    }
    return hasEnough;
  }

  void ReduceIngotCount(int quantity)
  {
    SRP_ForgeIngot_ColorBase ingot = SRP_ForgeIngot_ColorBase.Cast(FindAttachmentBySlotName("SRP_Ingot"));
    if (ingot)
    {
      ingot.AddQuantity(-quantity);
    }
  }
};
class SRP_MiningTool_IronTongsMedium extends SRP_MiningTool_IronTongsSmall{};
class SRP_MiningTool_IronTongsLarge extends SRP_MiningTool_IronTongsSmall{};

