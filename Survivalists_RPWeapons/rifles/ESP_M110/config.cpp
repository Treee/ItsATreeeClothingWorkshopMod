class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ESP_M110
	{
		units[] = {};
		weapons[] = {"ESP_M110"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_semiAuto;
class CfgWeapons
{
	class M4A1_Base;
	class ESP_M110: M4A1_Base
	{
		scope = 2;
		displayName = "ESP-110";
		descriptionShort = "The ESP-110 is a .308 Marksman Rifle designed and manufactured by Espen Industries back in 2001";
		model = "Survivalists_RPWeapons\rifles\ESP_M110\ESP_M110.p3d";
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M110\data\M110_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"
		};
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"weaponWrap",
			"SRP_StockPouch"
		};
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		weight = 1840;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,1};
		itemSize[] = {8,3};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				},
			};
			begin1[]=
			{
				"",
				1,
				1,
				900
			};
			begin2[]=
			{
				"",
				1,
				1,
				900
			};
			begin3[]=
			{
				"",
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
				"begin3",
				0.33333001
			};
			reloadTime=0.12;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
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
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp5k_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.8};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
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
						{1,{"Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ESP_M110\data\M110.rvmat"}}
					};
				};
			};
		};
	};
	class ESP_M110_Tan: ESP_M110
	{
		scope = 2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M110\data\M110_Tan_CO.paa"
		};
	};
	class ESP_M110_Green: ESP_M110
	{
		scope = 2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M110\data\M110_Green_CO.paa"
		};
	};
};
