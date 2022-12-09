class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_Junkak
	{
		units[]=
		{
			"junkak"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"Survivalists_Weapons_JMC_Rifles_Junkak"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class AKM_Base;
	class junkak: AKM_Base
	{
		scope=2;
		displayName="Junker AKM";
		descriptionShort="Home-made junker weapon. Seems to be made out of old materials, yet it still... works. Chambered in 7.62x39mm.";
		model="Survivalists_RPWeapons\rifles\junkak\tt_junkak.p3d";
		itemSize[]={7,3};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\junkak\data\junkak_co.paa"
		};
		attachments[]=
		{
			"weaponButtstockAK",
			"weaponHandguardAK",
			"weaponOpticsAK",
			"AKRISAdapter",
			"weaponOptics",
			"weaponFlashlight",
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
			"Mag_AKM_Drum75Rnd_Black"
		};
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
						{1,{"Survivalists_RPWeapons\rifles\junkak\data\base.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\junkak\data\base.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\junkak\data\base.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\junkak\data\base.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\junkak\data\base.rvmat"}}
					};
				};
			};
		};
		modes[]={"SemiAuto"};
	};
};