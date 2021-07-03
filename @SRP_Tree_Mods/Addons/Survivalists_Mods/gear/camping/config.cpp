class CfgPatches
{
	class Survivalists_Mods_Gear_Camping
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Camping",
      "Survivalists_Mods"      
		};
	};
};

class CfgVehicles
{
  class BaseBuildingBase;
  class BarrelHoles_ColorBase;
  class Inventory_Base;
  class Container_Base;

  class SRP_KitBase;

  //----------------------- MOD OVERRIDES
  class sleepingbag_colorbase_mung_Deployed: Inventory_Base
	{
    itemsCargoSize[]={0,0};
  }


  // ----------------------  BASE GAME OVERRIDES
  // the only change here is setting the build base action to use shovels
  class TerritoryFlag: BaseBuildingBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_TerritoryFlag0";
		descriptionShort="$STR_CfgVehicles_TerritoryFlag1";
		model="\DZ\gear\camping\territory_flag.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="false";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=60000;
		itemSize[]={6,6};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed"
		};
		rotationFlags=2;
		attachments[]=
		{
			"Material_FPole_WoodenLog",
			"Material_FPole_Stones",
			"Material_FPole_WoodenLog2",
			"Material_FPole_MetalWire",
			"Material_FPole_Rope",
			"Material_FPole_Nails",
			"Material_FPole_MagicStick",
			"Material_FPole_Flag"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
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
				class Melee
				{
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
				class FragGrenade
				{
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
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="$STR_CfgVehicles_Construction_Part_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_FPole_WoodenLog"
				};
				icon="set:dayz_inventory image:cat_tf_log";
				selection="totem";
			};
			class Support
			{
				name="$STR_CfgVehicles_TerritoryFlag_Att_Category_Support";
				description="";
				attachmentSlots[]=
				{
					"Material_FPole_Stones",
					"Material_FPole_WoodenLog2"
				};
				icon="set:dayz_inventory image:tf_stones";
				selection="totem";
			};
			class Pole
			{
				name="$STR_CfgVehicles_TerritoryFlag_Att_Category_Pole";
				description="";
				attachmentSlots[]=
				{
					"Material_FPole_MetalWire",
					"Material_FPole_Rope",
					"Material_FPole_Nails",
					"Material_FPole_MagicStick"
				};
				icon="set:dayz_inventory image:cat_tf_pole";
				selection="totem";
			};
			class Flag
			{
				name="$STR_CfgVehicles_TerritoryFlag_Att_Category_Flag";
				description="";
				attachmentSlots[]=
				{
					"Material_FPole_Flag"
				};
				icon="set:dayz_inventory image:tf_flag";
				selection="totem";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class flag_mast
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
			class Deployed: AnimSourceHidden
			{
			};
			class Base: AnimSourceHidden
			{
			};
			class Support: AnimSourceHidden
			{
			};
			class Pole: AnimSourceHidden
			{
			};
			class Material_FPole_WoodenLog: AnimSourceHidden
			{
			};
			class Material_FPole_Stones: AnimSourceHidden
			{
			};
			class Material_FPole_WoodenLog2: AnimSourceHidden
			{
			};
			class Material_FPole_MetalWire: AnimSourceHidden
			{
			};
			class Material_FPole_Rope: AnimSourceHidden
			{
			};
			class Material_FPole_Nails: AnimSourceHidden
			{
			};
			class Material_FPole_MagicStick: AnimSourceHidden
			{
			};
		};
		class Construction
		{
			class totem
			{
				class base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]=
					{
						"base_min",
						"base_max"
					};
					build_action_type=4;
					dismantle_action_type=4;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_FPole_WoodenLog";
							quantity=1;
							lockable=0;
						};
					};
				};
				class support
				{
					name="$STR_CfgVehicles_TerritoryFlag_Att_Category_Support";
					id=2;
					required_parts[]=
					{
						"base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"support_min",
						"support_max"
					};
					build_action_type=36;
					dismantle_action_type=36;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="Stone";
							slot_name="Material_FPole_Stones";
							quantity=32;
							lockable=0;
						};
						class Material2
						{
							type="WoodenLog";
							slot_name="Material_FPole_WoodenLog2";
							quantity=6;
							lockable=0;
						};
					};
				};
				class pole
				{
					name="$STR_CfgVehicles_TerritoryFlag_Att_Category_Pole";
					id=3;
					required_parts[]=
					{
						"support"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"pole_min",
						"pole_max"
					};
					build_action_type=2;
					dismantle_action_type=64;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="MetalWire";
							slot_name="Material_FPole_MetalWire";
							quantity=0;
							lockable=1;
						};
						class Material2
						{
							type="Rope";
							slot_name="Material_FPole_Rope";
							quantity=0;
							lockable=1;
						};
						class Material3
						{
							type="Nail";
							slot_name="Material_FPole_Nails";
							quantity=60;
							lockable=0;
						};
						class Material4
						{
							type="WoodenLog";
							slot_name="Material_FPole_MagicStick";
							quantity=3;
							lockable=0;
						};
					};
				};
			};
		};
	};

  // increase the length of the cablereel
  class CableReel: Inventory_Base
	{
		class EnergyManager
		{
			switchOnAtSpawn=1;
			powerSocketsCount=1;
			cordTextureFile="DZ\gear\camping\Data\plug_orange_CO.paa";
			isPassiveDevice=1;
			cordLength=50;
			plugType=2;
			compatiblePlugTypes[]={2,6};
		};
	};

  // ----------------------- CUSTOM STUFF

  class SRP_Potbelly_Stove_Kit: SRP_KitBase //BP_Pech_kit
	{
		scope=2;
		displayName="Potbelly Stove Kit";
		descriptionShort="A Potbelly Stove Kit";
	};

  class SRP_Potbelly_Stove: BarrelHoles_ColorBase //BPPech
	{
		scope=2;
		displayName="Potbelly Stove";
		descriptionShort="A Potbelly stove, a very convenient thing when the whole world is in ruin.";
		model="Survivalists_Mods\gear\camping\Pech_kit.p3d";
		itemSize[]={10,15};
		weight=10000;
		stackedUnit="ml";
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
	};

  class SRP_Bowl: Inventory_Base  // Bp_Bowl
	{
		scope=2;
		displayName="Bowl";
		descriptionShort="It may seem strange, but eating from a plate is much more convenient and more hygienic than from the floor.";
		model="Survivalists_Mods\gear\camping\Bp_Bowl.p3d";
		inventorySlot="BPCookingEquip";
		weight=250;
		itemSize[]={4,4};
		absorbency=0.30000001;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"Ingredient",
			"Ingredient1",
			"Ingredient2",
		};
		class GUIInventoryAttachmentsProps
		{
			class BPFood
			{
				name="Food";
				description="";
				attachmentSlots[]=
				{
					"Ingredient1",
					"Ingredient2",
					"Ingredient"
				};
				icon="food";
			};
		};
		hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\Piatto_B1.paa"
		};
	};

	class SRP_Bowl_1: SRP_Bowl  // Bp_Bowl_1
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\Piatto_B2.paa"
		};
	};

	class SRP_Bowl_2: SRP_Bowl  // Bp_Bowl_2
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\Piatto_B3.paa"
		};
	};

  class SRP_Guitar: Inventory_Base
	{
		scope=2;
		displayName="Guitar";
		descriptionShort="";
		model="Survivalists_Mods\gear\camping\guitar.p3d";
		weight=1500;
		itemSize[]={3,7};
    inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="woodenlog_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodenlog_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_StreetLightLarge_Kit: SRP_KitBase  // SRP_StreetLightL_kit
	{
		scope=2;
		displayName="Large Street Light Kit";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

  class SRP_StreetLightLarge: Container_Base  // SRP_StreetLightLarge
	{
		scope=2;
		displayName="Street Light";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\SRP_StreetLightL.p3d";
		attachments[]=
		{
			"BP_gas_lamp"
		};
		carveNavmesh=1;
		weight=3000;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Lamp
			{
				name="Lamp";
				description="";
				attachmentSlots[]=
				{
					"BP_gas_lamp"
				};
				icon="gascanister";
			};
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

  class SRP_StreetLightMedium_Kit: SRP_KitBase  // SRP_StreetLightM_kit
	{
		scope=2;
		displayName="Street Light Kit";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

	class SRP_StreetLightMedium: Container_Base  // SRP_StreetLightM
	{
		scope=2;
		displayName="Street Light";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\SRP_StreetLightM.p3d";
		attachments[]=
		{
			"BP_gas_lamp"
		};
		carveNavmesh=1;
		weight=3000;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Lamp
			{
				name="Lamp";
				description="";
				attachmentSlots[]=
				{
					"BP_gas_lamp"
				};
				icon="gascanister";
			};
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
	
  class SRP_Carpet_Kit: SRP_KitBase  // BP2_carpet_Kit
	{
		scope=2;
		displayName="An Old Carpet Kit";
		descriptionShort="An old carpet to decorate your home";
	};
  
  class SRP_Carpet: Inventory_Base  // BP2_carpet
	{
		scope=2;
		displayName="Old Carpet";
		descriptionShort="An old carpet to decorate your home";
		model="Survivalists_Mods\gear\camping\Long_box.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
		attachments[]=
		{
			"Melee",
			"Back",
			"Shoulder"
		};
		class Cargo
		{
			itemsCargoSize[]={6,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Storage
			{
				name="Storage";
				description="";
				attachmentSlots[]=
				{
					"Melee",
					"Back",
					"Shoulder"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
	};


  class SRP_WoodenBox_Large: WoodenCrate  // BP2_Long_box
	{
		scope=2;
		displayName="Wooden Box";
		descriptionShort="$STR_CfgVehicles_SeaChest1";
		model="Survivalists_Mods\gear\camping\Long_box.p3d";
		canBeDigged=0;
		heavyItem=1;
		weight=1000;
		itemSize[]={10,15};
		carveNavmesh=1;
		rotationFlags=2;
		attachments[]=
		{
			"Back"
		};
		allowOwnedCargoManipulation=1;
		class GUIInventoryAttachmentsProps
		{
			class Storage
			{
				name="Storage";
				description="Backpack holder";
				attachmentSlots[]=
				{
					"Back"
				};
				icon="set:dayz_inventory image:back";
			};
		};
	};

  //------------------------------ BASE BUILDING

	class SRP_SmallDoor_Kit: SRP_KitBase  // bp_door_kit
	{
		scope=2;
		displayName="Wooden Door Kit";
		descriptionShort="You can barricade a house.";
		model="Survivalists_Mods\gear\camping\bp_door_kit.p3d";
		itemSize[]={1,5};
	};

  class SRP_WindowBarricade_Kit: SRP_KitBase  // bp_window_kit
	{
		scope=2;
		displayName="Window Barricade";
		descriptionShort="Wooden shield, designed for barricading windows, breaks in walls, floors and so on.";
    model="Survivalists_Mods\gear\camping\bp_door_kit.p3d";
    itemSize[]={1,5};
	};

  class SRP_WideFence_Kit: SRP_KitBase  // bp_big_door_kit
	{
		scope=2;
		displayName="Wide Fence Kit";
		descriptionShort="It consists of two parts of a conventional fence, you can also build large swing gates.";
		model="Survivalists_Mods\gear\camping\bp_door_kit.p3d";
		itemSize[]={1,5};
	};

	class SRP_SmallDoor_Hologram: Inventory_Base  // bp_door_holo
	{
		scope=2;
		model="Survivalists_Mods\gear\camping\bp_door_holo.p3d";
		storageCategory=10;
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		alignHologramToTerain=0;
		slopeTolerance=0.30000001;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\consumables\data\pile_of_planks_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\fence_pile_of_planks.rvmat"
		};
	};

	class SRP_WindowBarricade_Hologram: Inventory_Base  // bp_window_holo
	{
		scope=2;
		model="Survivalists_Mods\gear\camping\bp_window_holo.p3d";
		storageCategory=10;
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		alignHologramToTerain=0;
		slopeTolerance=0.30000001;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\consumables\data\pile_of_planks_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\fence_pile_of_planks.rvmat"
		};
	};

	class SRP_WideFence_Hologram: Inventory_Base  // bp_big_door_holo
	{
		scope=2;
		model="Survivalists_Mods\gear\camping\bp_big_door_holo.p3d";
		storageCategory=10;
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		alignHologramToTerain=0;
		slopeTolerance=0.30000001;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\consumables\data\pile_of_planks_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\fence_pile_of_planks.rvmat"
		};
	};

  class SRP_SmallDoor: Inventory_Base  // bp_door
	{
		scope=2;
		displayName="Narrow Fence";
		descriptionShort="$STR_CfgVehicles_Fence1";
		model="Survivalists_Mods\gear\camping\bp_door.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="false";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=10000;
		itemSize[]={2,3};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed",
			"bp_hologram"
		};
		hybridAttachments[]=
		{
			"Material_WoodenLogs",
			"Material_MetalWire",
			"Wall_Barbedwire_2"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.01,{""}},
            {0.69999999,{""}},
            {0.5,{""}},
            {0.30000001,{""}},
            {0.0099999998,{""}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
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
			class DamageZones
			{
				class Body
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
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
						class Melee
						{
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
						class FragGrenade
						{
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
					componentNames[]=
					{
						"body"
					};
					fatalInjuryCoef=-1;
				};
				class bp_door_base
				{
					class Health
					{
						hitpoints=10000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"bp_door_base"
					};
					fatalInjuryCoef=-1;
				};
				class bp_door_wood
				{
					class Health
					{
						hitpoints=15500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"bp_door_wood"
					};
					fatalInjuryCoef=-1;
				};
				class bp_door_stell
				{
					class Health
					{
						hitpoints=18000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_metalsheets.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_metalsheets_worn.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_metalsheets_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=60;
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
					componentNames[]=
					{
						"bp_door_stell"
					};
					fatalInjuryCoef=-1;
				};
				class Wall_Barbedwire_1
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.5,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\barbed_wire.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.0099999998;
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
						class Melee
						{
							class Health
							{
								damage=1;
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
						class FragGrenade
						{
							class Health
							{
								damage=40;
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
					componentNames[]=
					{
						"wall_barbedwire_1",
						"wall_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_1"
					};
					fatalInjuryCoef=-1;
				};
				class Wall_Barbedwire_2: Wall_Barbedwire_1
				{
					componentNames[]=
					{
						"wall_barbedwire_2",
						"wall_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_2"
					};
				};
				class bp_door_gate
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.0099999998,""}
						};
					};
					class ArmorType
					{
						class Projectile
						{
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
						class Melee
						{
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
						class FragGrenade
						{
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
					componentNames[]=
					{
						"bp_door_gate"
					};
					fatalInjuryCoef=-1;
				};
				class Material_WoodenLogs
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"Material_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_WoodenLogs"
					};
					fatalInjuryCoef=-1;
				};
				class Material_MetalWire
				{
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\crafting\data\string_metalwire.rvmat"}},
              {0.69999999,{"DZ\gear\crafting\data\string_metalwire.rvmat"}},
              {0.5,{"DZ\gear\crafting\data\string_metalwire_damage.rvmat"}},
              {0.30000001,{"DZ\gear\crafting\data\string_metalwire_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\crafting\data\string_metalwire_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=60;
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
					componentNames[]=
					{
						"Material_MetalWire"
					};
					inventorySlots[]=
					{
						"Material_MetalWire"
					};
					fatalInjuryCoef=-1;
				};
			};
		};
		attachments[]=
		{
			"Att_CombinationLock",
			"Material_Nails",
			"Wall_Camonet",
			"Wall_Barbedwire_2",
			"Material_MetalSheets",
			"Material_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_MetalWire"
		};
		class GUIInventoryAttachmentsProps
		{
			class bp_base
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs"
				};
				icon="cat_bb_base";
				selection="bp_wall";
			};
			class Attachments
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description="";
				attachmentSlots[]=
				{
					"Wall_Camonet",
					"Wall_Barbedwire_2",
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				selection="bp_wall";
			};
			class Material
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Materials";
				description="";
				attachmentSlots[]=
				{
					"Material_Nails",
					"Material_MetalSheets",
					"Material_WoodenPlanks",
					"Material_MetalWire"
				};
				icon="cat_bb_material";
				selection="bp_wall";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class Material_WoodenLogs: AnimSourceHidden
			{
			};
			class Material_MetalWire: AnimSourceHidden
			{
			};
			class Wall_Barbedwire_2: AnimSourceHidden
			{
			};
			class Wall_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Wall_Camonet: AnimSourceHidden
			{
			};
			class Deployed: AnimSourceHidden
			{
			};
			class bp_hologram: AnimSourceHidden
			{
			};
			class bp_base: AnimSourceHidden
			{
			};
			class bp_door_base: AnimSourceHidden
			{
			};
			class bp_door_wood: AnimSourceHidden
			{
			};
			class bp_door_stell: AnimSourceHidden
			{
			};
			class bp_door_gate: AnimSourceHidden
			{
			};
			class BP_Wall_Interact_Rotate: AnimRotate
			{
			};
			class Wall_Camonet_Rotate: AnimRotate
			{
			};
			class Wall_Barbedwire_2_Mounted_Rotate: AnimRotate
			{
			};
			class BP_Door_Base_Rotate: AnimRotate
			{
			};
			class BP_Door_Gate_Rotate: AnimRotate
			{
			};
			class BP_Door_Wood_Rotate: AnimRotate
			{
			};
			class BP_Door_Stell_Rotate: AnimRotate
			{
			};
		};
		class Construction
		{
			class bp_wall
			{
				class bp_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=4;
					dismantle_action_type=4;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_WoodenLogs";
							quantity=2;
							lockable=1;
						};
					};
				};
				class bp_door_gate
				{
					name="Door";
					is_gate=1;
					id=2;
					required_parts[]=
					{
						"bp_base",
						"bp_door_base"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=1;
					dismantle_action_type=1;
					material_type=5;
					class Materials
					{
						class Material1
						{
							type="MetalWire";
							slot_name="Material_MetalWire";
							quantity=-1;
							lockable=1;
						};
					};
				};
				class bp_door_base
				{
					name="Fence base";
					id=3;
					required_parts[]=
					{
						"bp_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"wall_min",
						"wall_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=20;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=8;
						};
					};
				};
				class bp_door_wood
				{
					name="Wood fence";
					id=4;
					required_parts[]=
					{
						"bp_door_base"
					};
					conflicted_parts[]=
					{
						"bp_door_stell"
					};
					collision_data[]=
					{
						"wall_min",
						"wall_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=25;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=10;
						};
					};
				};
				class bp_door_stell
				{
					name="Stell fence";
					id=5;
					required_parts[]=
					{
						"bp_door_base"
					};
					conflicted_parts[]=
					{
						"bp_door_wood"
					};
					collision_data[]=
					{
						"wall_min",
						"wall_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=25;
						};
						class Material2
						{
							type="MetalPlate";
							slot_name="Material_MetalSheets";
							quantity=2;
						};
					};
				};
			};
		};
	};

	class SRP_WindowBarricade: Inventory_Base  // bp_window
	{
		scope=2;
		displayName="Window Barricade";
		descriptionShort="$STR_CfgVehicles_Fence1";
		model="Survivalists_Mods\gear\camping\bp_window.p3d";
		bounding="BSphere";
		overrideDrawArea="1.0";
		slopeTolerance=0.030000011;
		forceFarBubble="true";
		handheld="false";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=5000;
		itemSize[]={2,3};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed",
			"bp_hologram"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.01,{	""}},
            {0.69999999,{	""}},
            {0.5,{	""}},
            {0.30000001,{	""}},
            {0.0099999998,{	""}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
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
			class DamageZones
			{
				class Body
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
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
						class Melee
						{
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
						class FragGrenade
						{
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
					componentNames[]=
					{
						"body"
					};
					fatalInjuryCoef=-1;
				};
				class bp_win_base
				{
					class Health
					{
						hitpoints=10000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"bp_win_base"
					};
					fatalInjuryCoef=-1;
				};
				class bp_door_wood
				{
					class Health
					{
						hitpoints=10000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"bp_door_wood"
					};
					fatalInjuryCoef=-1;
				};
			};
		};
		attachments[]=
		{
			"Material_Nails",
			"Material_WoodenPlanks"
		};
		class GUIInventoryAttachmentsProps
		{
			class bp_base
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_Nails",
					"Material_WoodenPlanks"
				};
				icon="cat_bb_material";
				selection="bp_wall";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Deployed: AnimSourceHidden
			{
			};
			class bp_hologram: AnimSourceHidden
			{
			};
			class bp_win_base: AnimSourceHidden
			{
			};
			class bp_door_wood: AnimSourceHidden
			{
			};
		};
		class Construction
		{
			class bp_wall
			{
				class bp_win_base
				{
					name="Base For The Window";
					is_base=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=4;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=2;
						};
					};
				};
				class bp_door_wood
				{
					name="Shield For The Window";
					id=2;
					required_parts[]=
					{
						"bp_win_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"wall_min",
						"wall_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=30;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=10;
						};
					};
				};
			};
		};
	};

	class SRP_WideFence: Inventory_Base  // bp_big_door
	{
		scope=2;
		displayName="Wide Fence";
		descriptionShort="$STR_CfgVehicles_Fence1";
		model="Survivalists_Mods\gear\camping\bp_big_door.p3d";
		bounding="BSphere";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		handheld="false";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=10000;
		itemSize[]={6,6};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed",
			"bp_hologram"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.01,{	""}},
            {0.69999999,{	""}},
            {0.5,{	""}},
            {0.30000001,{	""}},
            {0.0099999998,{	""}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
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
			class DamageZones
			{
				class Body
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
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
						class Melee
						{
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
						class FragGrenade
						{
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
					componentNames[]=
					{
						"body"
					};
					fatalInjuryCoef=-1;
				};
				class bp_bfd_l
				{
					class Health
					{
						hitpoints=10000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"bp_bfd_l"
					};
					fatalInjuryCoef=-1;
				};
				class bp_bfd_r: bp_bfd_l
				{
					componentNames[]=
					{
						"bp_bfd_r"
					};
				};
				class bp_bfu_l: bp_bfd_l
				{
					componentNames[]=
					{
						"bp_bfu_l"
					};
				};
				class bp_bfu_r: bp_bfd_l
				{
					componentNames[]=
					{
						"bp_bfu_r"
					};
				};
				class bp_wood_dawn_l
				{
					class Health
					{
						hitpoints=15500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"bp_wood_dawn_l"
					};
					fatalInjuryCoef=-1;
				};
				class bp_wood_dawn_r: bp_wood_dawn_l
				{
					componentNames[]=
					{
						"bp_wood_dawn_r"
					};
				};
				class bp_wood_up_l: bp_wood_dawn_l
				{
					componentNames[]=
					{
						"bp_wood_up_l"
					};
				};
				class bp_wood_up_r: bp_wood_dawn_l
				{
					componentNames[]=
					{
						"bp_wood_up_r"
					};
				};
				class bp_metal_dawn_l
				{
					class Health
					{
						hitpoints=18000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_metalsheets.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_metalsheets_worn.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_metalsheets_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=60;
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
					componentNames[]=
					{
						"bp_metal_dawn_l"
					};
					fatalInjuryCoef=-1;
				};
				class bp_metal_dawn_r: bp_metal_dawn_l
				{
					componentNames[]=
					{
						"bp_metal_dawn_r"
					};
				};
				class bp_metal_up_l: bp_metal_dawn_l
				{
					componentNames[]=
					{
						"bp_metal_up_l"
					};
				};
				class bp_metal_up_r: bp_metal_dawn_l
				{
					componentNames[]=
					{
						"bp_metal_up_r"
					};
				};
				class Wall_Barbedwire_1
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.5,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\barbed_wire.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\barbed_wire.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.0099999998;
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
						class Melee
						{
							class Health
							{
								damage=1;
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
						class FragGrenade
						{
							class Health
							{
								damage=40;
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
					componentNames[]=
					{
						"wall_barbedwire_1",
						"wall_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_1"
					};
					fatalInjuryCoef=-1;
				};
				class Wall_Barbedwire_2: Wall_Barbedwire_1
				{
					componentNames[]=
					{
						"wall_barbedwire_2",
						"wall_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Wall_Barbedwire_2"
					};
				};
				class bp_door_gate
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.69999999,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.5,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.30000001,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
							{0.0099999998,"hidden"}
						};
					};
					class ArmorType
					{
						class Projectile
						{
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
						class Melee
						{
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
						class FragGrenade
						{
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
					componentNames[]=
					{
						"bp_door_gate"
					};
					fatalInjuryCoef=-1;
				};
				class Material_WoodenLogs
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},
              {0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},
              {0.0099999998,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=70;
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
					componentNames[]=
					{
						"Material_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_WoodenLogs"
					};
					fatalInjuryCoef=-1;
				};
				class Material_MetalWire
				{
					class Health
					{
						hitpoints=200;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{1.01,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.69999999,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.5,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
              {0.30000001,	{	"DZ\gear\camping\data\fence_metalwire.rvmat"}},
							{0.0099999998,"hidden"}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
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
						class Melee
						{
							class Health
							{
								damage=0.75;
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
						class FragGrenade
						{
							class Health
							{
								damage=60;
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
					componentNames[]=
					{
						"Material_MetalWire"
					};
					inventorySlots[]=
					{
						"Material_MetalWire"
					};
					fatalInjuryCoef=-1;
				};
			};
		};
		attachments[]=
		{
			"Wall_Barbedwire_1",
			"Wall_Barbedwire_2",
			"Att_CombinationLock",
			"Material_Nails",
			"Material_MetalSheets",
			"Material_WoodenPlanks",
			"Material_WoodenLogs",
			"Material_MetalWire"
		};
		class GUIInventoryAttachmentsProps
		{
			class bp_big_base
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_WoodenLogs"
				};
				icon="cat_bb_base";
				selection="bp_wall";
			};
			class Attachments_Lock
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description="";
				attachmentSlots[]=
				{
					"Wall_Barbedwire_1",
					"Wall_Barbedwire_2",
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				selection="bp_wall";
			};
			class Material
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Materials";
				description="";
				attachmentSlots[]=
				{
					"Material_Nails",
					"Material_MetalSheets",
					"Material_WoodenPlanks",
					"Material_MetalWire"
				};
				icon="cat_bb_material";
				selection="bp_wall";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class AnimRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class Material_WoodenLogs: AnimSourceHidden
			{
			};
			class Material_MetalWire: AnimSourceHidden
			{
			};
			class Wall_Barbedwire_1_Mounted_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class Wall_Barbedwire_2_Mounted_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class Wall_Barbedwire_1: AnimSourceHidden
			{
			};
			class Wall_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Wall_Barbedwire_2: AnimSourceHidden
			{
			};
			class Wall_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Deployed: AnimSourceHidden
			{
			};
			class bp_hologram: AnimSourceHidden
			{
			};
			class bp_big_base: AnimSourceHidden
			{
			};
			class bp_bfd_l: AnimSourceHidden
			{
			};
			class bp_bfd_r: AnimSourceHidden
			{
			};
			class bp_bfu_l: AnimSourceHidden
			{
			};
			class bp_bfu_r: AnimSourceHidden
			{
			};
			class bp_door_gate: AnimSourceHidden
			{
			};
			class bp_metal_dawn_l: AnimSourceHidden
			{
			};
			class bp_metal_dawn_r: AnimSourceHidden
			{
			};
			class bp_metal_up_l: AnimSourceHidden
			{
			};
			class bp_metal_up_r: AnimSourceHidden
			{
			};
			class bp_wood_dawn_l: AnimSourceHidden
			{
			};
			class bp_wood_dawn_r: AnimSourceHidden
			{
			};
			class bp_wood_up_l: AnimSourceHidden
			{
			};
			class bp_wood_up_r: AnimSourceHidden
			{
			};
			class Wall_Interact_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class BP_Wall_Interact_Rotate_r: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class BP_bfd_L_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class BP_bfu_L_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class BP_bfd_R_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class BP_bfu_R_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_metal_dawn_l_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_metal_dawn_r_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_metal_up_l_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_metal_up_r_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_wood_dawn_l_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_wood_dawn_r_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_wood_up_l_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
			class bp_wood_up_r_Rotate: AnimRotate
			{
				source="user";
				initPhase=0;
				animPeriod=0.02;
			};
		};
		class Construction
		{
			class bp_wall
			{
				class bp_big_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=4;
					dismantle_action_type=4;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_WoodenLogs";
							quantity=2;
							lockable=1;
						};
					};
				};
				class bp_bfd_l
				{
					name="Base of The Wall Bottom Left";
					id=2;
					required_parts[]=
					{
						"bp_big_base"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=10;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=5;
						};
					};
				};
				class bp_bfu_l
				{
					name="Wall Base Top Left";
					id=3;
					required_parts[]=
					{
						"bp_big_base"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=10;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=5;
						};
					};
				};
				class bp_bfu_r
				{
					name="Wall Base Top Right";
					id=4;
					required_parts[]=
					{
						"bp_big_base"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=10;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=5;
						};
					};
				};
				class bp_bfd_r
				{
					name="Base Wall Bottom Right";
					id=5;
					required_parts[]=
					{
						"bp_big_base"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=10;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=5;
						};
					};
				};
				class bp_wood_dawn_l
				{
					name="Wooden Wall Bottom Left";
					id=6;
					required_parts[]=
					{
						"bp_bfd_l"
					};
					conflicted_parts[]=
					{
						"bp_metal_dawn_l"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=6;
						};
					};
				};
				class bp_wood_up_l
				{
					name="Wooden Wall Top Left";
					id=7;
					required_parts[]=
					{
						"bp_bfu_l"
					};
					conflicted_parts[]=
					{
						"bp_metal_up_l"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=6;
						};
					};
				};
				class bp_wood_up_r
				{
					name="Wooden Wall Top Right";
					id=8;
					required_parts[]=
					{
						"bp_bfu_r"
					};
					conflicted_parts[]=
					{
						"bp_metal_up_r"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=6;
						};
					};
				};
				class bp_wood_dawn_r
				{
					name="Wooden Wall Bottom Right";
					id=9;
					required_parts[]=
					{
						"bp_bfd_r"
					};
					conflicted_parts[]=
					{
						"bp_metal_dawn_r"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=6;
						};
					};
				};
				class bp_metal_up_r
				{
					name="Metal Wall Top Right";
					id=10;
					required_parts[]=
					{
						"bp_bfu_r"
					};
					conflicted_parts[]=
					{
						"bp_wood_up_r"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
					};
				};
				class bp_metal_up_l
				{
					name="Metal Wall Top Left";
					id=11;
					required_parts[]=
					{
						"bp_bfu_l"
					};
					conflicted_parts[]=
					{
						"bp_wood_up_l"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
					};
				};
				class bp_metal_dawn_r
				{
					name="Metal Wall Bottom Right";
					id=12;
					required_parts[]=
					{
						"bp_bfd_r"
					};
					conflicted_parts[]=
					{
						"bp_wood_dawn_r"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
					};
				};
				class bp_metal_dawn_l
				{
					name="Metal Wall Bottom Left";
					id=13;
					required_parts[]=
					{
						"bp_bfd_l"
					};
					conflicted_parts[]=
					{
						"bp_wood_dawn_l"
					};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=12;
						};
					};
				};
				class bp_door_gate
				{
					name="$STR_CfgVehicles_Construction_Part_Gate";
					is_gate=1;
					id=14;
					required_parts[]=
					{
						"bp_bfd_l",
						"bp_bfd_r",
						"bp_bfu_r",
						"bp_bfu_l"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=1;
					dismantle_action_type=1;
					material_type=5;
					class Materials
					{
						class Material1
						{
							type="MetalWire";
							slot_name="Material_MetalWire";
							quantity=-1;
							lockable=1;
						};
					};
				};
			};
		};
	};
};