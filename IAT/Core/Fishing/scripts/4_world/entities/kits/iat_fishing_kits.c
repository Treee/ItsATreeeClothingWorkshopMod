//=============== PLACEABLE
class IAT_Fishing_KitBase extends ItemBase 
{
  string GetFishingKitItemName()
  {
    string kitType = this.GetType();
    kitType.Replace("_Kit", "");
    return kitType;
  }
  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
      EntityAI kitItem;
      if (Class.CastTo(kitItem, GetGame().CreateObjectEx(GetFishingKitItemName(), position, ECE_SETUP)))
      {
			  kitItem.SetPosition(position);
			  kitItem.SetOrientation(orientation);
      }			
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
class IAT_Fishing_Aquarium_Kit extends IAT_Fishing_KitBase{};
class IAT_Fishing_WoodenFishHanger_Kit extends IAT_Fishing_KitBase{};
class IAT_Fishing_WoodenFishRack_Kit extends IAT_Fishing_KitBase{};

//=============== NON PLACEABLE
class IAT_Fishing_Intermediate_KitBase extends ItemBase 
{
  string GetFishingKitItemName()
  {
    string kitType = this.GetType();
    kitType.Replace("_Kit", "");
    return kitType;
  }
};
class IAT_Fishing_MetalLure_Kit extends IAT_Fishing_Intermediate_KitBase{};
class IAT_Fishing_WoodenLure_Kit extends IAT_Fishing_Intermediate_KitBase{};
class IAT_Fishing_WoodenRod_Kit extends IAT_Fishing_Intermediate_KitBase{};
