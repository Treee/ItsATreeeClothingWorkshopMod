class CfgPatches
{
	class Survivalists_Retextures_Characters_Shoes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Shoes",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class AthleticShoes_ColorBase;
	class JungleBoots_ColorBase;
	class NBCBootsBase;
	class SRP_DenShoes_White: AthleticShoes_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\denshoe.paa",
			"Survivalists_Retextures\characters\shoes\data\denshoe.paa",
			"Survivalists_Retextures\characters\shoes\data\denshoe.paa"
		};
	};
	class SRP_DenShoes_Green: AthleticShoes_ColorBase
	{
		scope=2;
		color="green";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\denshoe_green.paa",
			"Survivalists_Retextures\characters\shoes\data\denshoe_green.paa",
			"Survivalists_Retextures\characters\shoes\data\denshoe_green.paa"
		};
	};
	class SRP_DenShoes_Brown: AthleticShoes_ColorBase
	{
		scope=2;
		color="brown";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\Janek_shoes.paa",
			"Survivalists_Retextures\characters\shoes\data\Janek_shoes.paa",
			"Survivalists_Retextures\characters\shoes\data\Janek_shoes.paa"
		};
	};
	class SRP_JungleBoots_Yellow: JungleBoots_ColorBase
	{
		scope=2;
		color="yellow";
		itemSize[]={3,2};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\jungleboots_yelo_co.paa",
			"Survivalists_Retextures\characters\shoes\data\jungleboots_yelo_co.paa",
			"Survivalists_Retextures\characters\shoes\data\jungleboots_yelo_co.paa"
		};
	};
	class SRP_NBCBoots_Orange: NBCBootsBase
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
			"Survivalists_Retextures\characters\shoes\data\nbc_boots_orange_co.paa",
			"Survivalists_Retextures\characters\shoes\data\nbc_boots_orange_co.paa",
			"Survivalists_Retextures\characters\shoes\data\nbc_boots_orange_co.paa"
		};
	};
	class JungleBoots_Red9291: JungleBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\jungleboots_red9291_co.paa",
			"Survivalists_Retextures\characters\shoes\data\jungleboots_red9291_co.paa",
			"Survivalists_Retextures\characters\shoes\data\jungleboots_red9291_co.paa"
		};
	};
	class SRP_BootRys_MTP: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots01.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots01.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots01.paa"
		};
	};
	class SRP_BootRys_ATAC: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots04.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots04.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots04.paa"
		};
	};
	class SRP_BootRys_ATACSFG: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots38.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots38.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots38.paa"
		};
	};
	class SRP_BootRys_USNAOR2: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots09.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots09.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots09.paa"
		};
	};
	class SRP_BootRys_USNAOR1: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots10.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots10.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots10.paa"
		};
	};
	class SRP_BootRys_SURPAT: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots12.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots12.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots12.paa"
		};
	};
	class SRP_BootRys_MARPATWinter: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots19.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots19.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots19.paa"
		};
	};
	class SRP_BootRys_EMP6: JungleBoots_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\JungleBoots57.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots57.paa",
			"Survivalists_Retextures\characters\shoes\data\JungleBoots57.paa"
		};
	};
};
