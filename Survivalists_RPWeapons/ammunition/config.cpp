class CfgPatches
{
	class Survivalists_RPWeapons_Ammunition
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Weapons_Magazines",
      "DZ_Weapons_Ammunition",
      "JMC_Mjolnir",
      "jmc_SnowOwl",
      "jmc_Prototype",
      "jmc_SnowOwl_Ammo",
      // "Survivalists_Weapons_JMC_Ammunition"
		};
	};
};
class CfgMagazines
{
  class Ammunition_Base;

  //=================================== MODDED OVERRIDE
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

  //=================================== CUSTOM AMMO
  class Ammo_12gaNails: Ammunition_Base
	{
		scope=0;
		displayName="Shredded Nails";
		descriptionShort="Ordinary nails chopped into small pieces.";
		model="\dz\gear\consumables\Nails_box.p3d";
		iconCartridge=4;
		weight=28;
		count=10;
		ammo="Bullet_12Nail";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,	{	"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
            {0.69999999,	{	"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
            {0.5,	{	"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
            {0,	{	"DZ\weapons\ammunition\data\rem870_ammo_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class Ammo_12gaStones: Ammunition_Base
	{
		scope=0;
		displayName="Crushed Stones";
		descriptionShort="Ordinary stones are crushed so that they are pushed into 12-round cartridges";
		model="\dz\gear\consumables\Nails_box.p3d";
		iconCartridge=4;
		weight=28;
		count=10;
		ammo="Bullet_12Nail";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\box_of_stonebullets_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,	{	"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
            {0.69999999,	{	"DZ\weapons\ammunition\data\rem870_ammo.rvmat"}},
            {0.5,	{	"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
            {0.30000001,	{	"DZ\weapons\ammunition\data\rem870_ammo_damage.rvmat"}},
            {0,	{	"DZ\weapons\ammunition\data\rem870_ammo_destruct.rvmat"}}
					};
				};
			};
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

// jmc weapons ammo override
class CfgAmmo
{
  //=================================== MODDED OVERRIDE
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
class CfgVehicles
{
  class Box_Base;
  class Inventory_Base;
//--------------------------- Gunpowder Crafting
  class SRP_Explosive_NitroCellulose: Box_Base
	{
		scope=2;
		displayName="Nitrocellulose Powder";
		descriptionShort="During combustion, in the chamber, an area is formed with a pressure of 630 kgf / sq.cm to 650, depending on the caliber. The combustion speed is 2.2 m / s. Bulk density with equipment - 0, 510 kg / l. High muzzle pressure creates a high volume of the shot and a fairly substantial return";
		model="\dz\gear\food\food_can.p3d";
		itemSize[]={2,2};
		weight=1000;
		absorbency=0.80000001;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Sokol.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class SRP_Explosive_NitroCellulose_Open
			{
				value=50;
				variable="quantity";
			};
		};
	};
  class SRP_Explosive_NitroCellulose_Open: Inventory_Base
	{
		scope=2;
		displayName="Gunpowder Nitrocellulose";
		descriptionShort="During combustion, in the chamber, an area with a pressure from 630 kgf / sq. Cm to 650 is formed, depending on the caliber. The combustion speed is 2.2 m / s. Bulk density when loaded - 0.510 kg / l. High muzzle pressure creates a high volume of the shot and a fairly significant recoil";
		model="\dz\gear\food\food_can_open.p3d";
		weight=30;
		itemSize[]={2,2};
		canBeSplit=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=1;    
    hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Sokol.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class SRP_Explosive_Pyroxylin: Box_Base
	{
		scope=2;
		displayName="Gunpowder Pyroxylin Smokeless";
		descriptionShort="It is intended for the equipment of shot or bullet hunting cartridges, which are used for firing smooth-bore guns";
		model="\dz\gear\food\food_can.p3d";
		itemSize[]={2,2};
		weight=1000;
		absorbency=0.80000001;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Sunar.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class SRP_Explosive_Pyroxylin_Open
			{
				value=50;
				variable="quantity";
			};
		};
	};
  class SRP_Explosive_Pyroxylin_Open: Inventory_Base
	{
		scope=2;
		displayName="Pyroxylin Powder Smokeless";
		descriptionShort="It is intended for equipping shot or bullet hunting cartridges, which are used for shooting from smooth-bore guns";
		model="\dz\gear\food\food_can_open.p3d";
		weight=30;
		itemSize[]={2,2};
		canBeSplit=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Sunar.paa"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class SRP_Explosive_GunPowder: Box_Base
	{
		scope=2;
		displayName="Gun Powder";
		descriptionShort="Jar of gunpowder, flammable!";
		model="\dz\gear\food\food_can.p3d";
		itemSize[]={2,2};
		weight=1000;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Poroh.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class SRP_Explosive_GunPowder_Open
			{
				value=50;
				variable="quantity";
			};
		};
	};
  class SRP_Explosive_GunPowder_Open: Inventory_Base
	{
		scope=2;
		displayName="Gun Powder";
		descriptionShort="Gunpowder can, flammable!";
		model="\dz\gear\food\food_can_open.p3d";
		weight=30;
		itemSize[]={2,2};
		canBeSplit=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=1;
    inventorySlot[]=
    {
      "SRP_AmmoGunpowder"
    };
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Poroh.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class SRP_Explosive_Fraction: Box_Base
	{
		scope=2;
		displayName="Fraction";
		descriptionShort="Jar with a fraction!";
		model="\dz\gear\food\food_can.p3d";
		itemSize[]={2,2};
		weight=1000;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Drob_can.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
		class Resources
		{
			class SRP_Explosive_Fraction_Open
			{
				value=50;
				variable="quantity";
			};
		};
	};
  class SRP_Explosive_Fraction_Open: Inventory_Base
	{
		scope=2;
		displayName="Fraction";
		descriptionShort="A can of fraction";
		model="\dz\gear\food\food_can_open.p3d";
		itemSize[]={2,2};
		weight=30;
		canBeSplit=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=1;    
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\ammunition\data\Drob_can.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
            {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
            {0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
					};
				};
			};
		};
	};

  // Casing + powder = starter kit
  // starter kit + projectile = bullet kit
  // bullet kit + workbench = bullet

//--------------------------- Pistol Bullet Crafting
  class SRP_BulletCrafting_Pistol60Count: Inventory_Base
  {
    scope=0;
		displayName="Base Bullet Crafting - Pistol";
		descriptionShort="Base Bullet Kit Description";
    itemSize[]={1,1};
		weight=12;
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=60;        
  };
  class SRP_BulletCrafting_Copper: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Generic Copper Bullet Tips";
		descriptionShort="Forged bullet tips. Useful for crafting ammunition.";
		model="Survivalists_RPWeapons\ammunition\bullet9mm.p3d";    
    inventorySlot[]=
    {
      "SRP_AmmoBullets"
    }; 
	};






////////////////////////////////////////////// eventually remove everything below


  class SRP_EmptyCasingPistol_9x19: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Cartridge Cases for 9x19";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet9mmcasingempty.p3d";
	};
	class SRP_ProjectilePistol_9x19: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="9x19 Caliber Bullets";
		descriptionShort="9x19 bullets";
		model="Survivalists_RPWeapons\ammunition\bullet9mm.p3d";    
	};
  class SRP_EmptyCasingPistol_357: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Cartridge Cases for .357";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet357casingempty.p3d";
	};
	class SRP_ProjectilePistol_357: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName=".357 Caliber Bullets";
		descriptionShort=".357 bullets";
		model="Survivalists_RPWeapons\ammunition\bullet357.p3d";    
	};
  class SRP_EmptyCasingPistol_22: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Cartridge Cases for .22";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet22mmcasingempty.p3d";
	};
	class SRP_ProjectilePistol_22: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName=".22 Caliber Bullets";
		descriptionShort=".22 bullets";
		model="Survivalists_RPWeapons\ammunition\bullet22mm.p3d";    
	};
  class SRP_EmptyCasingPistol_45ACP: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Cartridge Cases for .45ACP";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet45acpcasingempty.p3d";
	};
	class SRP_ProjectilePistol_45ACP: SRP_BulletCrafting_Pistol60Count 
	{
		scope=2;
		displayName="45ACP Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet45acp.p3d";    
	};
  class SRP_EmptyCasingPistol_380: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Cartridge Cases for 380";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet380casingempty.p3d";
	};
	class SRP_ProjectilePistol_380: SRP_BulletCrafting_Pistol60Count 
	{
		scope=2;
		displayName="380 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet380.p3d";    
	};
//------------------------------ Rifle Bullet Crafting
  class SRP_BulletCrafting_Rifle40Count: Inventory_Base
  {
    scope=0;
		displayName="Base Bullet Crafting - Pistol";
		descriptionShort="Base Bullet Kit Description";
    itemSize[]={1,1};
		weight=12;
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=40;    
  };
  class SRP_EmptyCasingRifle_556: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 5.56";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet556casingempty.p3d";
	};
	class SRP_ProjectileRifle_556: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="5.56 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet556.p3d";    
	};
  class SRP_EmptyCasingRifle_545: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 5.45";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet545casingempty.p3d";
	};
	class SRP_ProjectileRifle_545: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="5.45 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet545.p3d";    
	};
  class SRP_EmptyCasingRifle_762x39: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 7.62x39";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet762x39casingempty.p3d";
	};
	class SRP_ProjectileRifle_762x39: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="7.62x39 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet762x39.p3d";    
	};
  class SRP_EmptyCasingRifle_762x54: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 7.62x54";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet762x54casingempty.p3d";
	};
	class SRP_ProjectileRifle_762x54: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="7.62x54 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet762x54.p3d";    
	};
  class SRP_EmptyCasingRifle_308: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 308";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet308casingempty.p3d";
	};
	class SRP_ProjectileRifle_308: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="308 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet308.p3d";    
	};
  class SRP_EmptyCasingRifle_9x39: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 9x39";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet9x39casingempty.p3d";
	};
	class SRP_ProjectileRifle_9x39: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="9x39 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet9x39.p3d";    
	};
  class SRP_EmptyCasingRifle_300Blackout: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 300 Blackout";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet300blackoutcasingempty.p3d";
	};
	class SRP_ProjectileRifle_300Blackout: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="300 Blackout Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet300blackout.p3d";    
	};
  class SRP_EmptyCasingRifle_50Cal: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 50 Cal";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet50Calcasingempty.p3d";
	};
	class SRP_ProjectileRifle_50Cal: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="50 Cal Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet50Cal.p3d";    
	};
  class SRP_EmptyCasingRifle_12x7: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="Cartridge Cases for 12.7";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_RPWeapons\ammunition\bullet12x7casingempty.p3d";
	};
	class SRP_ProjectileRifle_12x7: SRP_BulletCrafting_Rifle40Count
	{
		scope=2;
		displayName="12.7 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_RPWeapons\ammunition\bullet12x7.p3d";    
	};

