class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ESP_M14
	{
		units[]=
		{
			"ESP_M14"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
      "Survivalists_Weapons_JMC_Rifles_ESP_M14"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Ruger1022;
	class ESP_M14: Ruger1022
	{
		scope=2;
		displayName="L&S M14";
		descriptionShort="The L&S M14 is part of a family of US Semi-automatic rifles used by the United States and the numerous other countries during the 20th century. Chambered in .308 it was recently adapted to takes LAR magazines.";
		model="Survivalists_RPWeapons\rifles\ESP_M14\ESP_M14.p3d";
		hiddenSelections[]=
		{
			"zbytek",
			"Optic"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_CO.paa",
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat",
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"
		};
		attachments[]=
		{
			"SRP_StockPouch",
			"weaponWrap"
		};
		itemSize[]={8,3};
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd"
		};
		recoilModifier[]={3,3,4};
		swayModifier[]={2,2,1.1};
		spawnDamageRange[]={0,0.60000002};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat","Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat","Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat","Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat","Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat","Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"}}
					};
				};
			};
		};
		modes[]=
		{
			"SemiAuto"	
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Famas_Shot_SoundSet",
				"Famas_Tail_SoundSet",
				"Famas_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Famas_silencer_SoundSet",
					"Famas_silencerTail_SoundSet",
					"Famas_silencerInteriorTail_SoundSet"
				},
				
				{
					"Famas_silencerHomeMade_SoundSet",
					"Famas_silencerHomeMadeTail_SoundSet",
					"Famas_silencerInteriorHomeMadeTail_SoundSet"
				}
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
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
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
	};
	class ESP_M14_Black: ESP_M14
	{
		scope=2;
		displayName="ESP-M14";
		descriptionShort="The ESP-M14 is part of a family of US Semi-automatic rifles used by the United States and the numerous other countries during the 20th century. Chambered in .308 it was recently adapted to takes LAR magazines.";
		model="Survivalists_RPWeapons\rifles\ESP_M14\ESP_M14.p3d";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Black_CO.paa",
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14.rvmat",
			"Survivalists_RPWeapons\rifles\ESP_M14\data\ESP_M14_Optic.rvmat"
		};
	};
};