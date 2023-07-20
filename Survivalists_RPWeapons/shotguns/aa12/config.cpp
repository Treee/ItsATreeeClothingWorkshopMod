class CfgPatches
{
	class Survivalists_RPWeapons_Shotguns_aa12
	{
		units[]=
		{
			"AA-12"
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

class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class Saiga_Base;
	class srp_aa12_base: Saiga_Base
	{
		scope=0;
		weight=3600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]=
		{
      // "Mag_Saiga_5Rnd",
			// "Mag_Saiga_8Rnd",
			"srp_aa12_mag",
		};
		magazineSwitchTime=0.2;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=0.94999999;
		barrelArmor=1.6799999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.5,2.5,1.3};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Saiga12_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet"
			};
			reloadTime=0.13;
			recoil="recoil_Saiga12";
			recoilProne="recoil_Saiga12_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Saiga12_Shot_SoundSet",
				"Saiga12_Tail_SoundSet",
				"Saiga12_InteriorTail_SoundSet"
			};
			reloadTime=0.13;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.02,0.029999999,0.1};
				orientation[]={0,60,0};
			};
			class Melee
			{
				position[]={-0.02,0.02,-0.12};
				orientation[]={0,-60,0};
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
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
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
		weaponStateAnim="dz\anims\anm\player\reloads\Saiga\w_Saiga_states.anm";
	};
	class srp_aa12_default: srp_aa12_base
	{
		scope=2;
		displayName="ESP AS-12";
		descriptionShort="Prototype automatic shotgun originally developed as crowd control for military Police officals. Now serves ESPENS top field operatives as a horde defence weapon.";
		model="Survivalists_RPWeapons\shotguns\aa12\aa12.p3d";
		itemSize[]={7,3};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\shotguns\aa12\Data\AA12_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"}},						
						{0,{"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Mag_Saiga_Drum20Rnd;
	class srp_aa12_mag: Mag_Saiga_Drum20Rnd
	{
		scope=2;
		displayName="ESP AS-12 30 round Drum Mag";
		descriptionShort="30 Rounds of ESPEN approved anger management.";
		model="Survivalists_RPWeapons\shotguns\aa12\aa12_mag.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\shotguns\aa12\Data\AA12_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\shotguns\aa12\Data\AA12.rvmat"
		};
		weight=230;
		itemSize[]={2,2};
		count=30;
		ammo="Bullet_12GaugePellets";
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		isMeleeWeapon=0;
		tracersEvery=0;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMagazine_aa12_mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\shotguns\aa12\aa12_mag.p3d";
	};
};
