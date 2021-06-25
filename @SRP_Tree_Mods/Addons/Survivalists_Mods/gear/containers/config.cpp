class CfgPatches
{
	class Survivalists_Mods_Gear_Containers
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Camping"
		};
	};
};
class CfgVehicles
{
  class Container_Base;
  class Refridgerator;

  class SRP_KitBase: Container_Base //SRP_dec_base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Kit Box";
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
			"Survivalists_Mods\gear\containers\data\srp_kitbase_co.paa"
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

  class SRP_FridgeBig_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Big Fridge Kit";
		descriptionShort="A Big Fridge Kit";
	};

  class SRP_FridgeBig: Container_Base // BP_FridgeBig
	{
		scope=2;
		displayName="Big Fridge";
		descriptionShort="A really big fridge";
		model="Survivalists_Mods\gear\containers\Fridge_big.p3d";
    carveNavmesh=1;
		itemBehaviour=2;
		physLayer="item_large";
		attachments[]=
		{
			"Ingredient",
			"Food1",
			"Food2",
			"Food3",
			"Food4",
			"Food5",
			"Food6",
			"Food7",
			"Food8",
			"Can",
			"Can1",
			"Can2",
			"Can3",
			"Can4",
			"Can5",
			"Can6",
			"Can7"
		};
		weight=10000;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Food
			{
				name="The drinks";
				description="";
				attachmentSlots[]=
				{
					"Food1",
					"Food2",
					"Food3",
					"Food4",
					"Food5",
					"Food6",
					"Food7",
					"Food8"
				};
				icon="tincan";
			};
			class Canned_food
			{
				name="Canned food";
				description="";
				attachmentSlots[]=
				{
					"Can",
					"Can1",
					"Can2",
					"Can3",
					"Can4",
					"Can5",
					"Can6",
					"Can7"
				};
				icon="tincan";
			};
			class Food1
			{
				name="Other food";
				description="";
				attachmentSlots[]=
				{
					"Ingredient"
				};
				icon="food";
			};
		};
	};

};