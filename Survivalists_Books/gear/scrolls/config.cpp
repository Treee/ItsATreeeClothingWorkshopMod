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
			"Survivalists_Books"
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
    inventorySlot[]=
		{
			"Book",
      "Book1",
			"Book2",
			"Book3",
			"Book4",
			"Book5",
			"Book6",
			"Book7",
			"Book8",
			"Book9",
			"Book10",
			"Book11",
			"Book12",
			"Book13",
			"Book14",
			"Book15",
			"Book16",
			"Book17",
			"Book18",
			"Book19",
			"Book20",
			"Book21",
			"Book22",
			"Book23",
			"Book24",
			"Book25",
			"Book26",
			"Book27",
			"Book28",
			"Book29",
			"Book30",
			"Book31",
			"Book32",
			"Book33",
			"Book34",
			"Book35",
			"Book36",
			"Book37",
			"Book38",
			"Book39",
			"Book40",
			"Book41",
			"Book42",
			"Book43",
			"Book44",
			"Book45",
			"Book46",
			"Book47",
			"Book48",
			"Book49",
			"Book50"
		};
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