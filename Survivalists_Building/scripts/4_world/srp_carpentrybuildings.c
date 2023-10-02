class SRP_DefaultHouse extends BuildingSuper
{
  const float MAX_ACTION_WINDOW_DETECTION_DISTANCE 		= 1.65;		//meters
  const float MAX_ACTION_INSIDE_DETECTION_DISTANCE 		= 0.9;		//meters
  const float MAX_TREEHOUSE_TREE_DETECTION_DISTANCE 		= 0.5;		//meters

	const float MAX_ACTION_DETECTION_ANGLE_RAD 		= 1.3;		//1.3 RAD = ~75 DEG
	const float MAX_ACTION_DETECTION_DISTANCE 		= 2.0;		//meters

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
  bool HasProperDistanceToSRPWindow( string selection, vector playerPosition )
	{
    // Print(string.Format("has proper distance: %1", selection));
		if ( MemoryPointExists( selection ) )
		{
			vector selection_pos_action = ModelToWorld( GetMemoryPointPos( selection ) );
      float distanceToPlayer;
      if (MemoryPointExists("inside"))
      {
        vector selection_pos_inside = ModelToWorld( GetMemoryPointPos( "inside" ) );
        float distanceToAction = vector.Distance( selection_pos_inside, selection_pos_action );
        distanceToPlayer = vector.Distance( selection_pos_inside, playerPosition );
        float delta = distanceToPlayer - distanceToAction;
        // Print(string.Format("Has Inside and Has Delta: %1", delta));
        // negative values means the player is inside
        return delta < MAX_ACTION_INSIDE_DETECTION_DISTANCE;
      }

			distanceToPlayer = vector.Distance( selection_pos_action, playerPosition );
      // Print(string.Format("mem point exists: position: %1 distance: %2", selection_pos_action, distanceToPlayer));
			if ( distanceToPlayer >= MAX_ACTION_WINDOW_DETECTION_DISTANCE )
			{
				return false;
			}
		}		
		return true;
	}
  // Check if the treehouse has a tree inside the little hole
  bool HasProperDistanceToTree(string selection, vector buildingPosition)
  {
		if ( MemoryPointExists( selection ) )
		{
			vector selection_pos = ModelToWorld( GetMemoryPointPos( selection ) );
			float distance = vector.Distance( selection_pos, buildingPosition );
      // Print(string.Format("mem point exists: position: %1 distance: %2", selection_pos, distance));
			if ( distance <= MAX_TREEHOUSE_TREE_DETECTION_DISTANCE )
			{
				return true;
			}
		}	
    return false;	 
  }
  bool HasProperDistance( string selection, PlayerBase player )
	{
		if ( MemoryPointExists( selection ) )
		{
			vector selection_pos = ModelToWorld( GetMemoryPointPos( selection ) );
			float distance = vector.Distance( selection_pos, player.GetPosition() );
			if ( distance >= MAX_ACTION_DETECTION_DISTANCE )
			{
				return false;
			}
		}
		
		return true;
	}

	bool IsPlayerInside( PlayerBase player, string selection )
	{
		vector player_pos = player.GetPosition();
		vector fence_pos = GetPosition();
		vector ref_dir = GetDirection();
		ref_dir[1] = 0;
		ref_dir.Normalize();
		 
		vector x[2];
		vector b1,b2;
		GetCollisionBox(x);
		b1 = x[0];
		b2 = x[1];

		vector dir_to_fence = fence_pos - player_pos;
		dir_to_fence[1] = 0;
		float len = dir_to_fence.Length();

		dir_to_fence.Normalize();
		
		vector ref_dir_angle = ref_dir.VectorToAngles();
		vector dir_to_fence_angle = dir_to_fence.VectorToAngles();
		vector test_angles = dir_to_fence_angle - ref_dir_angle;
		
		vector test_position = test_angles.AnglesToVector() * len;
		
		if(test_position[0] < b1[0] || test_position[0] > b2[0] || test_position[2] < 0.2 || test_position[2] > 2.2 )
		{
			return false;
		}
		else
		{
			return true;
		}
	}
  bool IsFacingCamera( string selection )
	{
		vector ref_dir = GetDirection();
		vector cam_dir = GetGame().GetCurrentCameraDirection();
		
		//ref_dir = GetGame().GetCurrentCameraPosition() - GetPosition();
		ref_dir.Normalize();
		ref_dir[1] = 0;		//ignore height
		
		cam_dir.Normalize();
		cam_dir[1] = 0;		//ignore height
		
		if ( ref_dir.Length() != 0 )
		{
			float angle = Math.Acos( cam_dir * ref_dir );
			
			if ( angle >= MAX_ACTION_DETECTION_ANGLE_RAD )
			{
				return true;
			}
		}

		return false;
	}
};

class SRP_Structures_WoodenHouseOuthouse extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_Structures_RussianHouse extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_Structures_RussianHouse1 extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_Structures_WoodenHouseSingleRoom extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_Structures_WoodenBarn extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_Structures_WoodenShanty extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_Structures_WoodenShed extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_wooden_2floor_tavern extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_wooden_house_thatch extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class Land_srp_wooden_house_bridge extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_wooden_house_bridgeend extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_wooden_house_gatehouse extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class Land_srp_treehouse_circular extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_treehouse_box extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_treehouse_doubleplatform extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class Land_srp_treehouse_tripleplatform extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

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

// palisade gates
class SRP_Fortifications_BambooWall extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class SRP_Fortifications_BambooWall_Yellow extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class SRP_Fortifications_BambooWallCrossSmall extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class SRP_Fortifications_BambooWallCrossSmall_Yellow extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class SRP_Fortifications_BambooWallCross extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class SRP_Fortifications_BambooWallCross_Yellow extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_Small extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_LargeStairs extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_LargeLadder extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_Ramp extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_Stairs extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_Platform extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_PlatformDouble extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeTower_PlatformTriple extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_TentSmall extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_TentLarge extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_Planks extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_PlanksDouble extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_Gate extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_Fence extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_FenceDouble extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_FenceLog extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_FenceLogDouble extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};
class Land_SRP_Fortifications_PalisadeWall_FenceLogSpike extends SRP_DefaultHouse
{
  override bool CanBeDeconstructed()
  {
    return true;
  }  
};

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