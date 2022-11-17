class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttak458
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"ttak458",
      "ttak458poli"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class AKM_Base;
	class ttak458: AKM_Base
	{
		scope=2;
		displayName="Molot VEPR";
		descriptionShort="Molot VEPR is a Soviet rifle chambered in 7.62x39, mostly intended for civilian use. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttak458\ttak458.p3d";
		hiddenSelections[]=
		{
			"zbytek",
			"Stock"
		};
			hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttak458\data\ttak458_co.paa","Survivalists_RPWeapons\rifles\ttak458\data\ttak458_Stock_co.paa"
		};
		attachments[]=
		{
			"weaponHandguardAK",
			"weaponOpticsAK",
			"AKRISAdapter",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK",
			"weaponWrap"
		};
		itemSize[]={7,3};
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
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST"
		};
		spawnDamageRange[]={0,0.60000002};
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
					hitpoints=300;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}}
					};
				};
			};
		};
	};
	class ttak458_Gold: ttak458
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek",
			"Stock"
		};
			hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttak458\data\ttak458_Gold_CO.paa","Survivalists_RPWeapons\rifles\ttak458\data\ttak458_Stock_co.paa"
		};
			hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ttak458\data\base_Gold.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat","Survivalists_RPWeapons\rifles\ttak458\data\base_Stock.rvmat"}}
					};
				};
			};
		};
	};
  class ttak458poli: AKM_Base
	{
		scope=2;
    displayName="Molot VEPR-FM";
		descriptionShort="The Molot VEPR-FM is a Soviet rifle chambered in 7.62x39, mostly intended for military use.";
		model="Survivalists_RPWeapons\rifles\ttak458\ttak458poli.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
			hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttak458\data\ttak458_co.paa"
		};
		attachments[]=
		{
			"weaponButtstockAK",
			"weaponHandguardAK",
			"weaponOpticsAK",
			"AKRISAdapter",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"weaponBayonetAK",
			"weaponWrap"
		};
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
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST"
		};
		spawnDamageRange[]={0,0.60000002};
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
					hitpoints=300;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttak458\data\base.rvmat"}}
					};
				};
			};
		};
	};
};
