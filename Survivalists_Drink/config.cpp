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
  class Inventory_Base;
  class Bottle_Base;
  class Canteen;
  class BoxCerealCrunchin;
  class SodaCan_ColorBase;
  class WaterBottle;

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
		destroyOnEmpty=1;
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
  class SRP_MilitaryCanteen_Base: Canteen
	{
		scope=0;
		displayName="Military Canteen";
		model="Survivalists_Drink\drinks\militarycanteen.p3d";
    color="base";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_co.paa"
		};	
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Drink\drinks\data\canteen.rvmat"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
          healthLevels[]=
          {
            {1.0,{"Survivalists_Drink\drinks\data\canteen.rvmat"}},
            {0.7,{"Survivalists_Drink\drinks\data\canteen.rvmat"}},
            {0.5,{"Survivalists_Drink\drinks\data\canteen_damage.rvmat"}},
            {0.3,{"Survivalists_Drink\drinks\data\canteen_damage.rvmat"}},
            {0.0,{"Survivalists_Drink\drinks\data\canteen_destruct.rvmat"}}
          };
				};
			};
		};		
	};
  
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
  class SRP_BeerBottle: Bottle_Base
	{
		scope=2;
		displayName="Beer Bottle";
		descriptionShort="An old bottle filled with strong smelling beer. The label looks worn and old.";
		model="Survivalists_Drink\drinks\beerbottle.p3d";
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=1;
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
						{1.0,{"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda.rvmat"}},
            {0.69999999,{"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda.rvmat"}},
            {0.5,{"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda.rvmat"}},
            {0.30000001,{"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda.rvmat"}},
            {0.0,{"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda.rvmat"}}
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

//====================================================== FUNCTIONAL RETEXTURES
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

	class SodaCan_Baltika0: SodaCan_ColorBase
	{
		scope=2;
		displayName="Baltika 0";
		descriptionShort="A bottle of Baltika 0 beer";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\baltika0_co.paa"
		};
	};
	class SodaCan_Baltika7: SodaCan_ColorBase
	{
		scope=2;
		displayName="Baltika 7";
		descriptionShort="A bottle of Baltika 7 beer";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\baltika7_co.paa"
		};
	};
	class SodaCan_Baltika9: SodaCan_ColorBase
	{
		scope=2;
		displayName="Baltika 9";
		descriptionShort="A bottle of Baltika 9 beer";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\baltika9_co.paa"
		};
	};
	class SodaCan_CherryCola: SodaCan_ColorBase
	{
		scope=2;
		displayName="Cherry Cola";
		descriptionShort="A can of cherry cola";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\cola_cerry_co.paa"
		};
	};
	class SodaCan_Lemonade: SodaCan_ColorBase
	{
		scope=2;
		displayName="Lemonade";
		descriptionShort="A can of lemonade";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\limonad_co.paa"
		};
	};
	class SodaCan_Tarhun: SodaCan_ColorBase
	{
		scope=2;
		displayName="Tarhun Soda";
		descriptionShort="A can of tarhun soda";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\tarhun_co.paa"
		};
	};
	class SodaCan_5HrEnergy: SodaCan_ColorBase
	{
		scope=2;
		displayName="Energy Drink";
		descriptionShort="A bottle of '5 hour' energy drink.";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\tonik_5h_co.paa"
		};
	};
	class SodaCan_ElionVodka: SodaCan_ColorBase
	{
		scope=2;
		displayName="Elion";
		descriptionShort="A can of Elion Vodka";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\tonik_Elion_co.paa"
		};
	};
	class SodaCan_Cocktail: SodaCan_ColorBase
	{
		scope=2;
		displayName="Jaguar";
		descriptionShort="A ready to drink cocktail. Party in a can";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\tonik_yagua_co.paa"
		};
	};  
  class SodaCan_AKDigital: SodaCan_ColorBase
	{
		scope=2;
		displayName="AK/AR Digital";
		descriptionShort="A caffinated drink!";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\sodacan_akdigital_co.paa"
		};
	};
  class SodaCan_DeadBull: SodaCan_ColorBase
	{
		scope=2;
		displayName="Dead Bull";
		descriptionShort="A caffinated drink!";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\sodacan_deadbull_co.paa"
		};
	};
  class SodaCan_FreshWater: SodaCan_ColorBase
	{
		scope=2;
		displayName="Whater H20";
		descriptionShort="Canned water.";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\sodacan_freshwater_co.paa"
		};
	};
  class SodaCan_Saltika: SodaCan_ColorBase
	{
		scope=2;
		displayName="Saltika";
		descriptionShort="Why is this so salty?";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\sodacan_saltika_co.paa"
		};
	};
  class SodaCan_BrimstoneBeer: SodaCan_ColorBase
	{
		scope=2;
		displayName="Brimstone Beer";
		descriptionShort="At the end of a hard day of surviving nothing helps you relax like a cold beer. Brewed by the Dillard family of Hart County Kentucky.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\brimstone_can_co.paa"
		};
	};
  class SodaCan_LancasterBeer: SodaCan_ColorBase
	{
		scope=2;
		displayName="Lancaster Beer";
		descriptionShort="A Handcrafted luxury beer, Lancasters conjures a smooth enchanting flavor like nothing else, so sit back ,relax and stay for a spell.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\lancaster_can_co.paa"
		};
	};

	class SRP_MilitaryCanteen_OD: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - OD";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_ERDL: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - ERDL";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_ERDL_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_Tan: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_Tan_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_Black: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_Black_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_Snow: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_Snow_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_MC_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam_Tropic: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam Tropic";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_MC_Tropic_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam_Black: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\canteen_MC_Black_co.paa"
		};		
	};

  class Canteen_Blue: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Drink\drinks\data\canteen_blue_co.paa"
    };
	};
  class Canteen_Pink: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Drink\drinks\data\canteen_pink_co.paa"
    };
	};
  class Canteen_Purple: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Drink\drinks\data\canteen_purple_co.paa"
    };
	};
  class Canteen_Neon: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Drink\drinks\data\canteen_neon_co.paa"
    };
	};
  class Canteen_Red: Canteen
	{
		scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Drink\drinks\data\canteen_red_co.paa"
    };
	};

  class WaterBottle_Pepsi: WaterBottle
	{
		scope=2;
		displayName="Pepsi";
		descriptionShort="A bottle of Pepsi";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottle_pepsi_co.paa"
		};
	};
	class WaterBottle_ZhiguliBeer: WaterBottle
	{
		scope=2;
		displayName="Zhiguli";
		descriptionShort="A bottle of Zhiguli beer";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottle_sigul_co.paa"
		};
	};
  class WaterBottle_Blood: WaterBottle
	{
		scope=2;
		displayName="Red Bottle";
		descriptionShort="A bottle of red liquid";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottle_blood_co.co.paa"
		};
		class Nutrition
		{
			toxicity=2;
		};
	};  

  class SRP_BeerBottle_DoublTap: SRP_BeerBottle
	{
		scope=2;
		displayName="Doubl Tap";
		descriptionShort="Will this make me shoot better?";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda_doubletap_co.paa"
		};
	};
  class SRP_BeerBottle_Electric: SRP_BeerBottle
	{
		scope=2;
		displayName="Electric";
		descriptionShort="Feel it in your fillings.";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda_electric_co.paa"
		};
	};
  class SRP_BeerBottle_Juggernaut: SRP_BeerBottle
	{
		scope=2;
		displayName="Juggernaut";
		descriptionShort="All powerful!!";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda_jugger_co.paa"
		};
	};
  class SRP_BeerBottle_Reviver: SRP_BeerBottle
	{
		scope=2;
		displayName="Revival";
		descriptionShort="Rejuvinate your thirst buds.";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda_reviver_co.paa"
		};
	};
  class SRP_BeerBottle_Speedy: SRP_BeerBottle
	{
		scope=2;
		displayName="Speedy";
		descriptionShort="Can't run away from diabetes forever.";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Drink\drinks\data\bottlebeer_zombiesoda_speedy_co.paa"
		};
	};
};