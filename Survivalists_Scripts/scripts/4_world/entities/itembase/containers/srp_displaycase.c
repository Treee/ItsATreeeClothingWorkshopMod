class SRP_DisplayCase_Base extends DeployableContainer_Base
{
  protected bool m_IsDisplayLocked = true;

  override void EEInit()
  {
    super.EEInit();
    RegisterNetSyncVariableBool("m_IsDisplayLocked");
    // LockDisplayCase(); 
  }

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if (IsDisplayCaseLocked())
    {
      LockDisplayCase();
    }
    else
    {
      UnLockDisplayCase();
    }
	}

  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (IsDisplayCaseLocked())
    {
      itemName = itemName + " - Locked";
    }
		return itemName;
	}

  // call only on server side
  void ModifyDisplayCase(bool securityState)
  {
    m_IsDisplayLocked = securityState;
    if (IsDisplayCaseLocked())
    {
      LockDisplayCase();
    }
    else
    {
      UnLockDisplayCase();
    }
    SetSynchDirty();
  }

  bool IsDisplayCaseLocked()
  {
    return m_IsDisplayLocked;
  }

  void LockDisplayCase()
  {
    int slot_id;       
    ItemBase item;
    EntityAI childItem;
		for ( int i = 0; i < GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = GetInventory().GetAttachmentSlotId(i);
	    GetInventory().SetSlotLock(slot_id, true);
      // Print("LockDisplayCase Slot ID: " + slot_id);
      if (Class.CastTo(item, GetInventory().FindAttachment(slot_id)))
      {
        // Print("LockDisplayCase Slot Item: " + item + " Sloot count: "  + item.GetInventory().GetAttachmentSlotsCount());
        for ( int k = 0; k < item.GetInventory().GetAttachmentSlotsCount(); k++ )
        {
          slot_id = item.GetInventory().GetAttachmentSlotId(k);
          // Print("Item Slot ID: " + slot_id);
          item.GetInventory().SetSlotLock(slot_id, true);
        }        
      }
    }			
  }

  void UnLockDisplayCase()
  {
    int slot_id;       
    ItemBase item;
    EntityAI childItem;
		for ( int i = 0; i < GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = GetInventory().GetAttachmentSlotId(i);
	    GetInventory().SetSlotLock(slot_id, false);
      // Print("UnLockDisplayCase Slot ID: " + slot_id);
      if (Class.CastTo(item, GetInventory().FindAttachment(slot_id)))
      {
        // Print("UnLockDisplayCase Slot Item: " + item + " Sloot count: "  + item.GetInventory().GetAttachmentSlotsCount());
        for ( int k = 0; k < item.GetInventory().GetAttachmentSlotsCount(); k++ )
        {
          slot_id = item.GetInventory().GetAttachmentSlotId(k);
          // Print("Item Slot ID: " + slot_id);
          item.GetInventory().SetSlotLock(slot_id, false);
        }        
      }
    }
  }
  override bool IsHealthVisible()
	{
		return false;
	}
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
}

class SRP_HoneyCombStand extends SRP_DisplayCase_Base{};
class SRP_GlassDisplayCase extends SRP_DisplayCase_Base{};
class SRP_GlassDisplayCaseLarge extends SRP_DisplayCase_Base
{
  protected ItemBase displayedItem;

  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		return GetInventory().GetCargo().GetItemCount() < 1;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		return GetInventory().GetCargo().GetItemCount() < 1;
  }

  override bool CanReleaseCargo( EntityAI parent )
	{
		return !IsDisplayCaseLocked();
	}

  override void EECargoIn(EntityAI item)
	{
		super.EECargoIn(item);
    CreateDisplayObject(item.GetType());
	}

  override void EECargoOut(EntityAI item)
  {
		super.EECargoOut(item);
    DeleteDisplayObject();
  }

  override void OnStoreSave(ParamsWriteContext ctx)
	{
    DeleteDisplayObject();
    super.OnStoreSave(ctx);
	}

  void CreateDisplayObject(string itemType)
  {
    displayedItem = ItemBase.Cast(GetGame().CreateObjectEx(itemType, "0 0 0", ECE_IN_INVENTORY|ECE_LOCAL));
    displayedItem.SetTakeable(false);
    MiscGameplayFunctions.AttachTo(displayedItem,this,"0 1 0","0 0 0","");
  }

  void DeleteDisplayObject()
  {
    if (displayedItem)
    {
      displayedItem.Delete();
    }
  }
	
};
class SRP_MuseumTable extends SRP_DisplayCase_Base{};


class SRP_GlassDisplayCase_Hook extends Inventory_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}
};

class SRP_GlassDisplayCase_Hook_Armband extends SRP_GlassDisplayCase_Hook
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
		return ( attachment && attachment.IsKindOf("Armband_ColorBase") );
	}
};
class SRP_GlassDisplayCase_Hook_ArmbandDouble extends SRP_GlassDisplayCase_Hook
{
  override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
    int idx1 = item.GetHiddenSelectionIndex("rightarmroll");
		item.SetObjectTexture(idx1,"");
	}

  override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);

    string item_name = item.GetType();	
		TStringArray item_texture_array = new TStringArray;
    GetGame().ConfigGetTextArray("cfgVehicles " + item_name + " hiddenSelectionsTextures", item_texture_array);	
    // Print("Detached: " + item_texture_array[0]);
    if (item_texture_array && item_texture_array.Count() > 0)
    {
      int idx1 = item.GetHiddenSelectionIndex("rightarmroll");
		  item.SetObjectTexture(idx1,item_texture_array[0]);
    }
	}
	
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
		return ( attachment && (attachment.IsKindOf("MassArmbandDouble_Colorbase") || attachment.IsKindOf("SRP_DoubleArmband_ColorBase") ));
	}
};
class SRP_GlassDisplayCase_Hook_ArmbandLeather extends SRP_GlassDisplayCase_Hook
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
		return ( attachment && attachment.IsKindOf("SRP_Armband_Base") );
	}
};
class SRP_GlassDisplayCase_Hook_ArmbandPatch extends SRP_GlassDisplayCase_Hook
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
		return ( attachment && (attachment.IsKindOf("SRP_PatchFlag_ColorBase") || attachment.IsKindOf("SRP_PatchLogo_ColorBase")) );
	}
};

class SRP_CoatRack_Base extends DeployableContainer_Base
{
  override bool IsHealthVisible()
	{
		return false;
	}
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenDisplayKit_Kit";
  }
};

class SRP_CoatRack_Basic extends SRP_CoatRack_Base{};
class SRP_CoatRack_Fancy extends SRP_CoatRack_Base{};
class SRP_CoatRack_Simple extends SRP_CoatRack_Base{};
