class CfgPatches
{
	class Survivalists_RPWeapons_Smgs_ttp90
	{
		units[]=
		{
			"ttp90"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"ttp90"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class CZ61;
	class ttp90: CZ61
	{
		scope=2;
		displayName="ESP-P90";
		descriptionShort="The ESP-P90 is a personal defense weapon designed and manufactured Espen Industries. Chambered in .380 ACP this weapon is sometimes also considered a submachine gun or a compact assault rifle.";
		model="Survivalists_RPWeapons\smgs\ttp90\ttp90.p3d";
		attachments[]={"weaponOptics","pistolMuzzle","P90UpgradeKit","weaponFlashlight","pistolFlashlight"};
		chamberableFrom[]={"Ammo_380"};
		magazines[]={"ttp90mag"};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		itemSize[]={5,3};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp5k_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating=15;
				maxOverheatingValue=30;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.80000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0.02,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
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
						{1,{"Survivalists_RPWeapons\smgs\ttp90\data\base.rvmat"}},
						{0.69999999,{"Survivalists_RPWeapons\smgs\ttp90\data\base.rvmat"}},
						{0.5,{"Survivalists_RPWeapons\smgs\ttp90\data\base_damage.rvmat"}},
						{0.30000001,{"Survivalists_RPWeapons\smgs\ttp90\data\base_damage.rvmat"}},
						{0,{"Survivalists_RPWeapons\smgs\ttp90\data\base_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class ttp90_Tan: ttp90
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\smgs\ttp90\data\ttp90_tan_co.paa"
		};
	};
};
class CfgMagazines
{
	class Mag_PP19_64Rnd;
	class ttp90mag: Mag_PP19_64Rnd
	{
		scope=2;
		displayName="FN P90 Magazine";
		descriptionShort="50 round magazine for the FN P90.";
		model="Survivalists_RPWeapons\smgs\ttp90\ttp90mag.p3d";
		weight=120;
		itemSize[]={3,1};
		count=50;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\smgs\ttp90\data\ttp90mag_co.paa"};
	};
};