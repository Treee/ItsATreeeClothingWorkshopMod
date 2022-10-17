class CfgPatches
{
	class ttscarl
	{
		units[]=
		{
			"ttscarl"
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
class OpticsInfoRifle;
class cfgWeapons
{
	class M4A1;
	class ttscarl: M4A1
	{
		scope=2;
		displayName="FN SCAR-L";
		descriptionShort="Espen Industries. FN SCAR-L is a gas-operated automatic rifle developed by Belgian manufacturer FN Herstal. Chambered in 5.56x45, compatible with STANAG & CMag magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\rifles\ttscarl\ttscarl.p3d";
		attachments[]=
		{
			"weaponMuzzleM4",
			"weaponOptics"
		};
		itemSize[]={7,3};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_30Rnd",
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		spawnDamageRange[]={0,0.60000002};
	};
};