class CfgPatches
{
	class Survivalists_RPWeapons_Smgs_tec9
	{
		units[]=
		{
			"tec9"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "tec9"
			// "Survivalists_Weapons_JMC_Smgs_tec9"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class FNX45;
	class tec9: FNX45
	{
		scope=2;
		displayName="Tec-9";
		descriptionShort="S.T.A.G. Industries. Semi-Automatic pistol chambered in .45 ACP. Modified to take UMP magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\smgs\tec9\tec9.p3d";
		attachments[]={"pistolMuzzle"};
		itemSize[]={4,3};
		magazines[]=
		{
			"Mag_UMP_25Rnd",
		};
		spawnDamageRange[]={0,0.60000002};
	};
};
