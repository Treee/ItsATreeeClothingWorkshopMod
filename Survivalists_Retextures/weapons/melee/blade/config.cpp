class CfgPatches
{
	class Survivalists_Retextures_Weapons_Melee_Blade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee_Blade",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class SRP_BerserkSword;

	class SRP_BerserkSword_Illusive: SRP_BerserkSword
	{
    scope=2;
		displayName="The Dragon Slayer";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\weapons\melee\blade\data\srp_berserksword_illusive_co.paa"
    };
  };
};
