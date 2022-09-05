class SRP_SmallProtectorCase_Syringe extends SmallProtectorCase
{
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    return item.GetType().Contains("DUB_Mutantsyringe");
	}

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    return item.GetType().Contains("DUB_Mutantsyringe");
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
