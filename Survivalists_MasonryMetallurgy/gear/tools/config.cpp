class CfgPatches
{
	class Survivalists_MasonryMetallurgy_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools",
      "Survivalists_MasonryMetallurgy"
		};
	};
};
class CfgVehicles
{
  class Hammer;
  class FarmingHoe;
  class Container_Base;

  class SRP_MasonryMetallurgy_KitBase;

  class SRP_Tool_CoalRake: FarmingHoe
	{
		scope=2;
		displayName="Coal Rake";
		descriptionShort="A rake to shuffle coal.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_coalrake.p3d";
	};

  class SRP_ToolRack_Hammers_Kit: SRP_MasonryMetallurgy_KitBase
	{
		scope=2;
		displayName="Hammer Tool Rack Kit";
		descriptionShort="A Hammer Tool Rack Kit";
	};

  class SRP_ToolRack_Hammers: Container_Base
	{
		scope=2;
		displayName="Tool Rack - Hammers";
		descriptionShort="A wooden tool rack for storing hammers or other tools.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_toolrack_hammer.p3d";
		attachments[]=
    {
			"Hammer1",
			"Hammer2",
			"Hammer3",
      "Axe1",
      "Pickaxe1",
    };
		carveNavmesh=1;
		canBeDigged=0;
		weight=1000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
    class Cargo
		{
			itemsCargoSize[]={4,3};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_MiningTool_StoneHammerLarge: Hammer
	{
		scope=2;
		displayName="Stone Hammer - Large";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The large stone at the top is strong and durable.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammerlarge.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_StoneHammerMedium: Hammer
	{
		scope=2;
		displayName="Stone Hammer - Medium";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The medium size stone at the top is strong and durable.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammermedium.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
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
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_StoneHammerSmall: Hammer
	{
		scope=2;
		displayName="Stone Hammer - Small";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The small size stone at the top is strong and durable.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammersmall.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_StoneHammerSteelPunch: Hammer
	{
		scope=2;
		displayName="Stone Hammer - Steel Punch";
		descriptionShort="Great for punching holes through metal.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammersteelpunch.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
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
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_StoneHammerFlattener: Hammer
	{
		scope=2;
		displayName="Stone Hammer - Flattener";
		descriptionShort="Great for flattening or rounding metal plate.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammerflattener.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
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
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronHammerLarge: Hammer
	{
		scope=2;
		displayName="Iron Hammer - Large";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The large stone at the top is strong and durable.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammerlarge.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronHammerMedium: Hammer
	{
		scope=2;
		displayName="Iron Hammer - Medium";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The medium size stone at the top is strong and durable.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammermedium.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronHammerSmall: Hammer
	{
		scope=2;
		displayName="Iron Hammer - Small";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The small size stone at the top is strong and durable.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammersmall.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronHammerSteelPunch: Hammer
	{
		scope=2;
		displayName="Iron Hammer - Steel Punch";
		descriptionShort="Great for punching holes through metal.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammersteelpunch.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronHammerFlattener: Hammer
	{
		scope=2;
		displayName="Iron Hammer - Flattener";
		descriptionShort="Great for flattening or rounding metal plate.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_hammerflattener.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronTongsSmall: Hammer
	{
		scope=2;
		displayName="Iron Tongs - Small";
		descriptionShort="Great for picking up molten metal. Protects you somewhat from the heat.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_tongs2.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    attachments[]=
    {
      "SRP_Crucible",
      "SRP_IngotMold",
      "SRP_Ingot",
      "SRP_Coin"
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
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronTongsMedium: Hammer
	{
		scope=2;
		displayName="Iron Tongs - Medium";
		descriptionShort="Great for picking up molten metal. Protects you mostly from the heat.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_tongs.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    attachments[]=
    {
      "SRP_Crucible",
      "SRP_IngotMold",
      "SRP_Ingot",
      "SRP_Coin"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_MiningTool_IronTongsLarge: Hammer
	{
		scope=2;
		displayName="Iron Tongs - Large";
		descriptionShort="Great for picking up molten metal. Protects you from the heat of the forge.";
		model="Survivalists_MasonryMetallurgy\gear\tools\srp_miningtool_tongs3.p3d";
    inventorySlot[]=
		{
			"Hammer1",
			"Hammer2",
			"Hammer3",
		};
    attachments[]=
    {
      "SRP_Crucible",
      "SRP_IngotMold",
      "SRP_Ingot",
      "SRP_Coin"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"Survivalists_MasonryMetallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};

};