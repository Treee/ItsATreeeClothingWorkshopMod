class CfgPatches
{
	class Survivalists_Retextures_Gear_Camping
  {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping",
      "Survivalists_Mods_Gear_Camping"
		};
	};
};
class CfgVehicles
{
  class LargeTent;
  class Flag_Base;

  class SRP_Guitar_Alpocalypse;
  class SRP_Carpet_ColorBase;
  class SRP_CarpetRug_ColorBase;
  class SRP_DragonPlushie_ColorBase;
  class SRP_JapaneseUmbrella_ColorBase;

//================================================ VANILLA
  class LargeTent_Stag: LargeTent
	{
		scope=2;
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\large_tent_STAG_co.paa"
		};
  };

  class Flag_Australia: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_australia_co.paa"
		};
		color="Australia";
	};
  class Flag_Canada: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Canada_co.paa"
		};
		color="Canada";
	};
  class Flag_KentuckyCommonWealth: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_CommonWealth_co.paa"
		};
		color="KentuckyCommonWealth";
	};
  class Flag_France: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_France_co.paa"
		};
		color="France";
	};
  class Flag_Germany: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Germany_co.paa"
		};
		color="Germany";
	};
  class Flag_Italy: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Italy_co.paa"
		};
		color="Italy";
	};
  class Flag_Mexico: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Mexico_co.paa"
		};
		color="Mexico";
	};
  class Flag_Portugal: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Portugal_co.paa"
		};
		color="Portugal";
	};
  class Flag_Russia: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Russia_co.paa"
		};
		color="Russia";
	};
  class Flag_Spain: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_Spain_co.paa"
		};
		color="Spain";
	};
  class Flag_UK: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_UK_co.paa"
		};
		color="UK";
	};
  class Flag_USADamaged: Flag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\flag_USA_damaged_co.paa"
		};
		color="USADamaged";
	};
  
//================================================ MODDED  
  class SRP_Guitar_Alpocalypse_Blue: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_blue_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_Green: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_green_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_Pastel: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_pastel_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_Pink: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_pink_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_Sunset: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_sunset_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_Teal: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_teal_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_TieDye: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_tiedye_co.paa"
		};
	};
  class SRP_Guitar_Alpocalypse_Yellow: SRP_Guitar_Alpocalypse
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\alpocalypseguitar_yellow_co.paa"
		};
	};

  class SRP_Carpet_Basic: SRP_Carpet_ColorBase
	{
		scope=2;
	};
  class SRP_Carpet_BlueSea: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_bluesea_co.paa"};
	};
  class SRP_Carpet_Espen: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_espen_co.paa"};
	};
  class SRP_Carpet_Grape: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_grape_co.paa"};
	};
  class SRP_Carpet_LockNSons: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_locknsons_co.paa"};
	};
  class SRP_Carpet_Red: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_red_co.paa"};
	};
  class SRP_Carpet_RedFloral: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_redfloral_co.paa"};
	};
  class SRP_Carpet_RedRose: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_redrose_co.paa"};
	};
  class SRP_Carpet_RoyalBlue: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_royalblue_co.paa"};
	};
  class SRP_Carpet_Stag: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_stag_co.paa"};
	};
  class SRP_Carpet_HumanWelcome: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_human_co.paa"};
	};
  class SRP_Carpet_MutantWelcome: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_mutant_co.paa"};
	};
  class SRP_Carpet_MutantWelcome1: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_welcomemutant1_co.paa"};
	};
  class SRP_Carpet_FlowerGold: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_flowergold_co.paa"};
	};
  class SRP_Carpet_FlowerTeal: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_flowerTeal_co.paa"};
	};
  class SRP_Carpet_GeoGreen: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoGreen_co.paa"};
	};
  class SRP_Carpet_GeoOrange: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoOrange_co.paa"};
	};
  class SRP_Carpet_GeoPurple: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoPurple_co.paa"};
	};
  class SRP_Carpet_GeoRed: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoRed_co.paa"};
	};
  class SRP_Carpet_GeoTeal: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoTeal_co.paa"};
	};
  class SRP_Carpet_GeoYellow: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_GeoYellow_co.paa"};
	};
  class SRP_Carpet_KnitBlue: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitBlue_co.paa"};
	};
  class SRP_Carpet_KnitGreen: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitGreen_co.paa"};
	};
  class SRP_Carpet_KnitLime: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitLime_co.paa"};
	};
  class SRP_Carpet_KnitOrange: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitOrange_co.paa"};
	};
  class SRP_Carpet_KnitPurple: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitPurple_co.paa"};
	};
  class SRP_Carpet_KnitRed: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitRed_co.paa"};
	};
  class SRP_Carpet_KnitTeal: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitTeal_co.paa"};
	};
  class SRP_Carpet_KnitYellow: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_KnitYellow_co.paa"};
	};
  class SRP_Carpet_Pineapple: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_Pineapple_co.paa"};
	};
  class SRP_Carpet_PlaidBrown: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_PlaidBrown_co.paa"};
	};
  class SRP_Carpet_PlaidElf: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_PlaidElf_co.paa"};
	};
  class SRP_Carpet_PlaidRed: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_PlaidRed_co.paa"};
	};
  class SRP_Carpet_SnowflakeBlue: SRP_Carpet_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\persianrug_SnowflakeBlue_co.paa"};
	};


  class SRP_CarpetRug_Basic: SRP_CarpetRug_ColorBase
	{
		scope=2;
	};
  class SRP_CarpetRug_Blue: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_blue_co.paa"};
	};
  class SRP_CarpetRug_Green: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Green_co.paa"};
	};
  class SRP_CarpetRug_Orange: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Orange_co.paa"};
	};
  class SRP_CarpetRug_Purple: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Purple_co.paa"};
	};
  class SRP_CarpetRug_Red: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Red_co.paa"};
	};
  class SRP_CarpetRug_Teal: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Teal_co.paa"};
	};
  class SRP_CarpetRug_Yellow: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Yellow_co.paa"};
	};
  class SRP_CarpetRug_Kitty: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Kitty_co.paa"};
	};
  class SRP_CarpetRug_Planets: SRP_CarpetRug_ColorBase
	{
		scope=2;
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\doormatrug_Planets_co.paa"};
	};

  class SRP_DragonPlushie_Green: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_green_co.paa"
		};
	};
  class SRP_DragonPlushie_Grape: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Grape_co.paa"
		};
	};

  class SRP_DragonPlushie_Blueberry: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Blueberry_co.paa"
		};
	};
  class SRP_DragonPlushie_Pickle: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Pickles_co.paa"
		};
	};
  class SRP_DragonPlushie_Potatoe: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Potatoes_co.paa"
		};
	};
  class SRP_DragonPlushie_Tomato: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\srp_dragonpushie_Tomatoes_co.paa"
		};
	};
  class SRP_DragonPlushie_Xmas: SRP_DragonPlushie_ColorBase
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\camping\data\HolidayDragon1_co.paa"
		};
	};

  class SRP_JapaneseUmbrella_Default: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_co.paa"};
	};
  class SRP_JapaneseUmbrella_Japan: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_japan_co.paa"};
	};
  class SRP_JapaneseUmbrella_Flowers: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_flowers_co.paa"};
	};
  class SRP_JapaneseUmbrella_Essesentiendum: SRP_JapaneseUmbrella_ColorBase
	{
		scope=2;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\camping\data\srp_umbrella_essesentiendum_co.paa"};
	};


};