class CfgPatches
{
	class marlin
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
		model="Survivalists_Mods\weapons\rifles\marlin\marlin.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponMuzzleM4",
			"StockPouch",
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
