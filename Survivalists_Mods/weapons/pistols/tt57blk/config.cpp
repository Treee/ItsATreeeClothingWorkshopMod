class CfgPatches
{
	class tt57blk
	{
		units[]=
		{
			"tt57blk"
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
	class tt57blk: Glock19
	{
		scope=2;
		displayName="FN Five-SeveN Gray";
		descriptionShort="Espen Industries. FN Five-SeveN is a semi-automatic pistol designed and manufactured by FN Herstal in Belgium. Redesigned by Espen Industries to accept 9x39mm. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\pistols\tt57blk\tt57blk.p3d";
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