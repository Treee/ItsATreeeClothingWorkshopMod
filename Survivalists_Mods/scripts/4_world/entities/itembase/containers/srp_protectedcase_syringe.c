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