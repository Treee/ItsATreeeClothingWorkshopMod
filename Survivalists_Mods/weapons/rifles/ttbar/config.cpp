class CfgPatches
{
	class ttbar
	{
		units[]=
		{
			"ttbar"
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
	class Ruger1022;
	class ttbar: Ruger1022
	{
		scope=2;
		displayName="Browning M1918A2";
		descriptionShort="Espen Industries. The Browning Automatic Rifle is a family of US automatic rifles and machineguns used by the United States and the numerous other countries during the 20th century. Chambered in .308, takes LAR magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\rifles\ttbar\ttbar.p3d";
		attachments[]={"StockPouch"};
		itemSize[]={8,3};
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd"
		};
		spawnDamageRange[]={0,0.60000002};
		modes[]={"SemiAuto"};
		soundSetShot[]=
		{
			"SCOUT_Shot_SoundSet",
			"SCOUT_Tail_SoundSet",
			"SCOUT_InteriorTail_SoundSet"
		};
	};
};