class CfgPatches
{
	class Survivalists_Retextures_Characters_Vests
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class PoliceVest;
	class PlateCarrierVest;
	class PressVest_ColorBase;
	class ChestHolster;
	class HighCapacityVest_ColorBase;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class UKAssVest_ColorBase;
  class HuntingVest;

  // Pouches
  class SRP_Empty_MagPouch_ColorBase;
  class SRP_Magazine_Pouch_1_ColorBase;
  class SRP_IFAK_ColorBase;
  class SRP_Pistol_Mag_Pouch_ColorBase;
  class SRP_Map_Pouch_ColorBase;
  class SRP_UtilityPouch_ColorBase;
  class SRP_HeavyPouch_ColorBase;
  class SRP_MediumPouch_ColorBase;
  class SRP_TacoPouch_ColorBase;

  // main mod vests
  class SRP_Ratnik_Armor_ColorBase;
  class SRP_Ratnik_ColorBase;
  class SRP_Light_Ratnik_ColorBase;
  class SRP_Chestrig_ColorBase;
  class SRP_Army_Vest_1_ColorBase;
  class SRP_Army_Vest_2_ColorBase;
  class SRP_JPC_Vest_ColorBase;
  class SRP_Tac_Vest_ColorBase;
  class SRP_Tac_Tec_Vest_ColorBase;
  class SRP_Small_Bottle_ColorBase;


