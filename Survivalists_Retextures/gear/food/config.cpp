class CfgPatches
{
	class Survivalists_Retextures_Gear_Patches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Food",
			"Survivalists_Retextures",
			"Survivalists_Food"
		};
	};
};
class CfgVehicles
{
  class srpStew_Base;

  class srpStew_Meat: srpStew_Base
	{
		scope=2;
		displayName="Meat Stew";
		descriptionShort="A hearty stew made of various meats.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewMeat_co.paa"};
	};
	class srpStew_Mix: srpStew_Base
	{
		scope=2;
		displayName="Mixed Stew";
		descriptionShort="A hearty stew made of various veggies and meats.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewMix_co.paa"};
	};
	class srpStew_Veggie: srpStew_Base
	{
		scope=2;
		displayName="Vegetable Stew";
		descriptionShort="A hearty stew made of various veggies.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewVeg_co.paa"};
	};
  class srpStew_ApplePie: srpStew_Base
	{
		scope=2;
		displayName="Apple Pie";
		descriptionShort="A delicious looking apple pie. Single serving but you know you want another one.";
		hiddenSelections[]={"bowl","zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\stewbowlPieTin_co.paa","Survivalists_Retextures\gear\food\data\srpStewApplePie_co.paa"};
	};
  class srpStew_MacNCheese: srpStew_Base
	{
		scope=2;
		displayName="Mac N Cheese";
		descriptionShort="Cheesy noodles with the right amount of goop.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewMac_co.paa"};
	};
  class srpStew_Popcorn: srpStew_Base
	{
		scope=2;
		displayName="Popcorn";
		descriptionShort="A bowl of freshly made popcorn.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewPopCorn_co.paa"};
	};
  class srpStew_RiceSalad: srpStew_Base
	{
		scope=2;
		displayName="Rice Salad";
		descriptionShort="A bowl of rice salad like momma used to make.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewRiceSalad_co.paa"};
	};

  class srpStew_ApplePiePoisoned: srpStew_Base
	{
		scope=2;
		displayName="Apple Pie";
		descriptionShort="A delicious looking apple pie. Single serving but you know you want another one.";
		hiddenSelections[]={"bowl","zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\stewbowlPieTin_co.paa","Survivalists_Retextures\gear\food\data\srpStewApplePie_co.paa"};
	};
  class srpStew_MacNCheesePoisoned: srpStew_Base
	{
		scope=2;
		displayName="Mac N Cheese";
		descriptionShort="Cheesy noodles with the right amount of goop.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewMac_co.paa"};
	};
  class srpStew_PopcornPoisoned: srpStew_Base
	{
		scope=2;
		displayName="Popcorn";
		descriptionShort="A bowl of freshly made popcorn.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewPopCorn_co.paa"};
	};
  class srpStew_RiceSaladPoisoned: srpStew_Base
	{
		scope=2;
		displayName="Rice Salad";
		descriptionShort="A bowl of rice salad like momma used to make.";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\srpStewRiceSalad_co.paa"};
	};
};