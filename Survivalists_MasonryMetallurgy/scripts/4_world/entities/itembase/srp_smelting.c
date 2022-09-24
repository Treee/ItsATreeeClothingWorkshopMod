//================================================ METAL BUCKETS
class SRP_MetalBucket extends ItemBase
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
    if (GetGame().IsDedicatedServer() && player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
      }
    }
  }
  override bool IsForgeHardened()
  {
    return true;
  }  
};
class SRP_MetalBucket_Lime extends SRP_MetalBucket{};
class SRP_MetalBucket_Mortar extends SRP_MetalBucket
{
  override void HandleHeatTransformation()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (GetHeatTimer() > 600)
    {
      GetGame().CreateObjectEx("SRP_ForgeCrucible_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }
  override int GetHeatTimerThreshold()
  {
    return 600;
  }
  override bool IsTransformedByHeat()
  {
    return true;
  }
};

//==================================================INGOT MOLDS
class SRP_ForgeIngotMold_ColorBase extends ItemBase
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
    if (GetGame().IsDedicatedServer() && player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
      }
    }
  }

  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEmptyIngotMold);
	}
  override bool IsForgeHardened()
  {
    return true;
  }
};
class SRP_ForgeIngotMold_MetalEmpty extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
  override bool IsForgeHardened()
  {
    return false;
  } 
};
class SRP_ForgeIngotMold_Lime extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
  override bool IsForgeHardened()
  {
    return false;
  } 
};
class SRP_ForgeIngotMold_Mortar extends SRP_ForgeIngotMold_ColorBase
{
  override void HandleHeatTransformation()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (GetHeatTimer() > 600)
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
  override int GetHeatTimerThreshold()
  {
    return 600;
  }
  override bool IsTransformedByHeat()
  {
    return true;
  }
};
class SRP_ForgeIngotMold_Empty extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
  override int GetHeatTimerThreshold()
  {
    return 600;
  }
  override bool IsTransformedByHeat()
  {
    return true;
  }
};
class SRP_ForgeIngotMold_Copper extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Tin extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Bronze extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Iron extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Gold extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Platinum extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Silver extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Zinc extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Brass extends SRP_ForgeIngotMold_ColorBase{};

//=====================================================INGOTS
class SRP_ForgeIngot_ColorBase extends ItemBase
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
    if (GetGame().IsDedicatedServer() && player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
      }
    }
  }
  override bool IsForgeHardened()
  {
    return true;
  }
};

class SRP_ForgeIngot_Copper extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Tin extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Bronze extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Iron extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Gold extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Platinum extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Silver extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Zinc extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Brass extends SRP_ForgeIngot_ColorBase{};

//=====================================================CRUCIBLES
class SRP_ForgeCrucible_ColorBase extends ItemBase
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
    if (GetGame().IsDedicatedServer() && player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
      }
    }
  }
  override bool IsForgeHardened()
  {
    return true;
  }
};

class SRP_ForgeCrucible_Empty extends SRP_ForgeCrucible_ColorBase
{
  override void IncrementHeatTimer(int increment = 1)
  {
    // only increment heat if there is something inside the raw ore slot
    if (HasOreInSlot("SRP_RawOre1") || HasOreInSlot("SRP_RawOre2"))
    {
      super.IncrementHeatTimer(increment);
    }
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
      return rawOre1.GetColor() != attachingOre1.GetColor();
    }
    // if we have ore in slot 2 and we are attaching to slot 1
    else if (HasOreInSlot("SRP_RawOre2") && InventorySlots.GetSlotIdFromString("SRP_RawOre1") == slotId)
    {
      SRP_Mining_RawOre_ColorBase rawOre2 = SRP_Mining_RawOre_ColorBase.Cast(FindAttachmentBySlotName("SRP_RawOre2"));
      SRP_Mining_RawOre_ColorBase attachingOre2 = SRP_Mining_RawOre_ColorBase.Cast(attachment);
      return rawOre2.GetColor() != attachingOre2.GetColor();
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
      string color = "";
      ItemBase newItem;
      if (combination1 || combination2)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_ForgeCrucible_Bronze", this.GetPosition(), false));
        newItem.SetTemperature(200);
        this.Delete();
      }
      combination1 = rawOre1.HasCorrectQuantityAndType(4, "copper") && rawOre2.HasCorrectQuantityAndType(3, "zinc",true);
      combination2 = rawOre1.HasCorrectQuantityAndType(3, "zinc",true) && rawOre2.HasCorrectQuantityAndType(4, "copper");
      if (combination1 || combination2)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_ForgeCrucible_Brass", this.GetPosition(), false));
        newItem.SetTemperature(200);
        this.Delete();
      }
    }
  }

  override void HandleHeatTransformation()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (GetHeatTimer() > 600)
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
  
  override int GetHeatTimerThreshold()
  {
    return 600;
  }
  override bool IsTransformedByHeat()
  {
    return true;
  }
};

