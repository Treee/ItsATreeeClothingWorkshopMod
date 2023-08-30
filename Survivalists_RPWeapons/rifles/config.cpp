class CfgPatches
{
	class Survivalists_RPWeapons_Rifles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
      "jmc_SnowOwl",
      "jmc_Prototype",
      "Survivalists_Weapons_JMC_Rifles",
      "MassBuildings", // rifle core overrides
      "Mass_Textures", 
		};
	};
};

class CfgWeapons
{
  class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]+=
		{
      "SRP_Rifle1",
      "SRP_Rifle2",
      "SRP_Rifle3",
      "SRP_Rifle4",
      "SRP_Rifle5",
      "SRP_Rifle6",
      "SRP_Rifle7",
      "SRP_Rifle8",
      "SRP_Rifle9",
      "SRP_Rifle10",
		};
	};

  class jmc_SnowOwl_Base;
  class jmc_SnowOwl: jmc_SnowOwl_Base
	{
		scope=0;
	};
  class jmc_Prototype_Base;
	class jmc_Prototype_Blue: jmc_Prototype_Base
	{
		scope=0;
	};
	class jmc_Prototype_Red: jmc_Prototype_Base
	{
		scope=0;
	};
	class jmc_Prototype_White: jmc_Prototype_Base
	{
		scope=0;
	};
};