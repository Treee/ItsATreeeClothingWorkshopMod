class CfgMods
{
	class Survivalists_TestMod
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_TestMod";
		dir = "Survivalists_TestMod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_TestMod/scripts/4_world"};			
      };
		};
	};
};
class CfgPatches
{
  class Survivalists_TestMod
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts"    
    };
  };
};
class CfgVehicles
{
  class HouseNoDestruct;

  class Land_jmc_billboard_largeground_sign1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_TestMod\objects\jmc_billboard_largeground.p3d";
	};


  class jmc_dungeon_Door06_Double_Lever: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_TestMod\objects\jmc_dungeon_Door06_Double_Lever.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=5.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="jmc_crypto_door_stone";
				soundClose="jmc_crypto_door_stone";
        soundLocked="jmc_crypto_door_stone";
				soundOpenABit="jmc_crypto_door_stone";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};

  class jmc_dungeon_Door06_Double: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_TestMod\objects\jmc_dungeon_Door06_Double.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=4.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="jmc_crypto_door_wood";
				soundClose="jmc_crypto_door_wood";
        soundLocked="jmc_crypto_door_wood";
				soundOpenABit="jmc_crypto_door_wood";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=2.5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};

  //-------------------------------- Music Tapes
  class Cassette;
	class JMC_Radio_CassetteTape_Base: Cassette
	{
		displayName="Cassette Tape";
		descriptionShort="Cassette tape that has a recording.";
		weight=100;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		inventorySlot[]=
		{
      "SRP_Cassette",
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
						{1.0,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
            {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
            {0.0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
					};
				};
			};
		};
		class CfgCassette
		{
		};
	};

	class JMC_Radio_CassetteTape_MusicTape1: JMC_Radio_CassetteTape_Base
	{
		scope=2;
		displayName="Strange Recording";
		descriptionShort="A strange recording.";		
		class CfgCassette
		{
			soundSet="SRPRadio_DeerIsleMusicTape1_SoundSet1";
		};
	};

  class BoxCerealCrunchin;
  class JMC_BoxCerealCrunchin_Paulies: BoxCerealCrunchin // new
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_TestMod\objects\data\srp_cerealbox_paulie_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=420;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
};

class CfgSoundShaders
{
	class SRPRadio_Cassette_DeerIsle_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=80;
		volume=1.2;
	};
	class SRPRadio_DeerIsleMusicTape1_Shader1: SRPRadio_Cassette_DeerIsle_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_TestMod\sounds\data\elevator-morse.ogg",1}
		};
	};
};

class CfgSoundSets
{
	class SRPRadio_DeerIsleMusicTape1_SoundSet1
	{
		soundShaders[]=
		{
			"SRPRadio_DeerIsleMusicTape1_Shader1"
		};
	};
};