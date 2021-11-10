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
	};

  class SRP_DiceSingle_WhiteRed: Inventory_Base  // new
	{
		scope=2;
		displayName="A single dice";
		descriptionShort="There must be another in the set.";
		model="Survivalists_Mods\gear\camping\dice.p3d";
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		physLayer="item_small";
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_whitered_co.paa"
    };
	};

  class SRP_DiceSingle_BlackWhite: Inventory_Base  // new
	{
		scope=2;
		displayName="A single dice";
		descriptionShort="There must be another in the set.";
		model="Survivalists_Mods\gear\camping\dice.p3d";
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		physLayer="item_small";
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_blackwhite_co.paa"
    };
	};

  class SRP_DiceSingle_BlackRed: Inventory_Base  // new
	{
		scope=2;
		displayName="A single dice";
		descriptionShort="There must be another in the set.";
		model="Survivalists_Mods\gear\camping\dice.p3d";
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		physLayer="item_small";
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
		physLayer="item_small";
	};
  
  //------------------------------ BASE BUILDING

};