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

// jmc weapons
class CfgAmmo
{
	class Bullet_Base;
	class jmc_SnowOwl_Bullet: Bullet_Base
	{
		scope=0;
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class jmc_SnowOwl_Ammo: Ammunition_Base
	{
		scope=0;
	};
  class jmc_SnowOwl_Mag_Base;
  class jmc_SnowOwl_Mag: jmc_SnowOwl_Mag_Base
	{
		scope=0;
	};
  class jmc_Prototype_Mag_Base;
  class jmc_Prototype_Mag: jmc_Prototype_Mag_Base
	{
		scope=0;
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
  class Pistol_Base;

	class Rifle_Base: RifleCore
	{
		inventorySlot[]+=
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

  class Flaregun_Base: Pistol_Base
	{
    inventorySlot[]+=
		{
   		"SRP_GunDerringer"
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
