class CfgPatches
{
	class Survivalists_Mods_Gear_Radio
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Radio",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  // base classes
  class PersonalRadio;
  class Cassette;
  class Inventory_Base;

  // modded classes
	class GGRadio_Radio_Base;

  // Look into this as a way to webhook radio stations
  // class Radio;
  // class My_Radio : Radio
  // {
  //   class Channels
  //   {
  //     class testradio
  //     {
  //       name="testradio";
  //       url="https://listen.socorock.com:8443/socorock.ogg";
  //     };
  //   };
  // }

  //-------------------------------------- MOD OVERRIDE
	class GGRadio_Radio: GGRadio_Radio_Base
	{
		inventorySlot[]=
		{
			"GGRadio_Radio",
			"MassRadio",
			"walkietalkie"
		};
	};

  class ItemPDA: Inventory_Base
  {
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\pda_co.paa",
			"Survivalists_Mods\gear\radio\data\pda_on_co.paa"
		};
  };

  //-------------------------------------- BASE GAME OVERRIDE


  //----------------------------------- Custom Stuff
  class SRP_PersonalRadio_NumberStations: Inventory_Base  // new
  {
		scope=2;
		displayName="Strange Radio";
		descriptionShort="A radio that fits in your hand. Something feels strange.";
    model="Survivalists_Mods\gear\radio\handheldradio.p3d";
    repairableWithKits[]={5,7};
    itemSize[]={1,3};
		repairCosts[]={30,25};
    attachments[]=
		{
			"BatteryD",
			// "Cassette"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio.rvmat"
		};
    class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			autoSwitchOffWhenInCargo=1;
			plugType=1;
			energyUsagePerSecond=0.1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
  };

  // 500 range
  class SRP_PersonalRadioSmallRed_Handheld: PersonalRadio  // Motorola1-5
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 500m";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=500;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_red_co.paa"
		};
  };

  // 1km range
  class SRP_PersonalRadioSmallYellow_Handheld: PersonalRadio  // Motorola1-5
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 1km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=1000;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_yellow_co.paa"
		};
  };

  class SRP_PersonalRadioSmallWhite_Handheld: PersonalRadio  // Motorola1-5
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 1km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=1000;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_white_co.paa"
		};
  };

  // 2.5km range
  class SRP_PersonalRadioSmallGreen_Handheld: PersonalRadio  // Motorola1-5
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 2.5km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=2500;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_green_co.paa"
		};
  };

  class SRP_PersonalRadioSmallBlue_Handheld: PersonalRadio  // Motorola1-5
  {
		scope=2;
		displayName="Small Hand Held Radio";
		descriptionShort="A small radio that fits in your hand. On the side you see scribbling that says 2.5km";
    model="Survivalists_Mods\gear\radio\handheldradiosmall.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=2500;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradiosmall_blue_co.paa"
		};
  };

  // 5km range
  class SRP_PersonalRadio_Handheld: PersonalRadio  // new
  {
		scope=2;
		displayName="Hand Held Radio";
		descriptionShort="A radio that fits in your hand. On the side you see scribbling that says 5km";
    model="Survivalists_Mods\gear\radio\handheldradio.p3d";
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\handheldradio.rvmat"
		};
  };

  // 7.5km range
  class SRP_PersonalRadio_LongRange: PersonalRadio  // SRPLRRadio
	{
		scope=2;
		displayName="Military Radio";
		descriptionShort="A military grade radio used to communicate over long distances. On the side you see scribbling that says 7.5km";
		model="Survivalists_Mods\gear\radio\SRP_LRRadio.p3d";
		range=7500;
		attachments[]=
		{
      "SRPRadioBattery"
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_longradio_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\srp_longradio.rvmat"
		};
	};

  // sneaky radio
  class SRP_PersonalRadio_SneakyBear: PersonalRadio  // Motorola1-5
  {
		scope=2;
		displayName="Teddy Bear";
		descriptionShort="A cuddly teddy bear toy. Even though it's stuffed, it is able to conceal small items, somewhere.";
		model="\dz\gear\containers\teddybear.p3d";
    itemSize[]={2,3};
    repairableWithKits[]={5,7};
		repairCosts[]={30,25};
    range=1000;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\teddybear_voodoo_co.paa"
		};
  };

  //-------------------------------- Music Tapes
	class SRPRadio_CassetteTape_Base: Cassette
	{
		displayName="Cassette Tape";
		descriptionShort="Cassette tape that has a recording.";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\cassette_co.paa"
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
						{1,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};

	class SRPRadio_CassetteTape_Snowblood: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="ERRA - Snowblood";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Snowblood_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Divisionary: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="ERRA - Divisionary";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Divisionary_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_HouseofGlass: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="ERRA - House of Glass";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_HouseofGlass_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Trumpet: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Old School Trumpet";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Trumpet_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_NothingPersonal: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Nobody Knows - Nothing Personal";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_NothingPersonal_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_ClassicRock: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Classic Rock";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_ClassicRock_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_WayoutWest: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Twin Mushroom - Way Out West";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_WayoutWest_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_RockandRoll: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Rock Music";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_RockandRoll_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Broken: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Sweet Anarchy - Broken";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Broken_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_Bread: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Lukrembo - Bread";
		descriptionShort="Music Tape";		
		class CfgCassette
		{
			soundSet="SRPRadio_Bread_SoundSet1";
		};
	};

  class SRPRadio_CassetteTape_SkylarWolfe_ThreeLittleBirds: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Three Little Birds";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_ThreeLittleBirds_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_BoulevardofBrokenDreams: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Boulevard of Broken Dreams";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_BoulevardofBrokenDreams_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_ClashofTheworld: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Clash Of The World";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_ClashofTheworld_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Creep: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Creep";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_Creep_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Fixyou: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Fix You";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_FixYou_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Hallelujah: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Hallelujah";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_Hallelujah_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_RingOfFire: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Ring of Fire";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_RingOfFire_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Wonderwall: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Wonderwall";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_WonderWall_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_SaySomething: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Say Something";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_SaySomething_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_Yesterday: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Yesterday";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_Yesterday_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_EarthAngel: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Earth Angel";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_EarthAngel_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_SkylarWolfe_ComeAndGetYourLove: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Come And Get Your Love";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_ComeAndGetYourLove_SoundSet1";
		};
	};  
  class SRPRadio_CassetteTape_SkylarWolfe_JustTheTwoOfUs: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - Just The Two Of Us";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_JustTheTwoOfUs_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_SkylarWolfe_FirstDayOfMyLife: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Skylar Wolfe - First Day of My Life";
		descriptionShort="Music Tape - Credit Skylar Wolfe";		
		class CfgCassette
		{
			soundSet="SRPRadio_SkylarWolfe_FirstDayOfMyLife_SoundSet1";
		};
	}; 
  class SRPRadio_CassetteTape_Pinkerton_TheShadow: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Pinkerton - The Shadow";
		descriptionShort="Music Tape - Credit Pinkerton";		
		class CfgCassette
		{
			soundSet="SRPRadio_Pinkerton_TheShadow_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_Forever: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - Forever";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_Forever_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_DontLeaveMe: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - Don't Leave Me";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_DontLeaveMe_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_MySide: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - My Side";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_MySide_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_Gague_Anger: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Gague - Anger";
		descriptionShort="Music Tape - Credit Gague";		
		class CfgCassette
		{
			soundSet="SRPRadio_Gague_Anger_SoundSet1";
		};
	};

  // -------------------------------- Mystery Tapes
	class SRPRadio_CassetteTape_MysteryTap: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Mysterious Tape 1";
		descriptionShort="A mysterious tape marked with the Portland Police Department logo";		
		class CfgCassette
		{
			soundSet="SRPRadio_MysteryTape_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_MysteryTap2: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="Mysterious Tape 2";
		descriptionShort="A mysterious tape marked with the Portland Police Department logo";		
		class CfgCassette
		{
			soundSet="SRPRadio_MysteryTape2_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_MysteryTape_Mutant: SRPRadio_CassetteTape_Base
	{
		scope=2;
		displayName="A mysterious tape.";
		descriptionShort="A mysterious tape worn from the test of time.";		
		class CfgCassette
		{
			soundSet="SRPRadio_MysteryTape_Mutant_SoundSet1";
		};
	};

  // -------------------------------- Kuru Research Tapes
	class SRPRadio_CassetteTape_ResearchLog_Base: Cassette
	{
		displayName="Research Log Cassette";
		descriptionShort="Cassette Tape with research recordings";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\cassette_co.paa"
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
						{1,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};
	class SRPRadio_CassetteTape_ResearchLog1: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 1 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log1_SoundSet1";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog2: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 2 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log2_SoundSet2";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog3: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 3 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log3_SoundSet3";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog4: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 4 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log4_SoundSet4";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog5: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 5 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log5_SoundSet5";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog6: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 6 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log6_SoundSet6";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog7: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 7 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log7_SoundSet7";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog8: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 8 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log8_SoundSet8";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog9: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 9 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log9_SoundSet9";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog10: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 10 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log10_SoundSet10";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog11: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 11 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log11_SoundSet11";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog12: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 12 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log12_SoundSet12";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog13: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 13 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log13_SoundSet13";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog14: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 14 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log14_SoundSet14";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog15: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 15 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log15_SoundSet15";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog16: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 16 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log16_SoundSet16";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog17: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 17 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log17_SoundSet17";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog18: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 18 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log18_SoundSet18";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog19: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 19 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log19_SoundSet19";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog20: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 20 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log20_SoundSet20";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog21: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 21 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log21_SoundSet21";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog22: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 22 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log22_SoundSet22";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog23: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 23 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log23_SoundSet23";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog24: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 24 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log24_SoundSet24";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog25: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 25 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log25_SoundSet25";
		};
	};
	class SRPRadio_CassetteTape_ResearchLog26: SRPRadio_CassetteTape_ResearchLog_Base
	{
		scope=2;
		displayName="A Study of Kuru";
		descriptionShort="This cassette tape is 26 of 26 detailed research logs regarding the study of Kuru.";
		class CfgCassette
		{
			soundSet="SRP_Cassette_KuruResearch_Log26_SoundSet26";
		};
	};

  // -------------------- Short Stories
  class SRPRadio_CassetteTape_ShortStory_Base: Cassette
	{
		displayName="Short Story Cassette";
		descriptionShort="Cassette Tape with a short story recording";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Cassette",
			"Cassette2",
			"Cassette3",
			"Cassette4",
			"Cassette5",
			"Cassette6",
			"Cassette7",
			"Cassette8",
			"Cassette9",
			"Cassette10",
			"Cassette11",
			"Cassette12",
			"Cassette13",
			"Cassette14",
			"Cassette15",
			"Cassette16",
			"Cassette17",
			"Cassette18",
			"Cassette19",
			"Cassette20",
			"Cassette21",
			"Cassette22",
			"Cassette23",
			"Cassette24",
			"Cassette25",
			"Cassette26"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\tools\data\cassette_co.paa"
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
						{1,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};
  class SRPRadio_CassetteTape_ShortStory_WhiteFingerHag: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="The White Fingered Hag of Treepwood";
		descriptionShort="Gather round the fire and listen to a spooky story.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_WhiteFingerHag_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ShortStory_HeavensGate: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="Heavens Gate";
		descriptionShort="Gather round the fire and listen to a spooky story.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_HeavensGate_SoundSet1";
		};
	};
  class SRPRadio_CassetteTape_ShortStory_IbargiooftheGreatWesternWoods: SRPRadio_CassetteTape_ShortStory_Base
	{
		scope=2;
		displayName="Heavens Gate";
		descriptionShort="Gather round the fire and listen to a spooky story.";
		class CfgCassette
		{
			soundSet="SRPRadio_ShortStory_IbargiooftheGreatWesternWoods_SoundSet1";
		};
	};
  
};