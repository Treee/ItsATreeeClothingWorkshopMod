class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ESPAR22
	{
		units[]=
		{
			"ESPAR22"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "Survivalists_Weapons_JMC_Rifles_ESPAR22"
		};
	};
};
class Mode_Safe;
class Mode_semiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class M4A1;
	class ESPAR22: M4A1
	{
		scope=2;
		displayName="ESP-22AR";
		descriptionShort="The ESP-22AR is a .22 Assault Rifle designed and manufactured by Espen Industries back in 2001. Espen Industries initally recieved alot of backlash from the general public after it was advertised as 'Baby's first gun'. Lightweight and Chambered in .22 the ESP-22AR was perfect for speed shooting competitions. ";
		model="Survivalists_RPWeapons\rifles\ESPAR22\ESPAR22.p3d";
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
			"Buffer"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22_CO.paa",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Body_CO.paa",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Attachments_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22.rvmat",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Body.rvmat",
      "Survivalists_RPWeapons\rifles\ESP_AR15\data\ESP_Ar15_Attachments.rvmat"
		};
		attachments[]=
		{
			"weaponButtstockM4",
			"WeaponHandguardM4",
			"weaponOptics",
			"pistolMuzzle",
			"RISLeft",
			"RISRight",
			"RISBottom"
		};
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberableFrom[]=
		{
			"Ammo_22"
		};
		magazines[]=
		{
			"Mag_Ruger1022_30Rnd",
			"Mag_Ruger1022_15Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={7,3};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Ruger1022_Shot_SoundSet",
				"Ruger1022_Tail_SoundSet",
				"Ruger1022_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Ruger1022_silencerHomeMade_SoundSet",
					"Ruger1022_silencerHomeMadeTail_SoundSet",
					"Ruger1022_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Ruger1022_Shot_SoundSet",
				"Ruger1022_Tail_SoundSet",
				"Ruger1022_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Ruger1022_silencerHomeMade_SoundSet",
					"Ruger1022_silencerHomeMadeTail_SoundSet",
					"Ruger1022_silencerInteriorHomeMadeTail_SoundSet"
				},
				
				{
					"Ruger1022_silencerHomeMade_SoundSet",
					"Ruger1022_silencerHomeMadeTail_SoundSet",
					"Ruger1022_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"dz\sounds\weapons\firearms\ruger1022\ruger1022_close_shot_01",
				1.7782794,
				1,
				1000
			};
			begin2[]=
			{
				"dz\sounds\weapons\firearms\ruger1022\ruger1022_close_shot_02",
				1.7782794,
				1,
				1000
			};
			begin3[]=
			{
				"dz\sounds\weapons\firearms\ruger1022\ruger1022_close_shot_03",
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
				"dz\sounds\weapons\firearms\ruger1022\ruger1022_close_shot_homesilenced_01",
				1,
				1,
				75
			};
			beginSilenced_Pro2[]=
			{
				"dz\sounds\weapons\firearms\ruger1022\ruger1022_close_shot_homesilenced_02",
				1,
				1,
				75
			};
			beginSilenced_HomeMade[]=
			{
				"dz\sounds\weapons\firearms\ruger1022\ruger1022_close_shot_homesilenced_03",
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
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22.rvmat","Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22.rvmat","Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22_damage.rvmat","Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22_damage.rvmat","Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Survivalists_RPWeapons\rifles\ESPAR22\data\ESPAR22_destruct.rvmat","Survivalists_RPWeapons\rifles\ESPAR22\data\ESP_M4_Barrel.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
