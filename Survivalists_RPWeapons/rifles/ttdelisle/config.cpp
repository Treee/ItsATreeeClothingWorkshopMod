class CfgPatches
{
	class Survivalists_RPWeapons_rifles_ttdelisle
	{
		units[] = {};
		weapons[] = {"ttdelisle"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class Scout;
	class ttdelisle: Scout
	{
		scope = 2;
		displayName = "De Lislyet Karabin";
		descriptionShort = "S.T.A.G Industries. De Lislyet Karabin is a product of Soviet Russia, made as a direct oposition to the British De Lisle Carbine. Chambered in .357 Magnum, it offers far greater performance than the British counterpart. Inspected by Master Gunsmith: Turko";
		model = "Survivalists_RPWeapons\rifles\ttdelisle\ttdelisle.p3d";
		attachments[] = {"weaponOpticsCrossbow","weaponWrap"};
		magazines[] = {"Mag_Deagle_9rnd"};
		magazineSwitchTime = 0.5;
		chamberableFrom[] = {"Ammo_357"};
		ejectType = 0;
		WeaponLength = 1.18986;
		barrelArmor = 2.5;
		weight = 12000;
		chamberSize = 1;
		itemSize[] = {10,2};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class Single: Mode_Single
		{
			soundSetShot[] = {"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",1,1,1000};
			begin2[] = {"",1,1,1000};
			begin3[] = {"",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"",1,1,75};
			beginSilenced_Pro2[] = {"",1,1,75};
			beginSilenced_HomeMade[] = {"",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class NoiseShoot
		{
			strength = 35;
			type = "shot";
		};
	};
};
