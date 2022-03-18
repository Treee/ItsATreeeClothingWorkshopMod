class SRP_Tacklebox extends Barrel_ColorBase
{
  override void EEInit()
	{
		super.EEInit();		
    if(IsOpen())
    {
      GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
    }
		else
    {
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
    }
	}

  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid2",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid2",1);
		}
	}

  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    if (item.IsKindOf("FishingLure_ColorBase"))
    {
      return true;
    }
    if (item.IsKindOf("Mackerel") || item.IsKindOf("Sardines") || item.IsKindOf("SRP_SaltWaterFish_Base") || item.IsKindOf("SRP_SaltWaterFishFilletMeat_Base"))
    {
      return true;
    }
    if (item.IsKindOf("Bitterlings") || item.IsKindOf("Carp") || item.IsKindOf("SRP_FreshWaterFish_Base") || item.IsKindOf("SRP_FreshWaterFishFilletMeat_Base"))
    {
      return true;
    }
    if (item.IsKindOf("Hook") || item.IsKindOf("BoneHook") || item.IsKindOf("Worm"))
    {
      return true;
    }
    return false;
  }

  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    if (item.IsKindOf("FishingLure_ColorBase"))
    {
      return true;
    }
    if (item.IsKindOf("Mackerel") || item.IsKindOf("Sardines") || item.IsKindOf("SRP_SaltWaterFish_Base") || item.IsKindOf("SRP_SaltWaterFishFilletMeat_Base"))
    {
      return true;
    }
    if (item.IsKindOf("Bitterlings") || item.IsKindOf("Carp") || item.IsKindOf("SRP_FreshWaterFish_Base") || item.IsKindOf("SRP_FreshWaterFishFilletMeat_Base"))
    {
      return true;
    }
    if (item.IsKindOf("Hook") || item.IsKindOf("BoneHook") || item.IsKindOf("Worm"))
    {
      return true;
    }
    return false;
  }

  override void Open()
	{
    super.Open();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override void Close()
	{
    super.Close();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}
};