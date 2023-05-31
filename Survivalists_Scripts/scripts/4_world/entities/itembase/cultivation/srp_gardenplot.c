class SRP_GardenPlotSmall_ColorBase extends GardenBase
{
	override int GetGardenSlotsCount()
	{
		return 3;
	}
	
	override void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
    HideSelection("slotCovered_01");
		HideSelection("slotCovered_02");
		HideSelection("slotCovered_03");
	}

  override void OnPlacementStarted( Man player )
	{
		RefreshSlots();
	}
	
	override void OnHologramBeingPlaced( Man player )
	{
		RefreshSlots();
	}
};

class SRP_GardenPlotSmall_Basic extends SRP_GardenPlotSmall_ColorBase{};