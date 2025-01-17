class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ESPAR47
	{
		units[]=
		{
			"ESPAR47"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "Survivalists_Weapons_JMC_Rifles_ESPAR47"
		};
	};
};
class Mode_Safe;
class Mode_Burst;
class Mode_semiAuto;
class Mode_FullAuto;

class CfgWeapons
{
	class M4A1;
	class ESPAR47: M4A1
	{
		scope=2;
		displayName="ESP-AR47";
		descriptionShort="The ESP-AR47 is a 762x39mm Assault Rifle designed and manufactured by Espen Industries back in 2002 after the US Military called for M4 platforms which could 'Utilize the enemies ammunition'. Whilst the gun remained popular within Espen Industries itself, the rifle was never used by the military outside of training. ";
		model="Survivalists_RPWeapons\rifles\ESPAR47\ESPAR47.p3d";
		hiddenSelections[]=
		{
			"zbytek",
			"Barrel"
		};
    simpleHiddenSelections[]=
		{
			"hide_barrel",
			"GasBlock",
			"PistolGrip",
			"Buffer",
      "Buffer",
			"GasBlock_High",
			"GasBlock_Low"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom_CO.paa",
      "Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top_CO.paa",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Body_CO.paa",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Attachments_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
      "Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top.rvmat",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Body.rvmat",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Attachments.rvmat"
		};
		attachments[]=
		{
			"weaponButtstockM4",
			"WeaponHandguardM4",
			"weaponOptics",
			"weaponMuzzleM4",
			"RISLeft",
			"RISRight",
			"RISBottom"
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
			"Mag_AKM_Drum75Rnd_Black"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1.4,1.4,1.4};
		swayModifier[]={1.8,1.8,1.2};
		itemSize[]={8,3};
		modes[]=
		{
			"SemiAuto",
			"FullAuto",
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_2",
				1,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime=0.12;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_0",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_0",
				1,
				1,
				300
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
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_0",
				1,
				1,
				900
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_1",
				1,
				1,
				900
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_2",
				1,
				1,
				900
			};
			soundBegin[]=
			{
				"begin1",
				0.33333001,
				"begin2",
				0.33333001,
				"begin2",
				0.33333001
			};
			reloadTime=0.097999997;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_0",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\akm\akm_single_0",
				1,
				1,
				300
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
		class NoiseShoot
		{
			strength=82;
			type="shot";
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
					hitpoints=450;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Bottom.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat",
								"Survivalists_RPWeapons\rifles\ESPAR47\data\ESPAR47_Top.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
