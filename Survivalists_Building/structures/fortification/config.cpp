class CfgPatches
{
	class Survivalists_Building_Structures_Fortification
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Specific"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;

  class SRP_Building_KitBase;
// ---------------------PRE FABS
  class SRP_PrefabFortification_Base: HouseNoDestruct
	{
		scope=0;
		displayName="BaseFortification";
		descriptionShort="Base Fortification";
		model="Survivalists_Building\structures\fortification\srp_bamboos_wall.p3d";
		carveNavmesh=1;
		weight=500;
    storageCategory=1;
		itemSize[]={15,10};
    itemsCargoSize[]={0,0};
		physLayer="item_large";
    minPlacingDist=5;
    slopeTolerance=0;
    alignHologramToTerain=1;
	};

//======================================= BAMBOO
  class SRP_Fortifications_BambooWall_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Bamboo Wall Kit";
		descriptionShort="A kit for building a bamboo wall.";
    projectionTypename="SRP_Fortifications_BambooWall";
	};
  class SRP_Fortifications_BambooWall: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_bamboos_wall.p3d";
	};
  class SRP_Fortifications_BambooWall_Yellow_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Bamboo Wall Kit - Yellow";
		descriptionShort="A kit for building a bamboo wall.";
    projectionTypename="SRP_Fortifications_BambooWall_Yellow";
	};
  class SRP_Fortifications_BambooWall_Yellow: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_bamboos_wall.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\fortification\data\srp_barricade_bamboo_yellow_co.paa"};
	};  

  class SRP_Fortifications_BambooWallCrossSmall_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Bamboo Wall Kit - Small X Pattern";
		descriptionShort="A kit for building a bamboo wall.";
    projectionTypename="SRP_Fortifications_BambooWallCrossSmall";
	};
  class SRP_Fortifications_BambooWallCrossSmall: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross_small.p3d";
	};
  class SRP_Fortifications_BambooWallCrossSmall_Yellow_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Bamboo Wall Kit - Small X Pattern Yellow";
		descriptionShort="A kit for building a bamboo wall.";
    projectionTypename="SRP_Fortifications_BambooWallCrossSmall_Yellow";
	};
  class SRP_Fortifications_BambooWallCrossSmall_Yellow: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross_small.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\fortification\data\srp_barricade_bamboo_yellow_co.paa"};
	}; 

  class SRP_Fortifications_BambooWallCross_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Bamboo Wall Kit -  X Pattern";
		descriptionShort="A kit for building a bamboo wall.";
    projectionTypename="SRP_Fortifications_BambooWallCross";
	};
  class SRP_Fortifications_BambooWallCross: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross.p3d";
	};
  class SRP_Fortifications_BambooWallCross_Yellow_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Bamboo Wall Kit -  X Pattern Yellow";
		descriptionShort="A kit for building a bamboo wall.";
    projectionTypename="SRP_Fortifications_BambooWallCross_Yellow";
	};
  class SRP_Fortifications_BambooWallCross_Yellow: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\fortification\data\srp_barricade_bamboo_yellow_co.paa"};
	};
//======================================= PALISADE TOWER
  class Land_SRP_Fortifications_PalisadeTower_Small_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Tower Kit - Small";
		descriptionShort="A kit for building a palisade tower.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTowersAll";
	};
  class Land_SRP_Fortifications_PalisadeTower_Small: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_small.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_LargeStairs_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Tower Kit - Large (With Stairs)";
		descriptionShort="A kit for building a palisade tower.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTowersAll";
	};
  class Land_SRP_Fortifications_PalisadeTower_LargeStairs: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_large.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_LargeLadder_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Tower Kit - Large (With Ladder)";
		descriptionShort="A kit for building a palisade tower.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTowersAll";
	};
  class Land_SRP_Fortifications_PalisadeTower_LargeLadder: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_largeladder.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_Ramp_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Kit - Ramp";
		descriptionShort="A kit for building a ramp.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTower_Ramp";
	};
  class Land_SRP_Fortifications_PalisadeTower_Ramp: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_ramp.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_Stairs_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Kit - Stairs";
		descriptionShort="A kit for building a Stairs.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTower_Stairs";
	};
  class Land_SRP_Fortifications_PalisadeTower_Stairs: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_stairs.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_Platform_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Platform Kit - Single";
		descriptionShort="A kit for building a single platform.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTower_Platform";
	};
  class Land_SRP_Fortifications_PalisadeTower_Platform: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_platform.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformDouble_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Platform Kit - Double";
		descriptionShort="A kit for building a double length platform.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTower_PlatformDouble";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformDouble: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_platformdouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformTriple_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Platform Kit - Triple";
		descriptionShort="A kit for building a triple platform.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTower_PlatformTriple";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformTriple: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_platformtriple.p3d";
	};

