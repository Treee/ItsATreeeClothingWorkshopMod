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
      "CarRadioGlow", // PsychoDayZRadio
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  // base classes
  class PersonalRadio;
  class Cassette;

  // modded classes
	class GGRadio_Radio_Base;

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

  //-------------------------------------- BASE GAME OVERRIDE


  //----------------------------------- Custom Stuff

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

	class SRPRadio_CassetteTape_Base: Cassette
	{
		displayName="Cassette Tape";
		descriptionShort="Cassette tape that has a recording.";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
			"Cassette"
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

  //-------------------------------- Music Tapes
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
			"Cassette"
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
};