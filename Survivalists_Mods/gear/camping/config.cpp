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
  class Inventory_Base;
  class Container_Base;
  class WoodenCrate;
  class Paper;
  class Paddle;
  class PortableGasLamp;
  class ShelterBase;
  class FireplaceBase;
  class BarrelHoles_ColorBase;
  class SRP_KitBase;

  //----------------------- MOD OVERRIDES

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

  class Fabric: Inventory_Base
	{    
    varStackMax=4;
    varQuantityMax=200;
    itemSize[]={2,3};
    inventorySlot[]+=
		{
			"Material_Shelter_Fabric",
      "SRP_Construction_Fabric",
      "Smithing_Fabric",
      "Tailoring_Fabric"
		};
  };

// ------------------------- EVENT STUFF
  class SRP_PortalBone_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Bone Portal Kit";
		descriptionShort="A kit for teleporting victims to a new destination.";
	};
  
  class SRP_PortalBone: Inventory_Base  
	{
		scope=2;
		displayName="Bone Portal";
		descriptionShort="A bone portal. Useful for teleporting victims to a new destination.";
		model="Survivalists_Mods\gear\camping\srp_portalbone.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_PortalDruid_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Druid Portal Kit";
		descriptionShort="A kit for teleporting victims to a new destination.";
	};
  
  class SRP_PortalDruid: Inventory_Base  
	{
		scope=2;
		displayName="Druid Portal";
		descriptionShort="A druid portal. Useful for teleporting victims to a new destination.";
		model="Survivalists_Mods\gear\camping\srp_portaldruid.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_PortalArch_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Arch Portal Kit";
		descriptionShort="A kit for teleporting victims to a new destination.";
	};
  
  class SRP_PortalArch: Inventory_Base  
	{
		scope=2;
		displayName="Arch Portal";
		descriptionShort="An arch portal. Useful for teleporting victims to a new destination.";
		model="Survivalists_Mods\gear\camping\srp_portalarch.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_PortalReturn_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Return Portal Kit";
		descriptionShort="A kit for teleporting players back to a safe destination.";
	};
  
  class SRP_PortalReturn: Inventory_Base  
	{
		scope=2;
		displayName="Return Portal";
		descriptionShort="A return portal. Useful for teleporting players back to a safe destination.";
		model="Survivalists_Mods\gear\camping\srp_portalreturn.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_AltarBone_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Bone Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarBone: Inventory_Base  
	{
		scope=2;
		displayName="Food Altar";
		descriptionShort="An altar to summon food.";
		model="Survivalists_Mods\gear\camping\srp_altarbone.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_AltarWraith_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Wraith Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarWraith: Inventory_Base  
	{
		scope=2;
		displayName="Ammo Altar";
		descriptionShort="An altar to summon ammo.";
		model="Survivalists_Mods\gear\camping\srp_altarwraith.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_AltarDog_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Dog Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarDog: Inventory_Base  
	{
		scope=2;
		displayName="Repair Kit Altar";
		descriptionShort="An altar to summon repair kits.";
		model="Survivalists_Mods\gear\camping\srp_altardog.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_AltarWendigo_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Wendigo Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarWendigo: Inventory_Base  
	{
		scope=2;
		displayName="Wendigo Altar";
		descriptionShort="An altar to summon something big.";
		model="Survivalists_Mods\gear\camping\srp_altarwendigo.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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

  class SRP_AltarBigBoss_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Big Boss Altar Kit";
		descriptionShort="Alter for a boss.";
	};
  
  class SRP_AltarBigBoss: Inventory_Base  
	{
		scope=2;
		displayName="Big Boss Altar";
		descriptionShort="An altar to summon something big.";
		model="Survivalists_Mods\gear\camping\srp_altarbigboss.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
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
  class SRP_Collectible_Pin_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Collectible Pin";
		descriptionShort="A decorative pin that can be attached to a few things.";
		model="Survivalists_Mods\gear\camping\srp_collectiblepin.p3d";
		inventorySlot[]=
    {
      "SRP_Pin1",
      "SRP_Pin2",
      "SRP_Pin3",
      "SRP_Pin4",
      "SRP_Pin5",
    };
		weight=250;
		itemSize[]={1,1};
		absorbency=0.30000001;
		hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_collectible_pin_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_collectible_pin.rvmat"
		};
	};
  class SRP_Collectible_Pin_Basic: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_co.paa"};
	};
  class SRP_Collectible_Pin_Altar: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin - ALTAR";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_altar_co.paa"};
	};
  class SRP_Collectible_Pin_Espen: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin - Espen";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_espen_co.paa"};
	};
  class SRP_Collectible_Pin_Stag: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin - STAG";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_stag_co.paa"};
	};
  class SRP_Collectible_Pin_LockNSons: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin - Lock & Sons";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_locknsons_co.paa"};
	};
  class SRP_Collectible_Pin_Purple: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_purple_co.paa"};
	};
  class SRP_Collectible_Pin_Orange: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_orange_co.paa"};
	};
  class SRP_Collectible_Pin_Blue: SRP_Collectible_Pin_ColorBase
	{
		scope=2;
		displayName="Collectible Pin";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_collectible_pin_blue_co.paa"};
	};
  class SRP_Potbelly_Stove_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Potbelly Stove Kit";
		descriptionShort="A Potbelly Stove Kit";
	};
  class SRP_Potbelly_Stove: BarrelHoles_ColorBase //
	{
		scope=2;
		displayName="Potbelly Stove";
		descriptionShort="A Potbelly stove, a very convenient thing when the whole world is in ruin.";
		model="Survivalists_Mods\gear\camping\potbellystove.p3d";
		itemSize[]={10,15};
		weight=10000;
    hiddenSelections[]=
    {
      "ashes",
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\potbellystove_co.paa",
      "Survivalists_Mods\gear\camping\data\potbellystove_co.paa"
    };
		hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\camping\data\potbellystove.rvmat",
      "Survivalists_Mods\gear\camping\data\potbellystove.rvmat",
    };
		class Cargo
		{
			itemsCargoSize[]={7,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_BBQ_Basic_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Barbeque Smoker Kit";
		descriptionShort="A Barbeque Smoker Kit";
    projectionTypename="SRP_BBQ_Basic";
	};
  class SRP_BBQ_Grill_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Camp Grill Kit";
		descriptionShort="A Camp Grill Kit";
    projectionTypename="SRP_BBQ_Grill";
	};
  class SRP_BBQ_FirePit_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Fire Pit Kit";
		descriptionShort="A Fire Pit Kit";
    projectionTypename="SRP_BBQ_FirePit";    
	};
  class SRP_BBQ_ColorBase: FireplaceBase
	{
    scope=0;
		displayName="Barbeque Smoker";
		descriptionShort="A large grill meant for smoking or grilling food.";
		model="Survivalists_Mods\gear\camping\srp_bbq.p3d";
		weight=10000;
    hiddenSelections[]={"ashes","zbytek"};
    hiddenSelectionsTextures[]={"\dz\gear\cooking\data\stoneground_co.paa","Survivalists_Mods\gear\camping\data\srp_bbq_co.paa"};
		hiddenSelectionsMaterials[]={"\dz\gear\cooking\data\stonegroundnoemit.rvmat", "Survivalists_Mods\gear\camping\data\srp_bbq.rvmat"};
		overrideDrawArea="8.0";
    physLayer="item_large";
		openable=0;
		itemSize[]={10,5};
		itemsCargoSize[]={10,5};
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
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name="$STR_attachment_Smoking";
				description="";
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name="$STR_attachment_CookingEquipment0";
				description="";
				attachmentSlots[]=
				{
					"DirectCookingA",
					"DirectCookingB"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
	};  
  class SRP_BBQ_Basic: SRP_BBQ_ColorBase
  {
    scope=2;
  };
  class SRP_BBQ_Grill: SRP_BBQ_ColorBase
  {
    scope=2;
    displayName="Camp Grill";
		descriptionShort="A small grill meant for smoking or grilling food.";
		model="Survivalists_Mods\gear\camping\srp_bbq_campfiregrill.p3d";
		itemSize[]={5,2};
		weight=10000;
    hiddenSelections[]={"ashes","zbytek"};
    hiddenSelectionsTextures[]={"\dz\gear\cooking\data\stoneground_co.paa","Survivalists_Mods\gear\camping\data\srp_bbq_campfiregrill_co.paa"};
		hiddenSelectionsMaterials[]={"\dz\gear\cooking\data\stonegroundnoemit.rvmat","Survivalists_Mods\gear\camping\data\srp_bbq_campfiregrill.rvmat"};
		class Cargo
		{
			itemsCargoSize[]={1,1};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
  };
  class SRP_BBQ_FirePit: SRP_BBQ_ColorBase
  {
    scope=2;
    displayName="Fire Pit";
		descriptionShort="A fire pit meant for smoking or grilling food.";
		model="Survivalists_Mods\gear\camping\srp_bbq_firepit.p3d";
		itemSize[]={5,5};
		weight=10000;
    hiddenSelections[]={"ashes","zbytek"};
    hiddenSelectionsTextures[]={"\dz\gear\cooking\data\stoneground_co.paa","Survivalists_Mods\gear\camping\data\srp_bbq_firepit_ca.paa"};
		hiddenSelectionsMaterials[]={"\dz\gear\cooking\data\stoneground_co.paa","Survivalists_Mods\gear\camping\data\srp_bbq_firepit.rvmat"};
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
  };

  class SRP_FireplaceIndoor_Medieval_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Indoor Fireplace Kit - Medieval";
		descriptionShort="An Indoor Fireplace Kit - Medieval";
    projectionTypename="SRP_FireplaceIndoor_Medieval";
	};
  class SRP_FireplaceIndoor_Medieval: FireplaceBase
	{
		scope=2;
		displayName="Indoor Fireplace - Medieval";
		descriptionShort="An old fashioned fireplace meant to be used indoors.";
		model="Survivalists_Mods\gear\camping\srp_fireplaceindoor_medieval.p3d";
		overrideDrawArea="8.0";
    physLayer="item_large";
		openable=0;
		itemSize[]={10,5};
		itemsCargoSize[]={10,5};
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
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name="$STR_attachment_Smoking";
				description="";
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name="$STR_attachment_CookingEquipment0";
				description="";
				attachmentSlots[]=
				{
					"DirectCookingA",
					"DirectCookingB"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		hiddenSelections[]=
		{
			"ashes"
		};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_stone_logs_co.paa"};
	};
  class SRP_FireplaceIndoor_Fancy_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Indoor Fireplace Kit - Fancy";
		descriptionShort="An Indoor Fireplace Kit - Fancy";
    projectionTypename="SRP_FireplaceIndoor_Fancy";
	};
  class SRP_FireplaceIndoor_Fancy: FireplaceBase
	{
		scope=2;
		displayName="Indoor Fireplace - Fancy";
		descriptionShort="An old fashioned fireplace meant to be used indoors.";
		model="Survivalists_Mods\gear\camping\srp_fireplaceindoor_fancy.p3d";
		overrideDrawArea="8.0";
    physLayer="item_large";
		openable=0;
		itemSize[]={10,5};
		itemsCargoSize[]={10,5};
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
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name="$STR_attachment_Smoking";
				description="";
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name="$STR_attachment_CookingEquipment0";
				description="";
				attachmentSlots[]=
				{
					"DirectCookingA",
					"DirectCookingB"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		hiddenSelections[]=
		{
			"ashes",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_stone_logs_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_fancy_co.paa"
    };
	};
  class SRP_FireplaceIndoor_FancyPink_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Indoor Fireplace Kit - Fancy Pink";
		descriptionShort="An Indoor Fireplace Kit - Fancy Pink";
    projectionTypename="SRP_FireplaceIndoor_FancyPink";
	};
  class SRP_FireplaceIndoor_FancyPink: FireplaceBase
	{
		scope=2;
		displayName="Indoor Fireplace - FancyPink";
		descriptionShort="An old fashioned fireplace meant to be used indoors.";
		model="Survivalists_Mods\gear\camping\srp_fireplaceindoor_fancy.p3d";
		overrideDrawArea="8.0";
    physLayer="item_large";
		openable=0;
		itemSize[]={10,5};
		itemsCargoSize[]={10,5};
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
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name="$STR_attachment_Smoking";
				description="";
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name="$STR_attachment_CookingEquipment0";
				description="";
				attachmentSlots[]=
				{
					"DirectCookingA",
					"DirectCookingB"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		hiddenSelections[]=
		{
			"ashes",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_stone_logs_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_fancy_pinkish_co.paa"
    };
	};
  class SRP_FireplaceIndoor_FancyBlue_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Indoor Fireplace Kit - Fancy Blue";
		descriptionShort="An Indoor Fireplace Kit - Fancy Blue";
    projectionTypename="SRP_FireplaceIndoor_FancyBlue";
	};
  class SRP_FireplaceIndoor_FancyBlue: FireplaceBase
	{
		scope=2;
		displayName="Indoor Fireplace - FancyBlue";
		descriptionShort="An old fashioned fireplace meant to be used indoors.";
		model="Survivalists_Mods\gear\camping\srp_fireplaceindoor_fancy.p3d";
		overrideDrawArea="8.0";
    physLayer="item_large";
		openable=0;
		itemSize[]={10,5};
		itemsCargoSize[]={10,5};
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
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name="$STR_attachment_Smoking";
				description="";
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name="$STR_attachment_CookingEquipment0";
				description="";
				attachmentSlots[]=
				{
					"DirectCookingA",
					"DirectCookingB"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		hiddenSelections[]=
		{
			"ashes",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_stone_logs_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_fancy_blueish_co.paa"
    };
	};
  class SRP_FireplaceIndoor_FancyGreen_Kit: SRP_KitBase //
	{
		scope=2;
		displayName="Indoor Fireplace Kit - Fancy Green";
		descriptionShort="An Indoor Fireplace Kit - Fancy Green";
    projectionTypename="SRP_FireplaceIndoor_FancyGreen";
	};
  class SRP_FireplaceIndoor_FancyGreen: FireplaceBase
	{
		scope=2;
		displayName="Indoor Fireplace - FancyGreen";
		descriptionShort="An old fashioned fireplace meant to be used indoors.";
		model="Survivalists_Mods\gear\camping\srp_fireplaceindoor_fancy.p3d";
		overrideDrawArea="8.0";
    physLayer="item_large";
		openable=0;
		itemSize[]={10,5};
		itemsCargoSize[]={10,5};
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
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name="$STR_attachment_Smoking";
				description="";
				attachmentSlots[]=
				{
					"SmokingA",
					"SmokingB",
					"SmokingC",
					"SmokingD"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name="$STR_attachment_CookingEquipment0";
				description="";
				attachmentSlots[]=
				{
					"DirectCookingA",
					"DirectCookingB"
				};
				icon="set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name="$STR_attachment_Fuel0";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick"
				};
				icon="set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name="$STR_attachment_Kindling0";
				description="";
				attachmentSlots[]=
				{
					"Rags",
					"MedicalBandage",
					"Paper",
					"Bark"
				};
				icon="set:dayz_inventory image:cat_fp_kindling";
			};
		};
		hiddenSelections[]=
		{
			"ashes",
      "zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_stone_logs_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_fireplaceindoor_fancy_greenish_co.paa"
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
	class SRP_Bowl_DarkWood: SRP_Bowl_Wood  // 
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
	class SRP_Bowl_CherryWood: SRP_Bowl_Wood  // 
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
  class SRP_BowlSquare_Wood: SRP_Bowl_Wood  
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

  class SRP_StreetLightKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="StreetLight Kit";
		descriptionShort="A StreetLight Kit - Still needs a bit of work. Combine with other materials to finish.";
	};

  class SRP_StreetLightSlim_Kit: SRP_KitBase  // SRP_StreetLightL_kit
	{
		scope=2;
		displayName="Street Light Kit - Tall Slim Metal Lamp";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

  class SRP_StreetLightSlim: Container_Base  // SRP_StreetLightLarge
	{
		scope=2;
		displayName="Street Light - Tall Slim Metal Lamp";
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
		displayName="Street Light Kit - Tall Wooden Lamp Post";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

  class SRP_StreetLightLarge: Container_Base  // SRP_StreetLightLarge
	{
		scope=2;
		displayName="Street Light - Tall Wooden Lamp Post";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\SRP_StreetLightL.p3d";
		attachments[]=
		{
			"SRP_Lantern"
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

  class SRP_StreetLightLarge_Metal_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Street Light Kit - Tall Slim Metal Hook";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

  class SRP_StreetLightLarge_Metal: Container_Base  
	{
		scope=2;
		displayName="Street Light - Tall Slim Metal Hook";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\lamppostlarge.p3d";
		attachments[]=
		{
			"SRP_Lantern"
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
		displayName="Street Light Kit - Wooden Half Lamp Post";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

	class SRP_StreetLightMedium: Container_Base  // SRP_StreetLightM
	{
		scope=2;
		displayName="Street Light - Wooden Half Lamp Post";
		descriptionShort="This is a medium street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\SRP_StreetLightM.p3d";
		attachments[]=
		{
			"SRP_Lantern"
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
		displayName="Street Light Kit - Wooden Fancy Half Lamp Post";
		descriptionShort="A placeable street light kit. When built you can light up the streets!";
	};

	class SRP_StreetLightMedium_Wood: Container_Base  // SRP_StreetLightM
	{
		scope=2;
		displayName="Street Light - Wooden Fancy Half Lamp Post";
		descriptionShort="This is a large street light which can be used to light up the streets";
		model="Survivalists_Mods\gear\camping\lamppostmedium.p3d";
		attachments[]=
		{
			"SRP_Lantern"
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
	
  class SRP_Carpet_Kit: SRP_KitBase  // 
	{
		scope=2;
		displayName="An Old Carpet Kit";
		descriptionShort="An old carpet to decorate your home";
	};
  
  class SRP_Carpet: Inventory_Base  // 
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
			"Shoulder",
			"Melee",
			"Back",
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
    class AnimationSources
		{
      class slot_shoulder_rifle
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class slot_shoulder_melee
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class slot_melee_rifle
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class slot_melee_melee
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
	};

  class SRP_CarpetRug_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="An Old Rug Kit";
		descriptionShort="An old carpet to decorate your home";
	};
  
  class SRP_CarpetRug: Inventory_Base  
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
			"Shoulder",
			"Melee",
			"Back",
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
    class AnimationSources
		{
      class slot_shoulder_rifle
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			class slot_shoulder_melee
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class slot_melee_rifle
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class slot_melee_melee
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
	};

  class SRP_WoodenBox_Long: WoodenCrate  // 
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

  class SRP_WoodenBox_Locked: WoodenCrate  
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

  class SRP_WoodenBox_Square: WoodenCrate  
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

  class SRP_WoodenBox_Cask: WoodenCrate  
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

  class SRP_DiceRpg_d4: Inventory_Base  
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
  class SRP_DiceRpg_d6: SRP_DiceRpg_d4  
	{
		scope=2;
		displayName="D6";
		model="Survivalists_Mods\gear\camping\dicerpg_d6.p3d";
	};
  class SRP_DiceRpg_d8: SRP_DiceRpg_d4  
	{
		scope=2;
		displayName="D8";
		model="Survivalists_Mods\gear\camping\dicerpg_d8.p3d";
	};
  class SRP_DiceRpg_d10: SRP_DiceRpg_d4  
	{
		scope=2;
		displayName="D10";
		model="Survivalists_Mods\gear\camping\dicerpg_d10.p3d";
	};
  class SRP_DiceRpg_d12: SRP_DiceRpg_d4  
	{
		scope=2;
		displayName="D12";
		model="Survivalists_Mods\gear\camping\dicerpg_d12.p3d";
	};
  class SRP_DiceRpg_d20: SRP_DiceRpg_d4  
	{
		scope=2;
		displayName="D20";
		model="Survivalists_Mods\gear\camping\dicerpg_d20.p3d";
	};
  class SRP_DiceRpg_d100: SRP_DiceRpg_d4  
	{
		scope=2;
		displayName="D100";
		model="Survivalists_Mods\gear\camping\dicerpg_d100.p3d";
	};


  class SRP_DiceSingle_White: Inventory_Base  
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

  class SRP_DiceSingle_WhiteRed: SRP_DiceSingle_White  
	{
		scope=2;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_whitered_co.paa"
    };
	};

  class SRP_DiceSingle_BlackWhite: SRP_DiceSingle_WhiteRed  
	{
		scope=2;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_blackwhite_co.paa"
    };
	};

  class SRP_DiceSingle_BlackRed: SRP_DiceSingle_BlackWhite  
	{
		scope=2;
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\camping\data\dice_blackred_co.paa"
    };
	};

  class SRP_DeskNamePlate: Inventory_Base  
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

  class SRP_BoatPaddle: Paddle
  {
		scope=2;
    displayName="Boat Paddle";
		descriptionShort="A long boat paddle.";
		model="Survivalists_Mods\gear\camping\srp_boatpaddle.p3d";
		rotationFlags=1;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_boatpaddle_co.paa"
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
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_boatpaddle.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_boatpaddle.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_boatpaddle_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_boatpaddle_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_boatpaddle_destruct.rvmat"}}
					};
				};
			};
		};
    class MeleeModes
		{
			class Default
			{
				ammo="MeleeWoodBlunt";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWoodBlunt_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWoodBlunt_Heavy";
				range=3.7;
			};
		};
  };

  class SRP_BoatPaddle_Dobby: SRP_BoatPaddle
  {
		scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_boatpaddle_dobby_co.paa"
    };
  };

  class SRP_SentientCrystal_ColorBase: Inventory_Base  
	{
		scope=0;
		displayName="The Artifact";
		descriptionShort="A large rock with smooth surfaces.";
		model="Survivalists_Mods\gear\camping\srp_sentientcrystal_large.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
		physLayer="item_large";
    isTakeable=0;
    itemBehaviour=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_sentientcrystal_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_sentientcrystal.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_sentientcrystal.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_sentientcrystal.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_sentientcrystal.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_sentientcrystal.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_SentientCrystal_LargeSpaceman: SRP_SentientCrystal_ColorBase
  {
		scope=2;
		displayName="The Artifact";
		descriptionShort="A large rock with smooth surfaces.";
  };

  class SRP_DJBooth_ColorBase: Inventory_Base  
	{
		scope=0;
		displayName="DJ Booth";
		descriptionShort="A console to make sick beats.";
		model="Survivalists_Mods\gear\camping\srp_djbooth.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
		physLayer="item_large";
    isTakeable=0;
    itemBehaviour=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_djbooth_co.paa"
    };
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_djbooth.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_djbooth.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_djbooth.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_djbooth.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_djbooth.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_DJBooth_BacoBoss: SRP_DJBooth_ColorBase
  {
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_djbooth_co.paa"
    };
  };

  class SRP_Ladder_Opened_Kit: SRP_KitBase  
	{
		scope=2;
		displayName="Ladder";
		descriptionShort="A ladder that can be stood up.";
		model="Survivalists_Mods\gear\camping\srp_ladder_closed.p3d";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_ladder_co.paa"
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
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}}
					};
				};
			};
		};
	};
  
  class SRP_Ladder_Opened: Inventory_Base  
	{
		scope=2;
		displayName="Ladder";
		descriptionShort="A ladder that can be stood up.";
		model="Survivalists_Mods\gear\camping\srp_ladder_opened.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
		physLayer="item_large";
    isTakeable=0;
    itemBehaviour=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_ladder_co.paa"
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
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_ladder.rvmat"}}
					};
				};
			};
		};
	};
  
  class SRP_SleepingBag_ColorBase: Inventory_Base  
	{
		scope=0;
		displayName="Sleeping Bag";
		descriptionShort="A woven sleeping bag.";
		model="Survivalists_Mods\gear\camping\srp_sleepingbagunrolled.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		itemsCargoSize[]={0,0};
		physLayer="item_large";
    isTakeable=0;
    itemBehaviour=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled_co.paa"
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
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_SleepingBag_Basic_Kit: SRP_KitBase
  {
		scope=2;
    displayName="Sleeping Bag - Packed";
		descriptionShort="A rolled sleeping bag.";
		model="Survivalists_Mods\gear\camping\srp_sleepingbagrolled.p3d";
    itemSize[]={4,3};
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_sleepingbagrolled_co.paa"
    };
  };

  class SRP_SleepingBag_Basic: SRP_SleepingBag_ColorBase  
	{
		scope=2;
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_sleepingbagunrolled_co.paa"
    };
	};


	class SRP_ChessBoard_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Chess Game Kit";
		descriptionShort="A kit used to create pieces for a chess game";
		model="\dz\gear\cooking\log01.p3d";
		itemSize[]={3,1};
	};
  class SRP_ChessBoard_ColorBase: Inventory_Base  
	{
		scope=0;
		displayName="Chess Board Base";
		descriptionShort="A chess board. Place pieces on top to play a game.";
		model="Survivalists_Mods\gear\camping\srp_chessboard.p3d";
		weight=500;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Chess1",
      "SRP_Chess2",
      "SRP_Chess3",
      "SRP_Chess4",
      "SRP_Chess5",
      "SRP_Chess6",
      "SRP_Chess7",
      "SRP_Chess8",
      "SRP_Chess9",
      "SRP_Chess10",
      "SRP_Chess11",
      "SRP_Chess12",
      "SRP_Chess13",
      "SRP_Chess14",
      "SRP_Chess15",
      "SRP_Chess16",
      "SRP_Chess17",
      "SRP_Chess18",
      "SRP_Chess19",
      "SRP_Chess20",
      "SRP_Chess21",
      "SRP_Chess22",
      "SRP_Chess23",
      "SRP_Chess24",
      "SRP_Chess25",
      "SRP_Chess26",
      "SRP_Chess27",
      "SRP_Chess28",
      "SRP_Chess29",
      "SRP_Chess30",
      "SRP_Chess31",
      "SRP_Chess32",
      "SRP_Chess33",
      "SRP_Chess34",
      "SRP_Chess35",
      "SRP_Chess36",
      "SRP_Chess37",
      "SRP_Chess38",
      "SRP_Chess39",
      "SRP_Chess40",
      "SRP_Chess41",
      "SRP_Chess42",
      "SRP_Chess43",
      "SRP_Chess44",
      "SRP_Chess45",
      "SRP_Chess46",
      "SRP_Chess47",
      "SRP_Chess48",
      "SRP_Chess49",
      "SRP_Chess50",
      "SRP_Chess51",
      "SRP_Chess52",
      "SRP_Chess53",
      "SRP_Chess54",
      "SRP_Chess55",
      "SRP_Chess56",
      "SRP_Chess57",
      "SRP_Chess58",
      "SRP_Chess59",
      "SRP_Chess60",
      "SRP_Chess61",
      "SRP_Chess62",
      "SRP_Chess63",
      "SRP_Chess64",
    };
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
    class GUIInventoryAttachmentsProps
		{
      class Grid_Cells
			{
				name="Grid Cells";
				description="For chess pieces.";
        icon="set:dayz_inventory image:book";
				attachmentSlots[]=
				{                
          "SRP_Chess57",
          "SRP_Chess58",
          "SRP_Chess59",
          "SRP_Chess60",
          "SRP_Chess61",
          "SRP_Chess62",
          "SRP_Chess63",
          "SRP_Chess64",
          "SRP_Chess49",
          "SRP_Chess50",
          "SRP_Chess51",
          "SRP_Chess52",
          "SRP_Chess53",
          "SRP_Chess54",
          "SRP_Chess55",
          "SRP_Chess56",
          "SRP_Chess41",
          "SRP_Chess42",
          "SRP_Chess43",
          "SRP_Chess44",
          "SRP_Chess45",
          "SRP_Chess46",
          "SRP_Chess47",
          "SRP_Chess48",
          "SRP_Chess33",
          "SRP_Chess34",
          "SRP_Chess35",
          "SRP_Chess36",
          "SRP_Chess37",
          "SRP_Chess38",
          "SRP_Chess39",
          "SRP_Chess40",
          "SRP_Chess25",
          "SRP_Chess26",
          "SRP_Chess27",
          "SRP_Chess28",
          "SRP_Chess29",
          "SRP_Chess30",
          "SRP_Chess31",
          "SRP_Chess32",
          "SRP_Chess17",
          "SRP_Chess18",
          "SRP_Chess19",
          "SRP_Chess20",
          "SRP_Chess21",
          "SRP_Chess22",
          "SRP_Chess23",
          "SRP_Chess24",
          "SRP_Chess9",
          "SRP_Chess10",
          "SRP_Chess11",
          "SRP_Chess12",
          "SRP_Chess13",
          "SRP_Chess14",
          "SRP_Chess15",
          "SRP_Chess16",
          "SRP_Chess1",
          "SRP_Chess2",
          "SRP_Chess3",
          "SRP_Chess4",
          "SRP_Chess5",
          "SRP_Chess6",
          "SRP_Chess7",
          "SRP_Chess8",          
				};				
			};
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
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_ChessBoard_Board: SRP_ChessBoard_ColorBase  
	{
		scope=2;
		displayName="Chess Board";
		descriptionShort="A chess board. Place pieces on top to play a game.";
    color="board";
  };

  class SRP_ChessPiece_ColorBase: Inventory_Base  
	{
		scope=0;
		displayName="Chess Piece Base";
		descriptionShort="A chess piece. Place on top of a chess board to play a game.";
		model="Survivalists_Mods\gear\camping\srp_chessboard.p3d";
		weight=500;
		itemSize[]={1,1};
		itemsCargoSize[]={0,0};
    inventorySlot[]=
    {
      "SRP_Chess1",
      "SRP_Chess2",
      "SRP_Chess3",
      "SRP_Chess4",
      "SRP_Chess5",
      "SRP_Chess6",
      "SRP_Chess7",
      "SRP_Chess8",
      "SRP_Chess9",
      "SRP_Chess10",
      "SRP_Chess11",
      "SRP_Chess12",
      "SRP_Chess13",
      "SRP_Chess14",
      "SRP_Chess15",
      "SRP_Chess16",
      "SRP_Chess17",
      "SRP_Chess18",
      "SRP_Chess19",
      "SRP_Chess20",
      "SRP_Chess21",
      "SRP_Chess22",
      "SRP_Chess23",
      "SRP_Chess24",
      "SRP_Chess25",
      "SRP_Chess26",
      "SRP_Chess27",
      "SRP_Chess28",
      "SRP_Chess29",
      "SRP_Chess30",
      "SRP_Chess31",
      "SRP_Chess32",
      "SRP_Chess33",
      "SRP_Chess34",
      "SRP_Chess35",
      "SRP_Chess36",
      "SRP_Chess37",
      "SRP_Chess38",
      "SRP_Chess39",
      "SRP_Chess40",
      "SRP_Chess41",
      "SRP_Chess42",
      "SRP_Chess43",
      "SRP_Chess44",
      "SRP_Chess45",
      "SRP_Chess46",
      "SRP_Chess47",
      "SRP_Chess48",
      "SRP_Chess49",
      "SRP_Chess50",
      "SRP_Chess51",
      "SRP_Chess52",
      "SRP_Chess53",
      "SRP_Chess54",
      "SRP_Chess55",
      "SRP_Chess56",
      "SRP_Chess57",
      "SRP_Chess58",
      "SRP_Chess59",
      "SRP_Chess60",
      "SRP_Chess61",
      "SRP_Chess62",
      "SRP_Chess63",
      "SRP_Chess64",
    };
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
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
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_chessboard.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_ChessBoard_PawnPrimary: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Pawn";
    model="Survivalists_Mods\gear\camping\srp_chessboard_pawn.p3d";
    color="PawnPrimary";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
  };
  class SRP_ChessBoard_PawnAlternate: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Pawn";
    model="Survivalists_Mods\gear\camping\srp_chessboard_pawn.p3d";
    color="PawnAlternate";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_alternatepieces_co.paa"
    };
  };
  class SRP_ChessBoard_RookPrimary: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Rook";
    model="Survivalists_Mods\gear\camping\srp_chessboard_rook.p3d";
    color="RookPrimary";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
  };
  class SRP_ChessBoard_RookAlternate: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Rook";
    model="Survivalists_Mods\gear\camping\srp_chessboard_rook.p3d";
    color="RookAlternate";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_alternatepieces_co.paa"
    };
  };
  class SRP_ChessBoard_KnightPrimary: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Knight";
    model="Survivalists_Mods\gear\camping\srp_chessboard_knight.p3d";
    color="KnightPrimary";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
  };
  class SRP_ChessBoard_KnightAlternate: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Knight";
    model="Survivalists_Mods\gear\camping\srp_chessboard_knight_alternate.p3d";
    color="KnightAlternate";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_alternatepieces_co.paa"
    };
  };
  class SRP_ChessBoard_BishopPrimary: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Bishop";
    model="Survivalists_Mods\gear\camping\srp_chessboard_bishop.p3d";
    color="BishopPrimary";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
  };
  class SRP_ChessBoard_BishopAlternate: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Bishop";
    model="Survivalists_Mods\gear\camping\srp_chessboard_bishop_alternate.p3d";
    color="BishopAlternate";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_alternatepieces_co.paa"
    };
  };
  class SRP_ChessBoard_QueenPrimary: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Queen";
    model="Survivalists_Mods\gear\camping\srp_chessboard_queen.p3d";
    color="QueenPrimary";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
  };
  class SRP_ChessBoard_QueenAlternate: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - Queen";
    model="Survivalists_Mods\gear\camping\srp_chessboard_queen.p3d";
    color="QueenAlternate";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_alternatepieces_co.paa"
    };
  };
  class SRP_ChessBoard_KingPrimary: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - King";
    model="Survivalists_Mods\gear\camping\srp_chessboard_king.p3d";
    color="KingPrimary";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_co.paa"
    };
  };
  class SRP_ChessBoard_KingAlternate: SRP_ChessPiece_ColorBase  
	{
		scope=2;
		displayName="Chess Piece - King";
    model="Survivalists_Mods\gear\camping\srp_chessboard_king.p3d";
    color="KingAlternate";
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_chessboard_alternatepieces_co.paa"
    };
  };


