class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttsok94
	{
		units[]=
		{
			"ttsok94"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      // "ttsok94"
			"Survivalists_Weapons_JMC_Rifles_ttsok94"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class AKM_Base;
	class ttsok94: AKM_Base
	{
		scope=2;
    displayName="SOK-94";
		descriptionShort="S.T.A.G. Industries. SOK-94 is a semi-automatic hunting rifle chambered in 7.62x39. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttsok94\ttsok94.p3d";
    hiddenSelections[]=
		{
			"zbytek",
			"grips"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttsok94\data\ttsok94_co.paa","Survivalists_RPWeapons\rifles\ttsok94\data\ttsok94grip_co.paa"
		};
		attachments[]=
		{
			"weaponHandguardAK",
			"weaponOpticsAK",
			"AKRISAdapter",
			"weaponOpticsHunting",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK",
			"weaponWrap"
		};
		itemSize[]={8,3};
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Palm30Rnd_Black",
			"Mag_AKM_Palm30Rnd_Green",
			"Mag_AKM_Drum75Rnd",
			"Mag_AKM_Drum75Rnd_Green",
			"Mag_AKM_Drum75Rnd_Black"
		};
		spawnDamageRange[]={0,0.60000002};
		modes[]={"SemiAuto"};
    class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttsok94\data\base.rvmat","Survivalists_RPWeapons\rifles\ttsok94\data\grip.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttsok94\data\base.rvmat","Survivalists_RPWeapons\rifles\ttsok94\data\grip.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttsok94\data\base.rvmat","Survivalists_RPWeapons\rifles\ttsok94\data\grip.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttsok94\data\base.rvmat","Survivalists_RPWeapons\rifles\ttsok94\data\grip.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttsok94\data\base.rvmat","Survivalists_RPWeapons\rifles\ttsok94\data\grip.rvmat"}}
					};
				};
			};
		};
	};
};