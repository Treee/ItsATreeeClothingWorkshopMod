class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttbar
	{
		units[]=
		{
			"ttbar"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      // "ttbar"
			"Survivalists_Weapons_JMC_Rifles_ttbar"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Ruger1022;
  class ttbar: Ruger1022
	{
		scope=2;
		displayName="ESP-1918A2";
		descriptionShort="The ESP-M1918A2 is a family of US automatic rifles and machineguns used by the United States and the numerous other countries during the 20th century. Chambered in .308 it was recently adapted to takes LAR magazines.";
		model="Survivalists_RPWeapons\rifles\ttbar\ttbar.p3d";
		attachments[]=
		{
			"SRP_StockPouch",
			"RISAdapter",
			"weaponOpticsHunting",
			"weaponOptics",
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
		recoilModifier[]={2,2.5,3};
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
						{1,{"Survivalists_RPWeapons\rifles\ttbar\data\poly.rvmat","Survivalists_RPWeapons\rifles\ttbar\data\wood.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttbar\data\poly.rvmat","Survivalists_RPWeapons\rifles\ttbar\data\wood.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttbar\data\poly.rvmat","Survivalists_RPWeapons\rifles\ttbar\data\wood.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttbar\data\poly.rvmat","Survivalists_RPWeapons\rifles\ttbar\data\wood.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttbar\data\poly.rvmat","Survivalists_RPWeapons\rifles\ttbar\data\wood.rvmat"}}
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
};