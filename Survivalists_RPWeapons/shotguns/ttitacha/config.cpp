class CfgPatches
{
	class Survivalists_RPWeapons_Shotguns_ttitacha
	{
		units[]={"ttitacha"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",		
      "ttitacha"
			// "Survivalists_Weapons_JMC_Shotguns_ttitacha"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class Mp133Shotgun;
	class ttitacha: Mp133Shotgun
	{
		scope=2;
		displayName="Ithaca M37";
		descriptionShort="S.T.A.G. Industries. Ithaca M37 is a pump action shotgun made in large numbers for civilian, military and police usage. It utilizes a novel combination ejection/loading port on the bottom of the gun which leaves the sides closed to the elements. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\shotguns\ttitacha\ttitacha.p3d";
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		chamberSize=6;
		itemSize[]={9,3};
		attachments[]={};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			reloadTime=.25;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			itemSize[]={9,3};
			dispersion=0.007;
			firespreadangle=1.4;
			magazineSlot="magazine";
		};
	};
};