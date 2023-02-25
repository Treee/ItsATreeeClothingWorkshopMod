class CfgPatches
{
	class Survivalists_RPWeapons_Pistols_ttl35
	{
		units[]=
		{
			"ttl35"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "ttl35"
			// "Survivalists_Weapons_JMC_Pistols_ttl35",
		};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class CfgWeapons
{
	class CZ75;
	class ttl35: CZ75
	{
		scope=2;
		displayName="Lahti L-35";
		descriptionShort="S.T.A.G. Industries. The Lahti L-35 is a recoil operated, single-action, locked breech firearm fitted with a concealed hammer. Chambered in 9x19mm. Product of Finland. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\pistols\ttl35\ttl35.p3d";
		attachments[]={};
		magazines[]={"ttl35mag"};
		magazineSwitchTime=0.5;
		chamberableFrom[]={"Ammo_9x19"};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=12000;
		chamberSize=1;
		itemSize[]={3,2};
    hiddenSelections[]={"zbytek","Wood"};
		hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttl35\data\ttl35_co.paa","Survivalists_RPWeapons\pistols\ttl35\data\ttl35_co.paa"};
		hiddenSelectionsMaterials[]={"Survivalists_RPWeapons\pistols\ttl35\data\base.rvmat","Survivalists_RPWeapons\pistols\ttl35\data\base_wood.rvmat"};
	};
};
class CfgMagazines
{
	class Mag_CZ75_15Rnd;
	class ttl35mag: Mag_CZ75_15Rnd
	{
		scope=2;
		displayName="Lahti L-35 Magazine";
		descriptionShort="8 round 9x19 magazine for the Lahti L-35 pistol.";
		model="Survivalists_RPWeapons\pistols\ttl35\ttl35mag.p3d";
		weight=120;
		itemSize[]={1,2};
		count=8;
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_RPWeapons\pistols\ttl35\data\ttl35_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyttl35mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\pistols\ttl35\ttl35mag.p3d";
	};
};