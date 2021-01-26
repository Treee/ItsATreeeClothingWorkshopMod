class CfgPatches
{
	class IAT_Cassette_Kuru
	{
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "Mass_Textures"
		};
	};
};
// class CfgSlots
// {
// 	class Slot_Cassette
// 	{
// 		name = "Cassette";
// 		displayName = "Cassette";
// 		ghostIcon = "";
// 	};
// };
class CfgSoundShaders
{
	class IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 20;
		volume = 1;
	};
	class IATRadio_Kuru_Research_Log_Shader1: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\1-researchlog1.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader2: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\2-tree-1.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader3: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\3-tree-2.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader4: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\4-tree-3.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader5: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\5-researchlog2.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader6: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\6-cesire-1.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader7: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\7-cesire-2.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader8: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\8-cesire-3.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader9: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\9-ali-1-2-combined.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader10: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\10-ali-3.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader11: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\11-ethics-to-studies.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader12: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\12-patient-study-1.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader13: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\13-patient-study-2.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader14: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\14-patient-study-3.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader15: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\15-patient-study-4.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader16: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\16-patient-study-5.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader17: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\17-patient-study-1-results.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader18: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\18-mccarty-1.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader19: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\19-mccarty-2.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader20: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\20-mccarty-3.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader21: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\21-mccarty-4.ogg",1}};
	};
	class IATRadio_Kuru_Research_Log_Shader22: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\22-history-1.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader23: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\23-history-2.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader24: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\24-history-3.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader25: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\25-history-4.ogg",1}};
	};
  class IATRadio_Kuru_Research_Log_Shader26: IATRadio_Cassette_SoundShader_Base
	{
		samples[] = {{"IAT_Cassette_Kuru\data\26-history-5.ogg",1}};
	};
};
class CfgSoundSets
{
	class IATRadio_Kuru_Research_Log1_SoundSet1
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader1"};
	};
  class IATRadio_Kuru_Research_Log2_SoundSet2
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader2"};
	};
  class IATRadio_Kuru_Research_Log3_SoundSet3
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader3"};
	};
  class IATRadio_Kuru_Research_Log4_SoundSet4
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader4"};
	};
  class IATRadio_Kuru_Research_Log5_SoundSet5
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader5"};
	};
  class IATRadio_Kuru_Research_Log6_SoundSet6
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader6"};
	};
  class IATRadio_Kuru_Research_Log7_SoundSet7
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader7"};
	};
  class IATRadio_Kuru_Research_Log8_SoundSet8
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader8"};
	};
  class IATRadio_Kuru_Research_Log9_SoundSet9
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader9"};
	};
  class IATRadio_Kuru_Research_Log10_SoundSet10
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader10"};
	};
  class IATRadio_Kuru_Research_Log11_SoundSet11
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader11"};
	};
  class IATRadio_Kuru_Research_Log12_SoundSet12
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader12"};
	};
  class IATRadio_Kuru_Research_Log13_SoundSet13
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader13"};
	};
  class IATRadio_Kuru_Research_Log14_SoundSet14
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader14"};
	};
  class IATRadio_Kuru_Research_Log15_SoundSet15
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader15"};
	};
  class IATRadio_Kuru_Research_Log16_SoundSet16
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader16"};
	};
  class IATRadio_Kuru_Research_Log17_SoundSet17
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader17"};
	};
  class IATRadio_Kuru_Research_Log18_SoundSet18
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader18"};
	};
  class IATRadio_Kuru_Research_Log19_SoundSet19
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader19"};
	};
  class IATRadio_Kuru_Research_Log20_SoundSet20
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader20"};
	};
  class IATRadio_Kuru_Research_Log21_SoundSet21
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader21"};
	};
  class IATRadio_Kuru_Research_Log22_SoundSet22
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader22"};
	};
  class IATRadio_Kuru_Research_Log23_SoundSet23
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader23"};
	};
  class IATRadio_Kuru_Research_Log24_SoundSet24
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader24"};
	};
  class IATRadio_Kuru_Research_Log25_SoundSet25
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader25"};
	};
  class IATRadio_Kuru_Research_Log26_SoundSet26
	{
		soundShaders[] = {"IATRadio_Kuru_Research_Log_Shader26"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class IATRadio_CassetteTape_Base: Inventory_Base
	{
		displayName = "Research Log Cassette";
		descriptionShort = "Cassette";
		model = "DZ\gear\tools\cassette.p3d";
		weight = 100;
		itemSize[] = {1,1};
		fragility = 0.01;
		absorbency = 0.5;
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		inventorySlot[] = {"Cassette"};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DZ\gear\tools\data\cassette_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\tools\data\cassette.rvmat"}},{0.7,{"DZ\gear\tools\data\cassette.rvmat"}},{0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\cassette_damage.rvmat"}},{0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class CfgCassette{};
	};
	class IATRadio_CassetteTape_ResearchLog1: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 1 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log1_SoundSet1";
		};
	};
  class IATRadio_CassetteTape_ResearchLog2: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 2 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log2_SoundSet2";
		};
	};
  class IATRadio_CassetteTape_ResearchLog3: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 3 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log3_SoundSet3";
		};
	};
  class IATRadio_CassetteTape_ResearchLog4: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 4 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log4_SoundSet4";
		};
	};
  class IATRadio_CassetteTape_ResearchLog5: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 5 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log5_SoundSet5";
		};
	};
  class IATRadio_CassetteTape_ResearchLog6: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 6 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log6_SoundSet6";
		};
	};
  class IATRadio_CassetteTape_ResearchLog7: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 7 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log7_SoundSet7";
		};
	};
  class IATRadio_CassetteTape_ResearchLog8: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 8 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log8_SoundSet8";
		};
	};
  class IATRadio_CassetteTape_ResearchLog9: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 9 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log9_SoundSet9";
		};
	};
  class IATRadio_CassetteTape_ResearchLog10: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 10 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log10_SoundSet10";
		};
	};
  class IATRadio_CassetteTape_ResearchLog11: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 11 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log11_SoundSet11";
		};
	};
  class IATRadio_CassetteTape_ResearchLog12: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 12 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log12_SoundSet12";
		};
	};
  class IATRadio_CassetteTape_ResearchLog13: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 13 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log13_SoundSet13";
		};
	};
  class IATRadio_CassetteTape_ResearchLog14: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 14 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log14_SoundSet14";
		};
	};
  class IATRadio_CassetteTape_ResearchLog15: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 15 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log15_SoundSet15";
		};
	};
  class IATRadio_CassetteTape_ResearchLog16: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 16 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log16_SoundSet16";
		};
	};
  class IATRadio_CassetteTape_ResearchLog17: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 17 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log17_SoundSet17";
		};
	};
  class IATRadio_CassetteTape_ResearchLog18: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 18 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log18_SoundSet18";
		};
	};
  class IATRadio_CassetteTape_ResearchLog19: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 19 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log19_SoundSet19";
		};
	};
  class IATRadio_CassetteTape_ResearchLog20: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 20 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log20_SoundSet20";
		};
	};
  class IATRadio_CassetteTape_ResearchLog21: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 21 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log21_SoundSet21";
		};
	};
  class IATRadio_CassetteTape_ResearchLog22: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 22 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log22_SoundSet22";
		};
	};
  class IATRadio_CassetteTape_ResearchLog23: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 23 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log23_SoundSet23";
		};
	};
  class IATRadio_CassetteTape_ResearchLog24: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 24 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log24_SoundSet24";
		};
	};
  class IATRadio_CassetteTape_ResearchLog25: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 25 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log25_SoundSet25";
		};
	};
  class IATRadio_CassetteTape_ResearchLog26: IATRadio_CassetteTape_Base
	{
		scope = 2;
		displayName = "A Study of Kuru";
		descriptionShort = "This cassette tape is 26 of 26 detailed research logs regarding the study of Kuru.";
		hiddenSelectionsTextures[] = {"IAT_Cassette_Kuru\data\cassette_co.paa"};
		class CfgCassette
		{
			soundSet = "IATRadio_Kuru_Research_Log26_SoundSet26";
		};
	};
};


















