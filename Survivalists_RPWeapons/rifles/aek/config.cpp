class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_aek
	{
		units[]=
		{
			"aek"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "aek"
			// "Survivalists_Weapons_JMC_Rifles_aek"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class AK101;
	class aek: AK101
	{
		scope=2;
		displayName="AEK-971";
		descriptionShort="S.T.A.G. Industries. AEK-971 is a Soviet issued assault rifle chambered in 5.56x45. Widely used by Russian special forces and avid collectors. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\aek\aek.p3d";
		attachments[]=
		{
			"weaponMuzzleAK",
			"weaponOptics"
		};
		itemSize[]={7,3};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_AK101_30Rnd",
			"Mag_AK101_30Rnd_Black",
			"Mag_AK101_30Rnd_Green"
		};
		spawnDamageRange[]={0,0.60000002};
		soundSetShot[]=
    {
      "TTGunshot1",
      "TTGunshot1",
      "M4_InteriorTail_SoundSet"
    };
	};
};
