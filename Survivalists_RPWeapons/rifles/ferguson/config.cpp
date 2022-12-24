class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_Ferguson
	{
		units[]={"ferguson"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "ferguson"
			// "Survivalists_Weapons_JMC_Rifles_Ferguson"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Izh18;
	class ferguson: Izh18
	{
		scope=2;
		displayName="Ferguson Rifle";
		descriptionShort="Espen Industries. Ferguson breech-loading rifle. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ferguson\ferguson.p3d";
    hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_RPWeapons\rifles\ferguson\data\ferguson_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_RPWeapons\rifles\ferguson\data\base.rvmat"};
		chamberSize=1;
		itemSize[]={8,3};
		attachments[]={"SRP_StockPouch"};
		chamberableFrom[]=
		{
			"Ammo_12gaSlug",
		};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime=.65;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			itemSize[]={9,2};
			dispersion=0.007;
			firespreadangle=1.4;
			magazineSlot="magazine";
		};
	};
};