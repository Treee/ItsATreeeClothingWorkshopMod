class CfgPatches
{
	class Survivalists_Mods_Weapons_Muzzles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  // ------------------------------------ BASE GAME OVERRIDE
  class PistolSuppressor;
	class SRP_PistolSuppressor_Golden: PistolSuppressor
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold.rvmat"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5;
					healthLevels[]=
					{
            {1.0,	{	"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold.rvmat"}},
            {0.5,	{	"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\weapons\attachments\muzzle\data\srp_pistolsuppressor_gold_destruct.rvmat"}}
					};
				};
			};
		};
  }
};