class CfgPatches
{
	class IAT_LiteraryDevices_Gear_Books
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{			
			"DZ_Gear_Books"
		};
	};
};
class CfgVehicles
{  
  class ItemBook;
  
  class IAT_LiteraryDevices_Book_Colorbase: ItemBook
  {
    scope=0;
    author="Base";
    title="Base";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\a_clean_book_example.html";
    displayName="Worn Book";
		descriptionShort="A worn book.";
    rotationFlags=16;
    inventorySlot[]+=
    {
      "IAT_Book_0",
      "IAT_Book_1",
			"IAT_Book_2",
			"IAT_Book_3",
			"IAT_Book_4",
			"IAT_Book_5",
			"IAT_Book_6",
			"IAT_Book_7",
			"IAT_Book_8",
			"IAT_Book_9",
			"IAT_Book_10",
			"IAT_Book_11",
			"IAT_Book_12",
			"IAT_Book_13",
			"IAT_Book_14",
			"IAT_Book_15",
			"IAT_Book_16",
			"IAT_Book_17",
			"IAT_Book_18",
			"IAT_Book_19",
			"IAT_Book_20",
			"IAT_Book_21",
			"IAT_Book_22",
			"IAT_Book_23",
			"IAT_Book_24",
			"IAT_Book_25",
			"IAT_Book_26",
			"IAT_Book_27",
			"IAT_Book_28",
			"IAT_Book_29",
			"IAT_Book_30",
			"IAT_Book_31",
			"IAT_Book_32",
			"IAT_Book_33",
			"IAT_Book_34",
			"IAT_Book_35",
			"IAT_Book_36",
			"IAT_Book_37",
			"IAT_Book_38",
			"IAT_Book_39",
			"IAT_Book_40",
			"IAT_Book_41",
			"IAT_Book_42",
			"IAT_Book_43",
			"IAT_Book_44",
			"IAT_Book_45",
			"IAT_Book_46",
			"IAT_Book_47",
			"IAT_Book_48",
			"IAT_Book_49",
			"IAT_Book_50"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_kniga_co.paa"
		};
  };

