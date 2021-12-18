class CfgPatches
{
	class BW_L96A1
	{
		units[]=
		{
			"BW_L96A1"
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
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class Scout;
	class BW_L96A1: Scout
	{
		scope=2;
		displayName="L96A1";
		descriptionShort="The British Army adopted the Accuracy International PM in 1982 into service as the L96A1. Chambered in .308 Winchester.";
		model="Bill_Mods\data\New_Guns\L96A1\BW_L96A1.p3d";
		attachments[]={"weaponOptics","weaponOpticsHunting","weaponMuzzleM4"};
		winchesterTypeOpticsMount=1;
		magazines[]={"BW_L96A1_magazine"};
		magazineSwitchTime=0.5;
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=12000;
		chamberSize=1;
		recoilModifier[]={0.7,0.7,1};
		swayModifier[]={1,1,1};
		itemSize[]={9,3};
    hiddenSelections[] =
		{
	    "zbytek",
		};
    hiddenSelectionsTextures[] =
		{
	    "Survivalists_Investor\data\New_Guns\L96A1\data\UV_L96A1_co.paa"
		};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			30
		};
		reloadSkips[]={0.31999999,0.41,0.5,0.58999997,0.69,0.76999998};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",
			0.80000001,
			1,
			30
		};
		reloadSound[]=
		{
			"DZ\sounds\weapons\firearms\mosin9130\mosin_cycling",
			0.80000001,
			1,
			30
		};
		reloadAction="ReloadMosinFull";
		shotAction="ReloadMosinShort";
		modes[]={"Single"};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"L96A1_Shot_SoundSet",
				"L96A1_Shot_SoundSet",
				"L96A1_Shot_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin_silencerHomeMade_SoundSet",
					"Mosin_silencerHomeMadeTail_SoundSet",
					"Mosin_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			soundBegin[]=
			{
				"begin1",
				0.3,
				"begin2",
				0.3,
				"begin3",
				0.3
			};
			reloadTime=1;
			recoil="recoil_mosin";
			recoilProne="recoil_mosin_prone";
			dispersion=0.0005;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				1000
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
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.029999999,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=3;
				overheatingDecayInterval=4;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
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
					hitpoints=300
					healthLevels[]=
					{
						
						{
							1,
							
							{
							}
						},
						
						{
							0.69999999,
							
							{
							}
						},
						
						{
							0.5,
							
							{
							}
						},
						
						{
							0.30000001,
							
							{
							}
						},
						
						{
							0,
							
							{
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
	class L96A1_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			}
		};
		volume=1.0;
	};
	class L96A1_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			}
		};
		volume=0.5;
	};
	class L96A1_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\L96A1\L96A1",
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
	class L96A1_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"L96A1_Shot_SoundShader",
			"L96A1_midShot_SoundShader",
			"L96A1_distShot_SoundShader"
		};
	};
};
class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class BW_L96A1_magazine: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="L96A1 Magazine";
		descriptionShort="10 round L96A1 Magazine holding .308 Winchester.";
		model="Bill_Mods\data\New_Guns\L96A1\BW_L96A1_magazine.p3d";
		weight=120;
		itemSize[]={2,2};
		count=10;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBW_L96A1_magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Bill_Mods\data\New_Guns\L96A1\BW_L96A1_magazine.p3d";
	};
};