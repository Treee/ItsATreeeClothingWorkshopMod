class CfgPatches
{
	class Survivalists_Mods_Vehicles_Flying
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data", "DZ_Scripts"};
	};
};
class CfgVehicles
{
  	class HouseNoDestruct;
    // class SRP_KitBase;
//========================================== SCOPE 1
  class land_srp_helicopter_mi8: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\vehicles\flying\srp_helicopter_mi8.p3d";
	};
//========================================== "HOUSE" FLYING
  // example
  // class SRP_Furniture_JapaneseShrine_Default_Kit: SRP_KitBase
	// {
	// 	scope=2;
	// 	displayName="Japanese Shrine Kit - Worn";
	// 	descriptionShort="A placeable japanese shrine kit";
  //   projectionTypename="SRP_Furniture_JapaneseShrine_Default";
	// };
  // class SRP_Furniture_JapaneseShrine_Default: HouseNoDestruct
	// {
	// 	scope=2;
  //   storageCategory=1;
	// 	model="Survivalists_Building\structures\furniture\srp_furniture_japaneseshrine.p3d";
  //   hiddenSelections[]=
	// 	{
	// 		"zbytek"
	// 	};
  //   hiddenSelectionsTextures[]=
	// 	{
	// 		"Survivalists_Building\structures\furniture\data\srp_building_japaneseshrine_co.paa"
	// 	};
	// };
};