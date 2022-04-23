class SRP_MasonryMetallurgy_KitBase extends ItemBase 
{
  void SRP_MasonryMetallurgy_KitBase(){}
  
  void ~SRP_MasonryMetallurgy_KitBase(){}

  string GetKitItemName()
  {
    string kitType = this.GetType();
    if (kitType != "") {
      // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
      kitType = kitType.Substring(0, kitType.Length() - 4);
    }
    return kitType;
  }

  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(GetKitItemName(), position, ECE_PLACE_ON_SURFACE));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);

      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Delete, 1000, false);
		}
	}

	override bool IsDeployable() 
  {
    return true;
  }

  override bool CanAssignAttachmentsToQuickbar()
	{
		return false;
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
};

class SRP_MasonryMetallurgy_Intermediate_KitBase extends ItemBase
{
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}

  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }
  bool HasAttachmentFilledWithQuantity(string slotName, float quantity)
  {
    EntityAI eai = FindAttachmentBySlotName(slotName);
    if (eai)
    {
      ItemBase item = ItemBase.Cast(eai);
      return (item && item.GetQuantity() >= quantity);    
    }
    return false;
  }
  bool CanCraft()
  {
    return false;
  }
};

//===============KITBASE
