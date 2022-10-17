class CfgPatches
{
	class Survivalists_Mods_Weapons_Attachments_Muzzles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Survivalists_Weapons"
		};
	};
};
class CfgVehicles
{
  // ------------------------------------ BASE GAME OVERRIDE
	class ItemSuppressor;
  // Increasing Suppressor health and normalizing suppression
	class M4_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,	{	"DZ\weapons\attachments\data\suppressor556.rvmat"}},
            {0.69999999,	{	"DZ\weapons\attachments\data\suppressor556.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\data\suppressor556_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\attachments\data\suppressor556_damage.rvmat"}},
            {0,	{	"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		noiseShootModifier=-0.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,	{	"DZ\weapons\attachments\data\tgpa.rvmat"}},
            {0.69999999,	{	"DZ\weapons\attachments\data\tgpa.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\data\tgpa_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\attachments\data\tgpa_damage.rvmat"}},
            {0,	{	"DZ\weapons\attachments\data\tgpa_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		noiseShootModifier=-0.75;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						{1.0,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat"}},
            {0.69999999,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat"}},
            {0.0,	{	"DZ\weapons\attachments\muzzle\data\bottle_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class PistolSuppressor: ItemSuppressor
	{
		noiseShootModifier=-0.2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						{1.0,{"DZ\weapons\attachments\data\gemtech.rvmat"}},
            {0.69999999,{"DZ\weapons\attachments\data\gemtech.rvmat"}},
            {0.5,{"DZ\weapons\attachments\data\gemtech_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\attachments\data\gemtech_damage.rvmat"}},
            {0.0,{"DZ\weapons\attachments\data\gemtech_destruct.rvmat"}}
					};
				};
			};
		};
	};
  
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
					hitpoints=150;
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
  };
};