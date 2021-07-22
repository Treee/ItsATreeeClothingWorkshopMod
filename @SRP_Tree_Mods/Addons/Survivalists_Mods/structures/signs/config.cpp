class CfgPatches
{
	class Survivalists_Mods_Structures_Signs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Signs",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;

	class land_srp_forestsign_base: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_ForestSign.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign.rvmat"
		};
	};

  class land_srp_forestsign_sanctuary: land_srp_forestsign_base  // land_srp_sanctuarysign
	{
		scope=1;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_sancutary_co.paa"
		};
	};  
};