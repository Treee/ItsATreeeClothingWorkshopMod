class CfgMods
{
	class Survivalists_Drink
	{
		type="mod";
		author="ItsATreee | Mar";
		name="Survivalists_Drink";
		dir="Survivalists_Drink";
		dependencies[]={"World"};
		class defs
		{
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_Drink/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class Survivalists_Drink
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts",
      "DZ_Gear_Drinks",
      "DZ_Gear_Food" 
    };
  };
};

class CfgVehicles
{
  class Bottle_Base;
  class Canteen;
  class BoxCerealCrunchin;
  class Inventory_Base;

//====================================================== CUSTOM STUFF
  class SRPteabag: Inventory_Base
	{
		scope=2;
		displayName="Tea bag";
		descriptionShort="A tea bag. This one is earl gray, a classic blend.";
		model="Survivalists_Drink\drinks\teabag.p3d";
		canBeSplit=1;
		varQuantityInit=5;
		varQuantityMin=0;
		varQuantityMax=5;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						{1.0,{"DZ\gear\cultivation\data\pepper_seeds.rvmat"}},
            {0.69999999,{"DZ\gear\cultivation\data\pepper_seeds.rvmat"}},
            {0.5,{"DZ\gear\cultivation\data\pepper_seeds_damage.rvmat"}},
            {0.30000001,{"DZ\gear\cultivation\data\pepper_seeds_damage.rvmat"}},
            {0.0,{"DZ\gear\cultivation\data\pepper_seeds_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="seedpack_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
  class SRPteabag_coffee: SRPteabag
	{
		scope=2;
		displayName="Instant Coffee Bag";
		descriptionShort="A coffee tea bag. This one is a mixed blend, very stale.";
	};

  class Winebottle: Bottle_Base
	{
		scope=2;
		displayName="Red Wine";
		descriptionShort="A nice bottle of red wine. For when you want to get wasted but in a classier manner.";
		model="Survivalists_Drink\drinks\wine.p3d";
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=2048;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=750;
		varQuantityMin=0;
		varQuantityMax=750;
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet="GlassBottle_in_B_SoundSet";
					id=202;
				};
				class GlassBottle_in_C
				{
					soundSet="GlassBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class GlassBottle_out_A
				{
					soundSet="GlassBottle_out_A_SoundSet";
					id=205;
				};
				class GlassBottle_out_B
				{
					soundSet="GlassBottle_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};
	class Winebottle_two: Winebottle
	{
		scope=2;
		displayName="White Wine";
		descriptionShort="A nice bottle of white wine. For when you want to get wasted but in a classier manner.";
		hiddenSelections[]={"glass","label","cap"};
		hiddenSelectionsTextures[]={"Survivalists_Drink\drinks\data\wineII_ca.paa","Survivalists_Drink\drinks\data\winelabelII_co.paa","Survivalists_Drink\drinks\data\winebottle_capII_co.paa"};
	};
  class Winebottle_DillardTequilla: Winebottle
	{
		scope=2;
		displayName="Hot Temper Tequilla";
		descriptionShort="A nice bottle of tequilla. Get hot. Get Heavy. Time for a fiesta.";
		hiddenSelections[]={"glass","label","cap"};
		hiddenSelectionsTextures[]={"Survivalists_Drink\drinks\data\wineII_ca.paa","Survivalists_Drink\drinks\data\winelabel_dillardtequilla_co.paa","Survivalists_Drink\drinks\data\winebottle_capII_co.paa"};
	};
  class Winebottle_SwampWater: Winebottle
	{
		scope=2;
		displayName="Swamp Ass Water";
		descriptionShort="A nice bottle of swamp water. You know you want to drink it regardless of the consequences.";
		hiddenSelections[]={"glass","label","cap"};
		hiddenSelectionsTextures[]={"Survivalists_Drink\drinks\data\wineII_ca.paa","Survivalists_Drink\drinks\data\winelabel_swampwater_co.paa","Survivalists_Drink\drinks\data\winebottle_capII_co.paa"};
	};

//====================================================== FUNCTIONAL RETEXTURES
  class SRP_BrownBottle: Bottle_Base
	{
		scope=2;
		displayName="Liquor Bottle";
		descriptionShort="An old bottle filled with strong smelling liquor. The label looks worn and handwritten. Can be refilled.";
		model="Survivalists_Drink\drinks\brownbottle.p3d";
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=2048;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Drink\drinks\data\BrownBottle.rvmat"}},
            {0.69999999,{"Survivalists_Drink\drinks\data\BrownBottle.rvmat"}},
            {0.5,{"Survivalists_Drink\drinks\data\BrownBottle_damage.rvmat"}},
            {0.30000001,{"Survivalists_Drink\drinks\data\BrownBottle_damage.rvmat"}},
            {0.0,{"Survivalists_Drink\drinks\data\BrownBottle_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet="GlassBottle_in_B_SoundSet";
					id=202;
				};
				class GlassBottle_in_C
				{
					soundSet="GlassBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class GlassBottle_out_A
				{
					soundSet="GlassBottle_out_A_SoundSet";
					id=205;
				};
				class GlassBottle_out_B
				{
					soundSet="GlassBottle_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};
  class SRP_BrownBottle_LakeOfFire: SRP_BrownBottle
	{
		scope=2;
		displayName="Dillards 'Lake Of Fire' Spiced Whiskey";
		descriptionShort="A family recipie passed down by the Dillard family in the hills of Kentucky for over 150 years. Will warm you right up.";
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=2048;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\BrownBottle_lakeoffire_ca.paa"
		};	
  };
  class SRP_BrownBottle_LucifersTears: SRP_BrownBottle
	{
		scope=2;
		displayName="Dillards Lucifers Tears";
		descriptionShort="190 proof hard liquor Drink spiced with pure Capsaicin extract , Not for the faint if heart.";
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=2048;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\BrownBottle_luciferstears_ca.paa"
		};	
  };
  class Canteen_Glassware_Cup: Canteen
	{
		scope=2;
		displayName="Glass Cup";
		descriptionShort="A glass cup full of liquid.";
		model="Survivalists_Drink\drinks\srp_glassware_cup.p3d";
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\srp_glassware_cup_ca.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class BoxCerealCrunchin_Coffee: BoxCerealCrunchin
	{
		scope=2;
		displayName="Coffee";
		descriptionShort="Generic Ground Coffee";
		hiddenSelectionsTextures[]={"Survivalists_Drink\drinks\data\cereal_box_coffee_co.paa"};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=20;
			water=10;
			nutritionalIndex=1;
			toxicity=0;
		};
	};

//====================================================== PURE RETEXTURES
};