  class IAT_LiteraryDevices_MultiBook_Colorbase: ItemBook
  {
    scope=0;
    displayName="Worn Book";
		descriptionShort="A worn book with space for multiple short stories.";
    rotationFlags=16;
    attachments[]=
    {
      "IAT_Book_0",
      "IAT_Book_1",
			"IAT_Book_2",
			"IAT_Book_3",
			"IAT_Book_4",
    };
    inventorySlot[]+=
    {
      "IAT_Book_0",
      "IAT_Book_1",
			"IAT_Book_2",
			"IAT_Book_3",
			"IAT_Book_4",
			"IAT_Book_5",
			"IAT_Book_6",
			"IAT_Book_7",
			"IAT_Book_8",
			"IAT_Book_9",
			"IAT_Book_10",
			"IAT_Book_11",
			"IAT_Book_12",
			"IAT_Book_13",
			"IAT_Book_14",
			"IAT_Book_15",
			"IAT_Book_16",
			"IAT_Book_17",
			"IAT_Book_18",
			"IAT_Book_19",
			"IAT_Book_20",
			"IAT_Book_21",
			"IAT_Book_22",
			"IAT_Book_23",
			"IAT_Book_24",
			"IAT_Book_25",
			"IAT_Book_26",
			"IAT_Book_27",
			"IAT_Book_28",
			"IAT_Book_29",
			"IAT_Book_30",
			"IAT_Book_31",
			"IAT_Book_32",
			"IAT_Book_33",
			"IAT_Book_34",
			"IAT_Book_35",
			"IAT_Book_36",
			"IAT_Book_37",
			"IAT_Book_38",
			"IAT_Book_39",
			"IAT_Book_40",
			"IAT_Book_41",
			"IAT_Book_42",
			"IAT_Book_43",
			"IAT_Book_44",
			"IAT_Book_45",
			"IAT_Book_46",
			"IAT_Book_47",
			"IAT_Book_48",
			"IAT_Book_49",
			"IAT_Book_50"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_kniga_co.paa"
		};
  };

//===================== MultiBooks
  class IAT_LiteraryDevices_MultiBook_Encyclopedia: IAT_LiteraryDevices_MultiBook_Colorbase
  {
    scope=2;
  };
//===================== CUSTOM BOOKS
	class IAT_LiteraryDevices_Book_CodeBreakers: IAT_LiteraryDevices_Book_Colorbase
	{
		scope=2;
		title="A Beginner's Guide To Breaking Codes";
		author="Unknown"; 
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_code_breakers.html";
		displayName="A Beginner's Guide To Breaking Codes";
		descriptionShort="A book describing simple codes and encryption. It appears to be written in black pen on scraps of paper";
		hiddenSelectionsTextures[]=
		{
			"IAT\Core\IAT_LiteraryDevices\gear\books\data\book_code_breakers_co.paa"
		};
	};
	class IAT_LiteraryDevices_Book_RadioEtiquette: IAT_LiteraryDevices_Book_Colorbase
	{
		scope=2;
		title="Radio Etiquette and Protocols";
		author="Clayton Sr.";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_radioetiguetteprotocol.html";
		displayName="Radio Etiquette and Protocols";
		descriptionShort="A guide on proper radio usage when speaking through a transmitter.";
		hiddenSelectionsTextures[] =
		{
		  "IAT\Core\IAT_LiteraryDevices\gear\books\data\book_radioetiguetteprotocol_co.paa"
		};
	};  
  class IAT_LiteraryDevices_Book_BanditryGuide: IAT_LiteraryDevices_Book_Colorbase
	{
		scope=2;
		title="Teddy’s Guide to Banditry for Troubled Individuals";
		author="TeDdY";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_banditryguide.html";
		displayName="Teddy’s Guide to Banditry for Troubled Individuals";
		descriptionShort="Scrawl stretches across the pages.";
		hiddenSelectionsTextures[] =
		{
		  "IAT\Core\IAT_LiteraryDevices\gear\books\data\book_banditryguide_co.paa"
		};
	};
  class IAT_LiteraryDevices_Book_NavigationProtocols: IAT_LiteraryDevices_Book_Colorbase
	{
		scope=2;
		title="Navigation in the Apocalypse";
		author="Huntor";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_navigationinapocalypse.html";
		displayName="Navigation in the Apocalypse";
		descriptionShort="Neat letters fill the pages of this book.";
		hiddenSelectionsTextures[]=
		{
		  "IAT\Core\IAT_LiteraryDevices\gear\books\data\book_navigationinapocalypse_co.paa"
		};
	};
  class IAT_LiteraryDevices_Book_ZombieSurvivalGuide: IAT_LiteraryDevices_Book_Colorbase
  {
    scope=2;
    title="Zombie Survival Guide";
    author="Unknown";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_Zombie_Guide.html";		
    displayName="Zombie Survival Guide";
    descriptionShort="A classic tale.";
    hiddenSelectionsTextures[]=
    {
      "IAT\Core\IAT_LiteraryDevices\gear\books\data\book_Zombie_Guide_co.paa"
    };
  };
  
//===================== VANILLA OVERRIDE
  class BookBible: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Bible";
		author="King James Version";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_bible.html";		
		lootTag[]=
		{
			"Religious"
		};
		displayName="The Bible";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_bible_CO.paa"
		};
	};
	class BookTheWarOfTheWorlds: IAT_LiteraryDevices_Book_Colorbase
	{
		scope=2;
		title="The War of the Worlds";
		author="H.G. Wells";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_waroftheworlds.html";
		displayName="The War of the Worlds";
		descriptionShort="The War of the Worlds";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheWarOfTheWorlds_co.paa"
		};
	};
	class BookAroundTheWorldIn80Days: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Around the World in 80 Days";
		author="Jules Verne";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_aroundtheworldin80days.html";
		displayName="Around the World in 80 Days";
		descriptionShort="Around the World in 80 Days";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AroundTheWorldIn80Days_co.paa"
		};		
	};
	class BookCrimeAndPunishment: IAT_LiteraryDevices_Book_Colorbase
	{		
    scope=2;
		title="Crime and Punishment";
		author="Dostoyevsky";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_crimeandpunishment.html";
		displayName="Crime and Punishment";
		descriptionShort="Crime and Punishment";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_CrimeAndPunishment_co.paa"
		};
	};
	class BookTheMetamorphosis: IAT_LiteraryDevices_Book_Colorbase
	{		
    scope=2;
		title="The Metamorphosis";
		author="F. Kafka";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_metamorphosis.html";		
		displayName="The Metamorphosis";
		descriptionShort="The Metamorphosis";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMetamorphosis_co.paa"
		};
	};
	class BookTheRaven: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Raven";
		author="E. A. Poe";	
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theraven.html";
		displayName="The Raven";
		descriptionShort="The Raven";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheRaven_co.paa"
		};
	};
	class BookTheArtOfWar: IAT_LiteraryDevices_Book_Colorbase
	{		
    scope=2;
		title="The Art Of War";
		author="Sunzi";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theartofwar.html";
		displayName="The Art Of War";
		descriptionShort="The Art Of War";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheArtOfWar_co.paa"
		};
	};
	class BookRobinsonCrusoe: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Robinson Crusoe";
		author="D. Defoe";		
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_robinsoncrusoe.html";
		displayName="Robinson Crusoe";
		descriptionShort="Robinson Crusoe";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RobinsonCrusoe_co.paa"
		};
	};
	class BookRussian: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Russian learning book";
		author="";		
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_russian.html";
		displayName="Russian learning book";
		descriptionShort="Russian learning book";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Russian_co.paa"
		};
	};
	class BookRussianCheatSheet: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Russian cheat sheet";
		author="";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_russiancheatsheet.html";		
		displayName="Russian cheat sheet";
		descriptionShort="Russian cheat sheet";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RussianCheatSheet_co.paa"
		};
	};
	class BookThePictureOfDorianGray: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Picture Of Dorian Gray";
		author="Oscar Wilde";
		file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thepictureofdoriangray.html";		
		displayName="The Picture Of Dorian Gray";
		descriptionShort="The Picture Of Dorian Gray";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePictureOfDorianGray_co.paa"
		};
	};
	class BookThePitAndThePendulum: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Pit and the Pendulum";
		author="E. A. Poe";		
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thepitandthependulum.html";
		displayName="The Pit and the Pendulum";
		descriptionShort="The Pit and the Pendulum";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePitAndThePendulum_co.paa"
		};
	};
	class BookTheTimeMachine: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Time Machine";
		author="H. G. Wells";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thetimemachine.html";		
		displayName="The Time Machine";
		descriptionShort="The Time Machine";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheTimeMachine_co.paa"
		};
	};
	class BookTheCountryOfTheBlind: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Country of the Blind";
		author="H. G. Wells";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecountryoftheblind.html";		
		displayName="The Country of the Blind";
		descriptionShort="The Country of the Blind";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCountryOfTheBlind_co.paa"
		};
	};
	class BookBilaNemoc: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Bila nemoc";
		author="Karel Capek";		
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_bilanemoc.html";
		displayName="Bila nemoc";
		descriptionShort="Bila nemoc";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BilaNemoc_co.paa"
		};
	};
	class BookYouth: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Youth";
		author="Isaac Asimov";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_youth.html";		
		displayName="Youth";
		descriptionShort="Youth";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Youth_co.paa"
		};
	};
	class BookVerwandlung: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Die Verwandlung";
		author="Franz Kafka";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_verwandlung.html";		
		displayName="Die Verwandlung";
		descriptionShort="Die Verwandlung";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Verwandlung_co.paa"
		};
	};
	class BookTheJungleBook: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Jungle Book";
		author="Rudyard Kipling";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thejunglebook.html";		
		displayName="The Jungle Book";
		descriptionShort="The Jungle Book";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheJungleBook_co.paa"
		};
	};
	class BookTheBrothersKaramazov: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Brothers Karamazov";
		author="F. Dostoyevsky";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thebrotherskaramazov.html";		
		displayName="The Brothers Karamazov";
		descriptionShort="The Brothers Karamazov";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheBrothersKaramazov_co.paa"
		};
	};
	class BookTheCallOfCthulhu: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Call of Cthulhu";
		author="H. P. Lovecraft";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecallofcthulhu.html";		
		displayName="The Call of Cthulhu";
		descriptionShort="The Call of Cthulhu";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCallOfCthulhu_co.paa"
		};
	};
	class BookTheShunnedHouse: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Shunned House";
		author="H. P. Lovecraft";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theshunnedhouse.html";		
		displayName="The Shunned House";
		descriptionShort="The Shunned House";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheShunnedHouse_co.paa"
		};
	};
	class BookTheHoundOfTheBaskervilles: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Hound of the Baskervilles";
		author="A. C. Doyle";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thehoundofthebaskervilles.html";		
		displayName="The Hound of the Baskervilles";
		descriptionShort="The Hound of the Baskervilles";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHoundOfTheBaskervilles_co.paa"
		};
	};
	class BookTonyAndTheBeetles: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Tony and the Beetles";
		author="Philip K. Dick";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_tonyandthebeetles.html";		
		displayName="Tony and the Beetles";
		descriptionShort="Tony and the Beetles";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TonyAndTheBeetles_co.paa"
		};
	};
	class BookTheCosmicComputer: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Cosmic Computer";
		author="H. Beam Piper";		
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecosmiccomputer.html";
		displayName="The Cosmic Computer";
		descriptionShort="The Cosmic Computer";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCosmicComputer_co.paa"
		};
	};
	class BookATravelerInTime: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Traveler In Time";
		author="August Derleth";		
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_atravelerintime.html";
		displayName="A Traveler In Time";
		descriptionShort="A Traveler In Time";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ATravelerInTime_co.paa"
		};
	};
	class BookTheVariableMan: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Variable Man";
		author="Philip K. Dick";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thevariableman.html";		
		displayName="The Variable Man";
		descriptionShort="The Variable Man";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheVariableMan_co.paa"
		};
	};
	class BookTheOutlet: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Outlet";
		author="Andy Adams";		
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theoutlet.html";
		displayName="The Outlet";
		descriptionShort="The Outlet";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheOutlet_co.paa"
		};
	};
	class BookTheBarrier: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Barrier";
		author="Rex Beach";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thebarrier.html";		
		displayName="The Barrier";
		descriptionShort="The Barrier";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheBarrier_co.paa"
		};
	};
	class BookTheDesertOfWheat: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Desert of Wheat";
		author="Zane Grey";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thedesertofwheat.html";		
		displayName="The Desert of Wheat";
		descriptionShort="The Desert of Wheat";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheDesertOfWheat_co.paa"
		};
	};
	class BookFlyingURanch: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Flying U Ranch";
		author="B. M. Bower";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_flyinguranch.html";		
		displayName="Flying U Ranch";
		descriptionShort="Flying U Ranch";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_FlyingURanch_co.paa"
		};
	};
	class BookCassidysRustlerRoundUp: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Hopalong Cassidy's Rustler Round-Up";
		author="Clarence Edward Mulford";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_cassidysrustlerroundup.html";		
		displayName="Hopalong Cassidy's Rustler Round-Up";
		descriptionShort="Hopalong Cassidy's Rustler Round-Up";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_CassidysRustlerRoundUp_co.paa"
		};
	};
	class BookLonesomeLand: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Lonesome Land";
		author="B. M. Bower";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_lonesomeland.html";		
		displayName="Lonesome Land";
		descriptionShort="Lonesome Land";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LonesomeLand_co.paa"
		};
	};
	class BookTrailin: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Trailin'!";
		author="Max Brand";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_trailin.html";		
		displayName="Trailin'!";
		descriptionShort="Trailin'!";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Trailin_co.paa"
		};
	};
	class BookRonickyDoone: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Ronicky Doone";
		author="Max Brand";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_ronickydoone.html";		
		displayName="Ronicky Doone";
		descriptionShort="Ronicky Doone";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RonickyDoone_co.paa"
		};
	};
	class BookBettyZane: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Betty Zane";
		author="Zane Grey";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_bettyzane.html";		
		displayName="Betty Zane";
		descriptionShort="Betty Zane";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BettyZane_co.paa"
		};
	};
	class BookATexasMatchmaker: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Texas Matchmaker";
		author="Andy Adams";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_atexasmatchmaker.html";		
		displayName="A Texas Matchmaker";
		descriptionShort="A Texas Matchmaker";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ATexasMatchmaker_co.paa"
		};
	};
	class BookTheThunderBird: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Thunder Bird";
		author="B. M. Bower";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thethunderbird.html";		
		displayName="The Thunder Bird";
		descriptionShort="The Thunder Bird";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheThunderBird_co.paa"
		};
	};
	class BookBlackJack: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Black Jack";
		author="Max Brand";		
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_blackjack.html";
		displayName="Black Jack";
		descriptionShort="Black Jack";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BlackJack_co.paa"
		};
	};
	class BookTheLastTrail: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Last Trail";
		author="Zane Grey";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thelasttrail.html";		
		displayName="The Last Trail";
		descriptionShort="The Last Trail";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheLastTrail_co.paa"
		};
	};
	class BookSelectedStories: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Selected Stories";
		author="Bret Harte";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_selectedstories.html";		
		displayName="Selected Stories";
		descriptionShort="Selected Stories";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SelectedStories_co.paa"
		};
	};
	class BookTheHeritageOfTheSioux: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Heritage of the Sioux";
		author="B.M. Bower";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theheritageofthesioux.html";		
		displayName="The Heritage of the Sioux";
		descriptionShort="The Heritage of the Sioux";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHeritageOfTheSioux_co.paa"
		};
	};
	class BookDesertGold: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Desert Gold";
		author="Zane Grey";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_desertgold.html";		
		displayName="Desert Gold";
		descriptionShort="Desert Gold";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DesertGold_co.paa"
		};
	};
	class BookTheHiddenChildren: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Hidden Children";
		author="Robert W. Chambers";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thehiddenchildren.html";		
		displayName="The Hidden Children";
		descriptionShort="The Hidden Children";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHiddenChildren_co.paa"
		};
	};
	class BookTheLastOfThePlainsmen: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Last of the Plainsmen";
		author="Zane Grey";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thelastoftheplainsmen.html";		
		displayName="The Last of the Plainsmen";
		descriptionShort="The Last of the Plainsmen";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheLastOfThePlainsmen_co.paa"
		};
	};
	class BookGunmansReckoning: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Gunman's Reckoning";
		author="Max Brand";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_gunmansreckoning.html";		
		displayName="Gunman's Reckoning";
		descriptionShort="Gunman's Reckoning";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GunmansReckoning_co.paa"
		};
	};
	class BookSkyrider: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Skyrider";
		author="B. M. Bower";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_skyrider.html";		
		displayName="Skyrider";
		descriptionShort="Skyrider";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Skyrider_co.paa"
		};
	};
	class BookSpinifexAndSand: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Spinifex and Sand";
		author="David W Carnegie";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_spinifexandsand.html";		
		displayName="Spinifex and Sand";
		descriptionShort="Spinifex and Sand";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SpinifexAndSand_co.paa"
		};
	};
	class BookSunsetPass: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Sunset Pass";
		author="Charles King";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_sunsetpass.html";		
		displayName="Sunset Pass";
		descriptionShort="Sunset Pass";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SunsetPass_co.paa"
		};
	};
	class BookTheCaveOfGold: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Cave of Gold";
		author="Everett McNeil";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecaveofgold.html";		
		displayName="The Cave of Gold";
		descriptionShort="The Cave of Gold";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCaveOfGold_co.paa"
		};
	};
	class BookTheDayOfTheBeast: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Day of the Beast";
		author="Zane Grey";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thedayofthebeast.html";		
		displayName="The Day of the Beast";
		descriptionShort="The Day of the Beast";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheDayOfTheBeast_co.paa"
		};
	};
	class BookTheQuirt: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Quirt";
		author="B.M. Bower";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thequirt.html";		
		displayName="The Quirt";
		descriptionShort="The Quirt";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheQuirt_co.paa"
		};
	};
	class BookAVoyageToArcturus: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Voyage to Arcturus";
		author="David Lindsay";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_avoyagetoarcturus.html";		
		displayName="A Voyage to Arcturus";
		descriptionShort="A Voyage to Arcturus";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AVoyageToArcturus_co.paa"
		};
	};
	class BookWealthOfNations: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="An Inquiry into the Nature and Causes of the Wealth of Nations";
		author="Adam Smith";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_wealthofnations.html";		
		displayName="An Inquiry into the Nature and Causes of the Wealth of Nations";
		descriptionShort="An Inquiry into the Nature and Causes of the Wealth of Nations";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WealthOfNations_co.paa"
		};
	};
	class BookAndersensFairyTales: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Andersen's Fairy Tales";
		author="Hans Christian Andersen";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_andersensfairytales.html";		
		displayName="Andersen's Fairy Tales";
		descriptionShort="Andersen's Fairy Tales";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AndersensFairyTales_co.paa"
		};
	};
	class BookBlackBeauty: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Black Beauty";
		author="Anna Sewell";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_blackbeauty.html";
		displayName="Black Beauty";
		descriptionShort="Black Beauty";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_BlackBeauty_co.paa"
		};
	};
	class BookBuddenbrooks: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Buddenbrooks";
		author="Thomas Mann";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_buddenbrooks.html";		
		displayName="Buddenbrooks";
		descriptionShort="Buddenbrooks";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Buddenbrooks_co.paa"
		};
	};
	class BookDeadSouls: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Dead Souls";
		author="Nikolai Vasilievich Gogol";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_deadsouls.html";		
		displayName="Dead Souls";
		descriptionShort="Dead Souls";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DeadSouls_co.paa"
		};
	};
	class BookErewhon: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Erewhon";
		author="Samuel Butler";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_erewhon.html";		
		displayName="Erewhon";
		descriptionShort="Erewhon";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Erewhon_co.paa"
		};
	};
	class BookFatherGoriot: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Father Goriot";
		author="Honore de Balzac";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_fathergoriot.html";		
		displayName="Father Goriot";
		descriptionShort="Father Goriot";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_FatherGoriot_co.paa"
		};
	};
	class BookGreatExpectations: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Great Expectations";
		author="Charles Dickens";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_greatexpectations.html";		
		displayName="Great Expectations";
		descriptionShort="Great Expectations";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GreatExpectations_co.paa"
		};
	};
	class BookGulliversTravels: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Gulliver's Travels";
		author="Jonathan Swift";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_gulliverstravels.html";		
		displayName="Gulliver's Travels";
		descriptionShort="Gulliver's Travels";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GulliversTravels_co.paa"
		};
	};
	class BookHeartOfDarkness: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Heart of Darkness";
		author="Joseph Conrad";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_heartofdarkness.html";
		displayName="Heart of Darkness";
		descriptionShort="Heart of Darkness";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_HeartOfDarkness_co.paa"
		};
	};
	class BookHerland: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Herland";
		author="Charlotte Perkins Stetson Gilman";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_herland.html";		
		displayName="Herland";
		descriptionShort="Herland";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Herland_co.paa"
		};
	};
	class BookIvanhoe: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Ivanhoe";
		author="Walter Scott";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_ivanhoe.html";		
		displayName="Ivanhoe";
		descriptionShort="Ivanhoe";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Ivanhoe_co.paa"
		};
	};
	class BookKidnapped: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Kidnapped";
		author="Robert Louis Stevenson";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_kidnapped.html";		
		displayName="Kidnapped";
		descriptionShort="Kidnapped";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Kidnapped_co.paa"
		};
	};
	class BookLaChartreuseDeParme: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="La Chartreuse de Parme";
		author="Stendhal";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_lachartreusedeparma.html";		
		displayName="La Chartreuse de Parme";
		descriptionShort="La Chartreuse de Parme";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LaChartreuseDeParme_co.paa"
		};
	};
	class BookLordJim: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Lord Jim";
		author="Joseph Conrad";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_lordjim.html";		
		displayName="Lord Jim";
		descriptionShort="Lord Jim";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LordJim_co.paa"
		};
	};
	class BookMadameBovary: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Madame Bovary";
		author="Gustave Flaubert";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_madamebovary.html";		
		displayName="Madame Bovary";
		descriptionShort="Madame Bovary";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_MadameBovary_co.paa"
		};
	};
	class BookNostromo: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Nostromo: A Tale of the Seaboard";
		author="Joseph Conrad";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_nostromo.html";		
		displayName="Nostromo: A Tale of the Seaboard";
		descriptionShort="Nostromo: A Tale of the Seaboard";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Nostromo_co.paa"
		};
	};
	class BookNaturalSelection: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="On the Origin of Species by Means of Natural Selection";
		author="Charles Darwin";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_naturalselection.html";		
		displayName="On the Origin of Species by Means of Natural Selection";
		descriptionShort="On the Origin of Species by Means of Natural Selection";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_NaturalSelection_co.paa"
		};
	};
	class BookTheMetamorphosesOfOvid: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Metamorphoses of Ovid";
		author="Publius Ovidius Naso";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_metamorphofovid.html";		
		displayName="The Metamorphoses of Ovid";
		descriptionShort="The Metamorphoses of Ovid";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMetamorphosesOfOvid_co.paa"
		};
	};
	class BookMobyDick: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Moby Dick";
		author="Herman Melville";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_mobydick.html";
		displayName="Moby Dick";
		descriptionShort="Moby Dick";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_MobyDick_co.paa"
		};
	};
	class BookKingLear: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="King Lear";
		author="";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_kinglear.html";
		displayName="King Lear";
		descriptionShort="King Lear";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_KingLear_co.paa"
		};
	};
	class BookLaDbcle: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="La Débâcle";
		author="Emile Zola";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_ladebacle.html";		
		displayName="La Débâcle";
		descriptionShort="La Débâcle";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LaDbcle_co.paa"
		};
	};
	class BookTheCanterburyTales: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Canterbury Tales and Other Poems";
		author="";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecanterburytales.html";		
		displayName="The Canterbury Tales and Other Poems";
		descriptionShort="The Canterbury Tales and Other Poems";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCanterburyTales_co.paa"
		};
	};
	class BookTheRightsOfWoman: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Vindication of the Rights of Women";
		author="Mary Wollstonecraft [Godwin]";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_therightsofwoman.html";		
		displayName="A Vindication of the Rights of Women";
		descriptionShort="A Vindication of the Rights of Women";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheRightsOfWoman_co.paa"
		};
	};
	class BookToTheInteriorOfTheEarth: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Journey to the Interior of the Earth";
		author="Jules Verne";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_totheinterioroftheearth.html";		
		displayName="A Journey to the Interior of the Earth";
		descriptionShort="A Journey to the Interior of the Earth";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ToTheInteriorOfTheEarth_co.paa"
		};
	};
	class BookNjalsSaga: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Njal's Saga";
		author="Unknown Icelanders";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_njalssaga.html";		
		displayName="Njal's Saga";
		descriptionShort="Njal's Saga";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_NjalsSaga_co.paa"
		};
	};
	class BookTheTrial: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Trial";
		author="Franz Kafka";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thetrial.html";
		displayName="The Trial";
		descriptionShort="The Trial";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheTrial_co.paa"
		};
	};
	class BookDonQuixote: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Don Quixote";
		author="Miguel de Cervantes Saavedra";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_donquixote.html";		
		displayName="Don Quixote";
		descriptionShort="Don Quixote";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DonQuixote_co.paa"
		};
	};
	class BookPhilosophiaeNaturalis: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Philosophiae Naturalis Principia Mathematica";
		author="Isaac Newton";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_philosophianaturalis.html";
		displayName="Philosophiae Naturalis Principia Mathematica";
		descriptionShort="Philosophiae Naturalis Principia Mathematica";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_PhilosophiaeNaturalis_co.paa"
		};
	};
	class BookPrideAndPrejudice: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Pride and Prejudice";
		author="Jane Austen";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_prideandprejudice.html";		
		displayName="Pride and Prejudice";
		descriptionShort="Pride and Prejudice";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_PrideAndPrejudice_co.paa"
		};
	};
	class BookRasselas: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Rasselas";
		author="Samuel Johnson";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_rasselas.html";		
		displayName="Rasselas";
		descriptionShort="Rasselas";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Rasselas_co.paa"
		};
	};
	class BookScaramouche: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Scaramouche";
		author="Rafael Sabatini";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_scaramouchie.html";		
		displayName="Scaramouche";
		descriptionShort="Scaramouche";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Scaramouche_co.paa"
		};
	};
	class BookSonsAndLovers: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Sons and Lovers";
		author="David Herbert Lawrence";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_sonsandlovers.html";		
		displayName="Sons and Lovers";
		descriptionShort="Sons and Lovers";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_SonsAndLovers_co.paa"
		};
	};
	class BookTheCallOfTheWild: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Call of the Wild";
		author="Jack London";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecallofthewild.html";		
		displayName="The Call of the Wild";
		descriptionShort="The Call of the Wild";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheCallOfTheWild_co.paa"
		};
	};
	class BookTheComingRace: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Coming Race";
		author="Edward Bulwer Lytton";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thecomingrace.html";		
		displayName="The Coming Race";
		descriptionShort="The Coming Race";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheComingRace_co.paa"
		};
	};
	class BookTheIslandOfDoctorMoreau: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Island of Doctor Moreau";
		author="H. G. Wells";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theislandofdoctormoreau.html";		
		displayName="The Island of Doctor Moreau";
		descriptionShort="The Island of Doctor Moreau";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheIslandOfDoctorMoreau_co.paa"
		};
	};
	class BookTheMahabharataOfKrishna: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Mahabharata of Krishna-Dwaipayana Vyasa Bk. 4";
		author="Kisari Mohan Ganguli";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_themahabharata.html";		
		displayName="The Mahabharata of Krishna-Dwaipayana Vyasa Bk. 4";
		descriptionShort="The Mahabharata of Krishna-Dwaipayana Vyasa Bk. 4";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMahabharataOfKrishna_co.paa"
		};
	};
	class BookTheManWhoWasThursday: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Man Who Was Thursday";
		author="G. K. Chesterton";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_themanwhowasthursday.html";		
		displayName="The Man Who Was Thursday";
		descriptionShort="The Man Who Was Thursday";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheManWhoWasThursday_co.paa"
		};
	};
	class BookThePossessed: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Possessed";
		author="Fyodor Dostoevsky";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thepossessed.html";		
		displayName="The Possessed";
		descriptionShort="The Possessed";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePossessed_co.paa"
		};
	};
	class BookThePrisonerOfZenda: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Prisoner of Zenda";
		author="Anthony Hope";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theprisonerofzenda.html";		
		displayName="The Prisoner of Zenda";
		descriptionShort="The Prisoner of Zenda";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThePrisonerOfZenda_co.paa"
		};
	};
	class BookAPrincessOfMars: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Princess of Mars";
		author="Edgar Rice Burroughs";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_aprincessofmars.html";		
		displayName="A Princess of Mars";
		descriptionShort="A Princess of Mars";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_APrincessOfMars_co.paa"
		};
	};
	class BookKingSolomonsMines: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="King Solomon's Mines";
		author="H. Rider Haggard";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_kingsolomonmines.html";		
		displayName="King Solomon's Mines";
		descriptionShort="King Solomon's Mines";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_KingSolomonsMines_co.paa"
		};
	};
	class BookMiddlemarch: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Middlemarch";
		author="George Eliot";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_middlemarch.html";		
		displayName="Middlemarch";
		descriptionShort="Middlemarch";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Middlemarch_co.paa"
		};
	};
	class BookTheHouseOfTheSevenGables: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The House of the Seven Gables";
		author="Nathaniel Hawthorne";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thehouseofthesevengables.html";		
		displayName="The House of the Seven Gables";
		descriptionShort="The House of the Seven Gables";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheHouseOfTheSevenGables_co.paa"
		};
	};
	class BookTheMonkARomance: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Monk - A romance";
		author="M. G. Lewis";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_themonkaromance.html";		
		displayName="The Monk - A romance";
		descriptionShort="The Monk - A romance";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheMonkARomance_co.paa"
		};
	};
	class BookTheJustifiedSinner: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Private Memoirs and Confessions of a Justified Sinner";
		author="James Hogg";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thejustifiedsinner.html";		
		displayName="The Private Memoirs and Confessions of a Justified Sinner";
		descriptionShort="The Private Memoirs and Confessions of a Justified Sinner";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheJustifiedSinner_co.paa"
		};
	};
	class BookTheRedBadgeOfCourage: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Red Badge of Courage";
		author="Stephen Crane";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theredbadgeofcourage.html";		
		displayName="The Red Badge of Courage";
		descriptionShort="The Red Badge of Courage";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheRedBadgeOfCourage_co.paa"
		};
	};
	class BookADollsHouse: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="A Doll's House";
		author="Henrik Ibsen";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_adollshouse.html";		
		displayName="A Doll's House";
		descriptionShort="A Doll's House";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ADollsHouse_co.paa"
		};
	};
	class BookGilgameshEpic: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="An Old Babylonian Version of the Gilgamesh Epic";
		author="Anonymous";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_gilgameshepic.html";		
		displayName="An Old Babylonian Version of the Gilgamesh Epic";
		descriptionShort="An Old Babylonian Version of the Gilgamesh Epic";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_GilgameshEpic_co.paa"
		};
	};
	class BookAnnaKarenina: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Anna Karenina";
		author="Leo Tolstoy";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_annakarenina.html";		
		displayName="Anna Karenina";
		descriptionShort="Anna Karenina";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AnnaKarenina_co.paa"
		};
	};
	class BookCandide: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Candide";
		author="Voltaire";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_candide.html";		
		displayName="Candide";
		descriptionShort="Candide";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Candide_co.paa"
		};
	};
	class BookFaust: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Faust";
		author="Johann Wolfgang von Goethe";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_faust.html";		
		displayName="Faust";
		descriptionShort="Faust";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Faust_co.paa"
		};
	};
	class BookHinduLiterature: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Hindu Literature";
		author="Epiphanius Wilson";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_hinduliterature.html";		
		displayName="Hindu Literature";
		descriptionShort="Hindu Literature";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_HinduLiterature_co.paa"
		};
	};
	class BookHunger: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Hunger";
		author="Knut Hamsun";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_hunger.html";		
		displayName="Hunger";
		descriptionShort="Hunger";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Hunger_co.paa"
		};
	};
	class BookJapaneseLiterature: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Japanese Literature";
		author="Various";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_japaneseliterature.html";		
		displayName="Japanese Literature";
		descriptionShort="Japanese Literature";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_JapaneseLiterature_co.paa"
		};
	};
	class BookLeRougeEtLeNoir: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Le Rouge et le noir";
		author="Stendhal";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_lerouge.html";		
		displayName="Le Rouge et le noir";
		descriptionShort="Le Rouge et le noir";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LeRougeEtLeNoir_co.paa"
		};
	};
	class BookTheDecameron: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Decameron of Giovanni Boccaccio";
		author="Giovanni Boccaccio";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thedecameron.html";		
		displayName="The Decameron of Giovanni Boccaccio";
		descriptionShort="The Decameron of Giovanni Boccaccio";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheDecameron_co.paa"
		};
	};
	class BookTheGiacomoLeopardi: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Poems of Giacomo Leopardi";
		author="Giacomo Leopardi";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_giacomoleopardi.html";		
		displayName="The Poems of Giacomo Leopardi";
		descriptionShort="The Poems of Giacomo Leopardi";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheGiacomoLeopardi_co.paa"
		};
	};
	class BookAliceInWonderland: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Alice's Adventures in Wonderland";
		author="";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_aliceinwonderland.html";		
		displayName="Alice's Adventures in Wonderland";
		descriptionShort="Alice's Adventures in Wonderland";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_AliceInWonderland_co.paa"
		};
	};
	class BookTheScarletPimpernel: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Scarlet Pimpernel";
		author="Baroness Orczy";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thescarletpimpernel.html";		
		displayName="The Scarlet Pimpernel";
		descriptionShort="The Scarlet Pimpernel";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheScarletPimpernel_co.paa"
		};
	};
	class BookTheThreeMusketeers: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Three Musketeers";
		author="";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thethreemusketeers.html";		
		displayName="The Three Musketeers";
		descriptionShort="The Three Musketeers";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheThreeMusketeers_co.paa"
		};
	};
	class BookTheTurnOfTheScrew: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Turn of the Screw";
		author="Henry James";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theturnofthescrew.html";		
		displayName="The Turn of the Screw";
		descriptionShort="The Turn of the Screw";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheTurnOfTheScrew_co.paa"
		};
	};
	class BookTranslationsOfShakuntala: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Translations of Shakuntala and Other Works";
		author="K?alid?asa";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_shakuntala.html";		
		displayName="Translations of Shakuntala and Other Works";
		descriptionShort="Translations of Shakuntala and Other Works";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TranslationsOfShakuntala_co.paa"
		};
	};
	class BookTreasureIsland: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Treasure Island";
		author="Robert Louis Stevenson";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_treasureisland.html";		
		displayName="Treasure Island";
		descriptionShort="Treasure Island";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TreasureIsland_co.paa"
		};
	};
	class BookUlysses: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Ulysses";
		author="James Joyce";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_ulysses.html";		
		displayName="Ulysses";
		descriptionShort="Ulysses";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Ulysses_co.paa"
		};
	};
	class BookUncleSilas: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Uncle Silas";
		author="J. S. LeFanu";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_unclesilas.html";		
		displayName="Uncle Silas";
		descriptionShort="Uncle Silas";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_UncleSilas_co.paa"
		};
	};
	class BookTheAeneid: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Aeneid";
		author="Virgil";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_theaeneid.html";		
		displayName="The Aeneid";
		descriptionShort="The Aeneid";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheAeneid_co.paa"
		};
	};
	class BookWarAndPeace: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="War and Peace";
		author="Leo Tolstoy";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_warandpeace.html";		
		displayName="War and Peace";
		descriptionShort="War and Peace";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WarAndPeace_co.paa"
		};
	};
	class BookWielandOrTheTransformation: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Wieland or The Transformation";
		author="Charles Brockden Brown";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_weiland.html";		
		displayName="Wieland or The Transformation";
		descriptionShort="Wieland or The Transformation";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WielandOrTheTransformation_co.paa"
		};
	};
	class BookWutheringHeights: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Wuthering Heights";
		author="Emily Bronte";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_wutheringheights.html";		
		displayName="Wuthering Heights";
		descriptionShort="Wuthering Heights";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_WutheringHeights_co.paa"
		};
	};
	class BookCinqSemainesEnBallon: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Cinq Semaines En Ballon";
		author="Jules Verne";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_cinqsemaines.html";		
		displayName="Cinq Semaines En Ballon";
		descriptionShort="Cinq Semaines En Ballon";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_CinqSemainesEnBallon_co.paa"
		};
	};
	class BookDracula: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Dracula";
		author="Bram Stoker";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_dracula.html";		
		displayName="Dracula";
		descriptionShort="Dracula";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Dracula_co.paa"
		};
	};
	class BookDasNibelungenlied: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Das Nibelungenlied";
		author="Unknown";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_dasnibelungenlied.html";		
		displayName="Das Nibelungenlied";
		descriptionShort="Das Nibelungenlied";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DasNibelungenlied_co.paa"
		};
	};
	class BookTheLastMan: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="The Last Man";
		author="Mary Shelley";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_thelastman.html";		
		displayName="The Last Man";
		descriptionShort="The Last Man";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_TheLastMan_co.paa"
		};
	};
	class BookRomeoUndJulia: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Romeo und Julia";
		author="William Shakespeare";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_romeoundjulia.html";		
		displayName="Romeo und Julia";
		descriptionShort="Romeo und Julia";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_RomeoUndJulia_co.paa"
		};
	};
	class BookFrankenstein: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Frankenstein";
		author="Mary Wollstonecraft (Godwin) Shelley";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_frankenstein.html";		
		displayName="Frankenstein";
		descriptionShort="Frankenstein";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_Frankenstein_co.paa"
		};
	};
	class BookDeLaTerreLaLune: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="De la terre a la lune";
		author="Jules Verne";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_delaterrealalune.html";		
		displayName="De la terre a la lune";
		descriptionShort="De la terre a la lune";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_DeLaTerreLaLune_co.paa"
		};
	};
	class BookLleMystrieuse: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="L'Île mystérieuse";
		author="Jules Verne";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_mysterieuse.html";		
		displayName="L'Île mystérieuse";
		descriptionShort="L'Île mystérieuse";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LleMystrieuse_co.paa"
		};
	};
	class BookLaComdieHumaine: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="La Comédie humaine volume I";
		author="Honoré de Balzac";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_lacomediehumaine.html";		
		displayName="La Comédie humaine volume I";
		descriptionShort="La Comédie humaine volume I";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LaComdieHumaine_co.paa"
		};
	};
	class BookLesCorneilles: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Les Corneilles";
		author="J.-H. Rosny";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_lescorneilles.html";		
		displayName="Les Corneilles";
		descriptionShort="Les Corneilles";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_LesCorneilles_co.paa"
		};
	};
	class Book20000LieuesSousLesMers: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="20000 Lieues sous les mers";
		author="Jules Verne";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_2000kleagues.html";		
		displayName="20000 Lieues sous les mers";
		descriptionShort="20000 Lieues sous les mers";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_20000LieuesSousLesMers_co.paa"
		};
	};
	class BookThreeMenInABoat: IAT_LiteraryDevices_Book_Colorbase
	{
    scope=2;
		title="Three Men in a Boat";
		author="Jerome K. Jerome";
    file="IAT\Core\IAT_LiteraryDevices\gear\books\data\book_threemeninaboat.html";		
		displayName="Three Men in a Boat";
		descriptionShort="Three Men in a Boat";
		rotationFlags=1;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\books\data\book_ThreeMenInABoat_co.paa"
		};
	};

};