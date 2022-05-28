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
  class Land_srp_artifact_ancientspear_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientspear.p3d";
    hiddenSelections[]=
		{
			"zbytek",
      "blade"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientspear_co.paa",
      "Survivalists_Mods\structures\specific\artifacts\data\srp_ancientspear_head_co.paa"
		};
	};
  
  class Land_srp_artifact_ancientmarker_green: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_green_co.paa"
		};
	};
  class Land_srp_artifact_ancientmarker_blue: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_blue_co.paa"
		};
	};
  class Land_srp_artifact_ancientmarker_red: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_red_co.paa"
		};
	};
  class Land_srp_artifact_ancientmarker_yellow: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_ancientmarker.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_ancientmarker_yellow_co.paa"
		};
	};
  class Land_srp_artifact_gameboy_1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_gameboy.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_gameboy_ca.paa"
		};
	};
  class Land_srp_artifact_totem_wolf: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemwolf.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemwolf_co.paa"
		};
	};
  class Land_srp_artifact_totem_monkey: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemmonkey.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemmonkey_co.paa"
		};
	};
  class Land_srp_artifact_totem_wood: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemwood.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemwood_co.paa"
		};
	};
  class Land_srp_artifact_totem_face: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\specific\artifacts\srp_totemface.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\specific\artifacts\data\srp_totemface_co.paa"
		};
	};
};