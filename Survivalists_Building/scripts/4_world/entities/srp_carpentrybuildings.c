class SRP_DefaultHouse extends BuildingSuper
{
  const float MAX_ACTION_DETECTION_DISTANCE 		= 1.65;		//meters

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

  // Check if player is "inside"
  bool HasProperDistanceToSRPWindow( string selection, PlayerBase player )
	{
		if ( MemoryPointExists( selection ) )
		{
			vector selection_pos = ModelToWorld( GetMemoryPointPos( selection ) );
			float distance = vector.Distance( selection_pos, player.GetPosition() );
      // Print(string.Format("mem point exists: position: %1 distance: %2", selection_pos, distance));
			if ( distance >= MAX_ACTION_DETECTION_DISTANCE )
			{
				return false;
			}
		}		
		return true;
	}
};

class SRP_Carpentry_WoodenOutHouse extends SRP_DefaultHouse{};
class Land_srp_wooden_2floor_tavern extends SRP_DefaultHouse{};
class Land_srp_treehouse_circular extends SRP_DefaultHouse{};
class Land_srp_treehouse_box extends SRP_DefaultHouse{};
class Land_srp_treehouse_doubleplatform extends SRP_DefaultHouse{};
class Land_srp_treehouse_tripleplatform extends SRP_DefaultHouse{};