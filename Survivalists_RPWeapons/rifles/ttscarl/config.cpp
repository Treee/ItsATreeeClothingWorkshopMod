class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttscarl
	{
		units[]=
		{
			"ttscarl"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"ttscarl"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class FAL_Base;
	class ttscarl: FAL_Base
	{
		scope=2;
		displayName="ESP-SCR";
		descriptionShort="ESP-SCR is a gas-operated automatic rifle developed by Espen Industries. Chambered in 5.56x45, compatible with STANAG & CMag magazines.";
		model="Survivalists_RPWeapons\rifles\ttscarl\ttscarl.p3d";
		hasRailFunctionality=0;
		attachments[]=
		{
			"ScarHndGrd",
			"ScarBttStck",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"weaponWrap"
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
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_CO.paa"
		};
		itemSize[]={7,3};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={1,1,1};
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
						{1,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}},						
						{0,{"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR.rvmat"}}
					};
				};
			};
		};
	};
	class ttscarl_Tan: ttscarl
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttscarl\data\ESP_SCAR_Tan_CO.paa"
		};
	};
};