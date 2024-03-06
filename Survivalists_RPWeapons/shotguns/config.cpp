class CfgPatches
{
	class Survivalists_RPWeapons_Shotguns
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "Survivalists_Weapons_JMC_Shotguns"};
	};
};
class CfgWeapons
{
  class Shotgun_Base;
	class DUB_JunkShotgun: Shotgun_Base
	{
    inventorySlot[]+={
      "Shoulder",
      "Melee",
      "SRP_Rifle1",
      "SRP_Rifle2",
      "SRP_Rifle3",
      "SRP_Rifle4",
      "SRP_Rifle5",
      "SRP_Rifle6",
      "SRP_Rifle7",
      "SRP_Rifle8",
      "SRP_Rifle9",
    };
  };
};