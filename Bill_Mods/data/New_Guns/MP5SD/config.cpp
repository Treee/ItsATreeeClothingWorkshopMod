class CfgPatches
{
	class BW_MP5SD
	{
		units[]=
		{
			"MP5SD"
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
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class UMP45;
	class BW_MP5SD: UMP45
	{
		scope=2;
		displayName="MP5SD";
		descriptionShort="The MP5SD is produced exclusively by H&K, which features an integral but detachable aluminium sound suppressor and a lightweight bolt.";
		model="Bill_Mods\data\New_Guns\MP5SD\BW_MP5SD.p3d";
		attachments[]={"weaponOptics"};
		chamberableFrom[]={"Ammo_9x19"};
		magazines[]={"Mag_MP5_15Rnd","Mag_MP5_30Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={5,3};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Bill_Mods\data\New_Guns\MP5SD\mp5sd_as_base_co.paa","Bill_Mods\data\New_Guns\MP5SD\mp5sd_as_chasis_co.paa","Bill_Mods\data\New_Guns\MP5SD\mp5sd_as_mount_co.paa"};
		hiddenSelectionsMaterials[]={"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"};
		class NoiseShoot
		{strength=20;type="shot";};
		reloadAction="ReloadMP5";
		modes[]=
		{
			"FullAuto",
			"Burst",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_silencerPro_SoundSet",
				"MP5K_silencerTail_SoundSet",
				"MP5K_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencerPro_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",
				1,
				1,
				60
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",
				1,
				1,
				60
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",
				1,
				1,
				60
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
			reloadTime=0.125;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				100
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
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"MP5K_silencerPro_SoundSet",
				"MP5K_silencerTail_SoundSet",
				"MP5K_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencerPro_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",
				1,
				1,
				60
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",
				1,
				1,
				60
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",
				1,
				1,
				60
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
			burst=3;
			reloadTime=0.08;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				100
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
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"MP5K_silencerPro_SoundSet",
				"MP5K_silencerTail_SoundSet",
				"MP5K_silencerInteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencerPro_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",
				1,
				1,
				60
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",
				1,
				1,
				60
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",
				1,
				1,
				60
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
			reloadTime=0.08;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\mp5k\mp5Silenced",
				1,
				1,
				100
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
					hitpoints=175
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
