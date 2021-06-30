class CfgPatches
{
	class Survivalists_Mods_Characters_Vests
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class ChestHolster;
  class PlateCarrierPouches;
  class PlateCarrierHolster;
  class HighCapacityVest_ColorBase;

  // ----------------------  BASE GAME OVERRIDES

  class PressVest_ColorBase: Clothing
	{
		repairableWithKits[]={3,7};
		repairCosts[]={50};
	};

  class PlateCarrierVest: Clothing
	{
		repairableWithKits[]={3,7};
		repairCosts[]={50};
	};

  // ----------------------  CUSTOM STUFF

	class SRP_TraderVest: PlateCarrierVest  // SRPTraderVest
	{
		scope=2;
		quickBarBonus=10;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\SRPTraderVest.paa"
		};
	};

  class SRP_HighCapacityVest_Jan: HighCapacityVest_ColorBase  // BP_Jan_Vest
	{
		scope=2;
		model="Survivalists_Mods\characters\vests\Janekrazgruz_g.p3d";
		hiddenSelections[]=
		{
			"camoMale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\Janekvest_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\Janekrazgruz_m.p3d";
			female="Survivalists_Mods\characters\vests\Janekrazgruz_f.p3d";
		};
	};

	class SRP_PressVest_Black: PressVest_ColorBase  // BP_PressVest_Black
	{
		scope=2;
		displayName="Black Press Vest";
		descriptionShort="A black vest with 'Press' printed onto it";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest.paa"
		};
	};

	class SRP_ChestHolster_Black: ChestHolster  // BP1_ChestHolster_black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa",
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa",
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa"
		};
	};

	class SRP_PlateCarrierVest_Black: PlateCarrierVest  // BP_PlateCarrierVest_black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_PlateCarrierPouches_Black: PlateCarrierPouches  // BP_PlateCarrierPouches_Black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_PlateCarrierHolster_Black: PlateCarrierHolster  // BP_PlateCarrierHolster_Black
	{
		scope=2;
		attachments[]=
		{
			"Pistol"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_HighCapacityVest_Rain: HighCapacityVest_ColorBase  // BP2_Rainvest
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\rainvest.paa",
			"Survivalists_Mods\characters\vests\data\rainvest.paa",
			"Survivalists_Mods\characters\vests\data\rainvest.paa"
		};
	};

	class SRP_PlateCarrierVest_Razgruz: PlateCarrierVest  // BP2_Razgruz
	{
		scope=2;
		attachments[]=
		{
			"no"
		};
		model="Survivalists_Mods\characters\vests\data\razgruz_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\data\razgruz_m.p3d";
			female="Survivalists_Mods\characters\vests\data\razgruz_f.p3d";
		};
	};

};