class CfgPatches
{
	class Survivalists_Mods_Weapons
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "Survivalists_Mods"
		};
	};
};

class CfgAmmoTypes
{
	class AType_Bullet_12Nail
	{
		name="Bullet_12Nail";
	};
	class AType_Bullet_12Stone
	{
		name="Bullet_12Stone";
	};
};

class CfgWeapons
{
  class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Melee"
		};
	};
};

class CfgVehicles
{
  class SRP_KitBase;

  class SRP_WoodAttachmentGunKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Attachment Kit - Wood";
		descriptionShort="A kit for creating wooden gun attachments.";
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\srp_weaponkitbase_co.paa"
		};
	};

  class SRP_WeaponLongBarrel_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Long Barreled Gun";
		descriptionShort="A kit for assembling a long barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\srp_weaponkitbase_co.paa"
		};
	};

  class SRP_WeaponMediumBarrel_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Medium Barreled Gun";
		descriptionShort="A kit for assembling a medium length barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"      
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\srp_weaponkitbase_co.paa"
		};
	};

  class SRP_WeaponShortBarrel_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Short Barreled Gun";
		descriptionShort="A kit for assembling a short length barreled weapon. Bring together all the parts and assemble.";
    attachments[]=
    {
      "SRP_GunBarrel",
      "SRP_MainReceiver",
      "SRP_Trigger",
      "SRP_Hammer",
      "SRP_GunBody",
      "SRP_GunGrip",
      "SRP_GunButtStock"      
    };
    hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\srp_weaponkitbase_co.paa"
		};
	};
};
