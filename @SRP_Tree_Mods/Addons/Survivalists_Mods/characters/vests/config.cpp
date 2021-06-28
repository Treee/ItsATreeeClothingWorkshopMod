class CfgPatches
{
	class Survivalists_Mods_Characters_Vests
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
  class PlateCarrierVest;

	class SRP_TraderVest: PlateCarrierVest  // SRPTraderVest
	{
		scope=2;
		quickBarBonus=10;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"BP_Smot\CustomClothing\other\SRPTraderVest.paa"
		};
	};
};