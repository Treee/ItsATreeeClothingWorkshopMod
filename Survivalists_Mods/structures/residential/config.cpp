class CfgPatches
{
	class Survivalists_Mods_Structures_Residential
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
  class Land_Building_SRP_GeneralStore: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_generalstore_inside_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_generalstore.p3d";
	};
  class Land_Building_SRP_GeneralStore_TheTreasureChest: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_generalstore_inside_treasurechest_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_generalstore.p3d";
	};
};