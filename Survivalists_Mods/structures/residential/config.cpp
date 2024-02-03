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

  class Land_Building_SRP_Igloo_Large: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_igloo_big_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_igloo_large.p3d";
	};
  class Land_Building_SRP_Igloo_Small: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_igloo_small_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_igloo_small.p3d";
	};

  class Land_Building_SRP_CleanWarehouse: HouseNoDestruct
	{
		scope=1;
    // hiddenSelections[]={"zbytek"};
    // hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_generalstore_inside_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_cleanwarehouse.p3d";
	};
  class Land_Building_SRP_CleanWarehouse_Cromwell: HouseNoDestruct
	{ 
		scope=1;
    // hiddenSelections[]={"zbytek"};
    // hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_generalstore_inside_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_cleanwarehouse.p3d";
	};

  class Land_Building_SRP_SciFiTeleporter: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_scifi_teleporter_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_scifi_teleporter.p3d";
	};
  class Land_Building_SRP_SciFiTeleporter_Cromwell: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_scifi_teleporter_cromwell_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_scifi_teleporter.p3d";
	};

  class Land_Building_srp_belltower_copper: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"bell", "zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_belltower_copper_co.paa", "Survivalists_Mods\structures\residential\data\srp_belltower_copper_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_belltower_copper.p3d";
	};
  class Land_Building_srp_belltower_japanese: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"frame", "zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_japanbelltower_base_co.paa", "Survivalists_Mods\structures\residential\data\srp_japanbelltower_bell_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_belltower_japanese.p3d";
	};
  class Land_Building_srp_belltower_short: HouseNoDestruct
	{
		scope=1;
    hiddenSelections[]={"frame", "zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\structures\residential\data\srp_belltower_short_co.paa", "Survivalists_Mods\structures\residential\data\srp_belltower_short_bell_co.paa"};
		model="Survivalists_Mods\structures\residential\srp_belltower_short.p3d";
	};
};