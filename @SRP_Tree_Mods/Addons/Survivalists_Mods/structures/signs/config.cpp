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

  class NeonSign_Wharf: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\neonsign_thewarf.p3d";
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
  class land_srp_gravestone4: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone4.p3d";
	};
  class land_srp_gravestone5: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone5.p3d";
	};
  class land_srp_gravestone6: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone6.p3d";
	};
  class land_srp_gravestone7: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone7.p3d";
	};
  class land_srp_gravestone8: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone8.p3d";
	};
  class land_srp_gravestone8_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone8_moss.p3d";
	};
  class land_srp_gravestone9: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone9.p3d";
	};
  class land_srp_gravestone10: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone10.p3d";
	};
  class land_srp_gravestone11: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone11.p3d";
	};
  class land_srp_gravestone11_worn: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone11_worn.p3d";
	};
  class land_srp_gravestonemud1: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud1.p3d";
	};
  class land_srp_gravestonemud2: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud2.p3d";
	};
  class land_srp_gravestonemud3: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud3.p3d";
	};
  class land_srp_gravestonemud1_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud1_grass.p3d";
	};
  class land_srp_gravestonemud2_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud2_grass.p3d";
	};
  class land_srp_gravestonemud3_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud3_grass.p3d";
	};
  class land_srp_gravestone12: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone12.p3d";
	};
  class land_srp_gravestone13: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone13.p3d";
	};
  class land_srp_gravestone14: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone14.p3d";
	};
  class land_srp_gravestone14_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone14_moss.p3d";
	};
  class land_srp_gravestone15: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone15.p3d";
	};
  class land_srp_gravestone15_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone15_moss.p3d";
	};
  class land_srp_gravestone16: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone16.p3d";
	};
  class land_srp_gravestone16_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone16_moss.p3d";
	};
  class land_srp_gravestone17: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone17.p3d";
	};
  class land_srp_gravestone18: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone18.p3d";
	};
  class land_srp_gravestone19: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone19.p3d";
	};
  class land_srp_gravestone19_open: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone19_open.p3d";
	};
};