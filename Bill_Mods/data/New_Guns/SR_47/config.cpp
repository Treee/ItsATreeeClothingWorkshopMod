class CfgPatches
{
	class BW_SR_47
	{
		units[]=
		{
			"BW_SR_47"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
		magazines[]=
		{
			"BW_SR_47_Magazine"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class M4A1;
	class BW_SR_47: M4A1
	{
		scope=2;
		displayName="SR-47";
		descriptionShort="KAC SR-47 is an SR-15 based assault rifle, based on the AR-15 family of rifles. It was created by Knight's Armament Company for USSOCOM. Only seven were made, until Bill found one sitting on a shelf.";
		model="Bill_Mods\data\New_Guns\SR_47\BW_SR_47.p3d";
		attachments[]={"weaponOptics","weaponFlashlight","weaponMuzzleAK"};
		magazineSwitchTime=0.2;
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer"};
		magazines[]={"BW_SR_47_Magazine"};
		ejectType=1;
		PPDOFProperties[]={0,0,0,0,0,0};
		barrelArmor=4.5;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		eloadMagazineSound[]={"dz\sounds\weapons\firearms\akm\Akm_reload",0.80000001,1,20};
		itemSize[]={7,3};
		modes[]={"FullAuto","SemiAuto"};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"SR47_Shot_SoundSet",
				"SR47_Shot_SoundSet",
				"SR47_Shot_SoundSet"
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
			reloadTime=0.1;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0012;
			magazineSlot="magazine";
			beginSilenced_Pro[]=
			{
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
			};

			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					0.5
				},
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"SR47_Shot_SoundSet",
				"SR47_Shot_SoundSet",
				"SR47_Shot_SoundSet"
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
				"dz\sounds\weapons\firearms\AK101\akSilenced",
				1,
				1,
				300
			};

			soundBeginExt[]=
			{
				
				{
					"beginSilenced_Pro",
					0.5
				},
			};
			reloadTime=0.09;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.0013;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=90;
			type="shot";
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
	class SR47_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			}
		};
		volume=1;
	};
	class SR47_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			}
		};
		volume=0.50;
	};
	class SR47_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
				1
			},
			
			{
				"Bill_Mods\data\New_Guns\SR_47\SR47_single_1",
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
	class SR47_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR47_Shot_SoundShader",
			"SR47_midShot_SoundShader",
			"SR47_distShot_SoundShader"
		};
	};
};
class CfgMagazines
{
	class Mag_AKM_30Rnd;
	class BW_SR_47_Magazine: Mag_AKM_30Rnd
	{
		scope=2;
		displayName="SR-47 Magazine";
		descriptionShort="30rnd SR-47 Magazine";
		model="Bill_Mods\data\New_Guns\SR_47\BW_SR_47_Magazine.p3d";
		weight=120;
		itemSize[]={1,3};
		count=30;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBW_SR_47_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Bill_Mods\data\New_Guns\SR_47\BW_SR_47_Magazine.p3d";
	};
};