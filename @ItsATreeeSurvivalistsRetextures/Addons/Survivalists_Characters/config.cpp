class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[]=
		{
			"SunGlasses"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics"
		};
	};
};
class CfgVehicles
{
  class SportGlasses_ColorBase; // joeyx

  class SportGlasses_Black: SportGlasses_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\data\joeyx_black_co.paa",  // camo ground
			"Survivalists_Characters\data\joeyx_black_co.paa",  // male
			"Survivalists_Characters\data\joeyx_black_co.paa"   // female
		};
	};
};