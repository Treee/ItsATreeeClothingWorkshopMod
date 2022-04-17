class SRP_DisplayCase_Base extends DeployableContainer_Base
{
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
}

class SRP_HoneyCombStand extends SRP_DisplayCase_Base{};
class SRP_GlassDisplayCase extends SRP_DisplayCase_Base{};


class SRP_GlassDisplayCase_Hook extends Inventory_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
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
		return ( attachment && attachment.IsKindOf("MassArmbandDouble_Colorbase") );
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