class SRP_ForgeCrucible_Copper extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Tin extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Bronze extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Iron extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Gold extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Platinum extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Silver extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Zinc extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Brass extends SRP_ForgeCrucible_ColorBase{};

//======================================================= Chunks
class SRP_Mining_StoneChunk_ColorBase extends ItemBase
{
  override protected bool CanHaveTemperature()
	{
		return true;
	}
  override bool IsForgeHardened()
  {
    return true;
  }
};
class SRP_Mining_StoneChunk_Copper extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Iron extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Tin extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Gold extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Platinum extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Silver extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Zinc extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Clay extends SRP_Mining_StoneChunk_ColorBase{};
class SRP_Mining_StoneChunk_Coke extends SRP_Mining_StoneChunk_ColorBase
{
  override void HandleHeatTransformation()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (GetHeatTimer() > 1200 && GetQuantity() > 5)
    {
      GetGame().CreateObjectEx("SRP_Mining_RawOre_Coal", GetPosition(), false);
      AddQuantity(-6);
    }
  }
  
  override int GetHeatTimerThreshold()
  {
    return 1200;
  }
  override bool IsTransformedByHeat()
  {
    return true;
  }
};

//======================================================= ORE
class SRP_Mining_RawOre_ColorBase extends ItemBase{};
class SRP_Mining_RawOre_Copper extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Tin extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Bronze extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Iron extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Gold extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Platinum extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Silver extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Zinc extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Coal extends SRP_Mining_RawOre_ColorBase{};

class SRP_MiningTool_IronTongsSmall extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionPourMoltenMetalIntoMold);
		AddAction(ActionSRPSwapBrassCasingOption);
	}

  bool HasIngotAttached()
  {
    return FindAttachmentBySlotName("SRP_Ingot") != null;
  }
  
  bool HasCoinAttached()
  {
    return GetItemOnSlot("SRP_Coin") != null;
  }

  override string GetColor()
  {
    string ingotColor = "";
    SRP_ForgeIngot_ColorBase ingot = SRP_ForgeIngot_ColorBase.Cast(FindAttachmentBySlotName("SRP_Ingot"));
    if (ingot)
    {
      ingotColor = ingot.GetColor();
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

  bool IsAttachedCoinHotEnough(int expectedTemperature)
  {
    bool isHotEnough = false;
    SRP_Coinage_ColorBase coin = SRP_Coinage_ColorBase.Cast(FindAttachmentBySlotName("SRP_Coin"));
    if (coin)
    {
      isHotEnough = coin.IsHotEnough(expectedTemperature);
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

  bool HasEnoughCoins(int quantity)
  {
    bool hasEnough = false;
    ItemBase coin = ItemBase.Cast(GetItemOnSlot("SRP_Coin"));
    if (coin)
    {
      hasEnough = coin.GetQuantity() >= quantity;
    }
    return hasEnough;
  }

  void ReduceCoinCount(int quantity)
  {
    ItemBase coin = ItemBase.Cast(GetItemOnSlot("SRP_Coin"));
    if (coin)
    {
      coin.AddQuantity(-quantity);
    }
  }
};
class SRP_MiningTool_IronTongsMedium extends SRP_MiningTool_IronTongsSmall{};
class SRP_MiningTool_IronTongsLarge extends SRP_MiningTool_IronTongsSmall{};

class SRP_Tool_CoalRake extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSRPRakeFireplaceAshes);
	}
};

class SRP_Coinage_ColorBase extends ItemBase
{
  override bool IsForgeHardened()
  {
    return true;
  }
};
class SRP_Coinage_Platinum extends SRP_Coinage_ColorBase{};
class SRP_Coinage_Iron extends SRP_Coinage_ColorBase{};
class SRP_Coinage_Gold extends SRP_Coinage_ColorBase{};
class SRP_Coinage_GoldWorn extends SRP_Coinage_ColorBase{};
class SRP_Coinage_Bronze extends SRP_Coinage_ColorBase{};
class SRP_Coinage_Copper extends SRP_Coinage_ColorBase{};
class SRP_Coinage_BrassBlank extends SRP_Coinage_ColorBase
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
    if (GetGame().IsDedicatedServer() && player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
      }
    }
  }
};
