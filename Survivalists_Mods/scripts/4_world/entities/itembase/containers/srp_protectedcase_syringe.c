class SRP_SmallProtectorCase_Syringe extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		return item.IsKindOf("ClearSyringe") || item.IsKindOf("Syringe") || item.IsKindOf("BloodSyringe");
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		return item.IsKindOf("ClearSyringe") || item.IsKindOf("Syringe") || item.IsKindOf("BloodSyringe");
  }
};
class SRP_SmallProtectorCase_FlareBox extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    if (item.GetType().Contains("Ammo_Flare"))
    {
      return true;
    }
    return false;
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		if (item.GetType().Contains("Ammo_Flare"))
    {
      return true;
    }
    return false;
  }
};
