class CfgPatches
{
	class Survivalists_RPWeapons_Shotguns_ttbecker
	{
		units[]=
		{
			"ttbecker"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      // "ttbecker"
			"Survivalists_Weapons_JMC_Shotguns_ttbecker"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class SKS;
	class ttbecker: SKS
	{
		scope=2;
		displayName="Becker Revolving Shotgun";
		descriptionShort="S.T.A.G. Industries. Becker shotgun is a semi-automatic 12gauge shotgun with a rotating cylinder. Manufactured in Germany. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\shotguns\ttbecker\ttbecker.p3d";
		attachments[]={};
		winchesterTypeOpticsMount=1;
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug"};
		ejectType=0;
		chamberSize=6;
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