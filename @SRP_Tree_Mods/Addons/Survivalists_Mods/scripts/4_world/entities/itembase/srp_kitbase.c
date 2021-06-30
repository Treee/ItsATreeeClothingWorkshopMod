class SRP_KitBase extends ItemBase 
{
  void SRP_KitBase()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
  
  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
      string kitType = this.GetType();
      if (kitType != "") {
        // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
        kitType = kitType.Substring(0, kitType.Length() - 4);
      }
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(kitType, position, ECE_PLACE_ON_SURFACE));
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
// If you add a new kit, add it to this list so it gets the right stuff
//craftable kits
class SRP_BedsideTable_Kit extends SRP_KitBase {}
class SRP_WoodenShelf_Kit extends SRP_KitBase {}
class SRP_GunShelf_Kit extends SRP_KitBase {}
class SRP_Potbelly_Stove_Kit extends SRP_KitBase {}
class SRP_ShootingTargetO_Kit extends SRP_KitBase {}
class SRP_StreetLightLarge_Kit extends SRP_KitBase {}
class SRP_StreetLightMedium_Kit extends SRP_KitBase {}
class SRP_Furniture_WoodenTable_Kit extends SRP_KitBase {}


// non craftable kits
class SRP_FridgeBig_Kit extends SRP_KitBase {}
class SRP_PostBox_Kit extends SRP_KitBase {}
class SRP_PostBoxBig_Kit extends SRP_KitBase {}
class SRP_MilitaryCase_Kit extends SRP_KitBase {}
class SRP_GChair_Kit extends SRP_KitBase {}
class SRP_GChairHigh_Kit extends SRP_KitBase {}
class SRP_GOutdoorTable_Kit extends SRP_KitBase {}
class SRP_GOutdoorTableUmbrella_Kit extends SRP_KitBase {}
class SRP_Umbrella_Kit extends SRP_KitBase {}
class SRP_AdvancedWorkbench_Kit extends SRP_KitBase {}
