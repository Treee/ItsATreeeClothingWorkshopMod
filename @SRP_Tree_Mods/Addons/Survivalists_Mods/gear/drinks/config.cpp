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
      "DZ_Gear_Drinks"
		};
	};
};
class CfgVehicles
{
  class WaterBottle;
  class Vodka;
  class SodaCan_ColorBase;

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
    scope=0;
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

	class SRP_AbsolutVodka: SRP_AlcoholBase  // BP1_Absolut
	{
		scope=2;
		displayName="Absolut Vodka";
		descriptionShort="A bottle of cheap russian vodka";
		model="Survivalists_Mods\gear\drinks\absolut_vodka.p3d";
	};

	class SRP_JackDaniels: SRP_AlcoholBase  // BP1_Jack
	{
		scope=2;
		displayName="Whiskey";
		descriptionShort="A bottle of Jack Daniels whiskey";
		model="Survivalists_Mods\gear\drinks\jack.p3d";
	};

	class SRP_Cognac: SRP_AlcoholBase  // BP1_martel
	{
		scope=2;
		displayName="Cognac";
		descriptionShort="A bottle of sweet smelling Cognac";
		model="Survivalists_Mods\gear\drinks\martel.p3d";
	};

	class SRP_Champagne: SRP_AlcoholBase  // BP1_mondoro
	{
		scope=2;
		displayName="Champagne";
		descriptionShort="An old bottle of Champagne";
		model="Survivalists_Mods\gear\drinks\mondoro.p3d";
	};

	class SRP_Jagermeister: SRP_AlcoholBase  // BP1_Jagermeister
	{
		scope=2;
		displayName="Jagermeister";
		descriptionShort="A bottle of Jagermeister. It doesn't smell very good.";
		model="Survivalists_Mods\gear\drinks\Jager.p3d";
	};

	class SRP_Baileys: SRP_AlcoholBase  // BP1_baylis
	{
		scope=2;
		displayName="Baileys";
		descriptionShort="A bottle of Baileys Irish Cream liqeur";
		model="Survivalists_Mods\gear\drinks\baylis.p3d";
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
};