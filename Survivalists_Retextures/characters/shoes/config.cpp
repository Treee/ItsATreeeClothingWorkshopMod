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
  class Sneakers_ColorBase;

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

  class Sneakers_BabyBlue: Sneakers_ColorBase
	{
		scope=2;
    color="babyblue";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_BabyBlue_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_BabyBlue_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_BabyBlue_co.paa"
		};
	};
  class Sneakers_Black: Sneakers_ColorBase
	{
		scope=2;
    color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_black_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_black_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_black_co.paa"
		};
	};
  class Sneakers_DarkPurple: Sneakers_ColorBase
	{
		scope=2;
    color="darkpurple";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_darkpurp_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_darkpurp_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_darkpurp_co.paa"
		};
	};
  class Sneakers_Lime: Sneakers_ColorBase
	{
		scope=2;
    color="lime";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_lime_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_lime_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_lime_co.paa"
		};
	};
  class Sneakers_Purple: Sneakers_ColorBase
	{
		scope=2;
    color="purple";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_purple_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_purple_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_purple_co.paa"
		};
	};
  class Sneakers_Red: Sneakers_ColorBase
	{
		scope=2;
    color="red";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_red_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_red_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_red_co.paa"
		};
	};
  class Sneakers_Salmon: Sneakers_ColorBase
	{
		scope=2;
    color="salmon";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_salmon_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_salmon_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_salmon_co.paa"
		};
	};
  class Sneakers_Tan: Sneakers_ColorBase
	{
		scope=2;
    color="tan";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_tan_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_tan_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_tan_co.paa"
		};
	};
  class Sneakers_WhitePink: Sneakers_ColorBase
	{
		scope=2;
    color="whitepink";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\shoes\data\sneakers_whitepink_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_whitepink_co.paa",
			"Survivalists_Retextures\characters\shoes\data\sneakers_whitepink_co.paa"
		};
	};
};
