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
};