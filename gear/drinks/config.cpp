class CfgPatches
{
	class Survivalists_Mods_Gear_Drinks
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Drinks",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class WaterBottle;
  class Vodka;
  class SodaCan_ColorBase;
  class Canteen;

  // ----------------------  BASE GAME OVERRIDES


  // ----------------------- CUSTOM STUFF

  // BP_PouchBottle_Black, BP_PouchBottle_Green, BP_PouchBottle_Tan non existent model and texture files
  class SRP_WaterBottleBase: WaterBottle  // BP1_BootleColor_base
	{
		scope=0;
		displayName="SRP BottleBase do no spawn";
		descriptionShort="SRP BottleBase do no spawn";
		model="\dz\gear\drinks\WaterBottle.p3d";
		weight=50;
		itemSize[]={1,3};
		destroyOnEmpty=1;
		varQuantityDestroyOnMin=1;
		varLiquidTypeInit=512; // water
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;		
		hiddenSelections[]=
		{
			"zbytek"
		};
		inventorySlot[]=
		{
			"Food1",
			"Food2",
			"Food3",
			"Food4",
			"Food5",
			"Food6",
			"Food7",
			"Food8"
		};
	};
  
  class SRP_AlcoholBase: Vodka  // new
	{
		scope=0;
		displayName="SRP AlchoholBase do no spawn";
		descriptionShort="SRP AlchoholBase do no spawn";
		model="\dz\gear\drinks\WaterBottle.p3d";
		weight=450;
		itemSize[]={1,3};
		destroyOnEmpty=1;
		varQuantityDestroyOnMin=1;
		varLiquidTypeInit=2048; // vodka
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;		
		hiddenSelections[]=
		{
			"zbytek"
		};
		inventorySlot[]=
		{
			"Food1",
			"Food2",
			"Food3",
			"Food4",
			"Food5",
			"Food6",
			"Food7",
			"Food8"
		};
	};

  class SRP_SodaCanBase: SodaCan_ColorBase  // BP1_Dri_Base
  {
    scope=0; // scope 1 dont spawn in
		hiddenSelections[]=
		{
			"camoGround"
		};
		inventorySlot[]=
		{
			"Food1",
			"Food2",
			"Food3",
			"Food4",
			"Food5",
			"Food6",
			"Food7",
			"Food8"
		};
  };

  class SRP_WineBottle: SRP_AlcoholBase  // new
	{
		scope=2;
		displayName="Bottle of Wine";
		descriptionShort="A bottle of wine. Fancy!";
		model="Survivalists_Mods\gear\drinks\winebottle.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\winebottle_ca.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\winebottle.rvmat"
    };
	};


	class SRP_PepsiBottle: SRP_WaterBottleBase  // BP1_bootle_pepsi
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
			"Survivalists_Mods\gear\drinks\data\bootle_pepsi.paa"
		};
	};

	class SRP_ZhiguliBeerBottle: SRP_WaterBottleBase  // BP1_bootle_sigul
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
			"Survivalists_Mods\gear\drinks\data\bootle_sigul.paa"
		};
	};

  class SRP_Blood_Bottle: SRP_WaterBottleBase
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
			"Survivalists_Mods\gear\drinks\data\srp_bloodbottle.co.paa"
		};
		class Nutrition
		{
			toxicity=2;
		};
	};

	class SRP_SodaCanBaltika0: SRP_SodaCanBase  // BP1_baltika0
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
			"Survivalists_Mods\gear\drinks\data\baltika0.paa"
		};
	};

	class SRP_SodaCanBaltika7: SRP_SodaCanBase  // BP1_baltika7
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
			"Survivalists_Mods\gear\drinks\data\baltika7.paa"
		};
	};

	class SRP_SodaCanBaltika9: SRP_SodaCanBase  // BP1_baltika9
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
			"Survivalists_Mods\gear\drinks\data\baltika9.paa"
		};
	};
  
	class SRP_SodaCanCherryCola: SRP_SodaCanBase  // BP1_cola_cherry
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
			"Survivalists_Mods\gear\drinks\data\cola_cerry.paa"
		};
	};

	class SRP_SodaCanLemonade: SRP_SodaCanBase  // BP1_limonad
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
			"Survivalists_Mods\gear\drinks\data\limonad.paa"
		};
	};

	class SRP_SodaCanTarhun: SRP_SodaCanBase  // BP1_tarhun
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
			"Survivalists_Mods\gear\drinks\data\tarhun.paa"
		};
	};

	class SRP_SodaCan5HrEnergy: SRP_SodaCanBase  // BP1_tonik_5h
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
			"Survivalists_Mods\gear\drinks\data\tonik_5h.paa"
		};
	};

	class SRP_SodaCanElionVodka: SRP_SodaCanBase  // BP1_tonik_Elion
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
			"Survivalists_Mods\gear\drinks\data\tonik_Elion.paa"
		};
	};

	class SRP_SodaCanCocktail: SRP_SodaCanBase  // BP1_tonik_yagua
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
			"Survivalists_Mods\gear\drinks\data\tonik_yagua.paa"
		};
	};

  class SRP_SodaCanAKDigital: SRP_SodaCanBase  // new
	{
		scope=2;
		displayName="AK/AR Digital";
		descriptionShort="A caffinated drink!";
		model="Survivalists_Mods\gear\drinks\cansmall.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\cansmall_akardigital_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\can.rvmat"
    };
	};

  class SRP_SodaCan_Slim_DeadBull: SRP_SodaCanBase  // new (slim can varient)
	{
		scope=2;
		displayName="Dead Bull";
		descriptionShort="A caffinated drink!";
		model="Survivalists_Mods\gear\drinks\canslim.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canslim_deadbull_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\can.rvmat"
    };
	};

  class SRP_SodaCan_Medium_FreshWater: SRP_SodaCanBase  // new (medium size can varient)
	{
		scope=2;
		displayName="Whater H20";
		descriptionShort="Canned water.";
		model="Survivalists_Mods\gear\drinks\canmedium.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canmedium_notsofreshwater_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\can.rvmat"
    };
	};

  class SRP_SodaCan_Large_Saltika: SRP_SodaCanBase  // new (large size can varient)
	{
		scope=2;
		displayName="Saltika";
		descriptionShort="Why is this so salty?";
		model="Survivalists_Mods\gear\drinks\canlarge.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canlarge_saltika_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\can.rvmat"
    };
	};

  class SRP_SodaBottle_DoublTap: SRP_SodaCanBase  // new (bottle variant)
	{
		scope=2;
		displayName="Doubl Tap";
		descriptionShort="Will this make me shoot better?";
		model="Survivalists_Mods\gear\drinks\beerbottle.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda_doubletap_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda.rvmat"
    };
	};
  class SRP_SodaBottle_Electric: SRP_SodaCanBase  // new (bottle variant)
	{
		scope=2;
		displayName="Electric";
		descriptionShort="Feel it in your fillings.";
		model="Survivalists_Mods\gear\drinks\beerbottle.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda_electric_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda.rvmat"
    };
	};
  class SRP_SodaBottle_Juggernaut: SRP_SodaCanBase  // new (bottle variant)
	{
		scope=2;
		displayName="Juggernaut";
		descriptionShort="All powerful!!";
		model="Survivalists_Mods\gear\drinks\beerbottle.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda_jugger_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda.rvmat"
    };
	};
  class SRP_SodaBottle_Reviver: SRP_SodaCanBase  // new (bottle variant)
	{
		scope=2;
		displayName="Revival";
		descriptionShort="Rejuvinate your thirst buds.";
		model="Survivalists_Mods\gear\drinks\beerbottle.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda_reviver_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda.rvmat"
    };
	};
  class SRP_SodaBottle_Speedy: SRP_SodaCanBase  // new (bottle variant)
	{
		scope=2;
		displayName="Speedy";
		descriptionShort="Can't run away from diabetes forever.";
		model="Survivalists_Mods\gear\drinks\beerbottle.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda_speedy_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\bottlebeer_zombiesoda.rvmat"
    };
	};


  // ------------------------------- MVS Redux
  class SRP_MilitaryCanteen_Base: Canteen
	{
		scope=0;
		displayName="Military Canteen";
		model="Survivalists_Mods\gear\drinks\militarycanteen.p3d";
    color="base";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co.paa"
		};	
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\drinks\data\canteen.rvmat"
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
            {1.0,{"Survivalists_Mods\gear\drinks\data\canteen.rvmat"}},
            {0.7,{"Survivalists_Mods\gear\drinks\data\canteen.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\drinks\data\canteen_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\gear\drinks\data\canteen_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\drinks\data\canteen_destruct.rvmat"}}
          };
				};
			};
		};		
	};

	class SRP_MilitaryCanteen_OD: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - OD";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co.paa"
		};		
	};
	class SRP_MilitaryCanteen_ERDL: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - ERDL";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_ERDL.paa"
		};		
	};
	class SRP_MilitaryCanteen_Tan: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Tan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_Tan.paa"
		};		
	};
	class SRP_MilitaryCanteen_Black: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_Black.paa"
		};		
	};
	class SRP_MilitaryCanteen_Snow: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Snow";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_Snow.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_MC.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam_Tropic: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam Tropic";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_MC_Tropic.paa"
		};		
	};
	class SRP_MilitaryCanteen_Multicam_Black: SRP_MilitaryCanteen_Base
	{
		scope=2;
		displayName="Military Canteen - Multicam Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\drinks\data\canteen_co_MC_Black.paa"
		};		
	};
};