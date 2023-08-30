class SRP_WoodenFurniture_HouseBase extends House
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
//======================= FURNITURE WITH NO CARGO
class SRP_Furniture_Gazebo_Kit extends SRP_KitBase{};
class SRP_Furniture_Gazebo extends SRP_WoodenFurniture_HouseBase{};

class SRP_Furniture_WitchTable_Kit extends SRP_KitBase{};
// class SRP_Furniture_WitchTable extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_WitchTable extends SRP_Container_Base
{
  override bool DisableVicinityIcon()
	{
		return true;
	}
};

class SRP_Furniture_OldWoodenChair_Kit extends SRP_KitBase{};
// class SRP_Furniture_OldWoodenChair extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_OldWoodenChair extends SRP_Container_Base{};

class SRP_Furniture_WoodenChair_Kit extends SRP_KitBase{};
// class SRP_Furniture_WoodenChair extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_WoodenChair extends SRP_Container_Base{};

class SRP_Furniture_Sofa_Kit extends SRP_KitBase{};
// class SRP_Furniture_Sofa extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_Sofa extends SRP_Container_Base{};

class SRP_Furniture_Sofa_Modern_Kit extends SRP_KitBase{};
// class SRP_Furniture_Sofa_Modern extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_Sofa_Modern extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_Furniture_Sofa_Old_Kit extends SRP_KitBase{};
// class SRP_Furniture_Sofa_Old extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_Sofa_Old extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_Furniture_WoodenTable_Kit extends SRP_KitBase{};
// class SRP_Furniture_WoodenTable extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_WoodenTable extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_Furniture_WoodenStairs_Kit extends SRP_KitBase{};
// class SRP_Furniture_WoodenStairs extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_WoodenStairs extends SRP_Container_Base{};

class SRP_Furniture_LogStump_Kit extends SRP_KitBase{};
// class SRP_Furniture_LogStump extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_LogStump extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_LogBenchSmall_Kit extends SRP_KitBase{};
// class SRP_Furniture_LogBenchSmall extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_LogBenchSmall extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_Furniture_WoodBenchSmall_Kit extends SRP_KitBase{};
// class SRP_Furniture_WoodBenchSmall extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_WoodBenchSmall extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_Furniture_WoodBenchSlim_Kit extends SRP_KitBase{};
// class SRP_Furniture_WoodBenchSlim extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_WoodBenchSlim extends SRP_DeployableContainer_Base
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_WoodenBench_Kit extends SRP_KitBase{};
// class SRP_WoodenBench extends SRP_WoodenFurniture_HouseBase{};
class SRP_WoodenBench extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};
class SRP_Furniture_PileOfPlanks_Kit extends SRP_KitBase{};
// class SRP_Furniture_PileOfPlanks extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_PileOfPlanks extends SRP_DeployableContainer_Base{};

class SRP_Furniture_SmallLogPile_Kit extends SRP_KitBase{};
// class SRP_Furniture_SmallLogPile extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_SmallLogPile extends SRP_DeployableContainer_Base
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    return false;
  }

  override bool CanPutIntoHands (EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0;
  }

  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
			if ( player )
			{
				ItemBase itemInHands = player.GetItemInHands();
        if (itemInHands.GetType() == "SRP_Furniture_SmallLogPile")
        {
          return false;
        }
			}
		}
		return super.CanReceiveAttachment(attachment, slotId);
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}

class SRP_Furniture_LargeLogPile_Kit extends SRP_KitBase{};
// class SRP_Furniture_LargeLogPile extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_LargeLogPile extends SRP_DeployableContainer_Base
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    return false;
  }

  override bool CanPutIntoHands (EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0;
  }

  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
			if ( player )
			{
				ItemBase itemInHands = player.GetItemInHands();
        if (itemInHands.GetType() == "SRP_Furniture_LargeLogPile")
        {
          return false;
        }
			}
		}
		return super.CanReceiveAttachment(attachment, slotId);
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
}

class SRP_GChair_Kit extends SRP_KitBase{};
// class SRP_GChair extends SRP_WoodenFurniture_HouseBase{};
class SRP_GChair extends SRP_Container_Base{};

class SRP_GChairHigh_Kit extends SRP_KitBase{};
// class SRP_GChairHigh extends SRP_WoodenFurniture_HouseBase{};
class SRP_GChairHigh extends SRP_Container_Base{};

class SRP_GOutdoorTable_Kit extends SRP_KitBase{};
// class SRP_GOutdoorTable extends SRP_WoodenFurniture_HouseBase{};
class SRP_GOutdoorTable extends SRP_Container_Base{};

class SRP_GOutdoorTableUmbrella_Kit extends SRP_KitBase{};
// class SRP_GOutdoorTableUmbrella extends SRP_WoodenFurniture_HouseBase{};
class SRP_GOutdoorTableUmbrella extends SRP_Container_Base{};

class SRP_Umbrella_Kit extends SRP_KitBase{};
// class SRP_Umbrella extends SRP_WoodenFurniture_HouseBase{};
class SRP_Umbrella extends SRP_Container_Base{};

class SRP_BarricadeMetal_Kit extends SRP_KitBase{};
// class SRP_BarricadeMetal extends SRP_WoodenFurniture_HouseBase{};
class SRP_BarricadeMetal extends SRP_Container_Base
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

class SRP_Furniture_BarrelTable_Kit extends SRP_KitBase{};
// class SRP_Furniture_Barrel extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_Barrel extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

class SRP_Furniture_Barrel_Kit extends SRP_KitBase{};
// class SRP_Furniture_BarrelTable extends SRP_WoodenFurniture_HouseBase{};
class SRP_Furniture_BarrelTable extends SRP_Container_Base
{
  override string GetCraftingKitName()
  {
    return "SRP_WoodenFurnitureKit_Kit";
  }
};

//======================= FURNITURE WITH CARGO
class SRP_WoodenFurniture_ItemBase extends ItemBase
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override bool CanPutInCargo( EntityAI parent )
	{
    return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
};
class SRP_Furniture_BarCounter_Kit extends SRP_KitBase{};
// class SRP_Furniture_BarCounter extends SRP_WoodenFurniture_ItemBase{};
class SRP_Furniture_BarCounter extends SRP_Container_Base{};
