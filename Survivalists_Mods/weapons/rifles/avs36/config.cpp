class CfgPatches
{
	class avs36
	{
		units[]=
		{
			"avs36"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"Survivalists_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class SKS;
	class avs36: SKS
	{
		scope=2;
		displayName="AVS-36";
		descriptionShort="Espen Industries. AVS-36 is a Soviet semi-automatic battle rifle chambered in 7.62x39. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\rifles\avs36\avs36.p3d";
		attachments[]={"weaponOpticsHunting"};
		winchesterTypeOpticsMount=1;
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer"};
		ejectType=0;
		chamberSize=11;
		DisplayMagazine=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={8,3};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadSkips[]={0.31999999,0.41,0.5,0.58999997,0.69,0.76999998};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",
			0.80000001,
			1,
			20
		};
		// reloadSound[]=
		// {
		// 	"DZ\sounds\weapons\firearms\mosin9130\mosin_cycling",
		// 	0.80000001,
		// 	1,
		// 	20
		// };
		reloadAction="ReloadMosinFull";
		shotAction="ReloadMosinShort";
		modes[]={"Single"};
		class Single: Mode_Single
		{
			muzzlePos="usti hlavne";	
			muzzleEnd="konec hlavne";			
			cartridgePos="nabojnicestart";
			cartridgeVel="nabojniceend";
			soundSetShot[]=
			{
				"Mosin_Shot_SoundSet",
				"Mosin_Tail_SoundSet",
				"Mosin_InteriorTail_SoundSet"
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
					hitpoints=250;
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