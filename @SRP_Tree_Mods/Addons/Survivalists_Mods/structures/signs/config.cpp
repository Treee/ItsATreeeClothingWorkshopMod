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

	class land_srp_gravestone1_stone: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone1.p3d";
	};
  class land_srp_gravestone1_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone1_moss.p3d";
	};
  class land_srp_gravestone2: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone2.p3d";
	};
  class land_srp_gravestone3: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone3.p3d";
	};
  // not working for now
  // class land_srp_gravestone4: HouseNoDestruct  // new
	// {
	// 	scope=1;
	// 	model="Survivalists_Mods\structures\signs\gravestone4.p3d";
	// };
  // class land_srp_gravestone4_moss: HouseNoDestruct  // new
	// {
	// 	scope=1;
	// 	model="Survivalists_Mods\structures\signs\gravestone4_moss.p3d";
	// };

  class land_srp_gravestone5: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone5.p3d";
	};

};