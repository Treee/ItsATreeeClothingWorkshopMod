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
  class FenceKit;
  class BaseBuildingBase;
  class BarrelHoles_ColorBase;
  class Inventory_Base;
  class Container_Base;
  class WoodenCrate;
  class Paper;

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


  // ------------------------- EVENT STUFF
  class SRP_PortalBone_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Bone Portal Kit";
		descriptionShort="A kit for teleporting victims to a new destination.";
	};
  
  class SRP_PortalBone: Inventory_Base  // new
	{
		scope=2;
		displayName="Bone Portal";
		descriptionShort="A bone portal. Useful for teleporting victims to a new destination.";
		model="Survivalists_Mods\gear\camping\srp_portalbone.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_PortalDruid_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Druid Portal Kit";
		descriptionShort="A kit for teleporting victims to a new destination.";
	};
  
  class SRP_PortalDruid: Inventory_Base  // new
	{
		scope=2;
		displayName="Druid Portal";
		descriptionShort="A druid portal. Useful for teleporting victims to a new destination.";
		model="Survivalists_Mods\gear\camping\srp_portaldruid.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_PortalArch_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Arch Portal Kit";
		descriptionShort="A kit for teleporting victims to a new destination.";
	};
  
  class SRP_PortalArch: Inventory_Base  // new
	{
		scope=2;
		displayName="Arch Portal";
		descriptionShort="An arch portal. Useful for teleporting victims to a new destination.";
		model="Survivalists_Mods\gear\camping\srp_portalarch.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_PortalReturn_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Return Portal Kit";
		descriptionShort="A kit for teleporting players back to a safe destination.";
	};
  
  class SRP_PortalReturn: Inventory_Base  // new
	{
		scope=2;
		displayName="Return Portal";
		descriptionShort="A return portal. Useful for teleporting players back to a safe destination.";
		model="Survivalists_Mods\gear\camping\srp_portalreturn.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_streetlightslim_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_portalreturn.rvmat"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_AltarBone_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Bone Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarBone: Inventory_Base  // new
	{
		scope=2;
		displayName="Food Altar";
		descriptionShort="An altar to summon food.";
		model="Survivalists_Mods\gear\camping\srp_altarbone.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_AltarWraith_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wraith Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarWraith: Inventory_Base  // new
	{
		scope=2;
		displayName="Ammo Altar";
		descriptionShort="An altar to summon ammo.";
		model="Survivalists_Mods\gear\camping\srp_altarwraith.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_AltarDog_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Dog Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarDog: Inventory_Base  // new
	{
		scope=2;
		displayName="Repair Kit Altar";
		descriptionShort="An altar to summon repair kits.";
		model="Survivalists_Mods\gear\camping\srp_altardog.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_AltarWendigo_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wendigo Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarWendigo: Inventory_Base  // new
	{
		scope=2;
		displayName="Wendigo Altar";
		descriptionShort="An altar to summon something big.";
		model="Survivalists_Mods\gear\camping\srp_altarwendigo.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
		};
	};

  class SRP_AltarBigBoss_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Big Boss Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarBigBoss: Inventory_Base  // new
	{
		scope=2;
		displayName="Big Boss Altar";
		descriptionShort="An altar to summon something big.";
		model="Survivalists_Mods\gear\camping\srp_altarbigboss.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemCargoSize[]={0,0};
		physLayer="item_large";
		rotationFlags=2;
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
				};
			};
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
			itemsCargoSize[]={7,7};
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
		inventorySlot[]={"BPCookingEquip"};
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
		displayName="Alpocalypse Guitar";
		descriptionShort="A guitar for the alpocalypse.";
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

  class SRP_StreetLightSlim_Kit: SRP_KitBase  // SRP_StreetLightL_kit
	{
		scope=2;
		displayName="Slim Street Light Kit";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

  class SRP_StreetLightSlim: Container_Base  // SRP_StreetLightLarge
	{
		scope=2;
		displayName="Street Light Slim";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\srp_streetlightslim.p3d";
		carveNavmesh=1;
		weight=3000;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_streetlightslim_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_streetlightslim.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
				};
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
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_streetlight_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\s_streetlight.rvmat"
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
		descriptionShort="This is a medium street light which can be used to light up the streets";
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
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_streetlight_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\s_streetlight.rvmat"
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

  class SRP_DiceRpg_d4: Inventory_Base  // new
	{
		scope=2;
		displayName="D4";
		descriptionShort="There must be another in the set.";
		model="Survivalists_Mods\gear\camping\dicerpg_d4.p3d";
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		physLayer="item_small";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_dicerpg_co.paa"
    };
	};
  class SRP_DiceRpg_d6: SRP_DiceRpg_d4  // new
	{
		scope=2;
		displayName="D6";
		model="Survivalists_Mods\gear\camping\dicerpg_d6.p3d";
	};
  class SRP_DiceRpg_d8: SRP_DiceRpg_d4  // new
	{
		scope=2;
		displayName="D8";
		model="Survivalists_Mods\gear\camping\dicerpg_d8.p3d";
	};
  class SRP_DiceRpg_d10: SRP_DiceRpg_d4  // new
	{
		scope=2;
		displayName="D10";
		model="Survivalists_Mods\gear\camping\dicerpg_d10.p3d";
	};
  class SRP_DiceRpg_d12: SRP_DiceRpg_d4  // new
	{
		scope=2;
		displayName="D12";
		model="Survivalists_Mods\gear\camping\dicerpg_d12.p3d";
	};
  class SRP_DiceRpg_d20: SRP_DiceRpg_d4  // new
	{
		scope=2;
		displayName="D20";
		model="Survivalists_Mods\gear\camping\dicerpg_d20.p3d";
	};
  class SRP_DiceRpg_d100: SRP_DiceRpg_d4  // new
	{
		scope=2;
		displayName="D100";
		model="Survivalists_Mods\gear\camping\dicerpg_d100.p3d";
	};


  class SRP_DiceSingle_White: Inventory_Base  // new
	{
		scope=2;
		displayName="A single dice";
		descriptionShort="There must be another in the set.";
		model="Survivalists_Mods\gear\camping\dice.p3d";
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		physLayer="item_small";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_white_co.paa"
    };
	};

  class SRP_DiceSingle_WhiteRed: SRP_DiceSingle_White  // new
	{
		scope=2;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_whitered_co.paa"
    };
	};

  class SRP_DiceSingle_BlackWhite: SRP_DiceSingle_WhiteRed  // new
	{
		scope=2;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_blackwhite_co.paa"
    };
	};

  class SRP_DiceSingle_BlackRed: SRP_DiceSingle_BlackWhite  // new
	{
		scope=2;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_blackred_co.paa"
    };
	};

  class SRP_DeskNamePlate: Inventory_Base  // new
	{
		scope=2;
		displayName="Desk Nameplate";
		descriptionShort="This used to sit on someones desk.";
		model="Survivalists_Mods\gear\camping\nameplate.p3d";
		weight=250;
		itemSize[]={3,1};
		absorbency=0.30000001;
		physLayer="item_small";
	};

  class SRP_MetalBucket: Inventory_Base  // new
	{
		scope=2;
		displayName="Bucket";
		descriptionShort="Holds stuff inside if you hold it upright.";
		model="Survivalists_Mods\gear\camping\srp_bucket.p3d";
		weight=250;
		itemSize[]={3,3};
		absorbency=0.30000001;
    varTemperatureMax=1500;
		physLayer="item_small";
	};

  //----------------------------------- Playing/Trading Cards
  class SRP_DeckOfCards: Inventory_Base  // new
	{
		scope=2;
		displayName="Deck of cards";
		descriptionShort="A container for multiple cards.";
		model="Survivalists_Mods\gear\camping\srp_deckofcards.p3d";
    color="base";
		weight=250;
		itemSize[]={2,2};
		absorbency=0.30000001;
		physLayer="item_small";
    attachments[]=
		{
			"Card2Spade",
			"Card3Spade",
			"Card4Spade",
			"Card5Spade",
			"Card6Spade",
			"Card7Spade",
			"Card8Spade",
			"Card9Spade",
			"Card10Spade",
			"CardJackSpade",
			"CardQueenSpade",
			"CardKingSpade",
			"CardAceSpade",
      "Card2Club",
			"Card3Club",
			"Card4Club",
			"Card5Club",
			"Card6Club",
			"Card7Club",
			"Card8Club",
			"Card9Club",
			"Card10Club",
			"CardJackClub",
			"CardQueenClub",
			"CardKingClub",
			"CardAceClub",
      "Card2Heart",
			"Card3Heart",
			"Card4Heart",
			"Card5Heart",
			"Card6Heart",
			"Card7Heart",
			"Card8Heart",
			"Card9Heart",
			"Card10Heart",
			"CardJackHeart",
			"CardQueenHeart",
			"CardKingHeart",
			"CardAceHeart",
      "Card2Diamond",
			"Card3Diamond",
			"Card4Diamond",
			"Card5Diamond",
			"Card6Diamond",
			"Card7Diamond",
			"Card8Diamond",
			"Card9Diamond",
			"Card10Diamond",
			"CardJackDiamond",
			"CardQueenDiamond",
			"CardKingDiamond",
			"CardAceDiamond",
		};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_deckofcards_co.paa"
    };
    class GUIInventoryAttachmentsProps
		{
      class Spades
			{
				name="Spades";
				description="For spades";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "Card2Spade",
          "Card3Spade",
          "Card4Spade",
          "Card5Spade",
          "Card6Spade",
          "Card7Spade",
          "Card8Spade",
          "Card9Spade",
          "Card10Spade",
          "CardJackSpade",
          "CardQueenSpade",
          "CardKingSpade",
          "CardAceSpade"
				};				
			};
			class Clubs
			{
				name="Club";
				description="For clubs";
        icon="set:dayz_inventory image:missing";
				attachmentSlots[]=
				{
          "Card2Club",
          "Card3Club",
          "Card4Club",
          "Card5Club",
          "Card6Club",
          "Card7Club",
          "Card8Club",
          "Card9Club",
          "Card10Club",
          "CardJackClub",
          "CardQueenClub",
          "CardKingClub",
          "CardAceClub"
				};
			};
			class Hearts
			{
				name="Hearts";
				description="For hearts";
		    icon="set:dayz_inventory image:missing";		    
				attachmentSlots[]=
				{
          "Card2Heart",
          "Card3Heart",
          "Card4Heart",
          "Card5Heart",
          "Card6Heart",
          "Card7Heart",
          "Card8Heart",
          "Card9Heart",
          "Card10Heart",
          "CardJackHeart",
          "CardQueenHeart",
          "CardKingHeart",
          "CardAceHeart"
				};
			};
      class Diamonds
			{
				name="Diamonds";
				description="For diamonds";
		    icon="set:dayz_inventory image:missing";		    
				attachmentSlots[]=
				{
          "Card2Diamond",
          "Card3Diamond",
          "Card4Diamond",
          "Card5Diamond",
          "Card6Diamond",
          "Card7Diamond",
          "Card8Diamond",
          "Card9Diamond",
          "Card10Diamond",
          "CardJackDiamond",
          "CardQueenDiamond",
          "CardKingDiamond",
          "CardAceDiamond"
				};
			};
		};
	};

  class SRP_HandOfCards: Inventory_Base
  {
    scope=2;
    displayName="A hand of cards.";
    descriptionShort="Used to hold a hand of cards. Burn after use.";
    model="Survivalists_Mods\gear\camping\srp_handofcards.p3d";
		weight=250;
		itemSize[]={2,2};
		absorbency=0.30000001;
		physLayer="item_small";
    attachments[]=
		{
			"CardHand1",
			"CardHand2",
			"CardHand3",
			"CardHand4",
			"CardHand5",
		};
  }

  class SRP_PlayingCard_ColorBase: Inventory_Base  // new
	{
		scope=2;
		displayName="Playing Card Base";
		descriptionShort="A small card.";
		model="Survivalists_Mods\gear\camping\srp_playingcard.p3d";
    color="base";
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		physLayer="item_small";
    inventorySlot[]=
    {
      "CardHand1",
			"CardHand2",
			"CardHand3",
			"CardHand4",
			"CardHand5",
			"Card2Spade",
			"Card3Spade",
			"Card4Spade",
			"Card5Spade",
			"Card6Spade",
			"Card7Spade",
			"Card8Spade",
			"Card9Spade",
			"Card10Spade",
			"CardJackSpade",
			"CardQueenSpade",
			"CardKingSpade",
			"CardAceSpade",
      "Card2Club",
			"Card3Club",
			"Card4Club",
			"Card5Club",
			"Card6Club",
			"Card7Club",
			"Card8Club",
			"Card9Club",
			"Card10Club",
			"CardJackClub",
			"CardQueenClub",
			"CardKingClub",
			"CardAceClub",
      "Card2Heart",
			"Card3Heart",
			"Card4Heart",
			"Card5Heart",
			"Card6Heart",
			"Card7Heart",
			"Card8Heart",
			"Card9Heart",
			"Card10Heart",
			"CardJackHeart",
			"CardQueenHeart",
			"CardKingHeart",
			"CardAceHeart",
      "Card2Diamond",
			"Card3Diamond",
			"Card4Diamond",
			"Card5Diamond",
			"Card6Diamond",
			"Card7Diamond",
			"Card8Diamond",
			"Card9Diamond",
			"Card10Diamond",
			"CardJackDiamond",
			"CardQueenDiamond",
			"CardKingDiamond",
			"CardAceDiamond",
		};
    hiddenSelections[]=
    {
      "zbytek",
      "back"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_co.paa"
    };
	};

  class SRP_PlayingCard_circle: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="circle";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_circle_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_plus: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="plus";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_plus_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_square: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="square";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_square_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_star: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="star";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_star_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_wave: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="wave";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_wave_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  
  // SPADES
  class SRP_PlayingCard_2Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="2spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="3spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="4spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="5spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="6spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="7spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="8spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="9spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10Spade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="10spade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackSpade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="jackspade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackspade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queenSpade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="queenspade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queenspade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingSpade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="kingspade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingspade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_aceSpade: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="acespade";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_acespade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  // CLUBS
  class SRP_PlayingCard_2club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="2club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="3club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="4club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="5club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="6club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="7club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="8club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="9club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10club: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="10club";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackclub: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="jackclub";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queenclub: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="queenclub";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queenclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingclub: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="kingclub";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_aceclub: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="aceclub";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_aceclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  // Diamond
  class SRP_PlayingCard_2diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="2diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="3diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="4diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="5diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="6diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="7diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="8diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="9diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10diamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="10diamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackdiamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="jackdiamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackdiamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queendiamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="queendiamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queendiamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingdiamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="kingdiamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingdiamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_acediamond: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="acediamond";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_acediamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  // Heart
  class SRP_PlayingCard_2heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="2heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="3heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="4heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="5heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="6heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="7heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="8heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="9heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10heart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="10heart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackheart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="jackheart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queenheart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="queenheart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queenheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingheart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="kingheart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_aceheart: SRP_PlayingCard_ColorBase  // new
  {
    scope=2;
    color="aceheart";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_aceheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  //------------------------------ BASE BUILDING

};