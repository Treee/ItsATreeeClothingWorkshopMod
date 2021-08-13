class CfgPatches
{
	class Survivalists_Mods_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools",
      "DZ_Weapons_Melee_Blade", // hatchet
      "DZ_Gear_Navigation", // admin compass
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class Pen_ColorBase;
  class Hatchet;
  class Compass;

  // -------------------------- MODDED MODS
  class admin_Hatchet: Hatchet
	{
    scope=0; // make sure it cannot spawn ever!!!!!
		displayName="ADMIN HATCHET";
		descriptionShort="No materials required for building, only dirty cheaters use this item.";
	};

  class MassAdminStash: Compass
	{
    scope=0; // do not let it even be spawned in
		itemsCargoSize[]={0,0}; // if it somehow got in, no storage
	};

  // ---------------------------- BASE GAME OVERRIDE
	class Heatpack: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Heatpack0";
		descriptionShort="$STR_CfgVehicles_Heatpack1";
		model="\DZ\gear\tools\Heatpack.p3d";
		animClass="Knife";
		rotationFlags=17;
		itemSize[]={1,1};
		varEnergyInit=1000;
		varEnergyMin=0;
		varEnergyMax=1000;
		varTemperatureMax=100;
		weight=150;
		fragility=0.0099999998;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						{1,{"DZ\gear\tools\data\heat_pack.rvmat"}},
            {0.69999999,{"DZ\gear\tools\data\heat_pack.rvmat"}},
            {0.5,{"DZ\gear\tools\data\heat_pack_damage.rvmat"}},
            {0.30000001,{"DZ\gear\tools\data\heat_pack_damage.rvmat"}},
            {0,{"DZ\gear\tools\data\heat_pack_destruct.rvmat"	}}
					};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn=1200;
			energyUsagePerSecond=1;
			updateInterval=40;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class FieldShovel: Inventory_Base
	{
		inventorySlot[]=
		{
			"no",
			"FShovel"
		};
	};

  class Hammer: Inventory_Base
	{
		scope=2;
		repairableWithKits[]={6}; // tire repair kit
	};

  class FireExtinguisher: Inventory_Base
	{
		scope=2;
    inventorySlot[]=
		{
			"Shoulder",
			"Melee",
      "no"
		};
	};

  // ---------------------------- Custom Stuff

  class SRP_Heatpack: Heatpack  // HeatpackBern
	{
		scope=2;
    displayName="Advanced Heat Pack";
		descriptionShort="This one gets hot hot hot.";
		varTemperatureMax=250;
	};

	class Pen_Black: Pen_ColorBase
	{
		inventorySlot[]=
		{
			"Pen_slot"
		};
	};
	class Pen_Red: Pen_ColorBase
	{
		inventorySlot[]=
		{
			"Pen_slot"
		};
	};
	class Pen_Blue: Pen_ColorBase
	{
		inventorySlot[]=
		{
			"Pen_slot"
		};
	};
	class Pen_Green: Pen_ColorBase
	{
		inventorySlot[]=
		{
			"Pen_slot"
		};
	};
};