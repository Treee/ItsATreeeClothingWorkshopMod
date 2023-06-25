class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttstg44
	{
		units[]=
		{
			"ttstg44"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      // "ttstg44",
			"Survivalists_Weapons_JMC_Rifles_ttstg44"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class AKM;
	class ttstg44: AKM
	{
		scope=2;
		displayName="StG 44";
		descriptionShort="S.T.A.G. Industries. Sturmgewehr 44 (assault rifle 44) is a German assault rifle developed during the second World War by Hugo Schmeisser. The StG 44 was the first successful assault rifle, with features including an intermediate cartridge, controllable automatic fire, a more compact design than a battle rifle with a higher rate of fire, and being designed primarily for hitting targets within a few hundred meters. The StG largely influenced the Soviet AK-47. Redesigned by S.T.A.G. Industries to accept standard AK magazines. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttstg44\ttstg44.p3d";
		attachments[]=
		{
			"weaponMuzzleAK"
		};
		itemSize[]={7,3};
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd"
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
