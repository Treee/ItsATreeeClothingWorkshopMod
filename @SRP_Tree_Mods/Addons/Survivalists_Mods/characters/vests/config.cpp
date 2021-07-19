class CfgPatches
{
	class Survivalists_Mods_Characters_Vests
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Vests",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class ChestHolster;
  class PlateCarrierPouches;
  class PlateCarrierHolster;
  class HighCapacityVest_ColorBase;

  // ----------------------  BASE GAME OVERRIDES

  class PressVest_ColorBase: Clothing
	{
		repairableWithKits[]={3,7};
		repairCosts[]={50};
	};

  class PlateCarrierVest: Clothing
	{
		repairableWithKits[]={3,7};
		repairCosts[]={50};
	};

  // ----------------------  BASE GAME RETEXTURES

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
			"Survivalists_Mods\characters\vests\data\SRPTraderVest.paa"
		};
	};

	class SRP_PressVest_Black: PressVest_ColorBase  // BP_PressVest_Black
	{
		scope=2;
		displayName="Black Press Vest";
		descriptionShort="A black vest with 'Press' printed onto it";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest.paa"
		};
	};

	class SRP_ChestHolster_Black: ChestHolster  // BP1_ChestHolster_black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa",
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa",
			"Survivalists_Mods\characters\vests\data\chest_holster_black_co.paa"
		};
	};

	class SRP_PlateCarrierVest_Black: PlateCarrierVest  // BP_PlateCarrierVest_black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_PlateCarrierPouches_Black: PlateCarrierPouches  // BP_PlateCarrierPouches_Black
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_PlateCarrierHolster_Black: PlateCarrierHolster  // BP_PlateCarrierHolster_Black
	{
		scope=2;
		attachments[]=
		{
			"Pistol"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa",
			"Survivalists_Mods\characters\vests\data\beliyvest2.paa"
		};
	};

	class SRP_HighCapacityVest_Rain: HighCapacityVest_ColorBase  // BP2_Rainvest
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\rainvest.paa",
			"Survivalists_Mods\characters\vests\data\rainvest.paa",
			"Survivalists_Mods\characters\vests\data\rainvest.paa"
		};
	};

  // ----------------------  CUSTOM STUFF


  class SRP_Brewstershield: PlateCarrierVest
	{
		scope=2;
		displayName="Brewster Shield";
		descriptionShort="A crude body shield proven to be effective in World War 1.";
		model="Survivalists_Mods\characters\vests\brewstershield_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\vests\data\brewstershield_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\vests\data\brewstershield.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\vests\brewstershield_m.p3d";
			female="Survivalists_Mods\characters\vests\brewstershield_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						{1,	{	"Survivalists_Mods\characters\vests\data\brewstershield.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\vests\data\brewstershield.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\vests\data\brewstershield_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\vests\data\brewstershield_damage.rvmat"}},
            {0,	{	"Survivalists_Mods\characters\vests\data\brewstershield_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
	};

};