class CfgPatches
{
	class Survivalists_RPWeapons_Shotguns_Boomstick
	{
		units[]={"boomstick"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",		
      "boomstick"
			// "Survivalists_Weapons_JMC_Shotguns_Boomstick"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Mp133Shotgun;
	class boomstick: Mp133Shotgun
	{
		scope=2;
		displayName="Mossberg 500 Short-Barreled";
		descriptionShort="Espen Industries. American made shotgun, with its years of use very visible. Still functions... right? Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\shotguns\boomstick\boomstick.p3d";
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		chamberSize=6;
		itemSize[]={7,3};
		attachments[]={"weaponFlashlight"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime=.25;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			itemSize[]={7,3};
			dispersion=0.007;
			firespreadangle=1.4;
			magazineSlot="magazine";
		};
	};
};