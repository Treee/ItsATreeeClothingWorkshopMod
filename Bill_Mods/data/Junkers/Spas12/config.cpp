class CfgPatches
{
	class BW_Spas12
	{
		units[]={"BW_Spas12"};
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
	class Mp133Shotgun;
	class BW_Spas12: Mp133Shotgun
	{
		scope=2;
		displayName="Spas-12";
		descriptionShort="Italian made, but clearly modified post downfall of society. The semi-automatic function has been disabled...Clever girl.";
		model="Bill_Mods\data\Junkers\Spas12\BW_Spas12.p3d";
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		chamberSize=9;
		itemSize[]={7,3};
		attachments[]={};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			begin1[]={"dz\sounds\weapons\shotguns\mp133\mp133_single_0",1,1,1000};
			begin2[]={"dz\sounds\weapons\shotguns\mp133\mp133_single_1",1,1,1000};
			begin3[]={"dz\sounds\weapons\shotguns\mp133\mp133_single_2",1,1,1000};
			reloadTime=.3;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			itemSize[]={7,3};
			dispersion=0.007;
			firespreadangle=1.4;
			magazineSlot="magazine";
		};
	};
};