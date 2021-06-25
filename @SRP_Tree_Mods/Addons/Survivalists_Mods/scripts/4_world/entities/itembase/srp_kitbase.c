class SRP_KitBase extends ItemBase 
{
  void SRP_KitBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

  string GetKitItemName() {
    return "";
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

		SetIsPlaceSound(true);
	}

	override bool IsDeployable() 
  {
      return true;
  } 

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
}

class SRP_Potbelly_Stove_Kit extends SRP_KitBase
{
  override string GetKitItemName() {
    return "SRP_Potbelly_Stove";
  }
}