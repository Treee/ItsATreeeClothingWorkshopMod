class CfgPatches
{
	class ttak458poli
	{
		units[]=
		{
			"ttak458poli"
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
class Mode_FullAuto;
class cfgWeapons
{
	class AKM;
	class ttak458poli: AKM
	{
		scope=2;
		displayName="Molot VEPR FM";
		descriptionShort="Espen Industries. Molot VEPR FM is a Soviet rifle chambered in 7.62x39, mostly intended for military use. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\rifles\ttak458poli\ttak458poli.p3d";
		attachments[]=
		{
			"weaponMuzzleAK",
			"weaponOpticsAK",
			"weaponFlashlight"
		};
		itemSize[]={7,3};
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
		soundSetShot[]=
			{
				"TTGunshot1",
				"TTGunshot1",
				"M4_InteriorTail_SoundSet"
			};
	};
};
