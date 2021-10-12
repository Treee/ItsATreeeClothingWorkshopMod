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

  class SRP_KitBase;

  
  class SRP_ForestSign_Original_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Original Forest Sign Kit";
		descriptionShort="A Original Forest Sign Kit";
	};

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

  class SRP_ForestSign_Sanctuary_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Sanctuary Forest Sign Kit";
		descriptionShort="A Sanctuary Forest Sign Kit";
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

  class SRP_Gravestone_1Stone_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Stone";
		descriptionShort="A gravestone Kit";
	};
	class land_srp_gravestone1_stone: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone1.p3d";
	};
  class SRP_Gravestone_1Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone1_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone1_moss.p3d";
	};
  class SRP_Gravestone_2_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 2";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone2: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone2.p3d";
	};
  class SRP_Gravestone_3_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 3";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone3: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone3.p3d";
	};
  class SRP_Gravestone_4_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 4";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone4: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone4.p3d";
	};
  class SRP_Gravestone_5_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 5";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone5: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone5.p3d";
	};
  class SRP_Gravestone_6_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 6";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone6: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone6.p3d";
	};
  class SRP_Gravestone_7_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 7";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone7: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone7.p3d";
	};
  class SRP_Gravestone_8_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 8";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone8: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone8.p3d";
	};
  class SRP_Gravestone_8Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 8 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone8_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone8_moss.p3d";
	};
  class SRP_Gravestone_9_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 9";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone9: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone9.p3d";
	};
  class SRP_Gravestone_10_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 10";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone10: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone10.p3d";
	};
  class SRP_Gravestone_11_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 11";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone11: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone11.p3d";
	};
  class SRP_Gravestone_11Worn_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 11 Worn";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone11_worn: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone11_worn.p3d";
	};
  class SRP_Gravestone_1Mud_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Mud";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestonemud1: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud1.p3d";
	};
  class SRP_Gravestone_2Mud_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 2 Mud";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestonemud2: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud2.p3d";
	};
  class SRP_Gravestone_3Mud_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 3 Mud";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestonemud3: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud3.p3d";
	};
  class SRP_Gravestone_1MudGrass_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Mud Grass";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestonemud1_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud1_grass.p3d";
	};
  class SRP_Gravestone_2MudGrass_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 2 Mud Grass";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestonemud2_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud2_grass.p3d";
	};
  class SRP_Gravestone_3MudGrass_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 3 Mud Grass";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestonemud3_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud3_grass.p3d";
	};
  class SRP_Gravestone_12_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 12";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone12: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone12.p3d";
	};
  class SRP_Gravestone_13_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 13";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone13: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone13.p3d";
	};
  class SRP_Gravestone_14_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 14";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone14: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone14.p3d";
	};
  class SRP_Gravestone_14Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 14 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone14_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone14_moss.p3d";
	};
  class SRP_Gravestone_15_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 15";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone15: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone15.p3d";
	};
  class SRP_Gravestone_15Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 15 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone15_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone15_moss.p3d";
	};
  class SRP_Gravestone_16_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 16";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone16: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone16.p3d";
	};
  class SRP_Gravestone_16Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 16 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone16_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone16_moss.p3d";
	};
  class SRP_Gravestone_17_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 17";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone17: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone17.p3d";
	};
  class SRP_Gravestone_18_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 18";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone18: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone18.p3d";
	};
  class SRP_Gravestone_19_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 19";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone19: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone19.p3d";
	};
  class SRP_Gravestone_19Open_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 19 Open";
		descriptionShort="A gravestone Kit";
	};
  class land_srp_gravestone19_open: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone19_open.p3d";
	};
};