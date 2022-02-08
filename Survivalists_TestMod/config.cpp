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
};