//============================================== DECORATIVE LIGHTS

  class SRP_DecorativeLightKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit";
		descriptionShort="Espen Industries. The foundation of a decorative light kit - Still needs a bit of work to make something specific.";
    attachments[]=
		{	
      "Lightbulb",
			"LargeBattery",
      "Material_MetalWire"
		};
	};

  class SRP_DecorativeLight_LongKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_Long_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Long";
		descriptionShort="This is a decorative light that is long.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightlong.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}}
					};
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
  class SRP_DecorativeLight_Long_Blue: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Green: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_green_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_LightBlue: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Orange: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Pink: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Purple: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Rainbow: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Red: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_red_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_Yellow: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_Long_White: SRP_DecorativeLight_Long_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long White";
    color="White";    
	};

  class SRP_DecorativeLight_Long_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Long_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};

  class SRP_DecorativeLight_VerticalLongKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_VerticalLong_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Vertical Long";
		descriptionShort="This is a decorative light that is long and veritcal.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightlongvertical.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlong.rvmat"}}
					};
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
  class SRP_DecorativeLight_VerticalLong_Blue: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Green: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_green_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_LightBlue: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Orange: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Pink: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Purple: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Rainbow: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Red: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_red_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_Yellow: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlong_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLong_White: SRP_DecorativeLight_VerticalLong_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long White";
    color="White";    
	};

  class SRP_DecorativeLight_VerticalLong_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLong_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};


  class SRP_DecorativeLight_FlatKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_Flat_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Flat";
		descriptionShort="This is a decorative light that is flat.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightflat.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}}
					};
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
  class SRP_DecorativeLight_Flat_Blue: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Green: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_green_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_LightBlue: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Orange: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Pink: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Purple: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Rainbow: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Red: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_red_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_Yellow: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_Flat_White: SRP_DecorativeLight_Flat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Flat White";
    color="White";    
	};

  class SRP_DecorativeLight_Flat_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Blue";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_Flat_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Flat_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Flat White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};


  class SRP_DecorativeLight_VerticalFlatKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_VerticalFlat_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Vertical Flat";
		descriptionShort="This is a decorative light that is flat and vertical.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightflatvertical.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightflat.rvmat"}}
					};
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
  class SRP_DecorativeLight_VerticalFlat_Blue: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Green: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_green_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_LightBlue: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Orange: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Pink: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Purple: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Rainbow: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Red: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_red_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_Yellow: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightflat_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalFlat_White: SRP_DecorativeLight_VerticalFlat_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Flat White";
    color="White";    
	};  

  class SRP_DecorativeLight_VerticalFlat_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Blue";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_VerticalFlat_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalFlat_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Flat White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};

  class SRP_DecorativeLight_LongFancyKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Fancy Long";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_LongFancy_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Long Fancy";
		descriptionShort="This is a decorative light that is long and fancy.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightlongfancy.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}}
					};
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
  class SRP_DecorativeLight_LongFancy_Blue: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Green: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_green_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_LightBlue: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Orange: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Pink: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Purple: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Rainbow: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Red: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_red_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_Yellow: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_LongFancy_White: SRP_DecorativeLight_LongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Long Fancy White";
    color="White";    
	};

  class SRP_DecorativeLight_LongFancy_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_LongFancy_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Long Fancy White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};

  class SRP_DecorativeLight_VerticalLongFancyKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Fancy Long";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Long Fancy";
		descriptionShort="This is a decorative light that is vertical, long and fancy.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightlongfancyvertical.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy.rvmat"}}
					};
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
  class SRP_DecorativeLight_VerticalLongFancy_Blue: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Green: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_green_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_LightBlue: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Orange: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Pink: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Purple: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Rainbow: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Red: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_red_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_Yellow: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightlongfancy_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_VerticalLongFancy_White: SRP_DecorativeLight_VerticalLongFancy_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Vertical Long Fancy White";
    color="White";    
	};

  class SRP_DecorativeLight_VerticalLongFancy_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_VerticalLongFancy_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Vertical Long Fancy White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};

  class SRP_DecorativeLight_CornerKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_Corner_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Corner";
		descriptionShort="This is a decorative light that fits in a corner.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightcorner.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}}
					};
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
  class SRP_DecorativeLight_Corner_Blue: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Green: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_green_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_LightBlue: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Orange: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Pink: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Purple: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Rainbow: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Red: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_red_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_Yellow: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_Corner_White: SRP_DecorativeLight_Corner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Corner White";
    color="White";    
	};

  class SRP_DecorativeLight_Corner_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_Corner_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Corner White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};

  class SRP_DecorativeLight_HorizontalCornerKit_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner";
		descriptionShort="Espen Industries. A light kit that needs a some more work to complete.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Colorbase: Inventory_Base
	{
		scope=0;
		displayName="Decorative Light - Horizontal Corner";
		descriptionShort="This is a decorative light that fits in a corner.";
		model="Survivalists_Mods\gear\camping\srp_decorativelightcornerhorizontal.p3d";
		carveNavmesh=1;
		weight=1500;
		itemSize[]={3,2};
    itemsCargoSize[]={0,0};
    isTakeable=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner.rvmat"}}
					};
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
  class SRP_DecorativeLight_HorizontalCorner_Blue: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Blue";
    color="Blue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_blue_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Green: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Green";
    color="Green";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_green_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_LightBlue: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Light Blue";
    color="LightBlue";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_lightblue_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Orange: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Orange";
    color="Orange";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_orange_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Pink: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Pink";
    color="Pink";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_pink_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Purple: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Purple";
    color="Purple";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_purple_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Rainbow: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Rainbow";
    color="Rainbow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_rainbow_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Red: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Red";
    color="Red";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_red_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_Yellow: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner Yellow";
    color="Yellow";
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\camping\data\srp_decorativelightcorner_yellow_co.paa"
		};
	};
  class SRP_DecorativeLight_HorizontalCorner_White: SRP_DecorativeLight_HorizontalCorner_Colorbase
	{
		scope=2;
		displayName="Decorative Light - Horizontal Corner White";
    color="White";    
	};

  class SRP_DecorativeLight_HorizontalCorner_Blue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Green_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Green";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_LightBlue_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Light Blue";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Orange_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Orange";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Pink_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Pink";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Purple_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Purple";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Rainbow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Rainbow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Red_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Red";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_Yellow_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner Yellow";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};
  class SRP_DecorativeLight_HorizontalCorner_White_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Decorative Light Kit - Horizontal Corner White";
		descriptionShort="Espen Industries. A placeable decorative light kit. When built you can light up small areas.";
	};

