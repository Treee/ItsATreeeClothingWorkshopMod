class CfgPatches
{
	class Survivalists_Mods_Characters_Shoes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Shoes",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class AthleticShoes_ColorBase;
  class JungleBoots_ColorBase;
  class NBCBootsBase;

	class SRP_DenShoes_White: AthleticShoes_ColorBase // Denshoe
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
			"Survivalists_Mods\characters\shoes\data\denshoe.paa",
			"Survivalists_Mods\characters\shoes\data\denshoe.paa",
			"Survivalists_Mods\characters\shoes\data\denshoe.paa"
		};
	};
	class SRP_DenShoes_Green: AthleticShoes_ColorBase  // Denshoe_green
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
			"Survivalists_Mods\characters\shoes\data\denshoe_green.paa",
			"Survivalists_Mods\characters\shoes\data\denshoe_green.paa",
			"Survivalists_Mods\characters\shoes\data\denshoe_green.paa"
		};
	};

  class SRP_DenShoes_Brown: AthleticShoes_ColorBase  // BP_Janek_Shoes
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
			"Survivalists_Mods\characters\shoes\data\Janek_shoes.paa",
			"Survivalists_Mods\characters\shoes\data\Janek_shoes.paa",
			"Survivalists_Mods\characters\shoes\data\Janek_shoes.paa"
		};
	};

	class SRP_JungleBoots_Yellow: JungleBoots_ColorBase  // BP_JungleBoots_yelo
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
			"Survivalists_Mods\characters\shoes\data\jungleboots_yelo_co.paa",
			"Survivalists_Mods\characters\shoes\data\jungleboots_yelo_co.paa",
			"Survivalists_Mods\characters\shoes\data\jungleboots_yelo_co.paa"
		};
	};
	
	class SRP_NBCBoots_Orange: NBCBootsBase  // BP2_NBCBootsOrang
	{
		scope=2;
		repairableWithKits[]={5,6}; // duct tape and tire repair kit
		heatIsolation=0.8;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\shoes\data\nbc_boots_orange_co.paa",
			"Survivalists_Mods\characters\shoes\data\nbc_boots_orange_co.paa",
			"Survivalists_Mods\characters\shoes\data\nbc_boots_orange_co.paa"
		};
	};
};