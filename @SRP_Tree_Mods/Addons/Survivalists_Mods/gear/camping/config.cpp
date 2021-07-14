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
  class WoodenCrate;

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
		model="Survivalists_Mods\gear\camping\potbellystove.p3d";
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
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\potbellystove_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\potbellystove.rvmat"
    };
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_Bowl_Wood: Inventory_Base  // Bp_Bowl
	{
		scope=2;
		displayName="Wooden Plate";
		descriptionShort="It may seem strange, but eating from a plate is much more convenient and more hygienic than from the floor.";
		model="Survivalists_Mods\gear\camping\plate.p3d";
		inventorySlot="BPCookingEquip";
		weight=250;
		itemSize[]={3,1};
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
			"Survivalists_Mods\gear\camping\data\plate_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\platewood.rvmat"
		};
	};

	class SRP_Bowl_DarkWood: SRP_Bowl_Wood  // Bp_Bowl_1
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\plate_dark_co.paa"
		};
	};

	class SRP_Bowl_CherryWood: SRP_Bowl_Wood  // Bp_Bowl_2
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\plate_cherry_co.paa"
		};
	};

  class SRP_BowlSquare_Wood: SRP_Bowl_Wood  // new
	{
		scope=2;
		displayName="Square Wooden Plate";
		descriptionShort="It may seem strange, but eating from a plate is much more convenient and more hygienic than from the floor.";
		model="Survivalists_Mods\gear\camping\platesquare.p3d";
		hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\platesquare_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\platesquarewood.rvmat"
		};
	};

  class SRP_Guitar_Alpocalypse: Inventory_Base  // SRP_Guitar
	{
		scope=2;
		displayName="Guitar";
		descriptionShort="";
		model="Survivalists_Mods\gear\camping\alpocalypseguitar.p3d";
		weight=1500;
		itemSize[]={3,6};
    rotationFlags=16;
    inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\alpocalypseguitar_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\alpocalypseguitar.rvmat"
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

  class SRP_StreetLightLarge_Metal_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Large Metal Street Light Kit";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

  class SRP_StreetLightLarge_Metal: Container_Base  // new
	{
		scope=2;
		displayName="Large Street Light";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\lamppostlarge.p3d";
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
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "\dz\gear\containers\data\barrel_red_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\potbellystove.rvmat"
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

  class SRP_StreetLightMedium_Wood_Kit: SRP_KitBase  // SRP_StreetLightM_kit
	{
		scope=2;
		displayName="Medium Street Light Kit";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

	class SRP_StreetLightMedium_Wood: Container_Base  // SRP_StreetLightM
	{
		scope=2;
		displayName="Medium Street Light";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\lamppostmedium.p3d";
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
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\lamppostmedium_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\lamppostmedium.rvmat"
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
		model="Survivalists_Mods\gear\camping\persianrug.p3d";
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
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\persianrug_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\persianrug.rvmat"
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

  class SRP_CarpetRug_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="An Old Rug Kit";
		descriptionShort="An old carpet to decorate your home";
	};
  
  class SRP_CarpetRug: Inventory_Base  // new
	{
		scope=2;
		displayName="Old Carpet";
		descriptionShort="An old carpet to decorate your home";
		model="Survivalists_Mods\gear\camping\doormatrug.p3d";
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
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\doormatrug_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\doormatrug.rvmat"
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

  class SRP_WoodenBox_Long: WoodenCrate  // BP2_Long_box
	{
		scope=2;
		displayName="Long Wooden Box";
		descriptionShort="A long wooden box";
		model="Survivalists_Mods\gear\camping\woodenboxlong.p3d";
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
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\woodenboxlong_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\woodenboxlong.rvmat"
    };
    class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=0;
		};
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
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_WoodenBox_Locked: WoodenCrate  // new
	{
		scope=2;
		displayName="Locked Wooden Box";
		descriptionShort="A locked wooden box. The lock doesn't look very secure.";
		model="Survivalists_Mods\gear\camping\woodenboxlocked.p3d";
		canBeDigged=0;
		heavyItem=1;
		weight=1000;
		itemSize[]={10,15};
		carveNavmesh=1;
		rotationFlags=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\woodenboxlocked_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\woodenboxlocked.rvmat"
    };
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_WoodenBox_Square: WoodenCrate  // new
	{
		scope=2;
		displayName="Square Wooden Box";
		descriptionShort="A square wooden box.";
		model="Survivalists_Mods\gear\camping\woodenboxsquare.p3d";
		canBeDigged=0;
		heavyItem=1;
		weight=1000;
		itemSize[]={10,15};
		carveNavmesh=1;
		rotationFlags=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\woodenboxsquare_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\woodenboxsquare.rvmat"
    };
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_WoodenBox_Cask: WoodenCrate  // new
	{
		scope=2;
		displayName="Wooden Cask";
		descriptionShort="A wooden Cask.";
		model="Survivalists_Mods\gear\camping\woodencask.p3d";
		canBeDigged=0;
		heavyItem=1;
		weight=1000;
		itemSize[]={10,15};
		carveNavmesh=1;
		rotationFlags=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\woodencask_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\camping\data\woodencask.rvmat"
    };
	};

  //------------------------------ BASE BUILDING

  class SRP_WoodenWallLong_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Long Wall Barricade";
		descriptionShort="Wooden wall, designed for blocking of areas. Extra materials are included to make the wall extra long.";
	};

  class SRP_WoodenWallLong: BaseBuildingBase  // new
	{
		scope=2;
		displayName="Long Wooden Wall";
		descriptionShort="$STR_CfgVehicles_Fence1";
		model="Survivalists_Mods\gear\camping\woodenwalllong.p3d";
		bounding="BSphere";
		overrideDrawArea="1.0";
		slopeTolerance=0.030000011;
		forceFarBubble="true";
		handheld="false";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=5000;
		itemSize[]={15,15};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed",
      "Hologram"
		};
		rotationFlags=2;
    attachments[]=
		{
			"Material_Nails",
			"Material_WoodenPlanks"
		};
    class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name="$STR_CfgVehicles_Construction_Part_Base";
				description="Wall Base";
				attachmentSlots[]=
				{
					"Material_Nails",
          "Material_WoodenPlanks"
				};
				icon="set:dayz_inventory image:cat_bb_base";
				selection="MainWall";
			};
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
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
		class AnimationSources
		{
      class Hologram{source="user";initPhase=1;animPeriod=0.0099999998;};
      class Deployed{source="user";initPhase=0;animPeriod=0.0099999998;};
		};
		class Construction
		{
			class MainWall
			{
				class base_wall
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=1;
						};
						class Material2
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=1;
						};
					};
				};
			};
		};
	};

};