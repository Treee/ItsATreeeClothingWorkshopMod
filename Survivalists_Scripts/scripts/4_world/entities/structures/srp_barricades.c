class SRP_BarricadeComponent_ColorBase extends House
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
   override string GetKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
//======================= FURNITURE WITH NO CARGO
class SRP_BarricadeKit_Kit extends SRP_IntermediateCraftingKitBase{};


class SRP_Barricade_Wood_Kit extends SRP_KitBase{};
// class SRP_Barricade_Wood extends SRP_BarricadeComponent_ColorBase{};
class SRP_Barricade_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
class SRP_BarricadeWithWindow_Wood_Kit extends SRP_KitBase{};
// class SRP_BarricadeWithWindow_Wood extends SRP_BarricadeComponent_ColorBase{};
class SRP_BarricadeWithWindow_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};

class SRP_WindowBarricade_Wood_Kit extends SRP_KitBase{};
// class SRP_WindowBarricade_Wood extends SRP_BarricadeComponent_ColorBase{};
class SRP_WindowBarricade_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};

class SRP_WindowBarricadeTall_Wood_Kit extends SRP_KitBase{};
// class SRP_WindowBarricadeTall_Wood extends SRP_BarricadeComponent_ColorBase{};
class SRP_WindowBarricadeTall_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};

class SRP_SpikeBarricade_Wood_Kit extends SRP_KitBase{};
// class SRP_SpikeBarricade_Wood extends SRP_BarricadeComponent_ColorBase{};
class SRP_SpikeBarricade_Wood extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
  override string GetCraftingKitName()
  {
    return "SRP_BarricadeKit_Kit";
  }
};
