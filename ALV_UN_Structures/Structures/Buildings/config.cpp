class CfgPatches
{
	class ALV_UN_Structures_Buildings
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Scripts",
            "DZ_Characters",
            "DZ_Characters_Headgear",
            "DZ_Characters_Tops",
            "DZ_Characters_Vests",
            "DZ_Characters_Pants",
            "DZ_Characters_Belts",
            "DZ_Characters_Backpacks",
            "DZ_Characters_Heads",
            "DZ_Gear_Optics",
            "DZ_Gear_Tools",
            "DZ_Radio",
            "DZ_Gear_Food",
            "DZ_Gear_Medical",
            "DZ_Gear_Containers",
            "DZ_Gear_Consumables",
            "DZ_Gear_Cooking",
            "DZ_Gear_Navigation",
            "DZ_Gear_Drinks",
            "DZ_Gear_Camping",
            "DZ_Gear_Crafting",
            "DZ_Animals",
            "DZ_AI",
            "DZ_Weapons_Melee",
            "DZ_Characters_Zombies",
            "DZ_Weapons_Projectiles",
            "DZ_Weapons_Magazines",
            "DZ_Weapons_Firearms",
            "DZ_Weapons_Explosives",
            "DZ_Weapons_Ammunition",
            "DZ_Weapons_Shotguns",
            "DZ_Weapons_Archery",
            "DZ_Weapons_Optics",
            "DZ_Weapons_Supports",
            "DZ_Weapons_Muzzles",
            "DZ_Weapons_Attachments_Data",
            "DZ_Weapons_Archery_Crossbow",
            "DZ_Pistols",
            "DZ_Structures",
            "DZ_Vehicles_Parts",
            "DZ_Vehicles_Wheeled",
            "DZ_Sounds_Effects",
            "DZ_Sounds_Weapons",
            "ALV_UN_Scripts"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_OldCabin: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Buildings\House_OldCabin.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
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
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
								damage=5;
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
								damage=10;
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
	class Land_Cabin_Ruined: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Buildings\House_Cabin_Ruined.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
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
		};
	};
	class Land_Saloon: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Buildings\House_Saloon.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
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
		};
	};
	class Land_FortGateHouse_Roofless: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Buildings\House_FortGateHouse.p3d";

	};
	class Land_FortTower_Stairs: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Buildings\House_FortTower_Stairs.p3d";

	};
	class Land_FortTower_Ladder: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Buildings\House_FortTower_Ladder.p3d";

	};
};
