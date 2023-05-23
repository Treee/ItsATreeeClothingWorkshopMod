class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ESPSA80a
	{
		units[]=
		{
			"ESP_SA80a"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"Survivalists_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_Burst;
class Mode_semiAuto;
class Mode_FullAuto;

class cfgWeapons
{
	class Famas_Base;
	class ESP_SA80a: Famas_Base
	{
		scope=2;
		displayName="L&S SA80a";
		descriptionShort="The SA80 is a British family of 5.56x45mm NATO service weapons used by the British Army. The L85 Rifle variant has been the standard issue service rifle of the British Armed Forces since 1987, replacing the L1A1 Self-Loading Rifle. ";
		model="Survivalists_RPWeapons\rifles\ESP_SA80a\ESP_SA80a.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_SA80a\data\ESP_SA80a.rvmat"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"GasBlock",
			"PistolGrip",
			"Buffer"
		};
		attachments[]=
		{
			"SA80HndGrd",
			"weaponOptics",
			"weaponMuzzleM4",
			"weaponWrap",
			"RISLeft",
			"RISRight",
			"RISBottom"
		};
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.8,1.8,1.2};
		itemSize[]={5,3};
		modes[]=
		{
			"SemiAuto",
			"FullAuto",
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1,
				1,
				1000
			};
			begin2[]=
			{
				"",
				1,
				1,
				1000
			};
			begin3[]=
			{
				"",
				1,
				1,
				1000
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
			reloadTime=0.12;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			beginSilenced_Pro1[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_Pro2[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro1",
					0.5,
					"beginSilenced_Pro2",
					0.5
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
				"M4_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"M4_silencer_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"M4_silencerHomeMade_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				1.7782794,
				1,
				1000
			};
			begin2[]=
			{
				"",
				1.7782794,
				1,
				1000
			};
			begin3[]=
			{
				"",
				1.7782794,
				1,
				1000
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
			reloadTime=0.064999998;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
			beginSilenced_Pro1[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_Pro2[]=
			{
				"",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"",
				1,
				1,
				150
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro1",
					0.5,
					"beginSilenced_Pro2",
					0.5
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
