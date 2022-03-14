class SRP_Fishing_KitBase extends ItemBase 
{
  void SRP_Fishing_KitBase(){}
  
  void ~SRP_Fishing_KitBase(){}

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

      this.Delete();
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
class SRP_Fishing_Intermediate_KitBase extends ItemBase
{
  override bool CanPutInCargo( EntityAI parent )
	{
    return GetInventory().AttachmentCount() == 0;
	}

  bool HasAttachmentFilled(string slotName)
  {
    return FindAttachmentBySlotName(slotName) != null;
  }  
};

//===============KITBASE
class SRP_WoodenFishHanger_Kit extends SRP_KitBase{};
class SRP_Aquarium_Kit extends SRP_KitBase{};

//==================INTERMEDIATE KITBASE
class SRP_AquariumIntermediate_Kit extends SRP_Fishing_Intermediate_KitBase
{
  bool CanCraft()
  {
    bool isValid = HasAttachmentFilled("SRP_Aquarium_Top");
    isValid &= HasAttachmentFilled("SRP_Aquarium_Bot");
    isValid &= HasAttachmentFilled("SRP_Aquarium_Glass1");
    isValid &= HasAttachmentFilled("SRP_Aquarium_Glass2");
    isValid &= HasAttachmentFilled("SRP_Aquarium_Glass3");
    isValid &= HasAttachmentFilled("SRP_Aquarium_Glass4");
    return isValid;
  }  
};
class SRP_AquariumIntermediate_Top extends SRP_Fishing_Intermediate_KitBase{};
class SRP_AquariumIntermediate_Bot extends SRP_Fishing_Intermediate_KitBase{};
class SRP_AquariumIntermediate_Glass extends SRP_Fishing_Intermediate_KitBase{};
