class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttsok94
	{
		units[]=
		{
			"ttsok94"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"Survivalists_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class AKM;
	class ttsok94: AKM
	{
		scope=2;
		displayName="Molot SOK-94";
		descriptionShort="Espen Industries. Molot SOK-94 is a semi-automatic hunting rifle chambered in 7.62x39. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttsok94\ttsok94.p3d";
		attachments[]=
		{
			"weaponOpticsAK",
			"weaponMuzzleAK"
		};
		itemSize[]={8,3};
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd"
		};
		spawnDamageRange[]={0,0.60000002};
		modes[]={"SemiAuto"};
	};
};