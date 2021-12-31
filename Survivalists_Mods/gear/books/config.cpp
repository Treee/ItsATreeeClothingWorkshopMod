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
		file="dz\gear\books\poetry\TheRaven.html";
	};
	class BookTheArtOfWar: ItemBook
	{
		file="dz\gear\books\non-fiction\TheArtOfWar.html";
	};
	class BookRobinsonCrusoe: ItemBook
	{
		file="dz\gear\books\fiction\RobinsonCrusoe.html";
	};
	class BookRussian: ItemBook
	{
		file="dz\gear\books\non-fiction\Russian.html";
	};
	class BookRussianCheatSheet: ItemBook
	{
		file="dz\gear\books\non-fiction\RussianCheatSheet.html";
	};
	class BookThePictureOfDorianGray: ItemBook
	{
		file="dz\gear\books\fiction\ThePictureOfDorianGray.html";
	};
	class BookThePitAndThePendulum: ItemBook
	{
		file="dz\gear\books\short_stories\ThePitAndThePendulum.html";
	};
	class BookTheTimeMachine: ItemBook
	{
		file="dz\gear\books\short_stories\TheTimeMachine.html";
	};
	class BookTheCountryOfTheBlind: ItemBook
	{
		file="dz\gear\books\short_stories\TheCountryOfTheBlind.html";
	};
	class BookBilaNemoc: ItemBook
	{
		file="dz\gear\books\drama\BilaNemoc.html";
	};
	class BookYouth: ItemBook
	{
		file="dz\gear\books\short_stories\Youth.html";
	};
	class BookVerwandlung: ItemBook
	{
		file="dz\gear\books\short_stories\Verwandlung.html";
	};
	class BookTheJungleBook: ItemBook
	{
		file="dz\gear\books\fiction\TheJungleBook.html";
	};
	class BookTheBrothersKaramazov: ItemBook
	{
		file="dz\gear\books\drama\TheBrothersKaramazov.html";
	};
	class BookTheCallOfCthulhu: ItemBook
	{
		file="dz\gear\books\short_stories\TheCallOfCthulhu.html";
	};
	class BookTheShunnedHouse: ItemBook
	{
		file="dz\gear\books\short_stories\TheShunnedHouse.html";
	};
	class BookTheHoundOfTheBaskervilles: ItemBook
	{
		file="dz\gear\books\short_stories\TheHoundOfTheBaskervilles.html";
	};
	class BookAndersen: ItemBook
	{
		file="dz\gear\books\fiction\Andersen.html";
	};
	class BookTonyAndTheBeetles: ItemBook
	{
		file="dz\gear\books\short_stories\TonyAndTheBeetles.html";
	};
	class BookTheCosmicComputer: ItemBook
	{
		file="dz\gear\books\fiction\TheCosmicComputer.html";
	};
	class BookATravelerInTime: ItemBook
	{
		file="dz\gear\books\short_stories\ATravelerInTime.html";
	};
	class BookTheVariableMan: ItemBook
	{
		file="dz\gear\books\fiction\TheVariableMan.html";
	};
	class BookTheOutlet: ItemBook
	{
		file="dz\gear\books\Automatic\TheOutlet.html";
	};
	class BookTheBarrier: ItemBook
	{
		file="dz\gear\books\Automatic\TheBarrier.html";
	};
	class BookTheDesertOfWheat: ItemBook
	{
		file="dz\gear\books\Automatic\TheDesertOfWheat.html";
	};
	class BookFlyingURanch: ItemBook
	{
		file="dz\gear\books\Automatic\FlyingURanch.html";
	};
	class BookCassidysRustlerRoundUp: ItemBook
	{
		file="dz\gear\books\Automatic\CassidysRustlerRoundUp.html";
	};
	class BookLonesomeLand: ItemBook
	{
		file="dz\gear\books\Automatic\LonesomeLand.html";
	};
	class BookTrailin: ItemBook
	{
		file="dz\gear\books\Automatic\Trailin.html";
	};
	class BookRonickyDoone: ItemBook
	{
		file="dz\gear\books\Automatic\RonickyDoone.html";
	};
	class BookBettyZane: ItemBook
	{
		file="dz\gear\books\Automatic\BettyZane.html";
	};
	class BookATexasMatchmaker: ItemBook
	{
		file="dz\gear\books\Automatic\ATexasMatchmaker.html";
	};
	class BookTheThunderBird: ItemBook
	{
		file="dz\gear\books\Automatic\TheThunderBird.html";
	};
	class BookBlackJack: ItemBook
	{
		file="dz\gear\books\Automatic\BlackJack.html";
	};
	class BookTheLastTrail: ItemBook
	{
		file="dz\gear\books\Automatic\TheLastTrail.html";
	};
	class BookSelectedStories: ItemBook
	{
		file="dz\gear\books\Automatic\SelectedStories.html";
	};
	class BookTheHeritageOfTheSioux: ItemBook
	{
		file="dz\gear\books\Automatic\TheHeritageOfTheSioux.html";
	};
	class BookDesertGold: ItemBook
	{
		file="dz\gear\books\Automatic\DesertGold.html";
	};
	class BookTheHiddenChildren: ItemBook
	{
		file="dz\gear\books\Automatic\TheHiddenChildren.html";
	};
	class BookTheLastOfThePlainsmen: ItemBook
	{
		file="dz\gear\books\Automatic\TheLastOfThePlainsmen.html";
	};
	class BookGunmansReckoning: ItemBook
	{
		file="dz\gear\books\Automatic\GunmansReckoning.html";
	};
	class BookSkyrider: ItemBook
	{
		file="dz\gear\books\Automatic\Skyrider.html";
	};
	class BookSpinifexAndSand: ItemBook
	{
		file="dz\gear\books\Automatic\SpinifexAndSand.html";
	};
	class BookSunsetPass: ItemBook
	{
		file="dz\gear\books\Automatic\SunsetPass.html";
	};
	class BookTheCaveOfGold: ItemBook
	{
		file="dz\gear\books\Automatic\TheCaveOfGold.html";
	};
	class BookTheDayOfTheBeast: ItemBook
	{
		file="dz\gear\books\Automatic\TheDayOfTheBeast.html";
	};
	class BookTheQuirt: ItemBook
	{
		file="dz\gear\books\Automatic\TheQuirt.html";
	};
	class BookAVoyageToArcturus: ItemBook
	{
		file="dz\gear\books\Automatic\AVoyageToArcturus.html";
	};
	class BookWealthOfNations: ItemBook
	{
		file="dz\gear\books\Automatic\WealthOfNations.html";
	};
	class BookAndersensFairyTales: ItemBook
	{
		file="dz\gear\books\Automatic\AndersensFairyTales.html";
	};
	class BookBlackBeauty: ItemBook
	{
		file="dz\gear\books\Automatic\BlackBeauty.html";
	};
	class BookBuddenbrooks: ItemBook
	{
		file="dz\gear\books\Automatic\Buddenbrooks.html";
	};
	class BookDeadSouls: ItemBook
	{
		file="dz\gear\books\Automatic\DeadSouls.html";
	};
	class BookErewhon: ItemBook
	{
		file="dz\gear\books\Automatic\Erewhon.html";
	};
	class BookFatherGoriot: ItemBook
	{
		file="dz\gear\books\Automatic\FatherGoriot.html";
	};
	class BookGreatExpectations: ItemBook
	{
		file="dz\gear\books\Automatic\GreatExpectations.html";
	};
	class BookGulliversTravels: ItemBook
	{
		file="dz\gear\books\Automatic\GulliversTravels.html";
	};
	class BookHeartOfDarkness: ItemBook
	{
		file="dz\gear\books\Automatic\HeartOfDarkness.html";
	};
	class BookHerland: ItemBook
	{
		file="dz\gear\books\Automatic\Herland.html";
	};
	class BookIvanhoe: ItemBook
	{
		file="dz\gear\books\Automatic\Ivanhoe.html";
	};
	class BookKidnapped: ItemBook
	{
		file="dz\gear\books\Automatic\Kidnapped.html";
	};
	class BookLaChartreuseDeParme: ItemBook
	{
		file="dz\gear\books\Automatic\LaChartreuseDeParme.html";
	};
	class BookLordJim: ItemBook
	{
		file="dz\gear\books\Automatic\LordJim.html";
	};
	class BookMadameBovary: ItemBook
	{
		file="dz\gear\books\Automatic\MadameBovary.html";
	};
	class BookNostromo: ItemBook
	{
		file="dz\gear\books\Automatic\Nostromo.html";
	};
	class BookNaturalSelection: ItemBook
	{
		file="dz\gear\books\Automatic\NaturalSelection.html";
	};
	class BookTheMetamorphosesOfOvid: ItemBook
	{
		file="dz\gear\books\Automatic\TheMetamorphosesOfOvid.html";
	};
	class BookMobyDick: ItemBook
	{
		file="dz\gear\books\Automatic\MobyDick.html";
	};
	class BookKingLear: ItemBook
	{
		file="dz\gear\books\Automatic\KingLear.html";
	};
	class BookLaDbcle: ItemBook
	{
		file="dz\gear\books\Automatic\LaDbcle.html";
	};
	class BookTheCanterburyTales: ItemBook
	{
		file="dz\gear\books\Automatic\TheCanterburyTales.html";
	};
	class BookTheRightsOfWoman: ItemBook
	{
		file="dz\gear\books\Automatic\TheRightsOfWoman.html";
	};
	class BookToTheInteriorOfTheEarth: ItemBook
	{
		file="dz\gear\books\Automatic\ToTheInteriorOfTheEarth.html";
	};
	class BookNjalsSaga: ItemBook
	{
		file="dz\gear\books\Automatic\NjalsSaga.html";
	};
	class BookTheTrial: ItemBook
	{
		file="dz\gear\books\Automatic\TheTrial.html";
	};
	class BookDonQuixote: ItemBook
	{
		file="dz\gear\books\Automatic\DonQuixote.html";
	};
	class BookPhilosophiaeNaturalis: ItemBook
	{
		file="dz\gear\books\Automatic\PhilosophiaeNaturalis.html";
	};
	class BookPrideAndPrejudice: ItemBook
	{
		file="dz\gear\books\Automatic\PrideAndPrejudice.html";
	};
	class BookRasselas: ItemBook
	{
		file="dz\gear\books\Automatic\Rasselas.html";
	};
	class BookScaramouche: ItemBook
	{
		file="dz\gear\books\Automatic\Scaramouche.html";
	};
	class BookShe: ItemBook
	{
		file="dz\gear\books\Automatic\She.html";
	};
	class BookSonsAndLovers: ItemBook
	{
		file="dz\gear\books\Automatic\SonsAndLovers.html";
	};
	class BookTheCallOfTheWild: ItemBook
	{
		file="dz\gear\books\Automatic\TheCallOfTheWild.html";
	};
	class BookTheComingRace: ItemBook
	{
		file="dz\gear\books\Automatic\TheComingRace.html";
	};
	class BookRobinsonCrusoeAdventures: ItemBook
	{
		file="dz\gear\books\Automatic\RobinsonCrusoeAdventures.html";
	};
	class BookTheIslandOfDoctorMoreau: ItemBook
	{
		file="dz\gear\books\Automatic\TheIslandOfDoctorMoreau.html";
	};
	class BookTheMahabharataOfKrishna: ItemBook
	{
		file="dz\gear\books\Automatic\TheMahabharataOfKrishna.html";
	};
	class BookTheManWhoWasThursday: ItemBook
	{
		file="dz\gear\books\Automatic\TheManWhoWasThursday.html";
	};
	class BookThePossessed: ItemBook
	{
		file="dz\gear\books\Automatic\ThePossessed.html";
	};
	class BookThePrisonerOfZenda: ItemBook
	{
		file="dz\gear\books\Automatic\ThePrisonerOfZenda.html";
	};
	class BookAPrincessOfMars: ItemBook
	{
		file="dz\gear\books\Automatic\APrincessOfMars.html";
	};
	class BookKingSolomonsMines: ItemBook
	{
		file="dz\gear\books\Automatic\KingSolomonsMines.html";
	};
	class BookMiddlemarch: ItemBook
	{
		file="dz\gear\books\Automatic\Middlemarch.html";
	};
	class BookTheHouseOfTheSevenGables: ItemBook
	{
		file="dz\gear\books\Automatic\TheHouseOfTheSevenGables.html";
	};
	class BookTheMonkARomance: ItemBook
	{
		file="dz\gear\books\Automatic\TheMonkARomance.html";
	};
	class BookTheJustifiedSinner: ItemBook
	{
		file="dz\gear\books\Automatic\TheJustifiedSinner.html";
	};
	class BookTheRedBadgeOfCourage: ItemBook
	{
		file="dz\gear\books\Automatic\TheRedBadgeOfCourage.html";
	};
	class BookADollsHouse: ItemBook
	{
		file="dz\gear\books\Automatic\ADollsHouse.html";
	};
	class BookAfterLondon: ItemBook
	{
		file="dz\gear\books\Automatic\AfterLondon.html";
	};
	class BookGilgameshEpic: ItemBook
	{
		file="dz\gear\books\Automatic\GilgameshEpic.html";
	};
	class BookAnnaKarenina: ItemBook
	{
		file="dz\gear\books\Automatic\AnnaKarenina.html";
	};
	class BookCandide: ItemBook
	{
		file="dz\gear\books\Automatic\Candide.html";
	};
	class BookFaust: ItemBook
	{
		file="dz\gear\books\Automatic\Faust.html";
	};
	class BookHinduLiterature: ItemBook
	{
		file="dz\gear\books\Automatic\HinduLiterature.html";
	};
	class BookHunger: ItemBook
	{
		file="dz\gear\books\Automatic\Hunger.html";
	};
	class BookJapaneseLiterature: ItemBook
	{
		file="dz\gear\books\Automatic\JapaneseLiterature.html";
	};
	class BookLeRougeEtLeNoir: ItemBook
	{
		file="dz\gear\books\Automatic\LeRougeEtLeNoir.html";
	};
	class BookTheDecameron: ItemBook
	{
		file="dz\gear\books\Automatic\TheDecameron.html";
	};
	class BookTheGiacomoLeopardi: ItemBook
	{
		file="dz\gear\books\Automatic\TheGiacomoLeopardi.html";
	};
	class BookAliceInWonderland: ItemBook
	{
		file="dz\gear\books\Automatic\AliceInWonderland.html";
	};
	class BookTheScarletPimpernel: ItemBook
	{
		file="dz\gear\books\Automatic\TheScarletPimpernel.html";
	};
	class BookTheThreeMusketeers: ItemBook
	{
		file="dz\gear\books\Automatic\TheThreeMusketeers.html";
	};
	class BookTheTurnOfTheScrew: ItemBook
	{
		file="dz\gear\books\Automatic\TheTurnOfTheScrew.html";
	};
	class BookTranslationsOfShakuntala: ItemBook
	{
		file="dz\gear\books\Automatic\TranslationsOfShakuntala.html";
	};
	class BookTreasureIsland: ItemBook
	{
		file="dz\gear\books\Automatic\TreasureIsland.html";
	};
	class BookUlysses: ItemBook
	{
		file="dz\gear\books\Automatic\Ulysses.html";
	};
	class BookUncleSilas: ItemBook
	{
		file="dz\gear\books\Automatic\UncleSilas.html";
	};
	class BookTheAeneid: ItemBook
	{
		file="dz\gear\books\Automatic\TheAeneid.html";
	};
	class BookWarAndPeace: ItemBook
	{
		file="dz\gear\books\Automatic\WarAndPeace.html";
	};
	class BookWielandOrTheTransformation: ItemBook
	{
		file="dz\gear\books\Automatic\WielandOrTheTransformation.html";
	};
	class BookWutheringHeights: ItemBook
	{
		file="dz\gear\books\Automatic\WutheringHeights.html";
	};
	class BookCinqSemainesEnBallon: ItemBook
	{
		file="dz\gear\books\Automatic\CinqSemainesEnBallon.html";
	};
	class BookDracula: ItemBook
	{
		file="dz\gear\books\Automatic\Dracula.html";
	};
	class BookMrchenFrKinder: ItemBook
	{
		file="dz\gear\books\Automatic\MrchenFrKinder.html";
	};
	class BookLesTroisMousquetaires: ItemBook
	{
		file="dz\gear\books\Automatic\LesTroisMousquetaires.html";
	};
	class BookDeLorigineDesEspces: ItemBook
	{
		file="dz\gear\books\Automatic\DeLorigineDesEspces.html";
	};
	class BookDasNibelungenlied: ItemBook
	{
		file="dz\gear\books\Automatic\DasNibelungenlied.html";
	};
	class BookTheLastMan: ItemBook
	{
		file="dz\gear\books\Automatic\TheLastMan.html";
	};
	class BookFaustErsterTeil: ItemBook
	{
		file="dz\gear\books\Automatic\FaustErsterTeil.html";
	};
	class BookLenfer1Of2: ItemBook
	{
		file="dz\gear\books\Automatic\Lenfer1Of2.html";
	};
	class BookVoyageAuCentreDeLaTerre: ItemBook
	{
		file="dz\gear\books\Automatic\VoyageAuCentreDeLaTerre.html";
	};
	class BookRomeoUndJulia: ItemBook
	{
		file="dz\gear\books\Automatic\RomeoUndJulia.html";
	};
	class BookFrankenstein: ItemBook
	{
		file="dz\gear\books\Automatic\Frankenstein.html";
	};
	class BookDeLaTerreLaLune: ItemBook
	{
		file="dz\gear\books\Automatic\DeLaTerreLaLune.html";
	};
	class BookDonQuichotte: ItemBook
	{
		file="dz\gear\books\Automatic\DonQuichotte.html";
	};
	class BookLleMystrieuse: ItemBook
	{
		file="dz\gear\books\Automatic\LleMystrieuse.html";
	};
	class BookLaComdieHumaine: ItemBook
	{
		file="dz\gear\books\Automatic\LaComdieHumaine.html";
	};
	class BookLesCorneilles: ItemBook
	{
		file="dz\gear\books\Automatic\LesCorneilles.html";
	};
	class Book20000LieuesSousLesMers: ItemBook
	{
		file="dz\gear\books\Automatic\20000LieuesSousLesMers.html";
	};
	class BookThreeMenInABoat: ItemBook
	{
		file="dz\gear\books\fiction\ThreeMenInABoat.html";
	};

};