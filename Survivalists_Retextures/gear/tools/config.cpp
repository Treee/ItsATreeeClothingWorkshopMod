class CfgPatches
{
	class Survivalists_Retextures_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Tools"
		};
	};
};
class CfgVehicles
{
  class KitchenTimer;
  class KitchenTimer_PurpleTomato: KitchenTimer
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\tools\data\kitchentimer_purple_co.paa"
		};
	};
  class KitchenTimer_WhiteTomato: KitchenTimer
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\tools\data\kitchentimer_white_co.paa"
		};
	};

};