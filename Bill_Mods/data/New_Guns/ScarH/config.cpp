class CfgPatches
{
	class BW_Scar
	{
		units[]=
		{
			"BW_Scar"
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
			"BW_Scar_Magazine"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class FAL;
	class BW_Scar: FAL
	{
		scope=2;
		displayName="Scar";
		descriptionShort="The FN SCAR is a family of gas-operated automatic rifles developed by Belgian manufacturer FN Herstal.";
		model="Bill_Mods\data\New_Guns\ScarH\BW_Scar.p3d";
		attachments[]={"weaponOptics","weaponFlashlight","weaponWrap","weaponMuzzleAK"};
		magazineSwitchTime=0.7;
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer"};
		magazines[]={"BW_Scar_Magazine"};
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={7,3};
		repairCosts[]={50};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		reloadAction="ReloadFal";
		modes[]={"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"BW_Scar_Shot_SoundSet",
				"BW_Scar_Shot_SoundSet",
				"BW_Scar_Shot_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.33,
				"begin2",
				0.33,
				"begin3",
				0.33
			};
			reloadTime=0.19;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.003;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				200
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"BW_Scar_Shot_SoundSet",
				"BW_Scar_Shot_SoundSet",
				"BW_Scar_Shot_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.33,
				"begin2",
				0.33,
				"begin3",
				0.33
			};
			reloadTime=0.19;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.003;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				200
			};
			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					1
				},
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Bill_Mods\data\New_Guns\ScarH\data\Scar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Bill_Mods\data\New_Guns\ScarH\data\Scar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Bill_Mods\data\New_Guns\ScarH\data\Scar.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Bill_Mods\data\New_Guns\ScarH\data\Scar.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Bill_Mods\data\New_Guns\ScarH\data\Scar.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class BW_Scar_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			}
		};
		volume=0.6;
	};
	class BW_Scar_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			}
		};
		volume=0.35;
	};
	class BW_Scar_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\ScarH\Scar",
				1
			}
		};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	class BW_Scar_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"BW_Scar_Shot_SoundShader",
			"BW_Scar_midShot_SoundShader",
			"BW_Scar_distShot_SoundShader"
		};
	};
};
class CfgMagazines
{
	class Mag_SVD_10Rnd;
	class BW_Scar_Magazine: Mag_SVD_10Rnd
	{
		scope=2;
		displayName="Scar Magazine";
		descriptionShort="20rnd Scar Magazine";
		model="Bill_Mods\data\New_Guns\ScarH\BW_Scar_Magazine.p3d";
		weight=120;
		itemSize[]={1,2};
		count=20;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBW_Scar_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Bill_Mods\data\New_Guns\ScarH\BW_Scar_Magazine.p3d";
	};
};