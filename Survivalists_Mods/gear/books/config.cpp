class CfgPatches
{
	class Survivalists_Mods_Gear_Books
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Books",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class ItemBook;

  //=================== CUSTOM STUFF
  class SRP_ReadableBook_Colorbase: ItemBook
  {
    scope=0;
    author="Base";
    title="Base";
    file="path\to\file";
    displayName="Worn Book";
		descriptionShort="A worn book.";
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
			"dz\gear\books\data\book_kniga_co.paa"
		};
  };

  class SRP_ReadableScroll_Colorbase: ItemBook
  {
    scope=0;
    model="Survivalists_Mods\gear\books\srp_scroll.p3d";
    author="Base";
    title="Base";
    file="path\to\file";
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
			"Survivalists_Mods\gear\books\data\srp_scroll_co.paa"
		};
  };


  //===================== Vanilla Override
  class BookBible: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_bible.html";
	};
	class BookTheWarOfTheWorlds: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_waroftheworlds.html";
	};
	class BookAroundTheWorldIn80Days: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_aroundtheworldin80days.html";
	};
	class BookCrimeAndPunishment: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_crimeandpunishment.html";
	};
	class BookTheMetamorphosis: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_metamorphosis.html";
	};
	class BookTheRaven: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_theraven.html";
	};
	class BookTheArtOfWar: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_theartofwar.html";
	};
	class BookRobinsonCrusoe: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_robinsoncrusoe.html";
	};
	class BookRussian: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_russian.html";
	};
	class BookRussianCheatSheet: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_russiancheatsheet.html";
	};
	class BookThePictureOfDorianGray: ItemBook
	{
		file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookThePitAndThePendulum: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheTimeMachine: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheCountryOfTheBlind: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookBilaNemoc: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookYouth: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookVerwandlung: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheJungleBook: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheBrothersKaramazov: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheCallOfCthulhu: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheShunnedHouse: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheHoundOfTheBaskervilles: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAndersen: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTonyAndTheBeetles: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheCosmicComputer: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookATravelerInTime: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheVariableMan: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheOutlet: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheBarrier: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheDesertOfWheat: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookFlyingURanch: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookCassidysRustlerRoundUp: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLonesomeLand: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTrailin: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookRonickyDoone: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookBettyZane: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookATexasMatchmaker: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheThunderBird: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookBlackJack: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheLastTrail: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookSelectedStories: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheHeritageOfTheSioux: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDesertGold: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheHiddenChildren: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheLastOfThePlainsmen: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookGunmansReckoning: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookSkyrider: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookSpinifexAndSand: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookSunsetPass: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheCaveOfGold: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheDayOfTheBeast: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheQuirt: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAVoyageToArcturus: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookWealthOfNations: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAndersensFairyTales: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookBlackBeauty: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookBuddenbrooks: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDeadSouls: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookErewhon: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookFatherGoriot: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookGreatExpectations: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookGulliversTravels: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookHeartOfDarkness: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookHerland: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookIvanhoe: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookKidnapped: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLaChartreuseDeParme: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLordJim: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookMadameBovary: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookNostromo: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookNaturalSelection: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheMetamorphosesOfOvid: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookMobyDick: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookKingLear: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLaDbcle: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheCanterburyTales: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheRightsOfWoman: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookToTheInteriorOfTheEarth: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookNjalsSaga: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheTrial: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDonQuixote: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookPhilosophiaeNaturalis: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookPrideAndPrejudice: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookRasselas: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookScaramouche: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookShe: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookSonsAndLovers: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheCallOfTheWild: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheComingRace: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookRobinsonCrusoeAdventures: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheIslandOfDoctorMoreau: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheMahabharataOfKrishna: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheManWhoWasThursday: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookThePossessed: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookThePrisonerOfZenda: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAPrincessOfMars: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookKingSolomonsMines: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookMiddlemarch: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheHouseOfTheSevenGables: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheMonkARomance: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheJustifiedSinner: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheRedBadgeOfCourage: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookADollsHouse: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAfterLondon: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookGilgameshEpic: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAnnaKarenina: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookCandide: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookFaust: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookHinduLiterature: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookHunger: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookJapaneseLiterature: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLeRougeEtLeNoir: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheDecameron: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheGiacomoLeopardi: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookAliceInWonderland: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheScarletPimpernel: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheThreeMusketeers: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheTurnOfTheScrew: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTranslationsOfShakuntala: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTreasureIsland: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookUlysses: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookUncleSilas: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheAeneid: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookWarAndPeace: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookWielandOrTheTransformation: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookWutheringHeights: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookCinqSemainesEnBallon: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDracula: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookMrchenFrKinder: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLesTroisMousquetaires: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDeLorigineDesEspces: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDasNibelungenlied: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookTheLastMan: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookFaustErsterTeil: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLenfer1Of2: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookVoyageAuCentreDeLaTerre: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookRomeoUndJulia: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookFrankenstein: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDeLaTerreLaLune: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookDonQuichotte: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLleMystrieuse: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLaComdieHumaine: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookLesCorneilles: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class Book20000LieuesSousLesMers: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};
	class BookThreeMenInABoat: ItemBook
	{
    file="Survivalists_Mods\gear\books\data\book_thepictureofdoriangray.html";
	};

};