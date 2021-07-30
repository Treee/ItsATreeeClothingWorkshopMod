class CfgPatches
{
	class Survivalists_Mods_Weapons_Ammunition
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Weapons_Magazines",
      "DZ_Weapons_Ammunition",
      "Survivalists_Mods"
		};
	};
};
class CfgMagazines
{
  class Ammunition_Base;
  class Ammo_12gaNails: Ammunition_Base  // BP1_nail_bullet
	{
		scope=2;
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

  class Ammo_12gaStones: Ammunition_Base  // BP1_stone_bullet
	{
		scope=2;
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
			"Survivalists_Mods\weapons\ammunition\data\box_of_stonebullets_co.paa"
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

class CfgVehicles
{
  class Box_Base;
  class Inventory_Base;
  class Ammunition_Base; // do not use in here

  class SRP_Explosive_NitroCellulose: Box_Base // BP1_Paw_Sokol_cans
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
			"Survivalists_Mods\weapons\ammunition\data\Sokol.paa"
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
  class SRP_Explosive_NitroCellulose_Open: Inventory_Base  // BP1_Paw_Sokol_cans_open
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
			"Survivalists_Mods\weapons\ammunition\data\Sokol.paa"
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

	class SRP_Explosive_Pyroxylin: Box_Base // BP1_Paw_Sunar_cans
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
			"Survivalists_Mods\weapons\ammunition\data\Sunar.paa"
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
  class SRP_Explosive_Pyroxylin_Open: Inventory_Base  // BP1_Paw_Sunar_cans_open
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
			"Survivalists_Mods\weapons\ammunition\data\Sunar.paa"
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

	class SRP_Explosive_GunPowder: Box_Base // BP1_Pawder
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
			"Survivalists_Mods\weapons\ammunition\data\Poroh.paa"
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

  class SRP_Explosive_GunPowder_Open: Inventory_Base  // BP1_Pawder_open
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
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\Poroh.paa"
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

	class SRP_Explosive_Fraction: Box_Base  // BP1_Drob
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
			"Survivalists_Mods\weapons\ammunition\data\Drob_can.paa"
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

  class SRP_Explosive_Fraction_Open: Inventory_Base  // BP1_Drob_open
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
			"Survivalists_Mods\weapons\ammunition\data\Drob_can.paa"
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

	class SRP_Gunpowder_open: Inventory_Base
	{
		scope=2;
		displayName="Gunpowder";
		descriptionShort="Gunpowder can, flammable!";
		model="\dz\gear\food\food_can_open.p3d";
		itemSize[]={2,2};
		rotationFlags=1;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=40;
		fragility=0.0099999998;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\Poroh.paa"
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
    itemSize[]={2,2};
		weight=12;
		canBeSplit=1;
		varQuantityInit=60;
		varQuantityMin=0;
		varQuantityMax=60;
  };
  class SRP_EmptyCasingPistol_9x19: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="Cartridge Cases for 9x19";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet9mmcasingempty.p3d";
	};
  class SRP_StarterKitPistol_9x19: SRP_BulletCrafting_Pistol60Count
  {
    scope=2;
		displayName="9x19 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet9mmcasingpowder.p3d";
  };
	class SRP_ProjectilePistol_9x19: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="9x19 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet9mm.p3d";
	};
	class SRP_BulletKitPistol_9x19: SRP_BulletCrafting_Pistol60Count
	{
		scope=2;
		displayName="9x19 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet9mmcasingpellet.p3d";
	};


