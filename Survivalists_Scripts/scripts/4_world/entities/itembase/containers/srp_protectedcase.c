class SRP_SmallProtectorCase_Nails extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		return item.IsKindOf("Nail") || item.IsKindOf("NailBox");
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		return item.IsKindOf("Nail") || item.IsKindOf("NailBox");
  }
};
class SRP_SmallProtectorCase_Syringe extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    return item.GetType().Contains("DUB_Mutant") && item.IsInherited(AntiChemInjector);
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    return item.GetType().Contains("DUB_Mutant") && item.IsInherited(AntiChemInjector);
  }
};
class SRP_SmallProtectorCase_FlareBox extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    return item.GetType().Contains("Ammo_Flare");
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    return item.GetType().Contains("Ammo_Flare");
  }
};
class SRP_SmallProtectorCase_FlagArmbandBox extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    if (item.IsInherited(Armband_ColorBase))
      return true;
    if (item.IsInherited(SRP_Armband_Base))
      return true;
    if (item.IsInherited(SRP_PatchFlag_ColorBase))
      return true;
    if (item.IsInherited(SRP_PatchLogo_ColorBase))
      return true;
    if (item.IsInherited(Flag_Base))
      return true;    
    return false;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    if (item.IsInherited(Armband_ColorBase))
      return true;
    if (item.IsInherited(SRP_Armband_Base))
      return true;
    if (item.IsInherited(SRP_PatchFlag_ColorBase))
      return true;
    if (item.IsInherited(SRP_PatchLogo_ColorBase))
      return true;
    if (item.IsInherited(Flag_Base))
      return true;    
    return false;
  }
};
