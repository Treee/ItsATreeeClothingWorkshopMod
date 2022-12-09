class CfgPatches
{
	class Survivalists_RPWeapons_rifles_ttkrp39
	{
		units[]=
		{
			"ttkrp39"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Firearms_VSS",
      "Survivalists_Weapons_JMC_rifles_ttkrp39"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class VSS;
	class ttkrp39: VSS
	{
		scope=2;
		displayName="KRP-39";
		descriptionShort="S.T.A.G. Industries. KRP-39 is a Soviet made weapon chambered in .45 ACP. Used mostly by paramilitary organizations for covert missions. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttkrp39\ttkrp39.p3d";
		attachments[]={};
		chamberableFrom[]={"Ammo_45ACP"};
		magazines[]={"Mag_UMP_25Rnd"};
		magazineSwitchTime=0.5;
		ejectType=1;
		weight=1840;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1};
		itemSize[]={5,2};
	};
};