// --------------- Shotgun Bullet Kits and Pellets
  class SRP_BulletCrafting_Shotgun60Count: Inventory_Base
  {
    scope=0;
		displayName="Base Bullet Crafting - Shotgun";
		descriptionShort="Base Bullet Kit Description";
    itemSize[]={1,1};
		weight=28;
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=60;    
  };
  class SRP_EmptyCasing_Shotgun: SRP_BulletCrafting_Shotgun60Count
  {
    scope=2;
		displayName="Shotgun Casings - Empty";
		descriptionShort="Empty 12 gauge casings. Ready to be filled with gun powder and bullets.";
		model="Survivalists_RPWeapons\ammunition\shotguncasingempty.p3d";
  };
  class SRP_ProjectileShotgun_Stone: SRP_BulletCrafting_Shotgun60Count
  {
		scope=2;
		displayName="12 Gauge Projectiles - Crushed Stone";
		descriptionShort="Stones crushed into chunks small enough for 12 gauge casings.";
		model="Survivalists_RPWeapons\ammunition\crushedstone.p3d";    
  };
  class SRP_ProjectileShotgun_Nail: SRP_BulletCrafting_Shotgun60Count
  {
		scope=2;
		displayName="12 Gauge Projectiles - Chopped Nail";
		descriptionShort="Nails chopped into chunks small enough for 12 gauge casings.";
		model="Survivalists_RPWeapons\ammunition\crushednail.p3d";    
  };
  class SRP_ProjectileShotgun_Pellet: SRP_BulletCrafting_Shotgun60Count
  {
		scope=2;
		displayName="12 Gauge Projectiles - Pellet";
		descriptionShort="Pellets pulled from other bullets small enough for 12 gauge casings.";
		model="Survivalists_RPWeapons\ammunition\metalball.p3d";    
  };
};