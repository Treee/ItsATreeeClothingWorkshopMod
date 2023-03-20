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
};