//======================================= PALISADE WALLS
  class Land_SRP_Fortifications_PalisadeWall_TentSmall_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Tent Kit - Small";
		descriptionShort="A kit for building a palisade tent.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_TentSmall";
	};
  class Land_SRP_Fortifications_PalisadeWall_TentSmall: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_walltent_small.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_TentLarge_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Tent Kit - Large";
		descriptionShort="A kit for building a palisade tent.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_TentLarge";
	};
  class Land_SRP_Fortifications_PalisadeWall_TentLarge: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_walltent_large.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_Planks_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Single Plank";
		descriptionShort="A kit for building a plank barricade.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_Planks";
	};
  class Land_SRP_Fortifications_PalisadeWall_Planks: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallplank.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_PlanksDouble_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Double Plank";
		descriptionShort="A kit for building a plank barricade.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_PlanksDouble";
	};
  class Land_SRP_Fortifications_PalisadeWall_PlanksDouble: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallplankdouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_Gate_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Gate";
		descriptionShort="A kit for building a gate.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_Gate";
	};
  class Land_SRP_Fortifications_PalisadeWall_Gate: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallgate.p3d";
    class Doors
		{
      class Doors1
      {
        displayName="Door 1";
        component="doors1";
        soundPos="doors1_action";
        animPeriod=1;
        initPhase=0;
        initOpened=0.69999999;
      };
      class Doors2
      {
        displayName="Door 2";
        component="doors2";
        soundPos="doors2_action";
        animPeriod=1;
        initPhase=0;
        initOpened=0.69999999;
      };
    };
	};
  class Land_SRP_Fortifications_PalisadeWall_Fence_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Fence";
		descriptionShort="A kit for building a fence.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_Fence";
	};
  class Land_SRP_Fortifications_PalisadeWall_Fence: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallfence.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceDouble_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Double Fence";
		descriptionShort="A kit for building a fence.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_FenceDouble";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceDouble: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallfencedouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLog_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Log Fence";
		descriptionShort="A kit for building a log fence.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_FenceLog";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLog: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_wall.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLogDouble_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Palisade Wall Kit - Double Log Fence";
		descriptionShort="A kit for building a log fence.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_FenceLogDouble";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLogDouble: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_walldouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLogSpike_Kit: SRP_Building_KitBase
	{
		scope=2;
		displayName="Spiked Palisade Wall Kit - Log Fence";
		descriptionShort="A kit for building a log fence.";
    projectionTypename="Land_SRP_Fortifications_PalisadeWall_FenceLogSpike";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLogSpike: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_wooden_house_wall.p3d";
	};
//======================================= STATIC LAND (Scope 1)
  class SRP_Fortifications_BambooWall_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_bamboos_wall.p3d";
	};
  class SRP_Fortifications_BambooWall_Yellow_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_bamboos_wall.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\fortification\data\srp_barricade_bamboo_yellow_co.paa"};
	};  
  class SRP_Fortifications_BambooWallCrossSmall_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross_small.p3d";
	};
  class SRP_Fortifications_BambooWallCrossSmall_Yellow_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross_small.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\fortification\data\srp_barricade_bamboo_yellow_co.paa"};
	}; 
  class SRP_Fortifications_BambooWallCross_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross.p3d";
	};
  class SRP_Fortifications_BambooWallCross_Yellow_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_bamboos_cross.p3d";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Building\structures\fortification\data\srp_barricade_bamboo_yellow_co.paa"};
	};
  class Land_SRP_Fortifications_PalisadeTower_Small_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_small.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_LargeStairs_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_large.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_LargeLadder_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_largeladder.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_Ramp_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_ramp.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_Stairs_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_tower_stairs.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_Platform_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_platform.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformDouble_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_platformdouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformTriple_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_platformtriple.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_TentSmall_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_walltent_small.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_TentLarge_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_walltent_large.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_Planks_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallplank.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_PlanksDouble_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallplankdouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_Gate_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallgate.p3d";
    class Doors
		{
      class Doors1
      {
        displayName="Door 1";
        component="doors1";
        soundPos="doors1_action";
        animPeriod=1;
        initPhase=0;
        initOpened=0.69999999;
      };
      class Doors2
      {
        displayName="Door 2";
        component="doors2";
        soundPos="doors2_action";
        animPeriod=1;
        initPhase=0;
        initOpened=0.69999999;
      };
    };
	};
  class Land_SRP_Fortifications_PalisadeWall_Fence_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallfence.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceDouble_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_wallfencedouble.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLog_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_wall.p3d";
	};
  class Land_SRP_Fortifications_PalisadeWall_FenceLogDouble_StaticObject: SRP_PrefabFortification_Base
	{
		scope=1;
		model="Survivalists_Building\structures\fortification\srp_palisade_walldouble.p3d";
	};
//======================================= END


};