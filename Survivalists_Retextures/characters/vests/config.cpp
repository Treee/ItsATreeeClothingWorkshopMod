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
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat"
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
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat"
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
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat",
			"Survivalists_Retextures\characters\vests\data\pressvest.rvmat"
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
};
