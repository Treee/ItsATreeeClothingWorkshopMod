class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttr700
	{
		units[]=
		{
			"ttr700"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"Survivalists_Weapons_JMC_Rifles_ttr700"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class Scout;
	class ttr700: Scout
	{
		scope=2;
		displayName="R700";
		descriptionShort="Espen Industries. R700 is magfed bolt action rifle chambered in .308 Winchester. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700.p3d";
		attachments[]={"weaponOpticsHunting","weaponMuzzleM4","weaponWrap"};
		magazines[]={"ttr700mag"};
		magazineSwitchTime=0.5;
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=12000;
		chamberSize=1;
		itemSize[]={9,3};
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
};
class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class ttr700mag: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="R700 Magazine";
		descriptionShort="5 round magazine for the R700.";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700mag.p3d";
		weight=120;
		itemSize[]={2,2};
		count=5;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\rifles\ttr700\data\ttr700_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyttr700mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700mag.p3d";
	};
};