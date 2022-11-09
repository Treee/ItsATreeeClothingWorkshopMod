class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttrpd
	{
		units[]=
		{
			"ttrpd"
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
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class AKM;
	class ttrpd: AKM
	{
		scope=2;
		displayName="RPD";
		descriptionShort="Espen Industries. RPD is a handheld light machine gun developed in the Soviet Union. It was created as a replacement for the DP machine gun. Chambered in 7.62x39mm. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttrpd\ttrpd.p3d";
		attachments[]={"suppressorImpro"};
		magazines[]={"ttrpdmag"};
		magazineSwitchTime=3.5;
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=18000;
		chamberSize=1;
		itemSize[]={9,4};
	};
};
class OpticsInfo: OpticsInfoRifle
{
	memoryPointCamera="eye";
	modelOptics="-";
	distanceZoomMin=100;
	distanceZoomMax=100;
	discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex=0;
};
class CfgMagazines
{
	class Mag_AKM_Drum75Rnd;
	class ttrpdmag: Mag_AKM_Drum75Rnd
	{
		scope=2;
		displayName="RPD Drum";
		descriptionShort="120 round drum for the RPD 7.62x39mm.";
		model="Survivalists_RPWeapons\rifles\ttrpd\ttrpdmag.p3d";
		weight=120;
		itemSize[]={3,3};
		count=120;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\rifles\ttrpd\data\ttrpd_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyttrpdmag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\rifles\ttrpd\ttrpdmag.p3d";
	};
};