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