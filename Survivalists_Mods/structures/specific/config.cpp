class CfgPatches
{
	class Survivalists_Mods_Structures_Specific
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Specific",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class House;

  class Land_srp_artifact_galaxymap_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_galaxyball.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_galaxyball_co.paa"
		};
	};

};