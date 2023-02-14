class CfgPatches
{
	class Survivalists_RPWeapons_Rifles_ttr700
	{
		units[]=
		{
			"ttr700"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
      "ttr700"
			// "Survivalists_Weapons_JMC_Rifles_ttr700"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class SSG82_Base;
	class ttr700: SSG82_Base
	{
		scope=2;
		displayName="R700";
		descriptionShort="Espen Industries. R700 is magfed bolt action rifle chambered in .308 Winchester. Inspected by Master Gunsmith: Turko";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700.p3d";
    hiddenSelections[]=
		{
			"Chassis"
		};
		simpleHiddenSelections[]=
		{
			"Chassis"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttr700\data\R700_Chassis_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ttr700\data\R700_Chassis.rvmat"
		};
		attachments[]={"weaponOpticsHunting","weaponMuzzleM4","weaponWrap","R700Chassis","R700HndGrd"};
		magazines[]={"ttr700x5mag","ttr700x8mag"};
		magazineSwitchTime=0.5;
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		ejectType=0;
		WeaponLength=1.18986;
		barrelArmor=2.5;
		weight=12000;
		chamberSize=1;
		itemSize[]={9,3};
	};
  class ttr700_Rare: ttr700
	{
		scope=2;
		displayName="Erik's Gun";
		hiddenSelections[]=
		{
			"Chassis"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttr700\data\R700_Chassis_Rare_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ttr700\data\R700_Chassis.rvmat"
		};
	};
	class ttr700_Wood: ttr700
	{
		scope=2;
		hiddenSelections[]=
		{
			"Chassis"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\rifles\ttr700\data\R700_Chassis_Wood_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RPWeapons\rifles\ttr700\data\R700_Chassis_Wood.rvmat"
		};
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
};
class CfgMagazines
{
	class Mag_FAL_20Rnd;
	class ttr700x5mag: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="R700 Magazine";
		descriptionShort="5 round magazine for the R700.";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700x5mag.p3d";
		weight=120;
		itemSize[]={2,2};
		count=5;
   		hiddenSelections[]={"zbytek"};
    	hiddenSelectionsTextures[]={"Survivalists_RPWeapons\rifles\ttr700\data\R700_Magazine_CO.paa"};
	};
	class ttr700x8mag: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="R700 Magazine";
		descriptionShort="Extended magazine for the R700.";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700x8mag.p3d";
		weight=120;
		itemSize[]={2,2};
		count=8;
   		hiddenSelections[]={"zbytek"};
    	hiddenSelectionsTextures[]={"Survivalists_RPWeapons\rifles\ttr700\data\R700_Magazine_CO.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyttr700x5mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700x5mag.p3d";
	};
	class Proxyttr700x8mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Survivalists_RPWeapons\rifles\ttr700\ttr700x8mag.p3d";
	};
};