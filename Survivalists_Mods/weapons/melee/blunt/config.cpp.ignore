class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blunt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class BaseballBat;

  class SRP_KitBase;

  class SRP_WeaponBluntKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Blunt";
		descriptionShort="A Weapon Kit - Still needs a bit of work";
	};
  
	class Macerator: BaseballBat
	{
		scope=2;
		displayName="Macerator";
		descriptionShort="A heavy mace that is used for bashing. Created by Turko.";
		model="Survivalists_Mods\weapons\melee\blunt\srp_macerator.p3d";
		itemSize[]={2,4};
	};


  class SRP_WeaponBluntMacerator_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Macerator";
		descriptionShort="A blunt weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};
};