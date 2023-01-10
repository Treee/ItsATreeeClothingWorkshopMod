class SRP_DefaultHouse extends BuildingSuper
{
  const float MAX_ACTION_WINDOW_DETECTION_DISTANCE 		= 1.65;		//meters

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
			if ( distance >= MAX_ACTION_WINDOW_DETECTION_DISTANCE )
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
class Land_srp_treehouse_tripleplatform extends SRP_DefaultHouse{};
class Land_srp_treehouse_doubleplatform extends SRP_DefaultHouse{};

// Shipping Containers
class Land_SRP_ShippingContainer_20ft extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Black extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_BlackMesa extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Blue extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Green extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Grey extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Orange extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Red extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Yellow extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Stag extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Locknsons extends SRP_DefaultHouse{};
class Land_SRP_ShippingContainer_20ft_Espen extends SRP_DefaultHouse{};

class Land_srp_constructionmaterials extends SRP_DefaultHouse
{
  override bool IsInventoryVisible()
	{
		return true;
	}
	override bool CanReleaseAttachment (EntityAI attachment)
	{
		return false;
	}

};