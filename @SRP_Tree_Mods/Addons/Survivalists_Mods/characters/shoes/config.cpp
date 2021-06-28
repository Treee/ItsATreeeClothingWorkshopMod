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
      "DZ_Characters_Shoes"
		};
	};
};
class CfgVehicles
{
  class Wellies_ColorBase;
  class AthleticShoes_ColorBase;
  class JungleBoots_ColorBase;
  class NBCBootsBase;

	class SRP_Wellies_Valenki: Wellies_ColorBase  // BP_valenki
	{
		scope=2;
    color="valenki";
		displayName="Wellington Boots";
		descriptionShort="A pair of wellies";
		model="Survivalists_Mods\characters\shoes\valenki_g.p3d";
		heatIsolation=0.80000001;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\shoes\data\valenki.paa",
			"Survivalists_Mods\characters\shoes\data\valenki.paa",
			"Survivalists_Mods\characters\shoes\data\valenki.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\shoes\valenki_m.p3d";
			female="Survivalists_Mods\characters\shoes\valenki_f.p3d";
		};
	};

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
			"BP2\camo\shoes\data\nbc_boots_orange_co.paa",
			"BP2\camo\shoes\data\nbc_boots_orange_co.paa",
			"BP2\camo\shoes\data\nbc_boots_orange_co.paa"
		};
	};
};