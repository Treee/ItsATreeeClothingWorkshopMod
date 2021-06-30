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
      "DZ_Weapons_Ammunition"
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
};