class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_Marlin
	{
		units[]=
		{
			"marlin"
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
	class Repeater;
	class marlin: Repeater
	{
		scope=2;
		displayName="Marlin 1894";
		descriptionShort="Espen Industries. Marlin 1894 is a lever-action rifle chambered in .357 magnum. Allows modifications. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\marlin\marlin.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponMuzzleM4",
			"SRP_StockPouch",
			"weaponWrap"
		};
		itemSize[]={8,3};
		chamberableFrom[]=
		{
			"Ammo_357",
		};
		magazines[]=
		{};
		spawnDamageRange[]={0,0.60000002};
	};
};
