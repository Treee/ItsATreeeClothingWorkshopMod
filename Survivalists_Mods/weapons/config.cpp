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
  
  class MeleeDamage;
	class MeleeMjolnir: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=0;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
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

  class Derringer_Base: Pistol_Base
	{
    itemSize[]={2,2};
		inventorySlot[]+=
		{
   		"SRP_GunDerringer"
		};
	};

  class Flaregun_Base: Pistol_Base
	{
    inventorySlot[]+=
		{
   		"SRP_GunDerringer"
		};
  };

};
