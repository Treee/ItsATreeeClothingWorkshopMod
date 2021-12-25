class CfgPatches
{
	class Survivalists_Retextures_Gear_Books
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Books",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class SRP_ReadableBook_Colorbase;
  class SRP_ReadableScroll_Colorbase;

  //============================= BOOKS
  class SRP_ReadableBook_DrugDangers: SRP_ReadableBook_Colorbase
	{
		scope=2;
		title="Dangers of Narcotics";
		author="Jebediah";
		file="Survivalists_Retextures\gear\books\data\book_drug_awareness.html";
		displayName="Dangers of Narcotics";
		descriptionShort="The accounts of apocalyptic drug experiences.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\books\data\book_drug_awareness_co.paa"
		};
	};

  class SRP_ReadableBook_JamestownHistory: SRP_ReadableBook_Colorbase
	{
		scope=2;
		title="The Rise and Fall of Jamestown";
		author="Unknown";
		file="Survivalists_Retextures\gear\books\data\book_Rise_Fall_Jamestown.html";
		displayName="The Rise and Fall of Jamestown";
		descriptionShort="A book describing the brief history of Jamestown. It appears to be written in black pen on scraps of paper";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\books\data\book_Rise_Fall_Jamestown_co.paa"
		};
	};
	
	class SRP_ReadableBook_SkullHordeHistory: SRP_ReadableBook_Colorbase
	{
		scope=2;
		title="The Horror of The Skull Horde";
		author="Unknown";
		file="Survivalists_Retextures\gear\books\data\book_Skull_Horde.html";
		displayName="The Horror of The Skull Horde";
		descriptionShort="A book describing the horror and growth of cannibalism. It appears to be written in black pen on scraps of paper";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\books\data\book_Skull_Horde_co.paa"
		};
	};
	
	class SRP_ReadableBook_Sanctuary: SRP_ReadableBook_Colorbase
	{
		scope=2;
		title="Sanctuary: Safety for the Living, Vengeance for the Dead";
		author="Unknown";
		file="Survivalists_Retextures\gear\books\data\book_Sanctuary_History.html";
		displayName="Sanctuary: Safety for the Living, Vengeance for the Dead";
		descriptionShort="A book describing the brief origins of Sanctuary. It appears to be written in black pen on scraps of paper";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\books\data\book_Sanctuary_History_co.paa"
		};
	};
	
	class SRP_ReadableBook_CodeBreakers: SRP_ReadableBook_Colorbase
	{
		scope=2;
		title="A Beginner's Guide To Breaking Codes";
		author="Unknown"; 
		file="Survivalists_Retextures\gear\books\data\book_code_breakers.html";
		displayName="A Beginner's Guide To Breaking Codes";
		descriptionShort="A book describing simple codes and encryption. It appears to be written in black pen on scraps of paper";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\gear\books\data\book_code_breakers_co.paa"
		};
	};
	class SRP_ReadableBook_CollectiveHistory: SRP_ReadableBook_Colorbase
	{
		scope=2;
		title="A Collective Recollection";
		author="Warlock";
		file="Survivalists_Retextures\gear\books\data\book_collective.html";
		displayName="A Collective Recollection";
		descriptionShort="The accounts of Warlock and The Collective.";
		hiddenSelectionsTextures[] =
		{
		  "Survivalists_Retextures\gear\books\data\book_collective_co.paa"
		};
	};

  // ============================================= SCROLLS
  class SRP_ReadableScroll_CarePoem: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Care";
		author="Unknown";
		file="Survivalists_Retextures\gear\books\data\scroll_Care_Poem.html";
		displayName="Care";
		descriptionShort="A rolled up piece of paper tied by some old rags";
	};
	
	class SRP_ReadableScroll_DarknessPoem: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="The Darkness Among Us";
		author="Unknown";
		file="Survivalists_Retextures\gear\books\data\scroll_Darkness_Among_Us_Poem.html";
		displayName="The Darkness Among Us";
		descriptionShort="A rolled up piece of paper tied by some old rags";
	};
	
	class SRP_ReadableScroll_DollfaceHistory: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="The Legend of Dollface";
		author="Unknown";
		file="Survivalists_Retextures\gear\books\data\scroll_Legend_Of_Dollface.html";
		displayName="The Legend of Dollface";
		descriptionShort="A rolled up piece of paper tied by some bloody old rags";
	};
	
	class SRP_ReadableScroll_Crafting_Carpentry: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Beginners Tips For Carpenters";
		author="Toolman Ray";
		file="Survivalists_Retextures\gear\books\data\scroll_crafting_carpentry.html";
		displayName="Beginners Tips For Carpenters";
		descriptionShort="A rolled up piece of paper tied by some cheap twine";
	};
	
	class SRP_ReadableScroll_Crafting_Farming: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Beginners Tips For Farmers";
		author="Farmer Bran";
		file="Survivalists_Retextures\gear\books\data\scroll_crafting_farming.html";
		displayName="Beginners Tips For Farmers";
		descriptionShort="A rolled up piece of paper tied by some long woven grass";
	};
	
	class SRP_ReadableScroll_Crafting_Generic: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Basic Survival Guide";
		author="Boy Scout #51832";
		file="Survivalists_Retextures\gear\books\data\scroll_crafting_generic.html";
		displayName="Basic Survival Guide";
		descriptionShort="A rolled up piece of paper tied by some string";
	};
	
	class SRP_ReadableScroll_Crafting_Tailoring: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Tailoring For The Aspiring Tailor";
		author="Taylor the Tailor";
		file="Survivalists_Retextures\gear\books\data\scroll_crafting_tailoring.html";
		displayName="Tailoring For The Aspiring Tailor";
		descriptionShort="A rolled up piece of paper tied by some elegant ribbon";
	};
	
	class SRP_ReadableScroll_Crafting_Weapon: SRP_ReadableScroll_Colorbase
	{
		scope=2;
		title="Guns, Nuts and Trucks";
		author="Beefy Armsman";
		file="Survivalists_Retextures\gear\books\data\scroll_crafting_weapons.html";
		displayName="Guns, Nuts and Trucks";
		descriptionShort="A rolled up piece of paper held closed by grease";
	};

};