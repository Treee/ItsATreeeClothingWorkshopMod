class CfgPatches
{
	class ttl35
	{
		units[]=
		{
			"ttl35"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"Survivalists_Weapons",
		};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class CZ75;
	class ttl35: CZ75
	{
		scope=2;
		displayName="Lahti L-35";
		descriptionShort="Espen Industries. The Lahti L-35 is a recoil operated, single-action, locked breech firearm fitted with a concealed hammer. Chambered in 9x19mm. Product of Finland. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\pistols\ttl35\ttl35.p3d";
		attachments[]={};
		magazines[]={"ttl35mag"};
		magazineSwitchTime=0.5;
		chamberableFrom[]={"Ammo_9x19"};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=12000;
		chamberSize=1;
		itemSize[]={3,2};
	};
};
class CfgMagazines
{
	class Mag_CZ75_15Rnd;
	class ttl35mag: Mag_CZ75_15Rnd
	{
		scope=2;
		displayName="Lahti L-35 Magazine";
		descriptionShort="8 round 9x19 magazine for the Lahti L-35 pistol.";
		model="Survivalists_Mods\weapons\pistols\ttl35\ttl35mag.p3d";
		weight=120;
		itemSize[]={1,2};
		count=8;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyttl35mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_Mods\weapons\pistols\ttl35\ttl35mag.p3d";
	};
};