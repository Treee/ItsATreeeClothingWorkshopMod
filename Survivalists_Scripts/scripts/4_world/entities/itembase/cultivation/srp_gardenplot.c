class SRP_GardenPlotSmall_ColorBase extends GardenBase
{
	override int GetGardenSlotsCount()
	{
		return 3;
	}
	
	void RefreshSlots()
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
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_GardenPlotSmall_Basic extends SRP_GardenPlotSmall_ColorBase{};

class SRP_GardenPlotMedium_ColorBase extends GardenBase
{
  override int GetGardenSlotsCount()
	{
		return 6;
	}
	
	void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
		HideSelection("SeedBase_4");
		HideSelection("SeedBase_5");
		HideSelection("SeedBase_6");
    HideSelection("slotCovered_01");
		HideSelection("slotCovered_02");
		HideSelection("slotCovered_03");
		HideSelection("slotCovered_04");
		HideSelection("slotCovered_05");
		HideSelection("slotCovered_06");
	}
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_GardenPlotMedium_Basic extends SRP_GardenPlotMedium_ColorBase{};

class SRP_GardenPlotLarge_ColorBase extends GardenBase
{
  override int GetGardenSlotsCount()
	{
		return 12;
	}
	
	void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
		HideSelection("SeedBase_4");
		HideSelection("SeedBase_5");
		HideSelection("SeedBase_6");
    HideSelection("SeedBase_7");
		HideSelection("SeedBase_8");
		HideSelection("SeedBase_9");
		HideSelection("SeedBase_10");
		HideSelection("SeedBase_11");
		HideSelection("SeedBase_12");
    HideSelection("slotCovered_01");
		HideSelection("slotCovered_02");
		HideSelection("slotCovered_03");
		HideSelection("slotCovered_04");
		HideSelection("slotCovered_05");
		HideSelection("slotCovered_06");
    HideSelection("slotCovered_07");
		HideSelection("slotCovered_08");
		HideSelection("slotCovered_09");
		HideSelection("slotCovered_10");
		HideSelection("slotCovered_11");
		HideSelection("slotCovered_12");
	}
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_GardenPlotLarge_Basic extends SRP_GardenPlotLarge_ColorBase{};
