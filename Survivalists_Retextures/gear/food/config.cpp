class CfgPatches
{
	class Survivalists_Retextures_Gear_Food
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Food",
      "Survivalists_Retextures"
		};
	};
};

class CfgVehicles
{
  class BoxCerealCrunchin;
	class Honey;
	class Chips;
	class Zagorky_ColorBase;

	class Zagorky_Snickers: Zagorky_ColorBase
	{
		scope=2;
		displayName="Snicker Bar";
		descriptionShort="Good old fashioned snicker bar, get some nuts!";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\zagorky_snickers_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
  class Zagorky_Wonderbar: Zagorky_ColorBase
	{
		scope=2;
		displayName="Oldies Wonderbar";
		descriptionShort="Old chocolate bar, expriry reads 'Best Before 1964'. You probably shouldn't eat it, but we all know you're going to.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\zagorky_wonderbar_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Zagorky_Twix: Zagorky_ColorBase
	{
		scope=2;
		displayName="Twix Chocolate";
		descriptionShort="It's rather old but still preserved and delicious.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\zagorky_twix_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Zagorky_Reeces: Zagorky_ColorBase
	{
		scope=2;
		displayName="Reece's Cups";
		descriptionShort="2 peanut-butter chocolate covered cups, rather high in sugar but also high in deliciousness.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\zagorky_reeces_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Zagorky_Unknown: Zagorky_ColorBase
	{
		scope=2;
		displayName="Unknown Snack Bar";
		descriptionShort="The wrapper has been worn, you can't read it at all, no idea what it is.";
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\zagorky_unknown_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips_Potato: Chips
	{
		scope=2;
		displayName="Potato Chips";
		descriptionShort="Some very bland, and somewhat stale potato chips.";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\potato_chips_co.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=100;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips_SpicyPopcorn: Chips
	{
		scope=2;
		displayName="Spicy Popcorn";
		descriptionShort="Overly spicy, they are almost as hot as your mom.";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\popcorn_spicy_co.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips_Jerky: Chips
	{
		scope=2;
		displayName="Beef Jerky";
		descriptionShort="Perfectly spiced and cooked beef jerky, best served with a nice can of soda.";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\beef_jerky_co.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Honey_Marshmellow: Honey
	{
		scope=2;
		displayName="Marshmellow Fluff";
		descriptionShort="Just a jar of marshmellow fluff, very good with your favourite chocolate.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\marshmellow_fluff_ca.paa","Survivalists_Retextures\gear\food\data\marshmellow_fluff_ca.paa"};
		class Nutrition
		{
			fullnessIndex=0;
			energy=400;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
	};	
	class Honey_Marmite: Honey
	{
		scope=2;
		displayName="Marmite";
		descriptionShort="Uck";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\jar_marmite_ca.paa","Survivalists_Retextures\gear\food\data\jar_marmite_ca.paa"};
	};
	class Honey_PeanutButter: Honey
	{
		scope=2;
		displayName="Peanut-Butter";
		descriptionShort="Smooth peanut-butter, use some jam for a great snack.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\jar_peanutbutter_ca.paa","Survivalists_Retextures\gear\food\data\jar_peanutbutter_ca.paa"};
	};
	class Honey_AppleSauce: Honey
	{
		scope=2;
		displayName="Apple Sauce";
		descriptionShort="Grandma's own brand apple sauce.";
		hiddenSelections[]={"zbytek","camoground"};
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\jar_applesauce_ca.paa","Survivalists_Retextures\gear\food\data\jar_applesauce_ca.paa"};
	};
  class BoxCerealCrunchin_Frosties: BoxCerealCrunchin
	{
		scope=2;
		displayName="Frosted Flakes";
		descriptionShort="They're Great!";
		hiddenSelectionsTextures[]={"Survivalists_Retextures\gear\food\data\cerealbox_frosties_co.paa"};
	};
};