class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blunt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class BaseballBat;
  
	class Macerator: BaseballBat
	{
		scope=2;
		displayName="Macerator";
		descriptionShort="A heavy mace that is used for bashing. Created by Turko.";
		model="Survivalists_Mods\weapons\melee\blunt\srp_macerator.p3d";
		itemSize[]={2,4};
	};
};