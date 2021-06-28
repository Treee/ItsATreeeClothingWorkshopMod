class CfgPatches
{
	class Survivalists_Mods_Characters_Headgear
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Headgear"
		};
	};
};
class CfgVehicles
{
  class BurlapSackCover;

  class SRP_BurlapSackCover_Black: BurlapSackCover
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
			"BP_Smot\CustomClothing\other\head_sack_black_co.paa",
			"BP_Smot\CustomClothing\other\head_sack_black_co.paa",
			"BP_Smot\CustomClothing\other\head_sack_black_co.paa"
		};
	};
	class SRP_BurlapSackCover_Skull: BurlapSackCover
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
			"BP_Smot\CustomClothing\other\head_sack_black_skull_co.paa",
			"BP_Smot\CustomClothing\other\head_sack_black_skull_co.paa",
			"BP_Smot\CustomClothing\other\head_sack_black_skull_co.paa"
		};
	};
	class SRP_BurlapSackCover_White: BurlapSackCover
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
			"BP_Smot\CustomClothing\other\head_sack_white_co.paa",
			"BP_Smot\CustomClothing\other\head_sack_white_co.paa",
			"BP_Smot\CustomClothing\other\head_sack_white_co.paa"
		};
	};
};