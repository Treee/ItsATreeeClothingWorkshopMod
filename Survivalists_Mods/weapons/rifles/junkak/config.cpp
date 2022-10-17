class CfgPatches
{
	class junkak
	{
		units[]=
		{
			"junkak"
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
	class junkak: AKM
	{
		scope=2;
		displayName="Junker AKM";
		descriptionShort="Home-made junker weapon. Seems to be made out of old materials, yet it still... works. Chambered in 7.62x39mm.";
		model="Survivalists_Mods\weapons\rifles\junkak\junkak.p3d";
		attachments[]=
		{
			"suppressorImpro",
			"weaponOpticsHunting",
			"weaponOptics"
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
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Drum75Rnd"
		};
		spawnDamageRange[]={0,0.60000002};
		modes[]={"SemiAuto"};
	};
};