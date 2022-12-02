class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttrpg7
	{
		units[]=
		{
			"ttrpg7"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"ttrpg7"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class MP5K;
	class ttrpg7: MP5K
	{
		scope=2;
		displayName="RPG-7";
		descriptionShort="S.T.A.G. Industries. This looks and feels like an RPG-7, a rocket propelled grenade launcher mounted with an explosive warhead. Dont let the looks fool you. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttrpg7\ttrpg7.p3d";
		attachments[]={};
		chamberableFrom[]=
		{
			"Ammo_Flare",
			"Ammo_FlareRed",
			"Ammo_FlareGreen",
			"Ammo_FlareBlue"
		};
		magazines[]={};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={9,4};

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
					hitpoints=175;
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
