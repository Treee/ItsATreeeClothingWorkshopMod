class CfgPatches
{
	class tt57tan
	{
		units[]=
		{
			"tt57tan"
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
class Mode_SemiAuto;
class cfgWeapons
{
	class Glock19;
	class tt57tan: Glock19
	{
		scope=2;
		displayName="FN Five-SeveN Coyote";
		descriptionShort="Espen Industries. FN Five-SeveN is a semi-automatic pistol designed and manufactured by FN Herstal in Belgium. Redesigned by Espen Industries to accept 9x39mm. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\pistols\tt57tan\tt57tan.p3d";
		attachments[]={"pistolFlashlight"};
		magazines[]={"tt57mag"};
		magazineSwitchTime=3.5;
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=18000;
		chamberSize=1;
		itemSize[]={3,2};
	};
};
class CfgMagazines
{
	class Mag_Glock_15Rnd;
	class tt57mag: Mag_Glock_15Rnd
	{
		scope=2;
		displayName="FN Five-SeveN Magazine";
		descriptionShort="14 round Five-SeveN magazine, 9x39.";
		model="Survivalists_Mods\weapons\pistols\tt57tan\tt57mag.p3d";
		weight=120;
		itemSize[]={1,2};
		count=14;
    ammo="Bullet_9x39";
    ammoItems[]=
    {
      "Ammo_9x39",
      "Ammo_9x39AP"
    };
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxytt57mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_Mods\weapons\pistols\tt57tan\tt57mag.p3d";
	};
};