class CfgPatches
{
	class SRP_Core_Metallurgy_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Tools",
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;

  class SRP_Tool_CoalRake: Inventory_Base
	{
		scope=2;
		displayName="Coal Rake";
		descriptionShort="A rake to shuffle coal.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_coalrake.p3d";
    debug_ItemCategory=2;
		rotationFlags=12;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		repairableWithKits[]={4};
		repairCosts[]={20};
		weight=1600;
		itemSize[]={2,7};
		openItemSpillRange[]={35,55};
		isMeleeWeapon=1;
		suicideAnim="hoe";
		build_action_type=4;
		dismantle_action_type=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{						
						{1,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},						
						{0.69999999,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},						
						{0.5,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},						
						{0.30000001,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},						
						{0,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_2";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=4.0999999;
			};
		};
		class Horticulture
		{
			ToolAnim="DIGGINGHOE";
			DiggingTimeToComplete=1;
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet="pickUpShovelLight_SoundSet";
					id=796;
				};
				class pickUpShovel
				{
					soundSet="pickUpShovel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="shovel_drop_SoundSet";
					id=898;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
			};
		};
	};
  class SRP_ToolRack_Hammers: Inventory_Base
	{
		scope=2;
		displayName="Tool Rack - Hammers";
		descriptionShort="A wooden tool rack for storing hammers or other tools.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_toolrack_hammer.p3d";
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
		itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
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

  class SRP_MiningTool_HammerBase: Inventory_Base
	{
		scope=0;
		displayName="$STR_CfgVehicles_Hammer0";
		descriptionShort="$STR_CfgVehicles_Hammer1";
		model="\dz\gear\tools\Hammer.p3d";
		debug_ItemCategory=2;
		build_action_type=10;
		dismantle_action_type=0;
		rotationFlags=17;
		weight=940;
		itemSize[]={2,3};
		fragility=0.0080000004;
		openItemSpillRange[]={20,50};
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
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
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
						{1,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},						
						{0.69999999,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},						
						{0.5,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},						
						{0.30000001,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},						
						{0,{"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_2";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class MinningBuilding
				{
					soundLookupTable="MinningBuilding_LookupTable";
					id=11161;
				};
			};
		};
	};
  class SRP_MiningTool_StoneHammerLarge: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Stone Hammer - Large";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The large stone at the top is strong and durable.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammerlarge.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_StoneHammerMedium: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Stone Hammer - Medium";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The medium size stone at the top is strong and durable.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammermedium.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_StoneHammerSmall: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Stone Hammer - Small";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The small size stone at the top is strong and durable.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammersmall.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_StoneHammerSteelPunch: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Stone Hammer - Steel Punch";
		descriptionShort="Great for punching holes through metal.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammersteelpunch.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_StoneHammerFlattener: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Stone Hammer - Flattener";
		descriptionShort="Great for flattening or rounding metal plate.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammerflattener.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_stone_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronHammerLarge: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Hammer - Large";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The large stone at the top is strong and durable.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammerlarge.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronHammerMedium: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Hammer - Medium";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The medium size stone at the top is strong and durable.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammermedium.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronHammerSmall: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Hammer - Small";
		descriptionShort="Great for smashing stone chunks into smaller pieces. The small size stone at the top is strong and durable.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammersmall.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronHammerSteelPunch: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Hammer - Steel Punch";
		descriptionShort="Great for punching holes through metal.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammersteelpunch.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronHammerFlattener: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Hammer - Flattener";
		descriptionShort="Great for flattening or rounding metal plate.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_hammerflattener.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronTongsSmall: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Tongs - Small";
		descriptionShort="Great for picking up molten metal. Protects you somewhat from the heat.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_tongs2.p3d";
    attachments[]=
    {
      "SRP_Crucible",
      "SRP_IngotMold",
      "SRP_Ingot",
      "SRP_Coin"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronTongsMedium: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Tongs - Medium";
		descriptionShort="Great for picking up molten metal. Protects you mostly from the heat.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_tongs.p3d";
    attachments[]=
    {
      "SRP_Crucible",
      "SRP_IngotMold",
      "SRP_Ingot",
      "SRP_Coin"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
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
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_MiningTool_IronTongsLarge: SRP_MiningTool_HammerBase
	{
		scope=2;
		displayName="Iron Tongs - Large";
		descriptionShort="Great for picking up molten metal. Protects you from the heat of the forge.";
		model="SRP\Core\SRP_Metallurgy\gear\tools\srp_miningtool_tongs3.p3d";
    attachments[]=
    {
      "SRP_Crucible",
      "SRP_IngotMold",
      "SRP_Ingot",
      "SRP_Coin"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_metal_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.69999999,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs.rvmat"}},
            {0.5,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.30000001,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_damage.rvmat"}},
            {0.0,	{	"SRP\Core\SRP_Metallurgy\gear\tools\data\srp_toolrack_tongs_destruct.rvmat"}}
					};
				};
			};
		};
	};
};