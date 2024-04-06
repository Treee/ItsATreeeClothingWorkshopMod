class CfgPatches
{
	class Survivalists_Books_Gear_Scrolls
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{			
			"DZ_Gear_Books",
      "Survivalists_Books_Gear_Books"
		};
	};
};
class CfgVehicles
{
  class ItemBook;

  class SRP_ReadableScroll_Colorbase: ItemBook
  {
    scope=0;
    model="Survivalists_Books\gear\scrolls\srp_scroll.p3d";
    author="Base";
    title="Base";
		file="Survivalists_Books\gear\scrolls\data\scroll_Care_Poem.html";
    displayName="Worn Scroll";
		descriptionShort="A worn scroll.";
    itemSize[]={1,3};
    rotationFlags=8;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Books\gear\scrolls\data\srp_scroll_co.paa"
		};
  };

  // ============================================= SCROLLS
  class SRP_ReadableScroll_CarePoem: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Care";
		author="Unknown";
		file="Survivalists_Books\gear\scrolls\data\scroll_Care_Poem.html";
		displayName="Care";
		descriptionShort="A rolled up piece of paper tied by some old rags";
	};
	
	class SRP_ReadableScroll_DarknessPoem: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="The Darkness Among Us";
		author="Unknown";
		file="Survivalists_Books\gear\scrolls\data\scroll_Darkness_Among_Us_Poem.html";
		displayName="The Darkness Among Us";
		descriptionShort="A rolled up piece of paper tied by some old rags";
	};
	
	class SRP_ReadableScroll_DollfaceHistory: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="The Legend of Dollface";
		author="Unknown";
		file="Survivalists_Books\gear\scrolls\data\scroll_Legend_Of_Dollface.html";
		displayName="The Legend of Dollface";
		descriptionShort="A rolled up piece of paper tied by some bloody old rags";
	};
	
	class SRP_ReadableScroll_Crafting_Carpentry: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Beginners Tips For Carpenters";
		author="Toolman Ray";
		file="Survivalists_Books\gear\scrolls\data\scroll_crafting_carpentry.html";
		displayName="Beginners Tips For Carpenters";
		descriptionShort="A rolled up piece of paper tied by some cheap twine";
	};
	
	class SRP_ReadableScroll_Crafting_Farming: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Beginners Tips For Farmers";
		author="Farmer Bran";
		file="Survivalists_Books\gear\scrolls\data\scroll_crafting_farming.html";
		displayName="Beginners Tips For Farmers";
		descriptionShort="A rolled up piece of paper tied by some long woven grass";
	};
	
	class SRP_ReadableScroll_Crafting_Generic: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Basic Survival Guide";
		author="Boy Scout #51832";
		file="Survivalists_Books\gear\scrolls\data\scroll_crafting_generic.html";
		displayName="Basic Survival Guide";
		descriptionShort="A rolled up piece of paper tied by some string";
	};
	
	class SRP_ReadableScroll_Crafting_Tailoring: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Tailoring For The Aspiring Tailor";
		author="Taylor the Tailor";
		file="Survivalists_Books\gear\scrolls\data\scroll_crafting_tailoring.html";
		displayName="Tailoring For The Aspiring Tailor";
		descriptionShort="A rolled up piece of paper tied by some elegant ribbon";
	};
  
  class SRP_ReadableScroll_Crafting_AlchemyHelp: SRP_ReadableScroll_Colorbase
  {
    scope = 2;
    title = "Alchemy Basics";
    author = "Iris Miller";
    file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyHelp.html";
    displayName = "Alchemy Basic knowledge";
    descriptionShort = "A rolled up piece of paper tied by some twine.";
  };
  class SRP_ReadableScroll_Crafting_Alchemy0: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-0.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
	class SRP_ReadableScroll_Crafting_Alchemy1: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-1.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
	class SRP_ReadableScroll_Crafting_Alchemy2: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-2.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
	class SRP_ReadableScroll_Crafting_Alchemy3: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-3.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
	class SRP_ReadableScroll_Crafting_Alchemy4: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-4.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
	class SRP_ReadableScroll_Crafting_Alchemy5: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-5.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
	class SRP_ReadableScroll_Crafting_Alchemy6: SRP_ReadableScroll_Colorbase
	{
		scope = 2;
		title = "Alchemy Recipes";
		author = "Iris Miller";
		file = "Survivalists_Books\gear\scrolls\data\SRP_ReadableScroll_AlchemyNotes-6.html";
		displayName = "Detailed Alchemy Notes";
		descriptionShort = "A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};

  class SRP_ReadableScroll_Crafting_Cooking1: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Catalano Recipes - 1";
		author="Giulia Cettina Catalano Lucchese";
		file="Survivalists_Books\gear\scrolls\data\scroll_CatalanoRecipes-1.html";
		displayName="Detailed Alchemy Notes";
		descriptionShort="A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
  class SRP_ReadableScroll_Crafting_Cooking2: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Catalano Recipes - 2";
		author="Giulia Cettina Catalano Lucchese";
		file="Survivalists_Books\gear\scrolls\data\scroll_CatalanoRecipes-2.html";
		displayName="Detailed Alchemy Notes";
		descriptionShort="A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
  class SRP_ReadableScroll_Crafting_Cooking3: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Catalano Recipes - 3";
		author="Giulia Cettina Catalano Lucchese";
		file="Survivalists_Books\gear\scrolls\data\scroll_CatalanoRecipes-3.html";
		displayName="Detailed Alchemy Notes";
		descriptionShort="A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
  class SRP_ReadableScroll_Crafting_Cooking4: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Catalano Recipes - 4";
		author="Giulia Cettina Catalano Lucchese";
		file="Survivalists_Books\gear\scrolls\data\scroll_CatalanoRecipes-4.html";
		displayName="Detailed Alchemy Notes";
		descriptionShort="A rolled up piece of paper tied by some twine. Needs to be deciphered.";
	};
  	
	class SRP_ReadableScroll_Crafting_Weapon: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Guns, Nuts and Trucks";
		author="Beefy Armsman";
		file="Survivalists_Books\gear\scrolls\data\scroll_crafting_weapons.html";
		displayName="Guns, Nuts and Trucks";
		descriptionShort="A rolled up piece of paper held closed by grease";
	};
  class SRP_ReadableScroll_History_Collective: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Recounting the Past";
		author="Silent Observer";
		file="Survivalists_Books\gear\scrolls\data\scroll_history_collective.html";
		displayName="Recounting the Past";
		descriptionShort="A rolled up piece of paper held closed by wax";
	};
};