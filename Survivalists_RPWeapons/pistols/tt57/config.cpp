class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_tt57
	{
		units[]=
		{
			"tt57tan"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "tt57blk",
      "tt57tan"
			// "Survivalists_Weapons_JMC_Pistols_tt57"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class CfgWeapons
{
	class Glock19;
	class tt57tan: Glock19
	{
		scope=2;
		displayName="FN Five-SeveN Coyote";
		descriptionShort="Espen Industries. FN Five-SeveN is a semi-automatic pistol designed and manufactured by FN Herstal in Belgium. Redesigned by Espen Industries to accept 9x39mm. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\tt57\tt57.p3d";
		attachments[]={"pistolFlashlight","PistolRail","pistolOptics"};
		magazines[]={"tt57mag"};
		magazineSwitchTime=3.5;
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=18000;
		chamberSize=1;
		itemSize[]={3,2};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\tt57\data\tt57tan_co.paa"};
	};
  class tt57blk: tt57tan
	{
		scope=2;
		displayName="FN Five-SeveN Gray";
		descriptionShort="S.T.A.G Industries. FN Five-SeveN is a semi-automatic pistol designed and manufactured by FN Herstal in Belgium. Redesigned by S.T.A.G. Industries to accept 9x39mm. Inspected by Master Gunsmith: Turko";
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\tt57\data\tt57blk_co.paa"};
	};
};
class CfgMagazines
{
	class Mag_Glock_15Rnd;
	class tt57mag: Mag_Glock_15Rnd
	{
		scope=2;
		displayName="FN Five-SeveN Magazine";
		descriptionShort="Espen Industries. FN Five-SeveN is a semi-automatic pistol designed and manufactured by FN Herstal in Belgium. Redesigned by Espen Industries to accept 9x39mm. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\tt57\tt57mag.p3d";
		weight=120;
		itemSize[]={1,2};
		count=14;
    ammo="Bullet_9x39";
    ammoItems[]=
    {
      "Ammo_9x39",
      "Ammo_9x39AP"
    };
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\tt57\data\tt57mag_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxytt57mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\pistols\tt57\tt57mag.p3d";
	};
};