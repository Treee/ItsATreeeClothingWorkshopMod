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



  // carpentry or weapon smithing
	class SRP_Handdrill: Inventory_Base
	{
		scope=2;
		displayName="Hand Powered Drill";
		descriptionShort="A hand drill that runs off of human power.";
		model="Survivalists_Mods\gear\tools\handdrill.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\tools\data\handdrill.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\handdrill.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\handdrill_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\handdrill_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\handdrill_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  // carpentry or weapon smithing
	class SRP_Handdrill_Old: Inventory_Base
	{
		scope=2;
		displayName="Old Hand Powered Drill";
		descriptionShort="An old hand drill that runs off of human power.";
		model="Survivalists_Mods\gear\tools\handdrill_old.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\tools\data\handdrill_old.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\handdrill_old.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\handdrill_old_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\handdrill_old_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\handdrill_old_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};

  class SRP_Clamp: Inventory_Base
	{
		scope=2;
		displayName="Old Hand Powered Drill";
		descriptionShort="An old hand drill that runs off of human power.";
		model="Survivalists_Mods\gear\tools\clamp.p3d";
		rotationFlags=17;
		weight=100;
		itemSize[]={2,3};
		fragility=0.001;
    physLayer="item_small";
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\tools\data\clamp.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\tools\data\clamp_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\tools\data\clamp_destruct.rvmat"}}
          };
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWrench";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWrench_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWrench_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
			};
		};
	};



};