  class SRP_EmptyCasingPistol_45ACP: SRP_BulletCrafting_Pistol60Count // SRP_45ACP_Casings
	{
		scope=2;
		displayName="Cartridge Cases for .45ACP";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet9mmcasingempty.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa"
		};
	};
  class SRP_StarterKitPistol_45ACP: SRP_BulletCrafting_Pistol60Count  // SRP_45ACP_Powderkit
  {
    scope=2;
		displayName="45ACP Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet9mmcasingpowder.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa"
		};
  };
	class SRP_ProjectilePistol_45ACP: SRP_BulletCrafting_Pistol60Count  // SRP_45ACP_Bullets
	{
		scope=2;
		displayName="45ACP Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet9mm.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa"
		};
	};
	class SRP_BulletKitPistol_45ACP: SRP_BulletCrafting_Pistol60Count  // SRP_45ACP_Bulletskit
	{
		scope=2;
		displayName="45ACP Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet9mmcasingpellet.p3d";
    hiddenSelections[]=
		{
			"zbytek",
      "bullet"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa",
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa",
		};
	};

  class SRP_EmptyCasingPistol_380: SRP_BulletCrafting_Pistol60Count // SRP_380_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 380";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet380casingempty.p3d";
	};
  class SRP_StarterKitPistol_380: SRP_BulletCrafting_Pistol60Count  // SRP_380_Powderkit
  {
    scope=2;
		displayName="380 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet380casingpowder.p3d";
  };
	class SRP_ProjectilePistol_380: SRP_BulletCrafting_Pistol60Count  // SRP_380_Bullets
	{
		scope=2;
		displayName="380 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet380.p3d";
	};
	class SRP_BulletKitPistol_380: SRP_BulletCrafting_Pistol60Count  // SRP_380_Bulletskit
	{
		scope=2;
		displayName="380 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet380casingpellet.p3d";
	};


  //------------------------------ Rifle Bullet Crafting

  class SRP_BulletCrafting_Rifle40Count: Inventory_Base
  {
    scope=0;
		displayName="Base Bullet Crafting - Pistol";
		descriptionShort="Base Bullet Kit Description";
    itemSize[]={2,2};
		weight=12;
		canBeSplit=1;
		varQuantityInit=40;
		varQuantityMin=0;
		varQuantityMax=40;
  };
  class SRP_EmptyCasingRifle_556: SRP_BulletCrafting_Rifle40Count  // SRP_556x45_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 5.56";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet556casingempty.p3d";
	};
  class SRP_StarterKitRifle_556: SRP_BulletCrafting_Rifle40Count  // SRP_556x45_Powderkit
  {
    scope=2;
		displayName="5.56 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet556casingpowder.p3d";
  };
	class SRP_ProjectileRifle_556: SRP_BulletCrafting_Rifle40Count  // SRP_556x45_Bullets
	{
		scope=2;
		displayName="5.56 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet556.p3d";
	};
	class SRP_BulletKitRifle_556: SRP_BulletCrafting_Rifle40Count  // SRP_556x45_Bulletskit
	{
		scope=2;
		displayName="5.56 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet556casingpellet.p3d";
	};


  class SRP_EmptyCasingRifle_545: SRP_BulletCrafting_Rifle40Count  // SRP_545x39_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 5.45";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet545casingempty.p3d";
	};
  class SRP_StarterKitRifle_545: SRP_BulletCrafting_Rifle40Count  // SRP_545x39_Powderkit
  {
    scope=2;
		displayName="5.45 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet545casingpowder.p3d";
  };
	class SRP_ProjectileRifle_545: SRP_BulletCrafting_Rifle40Count  // SRP_545x39_Bullets
	{
		scope=2;
		displayName="5.45 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet545.p3d";
	};
	class SRP_BulletKitRifle_545: SRP_BulletCrafting_Rifle40Count  // SRP_545x39_Bulletskit
	{
		scope=2;
		displayName="5.45 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet545casingpellet.p3d";
	};

  class SRP_EmptyCasingRifle_762x39: SRP_BulletCrafting_Rifle40Count  // SRP_762x39_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 7.62x39";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39casingempty.p3d";
	};
  class SRP_StarterKitRifle_762x39: SRP_BulletCrafting_Rifle40Count  // SRP_762x39_Powderkit
  {
    scope=2;
		displayName="7.62x39 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39casingpowder.p3d";
  };
	class SRP_ProjectileRifle_762x39: SRP_BulletCrafting_Rifle40Count  // SRP_762x39_Bullets
	{
		scope=2;
		displayName="7.62x39 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39.p3d";
	};
	class SRP_BulletKitRifle_762x39: SRP_BulletCrafting_Rifle40Count  // SRP_762x39_Bulletskit
	{
		scope=2;
		displayName="7.62x39 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39casingpellet.p3d";
	};

  class SRP_EmptyCasingRifle_762x54: SRP_BulletCrafting_Rifle40Count  // SRP_762x54_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 7.62x54";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54casingempty.p3d";
	};
  class SRP_StarterKitRifle_762x54: SRP_BulletCrafting_Rifle40Count  // SRP_762x54_Powderkit
  {
    scope=2;
		displayName="7.62x54 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54casingpowder.p3d";
  };
	class SRP_ProjectileRifle_762x54: SRP_BulletCrafting_Rifle40Count  // SRP_762x54_Bullets
	{
		scope=2;
		displayName="7.62x54 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54.p3d";
	};
	class SRP_BulletKitRifle_762x54: SRP_BulletCrafting_Rifle40Count  // SRP_762x54_Bulletskit
	{
		scope=2;
		displayName="7.62x54 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54casingpellet.p3d";
	};

  class SRP_EmptyCasingRifle_308: SRP_BulletCrafting_Rifle40Count  // SRP_308_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 308";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54casingempty.p3d";
	};
  class SRP_StarterKitRifle_308: SRP_BulletCrafting_Rifle40Count  // SRP_308_Powderkit
  {
    scope=2;
		displayName="308 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54casingpowder.p3d";
  };
	class SRP_ProjectileRifle_308: SRP_BulletCrafting_Rifle40Count  // SRP_308_Bullets
	{
		scope=2;
		displayName="308 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack2_co.paa"
		};
	};
	class SRP_BulletKitRifle_308: SRP_BulletCrafting_Rifle40Count  // SRP_308_Bulletskit
	{
		scope=2;
		displayName="308 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x54casingpellet.p3d";
    hiddenSelections[]=
		{
			"bullet"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack2_co.paa"
		};
	};

  class SRP_EmptyCasingRifle_9x39: SRP_BulletCrafting_Rifle40Count  // SRP_9x39_Casings
	{
		scope=2;
		displayName="Cartridge Cases for 9x39";
		descriptionShort="Fill with gunpowder and bullets to complete.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39casingempty.p3d";
	};
  class SRP_StarterKitRifle_9x39: SRP_BulletCrafting_Rifle40Count  // SRP_9x39_Powderkit
  {
    scope=2;
		displayName="9x39 Ammo Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39casingpowder.p3d";
  };
	class SRP_ProjectileRifle_9x39: SRP_BulletCrafting_Rifle40Count  // SRP_9x39_Bullets
	{
		scope=2;
		displayName="9x39 Caliber Bullets";
		descriptionShort="";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa"
		};
	};
	class SRP_BulletKitRifle_9x39: SRP_BulletCrafting_Rifle40Count  // SRP_9x39_Bulletskit
	{
		scope=2;
		displayName="9x39 Bullet Kit";
		descriptionShort="It remains to clog on a workbench and you can shoot.";
		model="Survivalists_Mods\weapons\ammunition\bullet762x39casingpellet.p3d";
    hiddenSelections[]=
		{
			"bullet"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\bulletpack1_co.paa"
		};
	};

  // --------------- Shotgun Bullet Kits and Pellets
  class SRP_BulletCrafting_Shotgun60Count: Inventory_Base
  {
    scope=0;
		displayName="Base Bullet Crafting - Shotgun";
		descriptionShort="Base Bullet Kit Description";
    itemSize[]={2,2};
		weight=28;
		canBeSplit=1;
		varQuantityInit=60;
		varQuantityMin=0;
		varQuantityMax=60;
  };

  class SRP_EmptyCasing_Shotgun: SRP_BulletCrafting_Shotgun60Count
  {
    scope=2;
		displayName="Shotgun Casings - Empty";
		descriptionShort="Empty 12 gauge casings. Ready to be filled with gun powder and bullets.";
		model="Survivalists_Mods\weapons\ammunition\shotguncasingempty.p3d";
  };

  class SRP_Shotgun_StarterKit: SRP_BulletCrafting_Shotgun60Count
  {
    scope=2;
		displayName="Shotgun Bullet Starter Kit";
		descriptionShort="Casings and gun powder combined. Ready for a projectile to be added.";
		model="Survivalists_Mods\weapons\ammunition\shotguncasingpowder.p3d";
  };

  class SRP_ProjectileShotgun_Stone: SRP_BulletCrafting_Shotgun60Count
  {
		scope=2;
		displayName="12 Gauge Projectiles - Crushed Stone";
		descriptionShort="Stones crushed into chunks small enough for 12 gauge casings.";
		model="Survivalists_Mods\weapons\ammunition\crushedstone.p3d";
  };

  class SRP_BulletKitShotgun_12GAStone: SRP_BulletCrafting_Shotgun60Count  // SRP_12ga_Stonekit
  {
		scope=2;
		displayName="12 Gauge Casings + Stone";
		descriptionShort="12 gauge casings loaded with gunpowder and crushed stones.";
		model="Survivalists_Mods\weapons\ammunition\shotguncasingstone.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\shotgunshell_teal_co.paa"
		};
  };
  
  class SRP_ProjectileShotgun_Nail: SRP_BulletCrafting_Shotgun60Count
  {
		scope=2;
		displayName="12 Gauge Projectiles - Chopped Nail";
		descriptionShort="Nails chopped into chunks small enough for 12 gauge casings.";
		model="Survivalists_Mods\weapons\ammunition\crushednail.p3d";
  };
  class SRP_BulletKitShotgun_12GANail: SRP_BulletCrafting_Shotgun60Count  // SRP_12ga_Nailskit
  {
		scope=2;
		displayName="12 Gauge Casings + Nails";
		descriptionShort="12 gauge casings loaded with gunpowder and nails.";
		model="Survivalists_Mods\weapons\ammunition\shotguncasingnail.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\ammunition\data\shotgunshell_black_co.paa"
		};
  };

  class SRP_ProjectileShotgun_Pellet: SRP_BulletCrafting_Shotgun60Count  // SRP_12ga_Pellets
  {
		scope=2;
		displayName="12 Gauge Projectiles - Pellet";
		descriptionShort="Pellets pulled from other bullets small enough for 12 gauge casings.";
		model="Survivalists_Mods\weapons\ammunition\metalball.p3d";
  };
  class SRP_BulletKitShotgun_12GAPellet: SRP_BulletCrafting_Shotgun60Count  // new
  {
		scope=2;
		displayName="12 Gauge Casings + Pellets";
		descriptionShort="12 gauge casings loaded with gunpowder and pellets.";
		model="Survivalists_Mods\weapons\ammunition\shotguncasingpellet.p3d";
  };


  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  //---------------------- OLD STUFF THAT WILL BE REMOVED
  // class BP1_gilza_45: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 45ACP";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice9x19_Loose.p3d";
	// 	weight=12;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_bullets_45: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 45ACP Caliber";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\bullet9x19_loose.p3d";
	// 	weight=12;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_45pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 45ACP Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice9x19_Loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_45bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 45ACP Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\9x19Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_919: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 9x19";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice9x19_Loose.p3d";
	// 	weight=12;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_bullets_919: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 9x19 Caliber";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\bullet9x19_loose.p3d";
	// 	weight=12;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_919pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 9x19 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice9x19_Loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_919bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 9x19 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\9x19Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_380: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 380 Caliber";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice380_Loose.p3d";
	// 	weight=12;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_bullets_380: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 380 Caliber";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\bullet380Loose.p3d";
	// 	weight=12;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_380pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 380 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice380_Loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_380bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 380 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\380Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_545x39: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 545x39";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_545x39_loose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_bullets_545x39: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 545x39";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\Bullet545x39_loose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_545x39pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 545x39 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_545x39_loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_545x39bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 545x39 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\545x39Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_762x39: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 762x39";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_762x39_loose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_bullets_762x39: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 762x39";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\bullet762x54_Loose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_762x39pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 762x39 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_762x39_loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_762x39bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 762x39 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\762x39Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_762x54: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 762x54";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_763x54_loose.p3d";
	// 	weight=9;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_bullets_762x54: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 762x54";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\bullet762x54_Loose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_762x54pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 762x54 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_763x54_loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_762x54bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 762x54 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\763x54Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_556x45: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 556x45";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_556_loose.p3d";
	// 	weight=9;
	// 	count=30;
	// };
	// class BP1_bullets_556x45: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 556x45";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\Bullet545x39_loose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_556x45pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 556x45 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_556_loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_556x45bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 556x45 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\556Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_9x39: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 9x39";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_762x39_loose.p3d";
	// 	weight=9;
	// 	count=30;
	// };
	// class BP1_bullets_9x39: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 9x39";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\bullet9x39_lose.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_9x39pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 9x39 Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_762x39_loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_9x39bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 9x39 Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\9x39Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza_308: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Cartridge Cases 308Win";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_308Win_loose.p3d";
	// 	weight=9;
	// 	count=30;
	// };
	// class BP1_bullets_308: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Bullets 308Win";
	// 	descriptionShort="";
	// 	model="Survivalists_Mods\weapons\ammunition\Bullet308Win.p3d";
	// 	weight=8;
	// 	count=30;
	// };
	// class BP1_308pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Gunpowder Shells 308Win Caliber";
	// 	descriptionShort="It remains to add bullets and clog on a workbench";
	// 	model="Survivalists_Mods\weapons\ammunition\nabojnice_308Win_loose.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_308bullets_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Shells Equipment Gunpowder and Bullets 308Win Caliber";
	// 	descriptionShort="It remains to clog on a workbench and you can shoot.";
	// 	model="Survivalists_Mods\weapons\ammunition\308Win_Bullet_kit.p3d";
	// 	weight=28;
	// 	count=30;
	// 	ammo="";
	// };
	// class BP1_gilza12_Pellets: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="12 Gauge Cases";
	// 	descriptionShort="12 gauge cases with capsules";
	// 	model="Survivalists_Mods\weapons\ammunition\red12_loose.p3d";
	// 	weight=28;
	// 	count=100;
	// 	ammo="";
	// 	hiddenSelections[]=
	// 	{
	// 		"camoGround"
	// 	};
	// 	hiddenSelectionsTextures[]=
	// 	{
	// 		"BP1\firearms\ammunition\bullet_components\data\12cartriges.paa"
	// 	};
	// };
	

	// class Bp1_12nails_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="12 Gauge Casings Equipped";
	// 	descriptionShort="12 gauge casings loaded with gunpowder and crushed nails";
	// 	model="Survivalists_Mods\weapons\ammunition\12nails_kit.p3d";
	// 	weight=28;
	// 	count=100;
	// 	ammo="";
	// };
	// class Bp1_12stone_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="12 Gauge Casings Equipped";
	// 	descriptionShort="12 gauge casings loaded with gunpowder and crushed stones";
	// 	model="Survivalists_Mods\weapons\ammunition\12stone_kit.p3d";
	// 	weight=28;
	// 	count=100;
	// 	ammo="";
	// };
	// class Bp1_12pawder_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="12 Gauge Casings Equipped";
	// 	descriptionShort="12 gauge shells filled with gunpowder";
	// 	model="Survivalists_Mods\weapons\ammunition\red12_loose.p3d";
	// 	weight=28;
	// 	count=100;
	// 	ammo="";
	// };
	// class Bp1_12Drob_kit: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="12 Gauge Casings Equipped";
	// 	descriptionShort="12 gauge casings equipped with gunpowder and shot";
	// 	model="Survivalists_Mods\weapons\ammunition\12drob_kit.p3d";
	// 	weight=28;
	// 	count=100;
	// 	ammo="";
	// };
	// class Ammo_12Nail: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Self-Made Cartridges 12 Gauge";
	// 	descriptionShort="Self-made cartridges loaded with chopped nails";
	// 	model="Survivalists_Mods\weapons\ammunition\12_nail.p3d";
	// 	weight=28;
	// 	count=10;
	// 	ammo="Bullet_12Nail";
	// 	class DamageSystem
	// 	{
	// 		class GlobalHealth
	// 		{
	// 			class Health
	// 			{
	// 				hitpoints=100;
	// 			};
	// 		};
	// 	};
	// };
	// class Ammo_12Stone: Ammunition_Base
	// {
	// 	scope=2;
	// 	displayName="Self-Made Cartridges 12 Gauge";
	// 	descriptionShort="Self-made cartridges loaded with small stones.";
	// 	model="Survivalists_Mods\weapons\ammunition\12_stone.p3d";
	// 	weight=28;
	// 	count=10;
	// 	ammo="Bullet_12Stone";
	// 	class DamageSystem
	// 	{
	// 		class GlobalHealth
	// 		{
	// 			class Health
	// 			{
	// 				hitpoints=100;
	// 			};
	// 		};
	// 	};
	// };
};