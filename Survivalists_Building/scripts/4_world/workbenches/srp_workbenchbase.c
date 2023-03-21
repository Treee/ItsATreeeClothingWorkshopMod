class SRP_DefaultWorkbenchHouse extends BuildingSuper
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
		return true;
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

class SRP_PrefabCrafting_carpentry extends SRP_DefaultWorkbenchHouse{};
class SRP_PrefabCrafting_metalworking extends SRP_DefaultWorkbenchHouse{};