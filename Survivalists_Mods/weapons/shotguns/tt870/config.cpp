class CfgPatches
{
	class tt870
	{
		units[]={"tt870"};
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
class cfgWeapons
{
	class Mp133Shotgun;
	class tt870: Mp133Shotgun
	{
		scope=2;
		displayName="Remington 870";
		descriptionShort="Espen Industries. Remington 870 is a 12 gauge pump action shotgun. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\shotguns\tt870\tt870.p3d";
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		chamberSize=7;
		itemSize[]={7,3};
		attachments[]={"StockPouch"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime=.25;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			itemSize[]={8,3};
			dispersion=0.007;
			firespreadangle=1.4;
			magazineSlot="magazine";
		};
	};
};