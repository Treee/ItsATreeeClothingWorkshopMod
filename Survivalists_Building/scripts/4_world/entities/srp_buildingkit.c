class SRP_Building_KitBase extends ItemBase 
{
  string GetBuildingKitItemName()
  {
    return string.Format("%1", GetType().Substring(0, GetType().Length() - 4));
  }

  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);

    if (GetGame().IsDedicatedServer())
		{
      PlayerBase playerPB = PlayerBase.Cast(player);
      if (player)
      {
        SRP_TurnItemIntoItemLambda_BuildingKitDeployment lambda = new SRP_TurnItemIntoItemLambda_BuildingKitDeployment(this, GetBuildingKitItemName(), playerPB, position, orientation);
        lambda.SetTransferParams(false, false);
        MiscGameplayFunctions.TurnItemIntoItemEx(playerPB, lambda);
      }

      // Print("name: " + GetBuildingKitItemName());
			// BaseBuildingBase placedItem = BaseBuildingBase.Cast( GetGame().CreateObjectEx( GetBuildingKitItemName(), GetPosition(), ECE_PLACE_ON_SURFACE ) );
      // if (placedItem)
      // {
      //   placedItem.SetOrientation(orientation);
      // }
      // Print("Complete");
		}
	}
	override bool DoPlacingHeightCheck()
	{
		return true;
	}
	override float HeightCheckOverride()
	{
		return 2.54;
	}
	// override void DisassembleKit(ItemBase item)
	// {
	// 	if (!IsHologram())
	// 	{
	// 		// ItemBase stick = ItemBase.Cast(GetGame().CreateObjectEx("WoodenStick",GetPosition(),ECE_PLACE_ON_SURFACE));
	// 		// MiscGameplayFunctions.TransferItemProperties(this, stick);
	// 		// stick.SetQuantity(2);
	// 		// Rope rope = Rope.Cast(item);
	// 		// CreateRope(rope);
	// 	}
	// }
	override void OnDebugSpawn()
	{
		// SpawnEntityOnGroundPos("Shovel", GetPosition());
		// SpawnEntityOnGroundPos("Hammer", GetPosition());
		// SpawnEntityOnGroundPos("Hammer", GetPosition());
		// SpawnEntityOnGroundPos("Pliers", GetPosition());

		// SpawnEntityOnGroundPos("WoodenLog", GetPosition());
		// SpawnEntityOnGroundPos("WoodenLog", GetPosition());
		// SpawnEntityOnGroundPos("Nail", GetPosition());
		// SpawnEntityOnGroundPos("CamoNet", GetPosition());
		// SpawnEntityOnGroundPos("BarbedWire", GetPosition());
		// SpawnEntityOnGroundPos("BarbedWire", GetPosition());
		// SpawnEntityOnGroundPos("MetalWire", GetPosition());
		// SpawnEntityOnGroundPos("CombinationLock", GetPosition());
		// SpawnEntityOnGroundPos("WoodenPlank", GetPosition());
		// SpawnEntityOnGroundPos("WoodenPlank", GetPosition());
		// SpawnEntityOnGroundPos("WoodenPlank", GetPosition());
		// SpawnEntityOnGroundPos("WoodenPlank", GetPosition());
	}
  override bool IsTwoHandedBehaviour()
	{
		return true;
	}
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
};

class SRP_Carpentry_WoodenOutHouse_Kit extends SRP_Building_KitBase{};