//----------------------------------- Playing/Trading Cards
  class SRP_DeckOfCards: Inventory_Base  
	{
		scope=2;
		displayName="Deck of cards";
		descriptionShort="A container for multiple cards.";
		model="Survivalists_Mods\gear\camping\srp_deckofcards.p3d";
    color="base";
		weight=250;
		itemSize[]={2,2};
    rotationFlags=16;
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
  };

  class SRP_PlayingCard_ColorBase: Inventory_Base  
	{
		scope=0;
		displayName="Playing Card Base";
		descriptionShort="A small card. Combine two to make a hand of cards for secrecy.";
		model="Survivalists_Mods\gear\camping\srp_playingcard.p3d";
    color="base";
		weight=250;
		itemSize[]={1,1};
    rotationFlags=16;
		absorbency=0.30000001;
		physLayer="item_small";
    itemBehaviour=1;
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
			"CardAceSpadeExtra",
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
			"CardAceClubExtra",
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
			"CardAceHeartExtra",
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
			"CardAceDiamondExtra",
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

  class SRP_PlayingCard_circle: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    displayName="Card - Circle";
    color="circle";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_circle_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_plus: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    displayName="Card - Plus";
    color="plus";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_plus_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_square: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="square";
    displayName="Card - Square";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_square_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_star: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="star";
    displayName="Card - Star";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_star_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  class SRP_PlayingCard_wave: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wave";
    displayName="Card - Water";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_wave_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardback_shape_co.paa"
    };
  };
  
  // SPADES
  class SRP_PlayingCard_2Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="2spade";
    displayName="Card - 2 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="3spade";
    displayName="Card - 3 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="4spade";
    displayName="Card - 4 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="5spade";
    displayName="Card - 5 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="6spade";
    displayName="Card - 6 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="7spade";
    displayName="Card - 7 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="8spade";
    displayName="Card - 8 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="9spade";
    displayName="Card - 9 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10Spade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="10spade";
    displayName="Card - 10 of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10spade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackSpade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="jackspade";
    displayName="Card - Jack of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackspade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queenSpade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="queenspade";
    displayName="Card - Queen of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queenspade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingSpade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="kingspade";
    displayName="Card - King of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingspade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_aceSpade: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="acespade";
    displayName="Card - Ace of Spades";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_acespade_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  // CLUBS
  class SRP_PlayingCard_2club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="2club";
    displayName="Card - 2 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="3club";
    displayName="Card - 3 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="4club";
    displayName="Card - 4 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="5club";
    displayName="Card - 5 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="6club";
    displayName="Card - 6 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="7club";
    displayName="Card - 7 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="8club";
    displayName="Card - 8 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="9club";
    displayName="Card - 9 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10club: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="10club";
    displayName="Card - 10 of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10club_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackclub: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="jackclub";
    displayName="Card - Jack of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queenclub: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="queenclub";
    displayName="Card - Queen of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queenclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingclub: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="kingclub";
    displayName="Card - King of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_aceclub: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="aceclub";
    displayName="Card - Ace of Clubs";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_aceclub_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  // Diamond
  class SRP_PlayingCard_2diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="2diamond";
    displayName="Card - 2 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="3diamond";
    displayName="Card - 3 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="4diamond";
    displayName="Card - 4 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="5diamond";
    displayName="Card - 5 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="6diamond";
    displayName="Card - 6 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="7diamond";
    displayName="Card - 7 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="8diamond";
    displayName="Card - 8 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="9diamond";
    displayName="Card - 9 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10diamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="10diamond";
    displayName="Card - 10 of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10diamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackdiamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="jackdiamond";
    displayName="Card - Jack of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackdiamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queendiamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="queendiamond";
    displayName="Card - Queen of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queendiamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingdiamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="kingdiamond";
    displayName="Card - King of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingdiamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_acediamond: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="acediamond";
    displayName="Card - Ace of Diamonds";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_acediamond_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  // Heart
  class SRP_PlayingCard_2heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="2heart";
    displayName="Card - 2 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_2heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_3heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="3heart";
    displayName="Card - 3 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_3heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_4heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="4heart";
    displayName="Card - 4 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_4heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_5heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="5heart";
    displayName="Card - 5 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_5heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_6heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="6heart";
    displayName="Card - 6 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_6heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_7heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="7heart";
    displayName="Card - 7 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_7heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_8heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="8heart";
    displayName="Card - 8 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_8heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_9heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="9heart";
    displayName="Card - 9 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_9heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_10heart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="10heart";
    displayName="Card - 10 of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_10heart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_jackheart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="jackheart";
    displayName="Card - Jack of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_jackheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_queenheart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="queenheart";
    displayName="Card - Queen of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_queenheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_kingheart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="kingheart";
    displayName="Card - King of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_kingheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_aceheart: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="aceheart";
    displayName="Card - Ace of Hearts";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_aceheart_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };


