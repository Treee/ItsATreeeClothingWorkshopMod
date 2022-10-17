class CfgPatches
{
	class ttinvis
	{
		units[]={"ttinvis"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"		
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Izh18;
	class ttinvis: Izh18
	{
		scope=2;
		displayName="TT Invis";
		descriptionShort="For Chad Big Dick Modders";
		model="Survivalists_Mods\weapons\rifles\ttinvis\ttinvis.p3d";
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		chamberSize=1;
		itemSize[]={1,1};
		attachments[]={};
		chamberableFrom[]=
		{
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"BISH","BASH","BOSH"};
			begin1[]={"REEEEEEEE",1,1,1000};
			begin2[]={"REEEEEEEE",1,1,1000};
			begin3[]={"REEEEEEEE",1,1,1000};
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