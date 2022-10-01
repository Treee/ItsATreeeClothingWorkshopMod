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
  class LeatherStorageVest_ColorBase;

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

  class DUB_Poncho;

  class PlateCarrierVest_ThirstyDevil: PlateCarrierVest
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
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa"
		};
	};
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
  class PlateCarrierHolster_Petal: PlateCarrierHolster
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
  class PlateCarrierHolster_Stone: PlateCarrierHolster
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
  class PlateCarrierHolster_Storm: PlateCarrierHolster
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
  class PlateCarrierHolster_Sunny: PlateCarrierHolster
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
	class PlateCarrierHolster_MTP: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
		};
	};
	class PlateCarrierHolster_ATAC: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
		};
	};
	class PlateCarrierHolster_ATACSFG: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
		};
	};
	class PlateCarrierHolster_USNAOR2: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
		};
	};
	class PlateCarrierHolster_USNAOR1: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
		};
	};
	class PlateCarrierHolster_SURPAT: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
		};
	};
	class PlateCarrierHolster_MARPATWinter: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
		};
	};
  class PlateCarrierHolster_ThirstyDevil: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
		};
	};
	class PlateCarrierHolster_EMP6: PlateCarrierHolster
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
		};
	};
  class PlateCarrierPouches_White: PlateCarrierPouches
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
	class PlateCarrierPouches_Pseudo: PlateCarrierPouches
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
	class PlateCarrierPouches_Tan: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Tan_CO.paa"
		};
	};
	class PlateCarrierPouches_Green: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Green_CO.paa"
		};
	};
	class PlateCarrierPouches_Black: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa",
			"Survivalists_Retextures\characters\vests\data\SRP_Holster_Black_CO.paa"
		};
	};
  class PlateCarrierPouches_Lavender: PlateCarrierPouches
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
  class PlateCarrierPouches_Petal: PlateCarrierPouches
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
  class PlateCarrierPouches_Stone: PlateCarrierPouches
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
  class PlateCarrierPouches_Storm: PlateCarrierPouches
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
  class PlateCarrierPouches_Sunny: PlateCarrierPouches
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
	class PlateCarrierPouches_MTP: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest01.paa",
		};
	};
	class PlateCarrierPouches_ATAC: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest04.paa",
		};
	};
	class PlateCarrierPouches_ATACSFG: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest38.paa",
		};
	};
	class PlateCarrierPouches_USNAOR2: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest09.paa",
		};
	};
	class PlateCarrierPouches_USNAOR1: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest10.paa",
		};
	};
	class PlateCarrierPouches_SURPAT: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest12.paa",
		};
	};
	class PlateCarrierPouches_MARPATWinter: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest19.paa",
		};
	};
	class PlateCarrierPouches_EMP6: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\ballisticvest57.paa",
		};
	};   
  class PlateCarrierPouches_ThirstyDevil: PlateCarrierPouches
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
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
			"Survivalists_Retextures\characters\vests\data\TTD_vest_co.paa",
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


  class LeatherStorageVest_Choco: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_choco_co.paa"
		};
	};
  class LeatherStorageVest_Lime: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_Lime_co.paa"
		};
	};
  class LeatherStorageVest_Orange: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_Orange_co.paa"
		};
	};
  class LeatherStorageVest_Pink: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_Pink_co.paa"
		};
	};
  class LeatherStorageVest_Purple: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_Purple_co.paa"
		};
	};
  class LeatherStorageVest_Storm: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_Storm_co.paa"
		};
	};
  class LeatherStorageVest_Yellow: LeatherStorageVest_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\vests\data\crafted_leather_vest_Yellow_co.paa"
		};
	};

  class DUB_Poncho_Flowers: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_flowers_co.paa"};
	};
  class DUB_Poncho_PinkFlowers: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_flowers_Pink_co.paa"};
	};
  class DUB_Poncho_PurpleFlowers: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_flowers_purple_co.paa"};
	};
  class DUB_Poncho_PinkPurple: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_pinkpurple_co.paa"};
	};
  class DUB_Poncho_PurpleBlue: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_PurpleBlue_co.paa"};
	};
  class DUB_Poncho_Rose: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_Rose_co.paa"};
	};
  class DUB_Poncho_YellowRed: DUB_Poncho
	{
		scope = 2;
		hiddenSelections[] = {"vest"};
		hiddenSelectionsTextures[] = {"Survivalists_Retextures\characters\vests\data\poncho_YellowRed_co.paa"};
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
};