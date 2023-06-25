class CfgPatches
{
	class Survivalists_RPWeapons_Smgs_ESP_Vector
	{
		units[]=
		{
			"ESP_Vector"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
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
	class PP19_Base;
	class ESP_Vector: PP19_Base
	{
		scope=2;
		displayName="Vector";
		descriptionShort="The Vector is a submachine that fires .45 ACP rounds. This gun was designed in late 2003 by Kriss. This weapon was mostly popular with small private secruity companies";
		model="Survivalists_RPWeapons\smgs\ESP_Vector\ESPVector.p3d";
		attachments[]={"VectorHndGrd","weaponButtstockM4","weaponOptics","pistolMuzzle"};
		chamberableFrom[]={"Ammo_45ACP"};
		magazines[]={"ESPVectormag"};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1.2,1.3,1.2};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={5,3};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"CZ61_Shot_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				0.69999999,
				1,
				900
			};
			begin2[]=
			{
				"",
				0.69999999,
				1,
				900
			};
			begin3[]=
			{
				"",
				0.69999999,
				1,
				900
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
			beginSilenced_Pro[]=
			{
				"",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"",
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
			reloadTime=0.10;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.0044999998;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"CZ61_Shot_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				0.69999999,
				1,
				900
			};
			begin2[]=
			{
				"",
				0.69999999,
				1,
				900
			};
			begin3[]=
			{
				"",
				0.69999999,
				1,
				900
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
			beginSilenced_Pro[]=
			{
				"",
				1,
				1,
				200
			};
			beginSilenced_HomeMade[]=
			{
				"",
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
			reloadTime=0.07;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.0044999998;
			magazineSlot="magazine";
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
class CfgMagazines
{
	class Mag_FNX45_15Rnd;
	class ESPVectormag: Mag_FNX45_15Rnd
	{
		scope=2;
		displayName="Vector Magazine";
		descriptionShort="25 round magazine for the Vector.";
		model="Survivalists_RPWeapons\smgs\ESP_Vector\ESPVectormag.p3d";
		weight=120;
		itemSize[]={1,3};
		count=25;
		ammo="Bullet_45ACP";
		ammoItems[]=
		{
			"Ammo_45ACP"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyESPVectormag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\smgs\ESP_Vector\ESPVectormag.p3d";
	};
};
