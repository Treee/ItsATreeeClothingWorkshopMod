class CfgPatches
{
	class Survivalists_Building_Structures_Specific
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
//======================================= PALISADE
  class SRP_Fortifications_PalisadeAll_Kit: SRP_Building_KitBase
	{
		scope=0;
		displayName="Palisade wall All";
		descriptionShort="Palisade wall All";
    projectionTypename="SRP_Fortifications_PalisadeAll";
	};
  class SRP_Fortifications_PalisadeAll: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_all.p3d";
	};

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
		displayName="Palisade Tower Kit - Ramp";
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
		displayName="Palisade Kit - Platform";
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
		displayName="Palisade Tower Kit - Platform Double";
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
		displayName="Palisade Tower Kit - Platform Triple";
		descriptionShort="A kit for building a triple platform.";
    projectionTypename="Land_SRP_Fortifications_PalisadeTower_PlatformTriple";
	};
  class Land_SRP_Fortifications_PalisadeTower_PlatformTriple: SRP_PrefabFortification_Base
	{
		scope=2;
		model="Survivalists_Building\structures\fortification\srp_palisade_platformtriple.p3d";
	};

};