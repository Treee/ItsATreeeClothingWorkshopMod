class CfgPatches
{
	class Survivalists_Building_Gear_Camping
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class BaseBuildingBase;

  class SRP_Building_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Building Kit";
		descriptionShort="A wooden box used to transport small items. Find a suitable place to construct. Can be disassembled.";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={7,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\camping\data\srp_kitbase_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
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
	};


  // class SRP_Carpentry_WoodenOutHouse_Kit: SRP_Building_KitBase
	// {
	// 	scope=2;
	// 	displayName="Wooden Outhouse kit";
	// 	descriptionShort="A building for the most important of business.";
	// };
  // class SRP_Carpentry_WoodenOutHouse_KitPlacing: SRP_Carpentry_WoodenOutHouse_Kit
	// {
	// 	scope=2;
  //   displayName="This is a hologram";
	// 	descriptionShort="Nothing to see here, move along";
	// 	model="Survivalists_Building\camping\srp_woodenouthouse_placing.p3d";
	// 	storageCategory=10;
	// 	alignHologramToTerain=0;
	// 	slopeTolerance=0.30000001;
	// };


	class SRP_Carpentry_WoodenOutHouse_Kit: Inventory_Base
	{
		scope=2;
		displayName="Wooden Outhouse kit";
		descriptionShort="A building for the most important of business.";
		model="\DZ\gear\camping\fence_kit.p3d";
		rotationFlags=17;
		itemSize[]={1,5};
		weight=280;
		itemBehaviour=1;
		attachments[]=
		{
			"Rope"
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
						{1,{}},
						{0.69999999,{}},
						{0.5,{}},
						{0.30000001,{}},
						{0,{}}
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
			class Inventory: AnimSourceHidden
			{
			};
			class Placing: AnimSourceHidden
			{
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class crafting_1
				{
					soundSet="FenceKit_crafting_1_SoundSet";
					id=1111;
				};
				class crafting_2
				{
					soundSet="FenceKit_crafting_2_SoundSet";
					id=1112;
				};
				class crafting_3
				{
					soundSet="FenceKit_crafting_3_SoundSet";
					id=1113;
				};
				class crafting_4
				{
					soundSet="FenceKit_crafting_4_SoundSet";
					id=1114;
				};
				class crafting_5
				{
					soundSet="FenceKit_crafting_5_SoundSet";
					id=1115;
				};
			};
		};
	};
	class SRP_Carpentry_WoodenOutHouse_KitPlacing: SRP_Carpentry_WoodenOutHouse_Kit
	{
		scope=2;
    displayName="This is a hologram";
		descriptionShort="Nothing to see here, move along";
		model="\DZ\gear\camping\fence_kit_placing.p3d";
		storageCategory=10;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\consumables\data\pile_of_planks_co.tga"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\fence_pile_of_planks.rvmat"
		};
		hologramMaterial="tent_medium";
		hologramMaterialPath="dz\gear\camping\data";
		alignHologramToTerain=0;
		slopeTolerance=0.30000001;
	};

	class SRP_Carpentry_WoodenOutHouse: BaseBuildingBase
	{
		scope=2;
		displayName="Wooden Outhouse";
		descriptionShort="A place for important business.";
		model="Survivalists_Building\camping\srp_woodenouthouse.p3d";
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
			"Deployed"
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
						{1,{""}},						
						{0.69999999,{""}},						
						{0.5,{""}},						
						{0.30000001,{""}},						
						{0,{""}}
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
		};
		attachments[]=
		{
			"Material_Nails",
			"Material_WoodenPlanks",
			"Material_MetalSheets"
		};
		class GUIInventoryAttachmentsProps
		{
			class Material
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Materials";
				description="";
				attachmentSlots[]=
				{
					"Material_Nails",
					"Material_WoodenPlanks",
					"Material_MetalSheets"
				};
				icon="set:dayz_inventory image:cat_bb_material";
				selection="house";
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
				animPeriod=0.017999999;
				initPhase=0;
			};
      class deployed: AnimSourceHidden
			{
			};
			class base: AnimSourceHidden
			{
			};
			class house_wall_left: AnimSourceHidden
			{
			};
			class house_wall_right: AnimSourceHidden
			{
			};
      class house_wall_back: AnimSourceHidden
			{
			};
			class house_seat: AnimSourceHidden
			{
			};
			class house_roof: AnimSourceHidden
			{
			};
		};
		class Construction
		{
			class house
			{
				class base
				{
					name="Out House Foundation Frame";
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
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=16;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=35;
						};
					};
				};
				class house_wall_left
				{
					name="Out House Left Wall";
					id=2;
					required_parts[]=
					{
						"base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"house_wall_left_min",
						"house_wall_left_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=8;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=20;
						};
					};
				};
        class house_wall_right
				{
					name="Out House Right Wall";
					id=3;
					required_parts[]=
					{
						"base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"house_wall_right_min",
						"house_wall_right_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=8;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=20;
						};
					};
				};
        class house_wall_back
				{
					name="Out House Back Wall";
					id=4;
					required_parts[]=
					{
						"base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"house_wall_back_min",
						"house_wall_back_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=8;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=20;
						};
					};
				};
        class house_seat
				{
					name="Out House Seat";
					id=5;
					required_parts[]=
					{
						"base",
            "house_wall_left",
            "house_wall_right",
            "house_wall_back"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"house_seat_min",
						"house_seat_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_WoodenPlanks";
							quantity=8;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=20;
						};
					};
				};
        class house_roof
				{
					name="Out House Roof";
					id=6;
					required_parts[]=
					{
						"base",
            "house_wall_left",
            "house_wall_right",
            "house_wall_back"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"house_roof_min",
						"house_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_MetalSheets";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_Nails";
							quantity=15;
						};
					};
				};
			};
		};
	};
};