class CfgPatches
{
	class BW_M40
	{
		units[]=
		{
			"BW_M40"
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
	class BW_M40: Scout
	{
		scope=2;
		displayName="M40A3";
		descriptionShort="Development of the M40A3 began in 1996 and concluded in 2001, when it was placed into service during Operation Enduring Freedom. Chambered in .338 Lapua Magnum.";
		model="Bill_Mods\data\New_Guns\M40\BW_M40.p3d";
		attachments[]={"weaponOpticsHunting","weaponWrap"};
		winchesterTypeOpticsMount=1;
		chamberableFrom[]={"Ammo_338"};
		magazines[]={"BW_M40_magazine"};
		magazineSwitchTime=0.3;
		ejectType=0;
		repairableWithKits[]={};
		repairCosts[]={};
		WeaponLength=1.2;
		barrelArmor=3.0;
		weight=8000;
		chamberSize=1;
		recoilModifier[]={0.5,0.5,0.5};
		swayModifier[]={0.6,0.6,0.6};
		itemSize[]={7,3};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\cz527\cz527_reload_0",
			0.80000001,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\firearms\cz527\cz527_cycling_0",
			0.80000001,
			1,
			20
		};
		reloadAction="Reloadcz527";
		shotAction="Reloadcz527Shot";
		modes[]={"Single"};
		class Single: Mode_Single
		{
			muzzlePos="usti hlavne";	
			muzzleEnd="konec hlavne";			
			cartridgePos="nabojnicestart";
			cartridgeVel="nabojniceend";
			soundSetShot[]=
			{
				"M40_Shot_SoundSet",
				"M40_Shot_SoundSet",
				"M40_Shot_SoundSet"
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
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\m4a1\m4Silenced",
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
			};
			reloadTime=1;
			recoil="recoil_mosin";
			recoilProne="recoil_mosin_prone";
			dispersion=0.001;
			magazineSlot="magazine";
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
			strength=150;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400
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
	class M40_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			}
		};
		volume=0.9;
	};
	class M40_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			}
		};
		volume=0.50;
	};
	class M40_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\M40\M40",
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
	class M40_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M40_Shot_SoundShader",
			"M40_midShot_SoundShader",
			"M40_distShot_SoundShader"
		};
	};
};
class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class BW_M40_magazine: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="M40 Magazine";
		descriptionShort="5-Round M40 Magazine holding .338 Lapua Magnum.";
		model="Bill_Mods\data\New_Guns\M40\BW_M40_magazine.p3d";
		weight=120;
		ammo="Bullet_338";
		ammoItems[]={"Ammo_338"};
		itemSize[]={1,2};
		count=5;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBW_M40_magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Bill_Mods\data\New_Guns\M40\BW_M40_magazine.p3d";
	};
};