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

  class SRP_Guitar_Alpocalypse;
  class SRP_Carpet_ColorBase;
  class SRP_CarpetRug_ColorBase;

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
};