//=================TAROT Cards
  class SRP_DeckOfCards_Tarot: SRP_DeckOfCards  
	{
		scope=2;
		displayName="Deck of Tarot Cards";
		descriptionShort="A container for multiple cards.";
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
			"CardAceSpadeExtra",
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
			"CardAceClubExtra",
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
			"CardAceHeartExtra",
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
			"CardAceDiamondExtra",
		};
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_deckofcards_tarot_co.paa"
    };
    class GUIInventoryAttachmentsProps
		{
      class Cups
			{
				name="Cups";
				description="For Cups";
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
          "CardAceSpade",
          "CardAceSpadeExtra",
				};				
			};
			class Pentacles
			{
				name="Pentacles";
				description="For Pentacles";
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
          "CardAceClub",
          "CardAceClubExtra",
				};
			};
			class Swords
			{
				name="Swords";
				description="For Swords";
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
          "CardAceHeart",
          "CardAceHeartExtra",
				};
			};
      class Wands
			{
				name="Wands";
				description="For Wands";
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
          "CardAceDiamondExtra",
				};
			};
		};
	};

  class SRP_PlayingCard_tarot_cupsace: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsace";
    displayName="Card - Ace of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsace_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsking: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsking";
    displayName="Card - King of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsking_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsqueen: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsqueen";
    displayName="Card - Queen of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsqueen_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsknight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsknight";
    displayName="Card - Knight of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsknight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupspage: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupspage";
    displayName="Card - Page of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupspage_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupstwo: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupstwo";
    displayName="Card - 2 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupstwo_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsthree: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsthree";
    displayName="Card - 3 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsthree_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsfour: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsfour";
    displayName="Card - 4 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsfour_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsfive: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsfive";
    displayName="Card - 5 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsfive_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupssix: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupssix";
    displayName="Card - 6 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupssix_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsseven: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsseven";
    displayName="Card - 7 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsseven_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupseight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupseight";
    displayName="Card - 8 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupseight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsnine: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsnine";
    displayName="Card - 9 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsnine_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_cupsten: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="cupsten";
    displayName="Card - 10 of Cups";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_cupsten_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  class SRP_PlayingCard_tarot_pentaclesace: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesace";
    displayName="Card - Ace of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesace_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesking: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesking";
    displayName="Card - King of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesking_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesqueen: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesqueen";
    displayName="Card - Queen of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesqueen_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesknight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesknight";
    displayName="Card - Knight of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesknight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclespage: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclespage";
    displayName="Card - Page of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclespage_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclestwo: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclestwo";
    displayName="Card - 2 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclestwo_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesthree: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesthree";
    displayName="Card - 3 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesthree_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesfour: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesfour";
    displayName="Card - 4 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesfour_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesfive: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesfive";
    displayName="Card - 5 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesfive_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclessix: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclessix";
    displayName="Card - 6 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclessix_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesseven: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesseven";
    displayName="Card - 7 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesseven_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentacleseight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentacleseight";
    displayName="Card - 8 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentacleseight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesnine: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesnine";
    displayName="Card - 9 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesnine_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_pentaclesten: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="pentaclesten";
    displayName="Card - 10 of Pentacles";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_pentaclesten_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  class SRP_PlayingCard_tarot_swordsace: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsace";
    displayName="Card - Ace of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsace_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsking: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsking";
    displayName="Card - King of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsking_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsqueen: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsqueen";
    displayName="Card - Queen of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsqueen_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsknight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsknight";
    displayName="Card - Knight of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsknight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordspage: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordspage";
    displayName="Card - Page of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordspage_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordstwo: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordstwo";
    displayName="Card - 2 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordstwo_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsthree: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsthree";
    displayName="Card - 3 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsthree_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsfour: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsfour";
    displayName="Card - 4 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsfour_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsfive: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsfive";
    displayName="Card - 5 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsfive_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordssix: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordssix";
    displayName="Card - 6 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordssix_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsseven: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsseven";
    displayName="Card - 7 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsseven_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordseight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordseight";
    displayName="Card - 8 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordseight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsnine: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsnine";
    displayName="Card - 9 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsnine_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_swordsten: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="swordsten";
    displayName="Card - 10 of Swords";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_swordsten_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };

  class SRP_PlayingCard_tarot_wandsace: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsace";
    displayName="Card - Ace of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsace_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsking: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsking";
    displayName="Card - King of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsking_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsqueen: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsqueen";
    displayName="Card - Queen of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsqueen_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsknight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsknight";
    displayName="Card - Knight of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsknight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandspage: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandspage";
    displayName="Card - Page of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandspage_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandstwo: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandstwo";
    displayName="Card - 2 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandstwo_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsthree: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsthree";
    displayName="Card - 3 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsthree_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsfour: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsfour";
    displayName="Card - 4 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsfour_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsfive: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsfive";
    displayName="Card - 5 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsfive_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandssix: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandssix";
    displayName="Card - 6 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandssix_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsseven: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsseven";
    displayName="Card - 7 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsseven_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandseight: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandseight";
    displayName="Card - 8 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandseight_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsnine: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsnine";
    displayName="Card - 9 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsnine_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };
  class SRP_PlayingCard_tarot_wandsten: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="wandsten";
    displayName="Card - 10 of Wands";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_wandsten_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  

  class SRP_PlayingCard_tarot_chariot: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="chariot";
    displayName="Card - The Chariot";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_chariot_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_death: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="death";
    displayName="Card - Death";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_death_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_devil: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="devil";
    displayName="Card - The Devil";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_devil_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_emperor: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="emperor";
    displayName="Card - The Emperor";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_emperor_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_empress: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="empress";
    displayName="Card - The Empress";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_empress_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_fool: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="fool";
    displayName="Card - The Fool";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_fool_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_fortune: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="fortune";
    displayName="Card - Fortune";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_fortune_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_hangedman: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="hangedman";
    displayName="Card - The Hangedman";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_hangedman_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_hermit: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="hermit";
    displayName="Card - The Hermit";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_hermit_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_hierophant: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="hierophant";
    displayName="Card - The Hierophant";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_hierophant_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_highpriestess: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="highpriestess";
    displayName="Card - The High Priestess";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_highpriestess_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_judgement: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="judgement";
    displayName="Card - Judgement";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_judgement_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_justice: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="justice";
    displayName="Card - Justice";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_justice_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_lovers: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="lovers";
    displayName="Card - The Lovers";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_lovers_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_magician: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="magician";
    displayName="Card - The Magician";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_magician_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_moon: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="moon";
    displayName="Card - The Moon";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_moon_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_star: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="star";
    displayName="Card - The Star";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_star_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_strength: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="strength";
    displayName="Card - Strength";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_strength_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_sun: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="sun";
    displayName="Card - The Sun";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_sun_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_temperance: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="temperance";
    displayName="Card - Temperance";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_temperance_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_tower: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="tower";
    displayName="Card - The Tower";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_tower_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  };  
  class SRP_PlayingCard_tarot_world: SRP_PlayingCard_ColorBase  
  {
    scope=2;
    color="world";
    displayName="Card - The World";
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\camping\data\srp_playingcardfront_tarot_world_co.paa",
      "Survivalists_Mods\gear\camping\data\srp_playingcardbackworn_co.paa"
    };
  }; 

  //------------------------------ BASE BUILDING

};