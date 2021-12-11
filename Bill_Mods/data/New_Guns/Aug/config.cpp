class CfgPatches
{
	class BW_Aug
	{
		units[]=
		{
			"AugSteyr"
		};
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
class Mode_FullAuto;
class cfgWeapons
{
	class FAMAS;
	class BW_Aug: FAMAS
	{
		scope=2;
		displayName="AugSteyr";
		descriptionShort="Test Aug";
		model="\Bill_Mods\data\New_Guns\Aug\BW_Aug.p3d";
		attachments[]={};
		itemSize[]={7,3};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd"
		};
		spawnDamageRange[]={0,0.60000002};
	};
};
