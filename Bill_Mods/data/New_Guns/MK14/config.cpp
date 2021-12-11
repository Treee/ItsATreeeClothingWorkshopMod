class CfgPatches
{
	class BW_MK14
	{
		units[]=
		{
			"BW_MK14"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
		magazines[]=
		{
			"BW_MK14_Magazine"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class SVD;
	class BW_MK14: SVD
	{
		scope=2;
		displayName="MK-14";
		descriptionShort="The Mk 14 Enhanced Battle Rifle is an American military battle rifle and was originally built for use with units of United States Special Operations Command.";
		model="Bill_Mods\data\New_Guns\MK14\BW_MK14.p3d";
		attachments[]={"weaponOptics","weaponFlashlight","weaponOpticsHunting","weaponMuzzleM4"};
		magazineSwitchTime=0.7;
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		magazines[]={"BW_MK14_Magazine"};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={7,3};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"SVD_Shot_SoundSet",
				"SVD_Tail_SoundSet",
				"SVD_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SVD_silencerHomeMade_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_0",
				1,
				1,
				950
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_1",
				1,
				1,
				950
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\svd\svd_single_2",
				1,
				1,
				950
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin3",
				0.33333001
			};
			reloadTime=0.215;
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
			dispersion=0.00050000002;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				400
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
				
				{
					"beginSilenced_HomeMade",
					1
				}
			};
		};
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
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
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
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
		class NoiseShoot
		{
			strength=120;
			type="shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\svd\data\SVD.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class BW_MK14_Magazine: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="MK-14 Magazine";
		descriptionShort="20-round MK-14 Magazine";
		model="Bill_Mods\data\New_Guns\MK14\BW_MK14_Magazine.p3d";
		weight=150;
		itemSize[]={1,2};
		count=20;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBW_MK14_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Bill_Mods\data\New_Guns\MK14\BW_MK14_Magazine.p3d";
	};
};