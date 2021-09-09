class CfgPatches
{
	class Survivalists_Mods_Gear_Carpentry
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
  class SRP_KitBase;
  class HouseNoDestruct;
  class Fence;
  //------------------------------ BASE BUILDING

  // ---------------------PRE FABS
  class SRP_PrefabHouse_Base: HouseNoDestruct  // new
	{
		scope=0;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
    minPlacingDist=2;
	};

  class SRP_Carpentry_RussianHouse_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Kit";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_RussianHouse: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse.p3d";
	};

  class SRP_Carpentry_RussianHouse1_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Kit - Variant 1";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_RussianHouse1: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse1.p3d";
	};

  class SRP_Carpentry_WoodenHouseSingleRoom_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden House Kit - Single Room";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_WoodenHouseSingleRoom: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenhousesingleroom.p3d";
	};

  class SRP_Carpentry_WoodenHouseOuthouse_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Out House Kit";
		descriptionShort="The kit for an out house";
	};

  class SRP_Carpentry_WoodenHouseOuthouse: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden Out House";
		descriptionShort="An out house.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenouthouse.p3d";
	};

  // ---------------------DOORS
  class SRP_Carpentry_HouseDoor: Fence  // new
	{
		scope=0;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhousedoor.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
    minPlacingDist=5;
    handheld="false";
    attachments[]=
		{
			"Att_CombinationLock"
		};
    class GUIInventoryAttachmentsProps
		{
			class Attachments
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="set:dayz_inventory image:cat_bb_attachments";
				selection="wall";
			};
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
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
    class AnimationSources
		{
			class AnimRotate
			{
				source="user";
				component="selection_door";
				animPeriod=1;
				initPhase=0;
				initOpened=0.5;
			};
      class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Wall_Gate_Rotate: AnimRotate
			{
			};
		};
    class Construction
		{
			class wall
			{
				class wall_gate
				{
					name="Door";
					is_gate=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=1;
					dismantle_action_type=0;
				};
			};
		};
	};

  class SRP_Carpentry_RussianHouseDoor_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Door Kit";
		descriptionShort="The kit for a door";
	};

  class SRP_Carpentry_RussianHouseDoor: SRP_Carpentry_HouseDoor  // new
	{
		scope=2;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhousedoor.p3d";
	};

  class SRP_Carpentry_RussianHouse1Door_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Door Kit - Variant 1";
		descriptionShort="The kit for a door";
	};

  class SRP_Carpentry_RussianHouse1Door: SRP_Carpentry_HouseDoor  // new
	{
		scope=2;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse1door.p3d";
	};
};