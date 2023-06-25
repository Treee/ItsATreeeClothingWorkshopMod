class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_Marlin
	{
		units[]=
		{
			"marlin"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      // "marlin"
			"Survivalists_Weapons_JMC_Rifles_Marlin"
		};
	};
};

class Mode_Single;
class OpticsInfoRifle;

class CfgWeapons
{
	class Repeater_Base;
	class marlin: Repeater_Base
	{
		scope=2;
		displayName=".308 Marlin";
		descriptionShort="Marlin 1894 is a lever-action rifle chambered in .308. Allows modifications.";
		model="Survivalists_RPWeapons\rifles\marlin\marlin.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponMuzzleM4",
			"SRP_StockPouch"
		};
		itemSize[]={8,3};
		animName="Repeater";
		weight=2720;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,165,4,10};
		DisplayMagazine=0;
		WeaponLength=1.1;
		barrelArmor=0.54000002;
		initSpeedMultiplier=1.25;
		chamberSize=7;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,1.2};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\rossim92\rossim92_reload_0",
			0.80000001,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\firearms\rossim92\rossim92_cycle_0",
			0.80000001,
			1,
			20
		};
		reloadSkips[]={0.20999999,0.34999999,0.47999999,0.58999997,0.69,0.77999997};
		reloadAction="ReloadRepeater";
		shotAction="ReloadRepeaterShot";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Repeater_Shot_SoundSet",
				"Repeater_Tail_SoundSet",
				"Repeater_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin_silencerHomeMade_SoundSet",
					"Mosin_silencerHomeMadeTail_SoundSet",
					"Mosin_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			begin1[]=
			{
				"",
				3.9810717,
				1,
				1000
			};
			begin2[]=
			{
				"",
				3.9810717,
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
					"beginSilenced_HomeMade",
					1
				}
			};
			reloadTime=1;
			recoil="recoil_repeater";
			recoilProne="recoil_repeater_prone";
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
					positionOffset[]={-0.050000001,0,0};
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
			strength=100;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={50,100,200,300};
			discreteDistanceInitIndex=1;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
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
						{1,{"Survivalists_RPWeapons\rifles\marlin\data\base.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\marlin\data\base.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\marlin\data\base.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\marlin\data\base.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\marlin\data\base.rvmat"}}
					};
				};
			};
		};
	};
};
