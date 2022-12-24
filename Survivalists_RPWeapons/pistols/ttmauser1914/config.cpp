class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_ttmauser1914
	{
		units[]=
		{
			"ttmauser1914"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
      // "Survivalists_Weapons_JMC_Pistols_ttmauser1914"
		};
		magazines[]={"Mag_CZ75_15Rnd"};
		ammo[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class CZ75;
	class ttmauser1914: CZ75
	{
		scope=2;
		displayName="Mauser 1914";
		descriptionShort="S.T.A.G. Industries. Mauser 1914 is a compact 9mm semi automatic pistol manufactured in Germany. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\ttmauser1914\ttmauser1914.p3d";
		attachments[]={};
		magazines[]={"Mag_CZ75_15Rnd"};
		magazineSwitchTime=0.5;
		chamberableFrom[]={"Ammo_9x19"};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=5000;
		chamberSize=1;
		itemSize[]={3,2};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttmauser1914\data\ttmauser1914_co.paa"};
	};
};