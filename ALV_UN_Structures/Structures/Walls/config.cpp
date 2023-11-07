class CfgPatches
{
	class ALV_UN_Structures_Walls
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
	class Land_4m_Fortwall: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWall.p3d";
	};
	class Land_4m_FortWall_Walkway: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWall_Walkway.p3d";
	};
	class Land_4m_FortWall_Stairs: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWall_Stairs.p3d";
	};
	class Land_4m_FortWall_WalkwayCorner: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWall_WalkwayCorner.p3d";
	};
	class Land_4m_FortWall_Ruins: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWall_Ruins.p3d";
	};
	class Land_4m_FortWalkway_Ruins: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWalkway_Ruins.p3d";
	};
	class Land_4m_FortWalkwayCorner_Ruins: HouseNoDestruct
	{
		scope=1;
		model="ALV_UN_Structures\Structures\Walls\4m_FortWalkwayCorner_Ruins.p3d";
	};
};