  class PlateCarrierVest_Trader: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\SRPTraderVest.paa",
			"Survivalists_Retextures\characters\vests\data\SRPTraderVest.paa",
			"Survivalists_Retextures\characters\vests\data\SRPTraderVest.paa"
		};
	};
  class PlateCarrierVest_Black: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\beliyvest2.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest2.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest2.paa"
		};
	};
  class PlateCarrierVest_White: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa"
		};
	};
	class PlateCarrierVest_Pseudo: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};
  class PlateCarrierVest_MTP: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa"
		};
	};
	class PlateCarrierVest_ATAC: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa"
		};
	};
	class PlateCarrierVest_ATACSFG: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa"
		};
	};
	class PlateCarrierVest_USNAOR2: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa"
		};
	};
	class PlateCarrierVest_USNAOR1: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa"
		};
	};
	class PlateCarrierVest_SURPAT: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa"
		};
	};
	class PlateCarrierVest_MARPATWinter: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa"
		};
	};
	class PlateCarrierVest_EMP6: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa"
		};
	};
  class PlateCarrierVest_Lavender: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa"
		};
	};
  class PlateCarrierVest_Petal: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa"
		};
	};
  class PlateCarrierVest_Stone: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa"
		};
	};
  class PlateCarrierVest_Storm: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa"
		};
	};
  class PlateCarrierVest_Sunny: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa"
		};
	};
  class PlateCarrierHolster_White: PlateCarrierHolster
	{
		scope=2;
		heatIsolation=0.5;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa"
		};
	};
	class PlateCarrierHolster_Pseudo: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};
	class PlateCarrierHolster_Tan: PlateCarrierHolster
	{
		scope=2;
		displayName="Tan Holster";
		descriptionShort="Tan Holster";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa"
		};
	};
	class PlateCarrierHolster_Green: PlateCarrierHolster
	{
		scope=2;
		displayName="Green Holster";
		descriptionShort="Green Holster";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa"
		};
	};
	class PlateCarrierHolster_Black: PlateCarrierHolster
	{
		scope=2;
		displayName="Black Holster";
		descriptionShort="Black Holster";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa"
		};
	};
  class PlateCarrierHolster_Lavender: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa"
		};
	};
  class PlateCarrierHolster_Petal: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa"
		};
	};
  class PlateCarrierHolster_Stone: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa"
		};
	};
  class PlateCarrierHolster_Storm: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa"
		};
	};
  class PlateCarrierHolster_Sunny: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa"
		};
	};
	class PlateCarrierHolster_MTP: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
		};
	};
	class PlateCarrierHolster_ATAC: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
		};
	};
	class PlateCarrierHolster_ATACSFG: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
		};
	};
	class PlateCarrierHolster_USNAOR2: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
		};
	};
	class PlateCarrierHolster_USNAOR1: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
		};
	};
	class PlateCarrierHolster_SURPAT: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
		};
	};
	class PlateCarrierHolster_MARPATWinter: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
		};
	};
	class PlateCarrierHolster_EMP6: PlateCarrierHolster
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
		};
	};
  class PlateCarrierPouches_White: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa"
		};
	};	
	class PlateCarrierPouches_Pseudo: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};
	class PlateCarrierPouches_Tan: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa"
		};
	};
	class PlateCarrierPouches_Green: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa"
		};
	};
	class PlateCarrierPouches_Black: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa"
		};
	};
  class PlateCarrierPouches_Lavender: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa"
		};
	};
  class PlateCarrierPouches_Petal: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa"
		};
	};
  class PlateCarrierPouches_Stone: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa"
		};
	};
  class PlateCarrierPouches_Storm: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa"
		};
	};
  class PlateCarrierPouches_Sunny: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa"
		};
	};
	class PlateCarrierPouches_MTP: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
		};
	};
	class PlateCarrierPouches_ATAC: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
		};
	};
	class PlateCarrierPouches_ATACSFG: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
		};
	};
	class PlateCarrierPouches_USNAOR2: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
		};
	};
	class PlateCarrierPouches_USNAOR1: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
		};
	};
	class PlateCarrierPouches_SURPAT: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
		};
	};
	class PlateCarrierPouches_MARPATWinter: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
		};
	};
	class PlateCarrierPouches_EMP6: PlateCarrierPouches
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
		};
	};    
  class PressVest_Black: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\beliyvest.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest.paa"
		};
	};	
  class PressVest_ATFBlue: PressVest_ColorBase
	{
		scope=2;
		displayName="ATF Press Vest";
		descriptionShort="A press vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_pressvest_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat"
		};
	};
  class PressVest_CIABlue: PressVest_ColorBase
	{
		scope=2;
		displayName="CIA Press Vest";
		descriptionShort="A press vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_pressvest_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat"
		};
	};
  class PressVest_FBIBlue: PressVest_ColorBase
	{
		scope=2;
		displayName="FBI Press Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_pressvest_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat"
		};
	};
  class PressVest_MTP: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest01.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest01.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest01.paa"
		};
	};
	class PressVest_ATAC: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest05.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest05.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest05.paa"
		};
	};
	class PressVest_ATACSFG: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest39.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest39.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest39.paa"
		};
	};
	class PressVest_USNAOR2: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest10.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest10.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest10.paa"
		};
	};
	class PressVest_USNAOR1: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest11.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest11.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest11.paa"
		};
	};
	class PressVest_SURPAT: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest13.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest13.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest13.paa"
		};
	};
	class PressVest_MARPATWinter: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest20.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest20.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest20.paa"
		};
	};
	class PressVest_EMP6: PressVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest58.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest58.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest58.paa"
		};
	};
  class UKAssVest_White: UKAssVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_ukassvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ukassvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ukassvest_white_co.paa"
		};
	};
	class PoliceVest_Sheriff: PoliceVest
	{
		scope=2;
		displayName="Sheriff Vest";
		descriptionShort="Hackcock Sheriffs Department Vest";
		heatIsolation=0.60000002;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_policevest_co.paa"
		};
	};
  class PoliceVest_ATF: PoliceVest
	{
		scope=2;
		displayName="ATF Police Vest";
		descriptionShort="A police vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_policevest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat"
		};
	};
  class PoliceVest_CIA: PoliceVest
	{
		scope=2;
		displayName="CIA Police Vest";
		descriptionShort="A police vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_policevest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat"
		};
	};
  class PoliceVest_FBI: PoliceVest
	{
		scope=2;
		displayName="FBI Police Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_policevest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat"
		};
	};
	class ChestHolster_Black: ChestHolster
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
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_black_co.paa"
		};
	};
	class ChestHolster_White: ChestHolster
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
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_white_co.paa"
		};
	};
	class HighCapacityVest_Rain: HighCapacityVest_ColorBase
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
			"Survivalists_Retextures\characters\vests\data\rainvest.paa",
			"Survivalists_Retextures\characters\vests\data\rainvest.paa",
			"Survivalists_Retextures\characters\vests\data\rainvest.paa"
		};
	};			
	class HighCapacityVest_ATFBlack: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="ATF Black Vest";
		descriptionShort="A vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_black_co.paa"
		};
	};
	class HighCapacityVest_ATFOlive: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="ATF Olive Vest";
		descriptionShort="A vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_olive_co.paa"
		};
	};		
	class HighCapacityVest_CIABlack: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="CIA Black Vest";
		descriptionShort="A vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_black_co.paa"
		};
	};
	class HighCapacityVest_CIAOlive: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="CIA Olive Vest";
		descriptionShort="A vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_olive_co.paa"
		};
	};		
	class HighCapacityVest_FBIBlack: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="FBI Black Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_black_co.paa"
		};
	};
	class HighCapacityVest_FBIOlive: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="FBI Olive Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_olive_co.paa"
		};
	};
	class HighCapacityVest_MTP: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest03.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest03.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest03.paa"
		};
	};
	class HighCapacityVest_ATAC: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest05.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest05.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest05.paa"
		};
	};
	class HighCapacityVest_ATACSFG: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest39.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest39.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest39.paa"
		};
	};
	class HighCapacityVest_USNAOR2: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest10.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest10.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest10.paa"
		};
	};
	class HighCapacityVest_USNAOR1: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest11.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest11.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest11.paa"
		};
	};
	class HighCapacityVest_SURPAT: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest13.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest13.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest13.paa"
		};
	};
	class HighCapacityVest_MARPATWinter: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest20.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest20.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest20.paa"
		};
	};
	class HighCapacityVest_EMP6: HighCapacityVest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest58.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest58.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest58.paa"
		};
	};  
  class HuntingVest_Leather: HuntingVest
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek",
			"camoMale"
		};
		hiddenSelectionsTextures[]=	
		{
			"Survivalists_Retextures\characters\vests\data\hunting_vest_Leather_co.paa",
			"Survivalists_Retextures\characters\vests\data\hunting_vest_Leather_co.paa"
		};
	};
  //=================================== MAIN MOD VESTS

  class SRP_Tac_Vest_Black: SRP_Tac_Vest_ColorBase
	{
    scope=2;	
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Retextures\characters\vests\data\Tac_vest_CO.paa"
		};	
	};
	class SRP_Tac_Vest_Tan: SRP_Tac_Vest_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Tac_Vest_Tan_Co.paa"
		};	
	};
  class SRP_Tac_Vest_Sheriff: SRP_Tac_Vest_ColorBase
	{
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Tac_Vest_Sheriff_CA.paa"
		};	
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\Tac_Vest_Sheriff.rvmat"
		};	
	};
  class SRP_Tac_Vest_Green: SRP_Tac_Vest_ColorBase
	{
    scope=2;	
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Retextures\characters\vests\data\Tac_vest_Green_CO.paa"
		};	
	};
	class SRP_Ratnik_Tan: SRP_Ratnik_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Tan_CO.paa"
		};	
	};
	class SRP_Ratnik_Black: SRP_Ratnik_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Black_CO.paa"
		};	
	};
  class SRP_Ratnik_Green: SRP_Ratnik_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Green_CO.paa"
		};	
	};
  class SRP_Ratnik_Armor_Black: SRP_Ratnik_Armor_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Black_CO.paa"
		};	
	};
  class SRP_Ratnik_Armor_Tan: SRP_Ratnik_Armor_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Tan_CO.paa"
		};	
	};
  class SRP_Ratnik_Armor_Green: SRP_Ratnik_Armor_ColorBase
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Green_CO.paa"
		};	
	};
  class SRP_Light_Ratnik_Black: SRP_Light_Ratnik_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Black_CO.paa"
		};	
	};
	class SRP_Light_Ratnik_Tan: SRP_Light_Ratnik_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Tan_CO.paa"
		};	
	};
  class SRP_Light_Ratnik_Green: SRP_Light_Ratnik_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Ratnik_Green_CO.paa"
		};	
	};
	class SRP_Chestrig_Tan: SRP_Chestrig_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Chestrig_tan_CO.paa"
		};	
	};
	class SRP_Chestrig_Black: SRP_Chestrig_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Chestrig_Black_CO.paa"
		};	
	};
  class SRP_Chestrig_Green: SRP_Chestrig_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Chestrig_Green_CO.paa"
		};	
	};
	class SRP_Army_Vest_1_Black: SRP_Army_Vest_1_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Army_Vest_1_Black_CO.paa"
		};	
	};
	class SRP_Army_Vest_1_Tan: SRP_Army_Vest_1_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Army_Vest_1_Tan_CO.paa"
		};	
	};
  class SRP_Army_Vest_1_Green: SRP_Army_Vest_1_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Army_Vest_1_Green_CO.paa"
		};	
	};
	class SRP_Army_Vest_2_Black: SRP_Army_Vest_2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Army_Vest_2_Black_CO.paa"
		};	
	};
	class SRP_Army_Vest_2_Tan: SRP_Army_Vest_2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Army_Vest_2_Tan_CO.paa"
		};	
	};
  class SRP_Army_Vest_2_Green: SRP_Army_Vest_2_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Army_Vest_2_Green_CO.paa"
		};	
	};
	class SRP_JPC_Vest_Black: SRP_JPC_Vest_ColorBase
	{
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\JPC_Vest_Black_CO.paa"
		};	
	};
	class SRP_JPC_Vest_Tan: SRP_JPC_Vest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\JPC_Vest_Tan_CO.paa"
		};	
	};
  class SRP_JPC_Vest_Green: SRP_JPC_Vest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\JPC_Vest_Green_CO.paa"
		};	
	};
	class SRP_Tac_Tec_Vest_Tan: SRP_Tac_Tec_Vest_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Tac_Tec_Tan_CO.paa"
		};	
	};
	class SRP_Tac_Tec_Vest_Black: SRP_Tac_Tec_Vest_ColorBase
	{
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Tac_Tec_Black_CO.paa"
		};	
	};
  class SRP_Tac_Tec_Vest_Green: SRP_Tac_Tec_Vest_ColorBase
	{
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\Tac_Tec_Green_CO.paa"
		};	
	};


  class SRP_Small_Bottle_Green: SRP_Small_Bottle_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Small_Bottle_Green_CO.paa"
    };    
  };   
  class SRP_Small_Bottle_Black: SRP_Small_Bottle_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Small_Bottle_Black_CO.paa"
    };    
  };
  class SRP_Small_Bottle_Tan: SRP_Small_Bottle_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Small_Bottle_Tan_CO.paa"
    };    
  };

  //=================================== MAIN MOD VEST POUCHES

  class SRP_Map_Pouch_Green: SRP_Map_Pouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Map_Pouch_Green_CO.paa"
    };    
  };
  class SRP_Map_Pouch_Black: SRP_Map_Pouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Map_Pouch_Black_CO.paa"
    };    
  };
  class SRP_Map_Pouch_Tan: SRP_Map_Pouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Map_Pouch_Tan_CO.paa"
    };    
  };
  class SRP_Pistol_Mag_Pouch_Green: SRP_Pistol_Mag_Pouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Pistol_MagPouch_Green_CO.paa"
    };    
  };
  class SRP_Pistol_Mag_Pouch_Black: SRP_Pistol_Mag_Pouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Pistol_MagPouch_Black_CO.paa"
    };    
  };
  class SRP_Pistol_Mag_Pouch_Tan: SRP_Pistol_Mag_Pouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Pistol_MagPouch_Tan_CO.paa"
    };    
  };
  class SRP_IFAK_Green: SRP_IFAK_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_IFAK_Green_CO.paa"
    };    
  };
  class SRP_IFAK_Black: SRP_IFAK_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_IFAK_Black_CO.paa"
    };    
  };
  class SRP_IFAK_Tan: SRP_IFAK_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_IFAK_Tan_CO.paa"
    };    
  };
  class SRP_Magazine_Pouch_1_Green: SRP_Magazine_Pouch_1_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_AR_MagPouch_1_Green_CO.paa"
    };    
  };
  class SRP_Magazine_Pouch_1_Black: SRP_Magazine_Pouch_1_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_AR_MagPouch_1_Black_CO.paa"
    };    
  };
  class SRP_Magazine_Pouch_1_Tan: SRP_Magazine_Pouch_1_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_AR_MagPouch_1_Tan_CO.paa"
    };    
  };
  class SRP_Empty_MagPouch_Green: SRP_Empty_MagPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Empty_MagPouch_Green_CO.paa"
    };    
  };
  class SRP_Empty_MagPouch_Black: SRP_Empty_MagPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Empty_MagPouch_Black_CO.paa"
    };    
  };
  class SRP_Empty_MagPouch_Tan: SRP_Empty_MagPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\SRP_Empty_MagPouch_Tan_CO.paa"
    };    
  };
  class SRP_UtilityPouch_Green: SRP_UtilityPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_green_co.paa"
    };    
  };
  class SRP_UtilityPouch_Black: SRP_UtilityPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_black_co.paa"
    };    
  };
  class SRP_UtilityPouch_Tan: SRP_UtilityPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_Tan_co.paa"
    };    
  };
  class SRP_HeavyPouch_Green: SRP_HeavyPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_Heavy_Green_CO.paa"
    };    
  };
  class SRP_HeavyPouch_Black: SRP_HeavyPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_Heavy_Black_CO.paa"
    };    
  };
  class SRP_HeavyPouch_Tan: SRP_HeavyPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_Heavy_Tan_CO.paa"
    };    
  };
  class SRP_MediumPouch_Green: SRP_MediumPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_green_co.paa"
    };    
  };
  class SRP_MediumPouch_Black: SRP_MediumPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_black_co.paa"
    };    
  };
  class SRP_MediumPouch_Tan: SRP_MediumPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\srp_pouchesvest_Tan_co.paa"
    };    
  };
  class SRP_TacoPouch_Green: SRP_TacoPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\tacticalbelt_Green_co.paa"
    };    
  };
  class SRP_TacoPouch_Black: SRP_TacoPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\tacticalbelt_Black_co.paa"
    };    
  };
  class SRP_TacoPouch_Tan: SRP_TacoPouch_ColorBase
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\vests\data\tacticalbelt_Tan_co.paa"
    };    
  };








  //========================================== REMOVE THESE EVENTUALLY
  class SRP_TraderVest: PlateCarrierVest
	{
		scope=2;
		quickBarBonus=4;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRPTraderVest.paa"
		};
	};
  class SRP_PlateCarrierVest_Black: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\beliyvest2.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest2.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest2.paa"
		};
	};
  class SRP_PlateCarrierVest_White: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa"
		};
	};
	class SRP_PlateCarrierVest_Pseudo: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};
  class SRP_PlateCarrier_MTP: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa"
		};
	};
	class SRP_PlateCarrier_ATAC: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa"
		};
	};
	class SRP_PlateCarrier_ATACSFG: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa"
		};
	};
	class SRP_PlateCarrier_USNAOR2: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa"
		};
	};
	class SRP_PlateCarrier_USNAOR1: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa"
		};
	};
	class SRP_PlateCarrier_SURPAT: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa"
		};
	};
	class SRP_PlateCarrier_MARPATWinter: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa"
		};
	};
	class SRP_PlateCarrier_EMP6: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa"
		};
	};
  class SRP_PlateCarrier_Lavender: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa"
		};
	};
  class SRP_PlateCarrier_Petal: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa"
		};
	};
  class SRP_PlateCarrier_Stone: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa"
		};
	};
  class SRP_PlateCarrier_Storm: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa"
		};
	};
  class SRP_PlateCarrier_Sunny: PlateCarrierVest
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa"
		};
	};
  class SRP_PlateCarrierHolster_White: PlateCarrierHolster
	{
		scope=2;
		heatIsolation=0.5;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa"
		};
	};
	class SRP_PlateCarrierHolster_Pseudo: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};
	class SRP_PlateCarrierHolster_Tan: PlateCarrierHolster
	{
		scope=2;
		displayName="Tan Holster";
		descriptionShort="Tan Holster";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa"
		};
	};
	class SRP_PlateCarrierHolster_Green: PlateCarrierHolster
	{
		scope=2;
		displayName="Green Holster";
		descriptionShort="Green Holster";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa"
		};
	};
	class SRP_PlateCarrierHolster_Black: PlateCarrierHolster
	{
		scope=2;
		displayName="Black Holster";
		descriptionShort="Black Holster";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa"
		};
	};
  class SRP_PlateCarrierHolster_Lavender: PlateCarrierHolster
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa"
		};
	};
  class SRP_PlateCarrierHolster_Petal: PlateCarrierHolster
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa"
		};
	};
  class SRP_PlateCarrierHolster_Stone: PlateCarrierHolster
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa"
		};
	};
  class SRP_PlateCarrierHolster_Storm: PlateCarrierHolster
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa"
		};
	};
  class SRP_PlateCarrierHolster_Sunny: PlateCarrierHolster
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa"
		};
	};
	class SRP_PlateCarrierHolster_MTP: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
		};
	};
	class SRP_PlateCarrierHolster_ATAC: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
		};
	};
	class SRP_PlateCarrierHolster_ATACSFG: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
		};
	};
	class SRP_PlateCarrierHolster_USNAOR2: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
		};
	};
	class SRP_PlateCarrierHolster_USNAOR1: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
		};
	};
	class SRP_PlateCarrierHolster_SURPAT: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
		};
	};
	class SRP_PlateCarrierHolster_MARPATWinter: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
		};
	};
	class SRP_PlateCarrierHolster_EMP6: PlateCarrierHolster
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
		};
	};
  class SRP_PlateCarrierPouches_White: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ballisticvest_white_co.paa"
		};
	};	
	class SRP_PlateCarrierPouches_Pseudo: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_pseudo_co.paa"
		};
	};
	class SRP_PlateCarrierPouches_Tan: PlateCarrierPouches
	{
		scope=2;
		displayName="Tan Pouches";
		descriptionShort="Tan Pouches";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa"
		};
	};
	class SRP_PlateCarrierPouches_Green: PlateCarrierPouches
	{
		scope=2;
		displayName="Green Pouches";
		descriptionShort="Green Pouches";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa"
		};
	};
	class SRP_PlateCarrierPouches_Black: PlateCarrierPouches
	{
		scope=2;
		displayName="Black Pouches";
		descriptionShort="Black Pouches";
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa"
		};
	};
  class SRP_PlateCarrierPouches_Lavender: PlateCarrierPouches
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_lavender_co.paa"
		};
	};
  class SRP_PlateCarrierPouches_Petal: PlateCarrierPouches
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_petal_co.paa"
		};
	};
  class SRP_PlateCarrierPouches_Stone: PlateCarrierPouches
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_stone_co.paa"
		};
	};
  class SRP_PlateCarrierPouches_Storm: PlateCarrierPouches
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_storm_co.paa"
		};
	};
  class SRP_PlateCarrierPouches_Sunny: PlateCarrierPouches
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest_sunny_co.paa"
		};
	};
	class SRP_PlateCarrierPouches_MTP: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
		};
	};
	class SRP_PlateCarrierPouches_ATAC: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
		};
	};
	class SRP_PlateCarrierPouches_ATACSFG: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
		};
	};
	class SRP_PlateCarrierPouches_USNAOR2: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
		};
	};
	class SRP_PlateCarrierPouches_USNAOR1: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
		};
	};
	class SRP_PlateCarrierPouches_SURPAT: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
		};
	};
	class SRP_PlateCarrierPouches_MARPATWinter: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
		};
	};
	class SRP_PlateCarrierPouches_EMP6: PlateCarrierPouches
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
		};
	};    
  class SRP_PressVest_Black: PressVest_ColorBase
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
			"Survivalists_Retextures\characters\vests\data\beliyvest.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest.paa",
			"Survivalists_Retextures\characters\vests\data\beliyvest.paa"
		};
	};	
  class SRP_ATF_PressVest_Blue: PressVest_ColorBase
	{
		scope=2;
		displayName="ATF Press Vest";
		descriptionShort="A press vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_pressvest_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat"
		};
	};
  class SRP_CIA_PressVest_Blue: PressVest_ColorBase
	{
		scope=2;
		displayName="CIA Press Vest";
		descriptionShort="A press vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_pressvest_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat"
		};
	};
  class SRP_FBI_PressVest_Blue: PressVest_ColorBase
	{
		scope=2;
		displayName="FBI Press Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_pressvest_blue_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_pressvest_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\srp_pressvest.rvmat"
		};
	};
  class SRP_PressV_MTP: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest01.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest01.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest01.paa"
		};
	};
	class SRP_PressV_ATAC: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest05.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest05.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest05.paa"
		};
	};
	class SRP_PressV_ATACSFG: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest39.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest39.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest39.paa"
		};
	};
	class SRP_PressV_USNAOR2: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest10.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest10.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest10.paa"
		};
	};
	class SRP_PressV_USNAOR1: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest11.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest11.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest11.paa"
		};
	};
	class SRP_PressV_SURPAT: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest13.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest13.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest13.paa"
		};
	};
	class SRP_PressV_MARPATWinter: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest20.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest20.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest20.paa"
		};
	};
	class SRP_PressV_EMP6: PressVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\PressVest58.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest58.paa",
			"Survivalists_Retextures\characters\vests\data\PressVest58.paa"
		};
	};
  class SRP_UKAssVest_White: UKAssVest_ColorBase
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
			"Survivalists_Retextures\characters\vests\data\srp_ukassvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ukassvest_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_ukassvest_white_co.paa"
		};
	};
	class SRP_PoliceVest: PoliceVest
	{
		scope=2;
		displayName="Sheriff Vest";
		descriptionShort="Hackcock Sheriffs Department Vest";
		heatIsolation=0.60000002;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\srp_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_policevest_co.paa"
		};
	};
  class SRP_ATF_PoliceVest: PoliceVest
	{
		scope=2;
		displayName="ATF Police Vest";
		descriptionShort="A police vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_policevest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat"
		};
	};
  class SRP_CIA_PoliceVest: PoliceVest
	{
		scope=2;
		displayName="CIA Police Vest";
		descriptionShort="A police vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_policevest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat"
		};
	};
  class SRP_FBI_PoliceVest: PoliceVest
	{
		scope=2;
		displayName="FBI Police Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_policevest_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_policevest_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat",
			"Survivalists_Retextures\characters\vests\data\policevest.rvmat"
		};
	};
	class SRP_ChestHolster_Black: ChestHolster
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
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_black_co.paa"
		};
	};
	class SRP_ChestHolster_White: ChestHolster
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
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_white_co.paa",
			"Survivalists_Retextures\characters\vests\data\srp_chest_holster_white_co.paa"
		};
	};
	class SRP_HighCapacityVest_Rain: HighCapacityVest_ColorBase
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
			"Survivalists_Retextures\characters\vests\data\rainvest.paa",
			"Survivalists_Retextures\characters\vests\data\rainvest.paa",
			"Survivalists_Retextures\characters\vests\data\rainvest.paa"
		};
	};			
	class SRP_ATF_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="ATF Black Vest";
		descriptionShort="A vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_black_co.paa"
		};
	};
	class SRP_ATF_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="ATF Olive Vest";
		descriptionShort="A vest with the letters ATF embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\atf_tacticalvest2_olive_co.paa"
		};
	};		
	class SRP_CIA_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="CIA Black Vest";
		descriptionShort="A vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_black_co.paa"
		};
	};
	class SRP_CIA_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="CIA Olive Vest";
		descriptionShort="A vest with the letters CIA embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\cia_tacticalvest2_olive_co.paa"
		};
	};		
	class SRP_FBI_HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="FBI Black Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_black_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_black_co.paa"
		};
	};
	class SRP_FBI_HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope=2;
		displayName="FBI Olive Vest";
		descriptionShort="A vest with the letters FBI embroidered on the front and back.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_olive_co.paa",
			"Survivalists_Retextures\characters\vests\data\fbi_tacticalvest2_olive_co.paa"
		};
	};
	class SRP_CapacityVest_MTP: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest03.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest03.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest03.paa"
		};
	};
	class SRP_CapacityVest_ATAC: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest05.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest05.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest05.paa"
		};
	};
	class SRP_CapacityVest_ATACSFG: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest39.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest39.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest39.paa"
		};
	};
	class SRP_CapacityVest_USNAOR2: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest10.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest10.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest10.paa"
		};
	};
	class SRP_CapacityVest_USNAOR1: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest11.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest11.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest11.paa"
		};
	};
	class SRP_CapacityVest_SURPAT: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest13.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest13.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest13.paa"
		};
	};
	class SRP_CapacityVest_MARPATWinter: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest20.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest20.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest20.paa"
		};
	};
	class SRP_CapacityVest_EMP6: HighCapacityVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\TacticalVest58.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest58.paa",
			"Survivalists_Retextures\characters\vests\data\TacticalVest58.paa"
		};
	};  
  class SRP_Leather_HuntingVest: HuntingVest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelections[]=
		{
			"zbytek",
			"camoMale"
		};
		hiddenSelectionsTextures[]=	
		{
			"Survivalists_Retextures\characters\vests\data\hunting_vest_Leather_co.paa",
			"Survivalists_Retextures\characters\vests\data\hunting_vest_Leather_co.paa"
		};
	};
};
