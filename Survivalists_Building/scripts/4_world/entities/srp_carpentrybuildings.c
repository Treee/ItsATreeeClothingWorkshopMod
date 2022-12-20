class SRP_DefaultHouse extends BuildingSuper
{
  override bool IsBuilding()
	{
		return true;
	}
	override bool CanObstruct()
	{
		return true;
	}
	override bool IsHealthVisible()
	{
		return false;
	}
	override bool IsInventoryVisible()
	{
		return false;
	}
	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
};

class SRP_Carpentry_WoodenOutHouse extends SRP_DefaultHouse{};
class Land_srp_wooden_2floor_tavern extends SRP_DefaultHouse{};
