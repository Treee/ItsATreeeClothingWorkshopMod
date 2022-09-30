class CfgPatches
{
	class ESPAR47
	{
		units[]=
		{
			"ESPAR47"
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
class Mode_Burst;
class Mode_semiAuto;
class Mode_FullAuto;

class cfgWeapons
{
	class M4A1;
	class ESPAR47: M4A1
	{
		scope=2;
		displayName="ESP-AR47";
		descriptionShort="The ESP-AR47 is a 762x39mm Assault Rifle designed and manufactured by Espen Industries back in 2002 after the US Military called for M4 platforms which could 'Utilize the enemies ammunition'. Whilst the gun remained popular within Espen Industries itself, the rifle was never used by the military outside of training. ";
		model="Survivalists_Mods\rifles\ESPAR47\ESPAR47.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_Bottom_CO.paa",
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_HndGrd_CO.paa",
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_Muzzle_CO.paa",
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_Top_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_HndGrd.rvmat",
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_Muzzle.rvmat",
			"Survivalists_Mods\rifles\ESPAR47\data\ESPAR47_Top.rvmat"
		};
		attachments[]=
		{
			"weaponButtstockM4",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4"
		};
		repairableWithKits[]={1};
		repairCosts[]={25};
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
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={5,3};
		modes[]=
		{
			"SemiAuto",
			"FullAuto",
		};
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
					hitpoints=225;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Survivalists_Mods\rifles\ESPAR22\data\ESPAR22.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Survivalists_Mods\rifles\ESPAR22\data\ESPAR22.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Survivalists_Mods\rifles\ESPAR22\data\ESPAR22_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Survivalists_Mods\rifles\ESPAR22\data\ESPAR22_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Survivalists_Mods\rifles\ESPAR22\data\ESPAR22_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
