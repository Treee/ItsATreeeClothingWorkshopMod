class CfgPatches
{
	class SRP_Tree_MethTub
	{
    units[] = {
      "SRP_Drug_Blueprint_Meth",
      "SRP_Drug_Blueprint_BathSalts",
      "SRP_Drug_Blueprint_Acid",
      "SRP_DrugWorkbench",
      "SRP_Drug_Blueprint_Meth",
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class Ammunition_Base;

  class HeadlightH7: Inventory_Base
	{
		inventorySlot[]=
		{
			"Reflector_1_1",
			"Reflector_2_1",
      "Lightbulb"
		};
	};

	class SRP_Drug_Blueprint_Meth: Inventory_Base
	{
		scope=2;
		displayName="Meth Recipe";
		descriptionShort="Jebediah's secret family recipe for meth.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot="MethRecipe";
		itemSize[]={1,3};
		weight=5;
	};
  class SRP_Drug_Blueprint_BathSalts: Inventory_Base
	{
		scope=2;
		displayName="BathSalts Recipe";
		descriptionShort="Jebediah's secret family recipe for BathSalts.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot="BathSaltsRecipe";
		itemSize[]={1,3};
		weight=5;
	};
  class SRP_Drug_Blueprint_Acid: Inventory_Base
	{
		scope=2;
		displayName="Acid Recipe";
		descriptionShort="Jebediah's secret family recipe for Acid.";
		model="\dz\gear\consumables\Paper.p3d";
		inventorySlot="AcidRecipe";
		itemSize[]={1,3};
		weight=5;
	};

  class SRP_DrugWorkbench: Inventory_Base
	{
    scope=2;
		color="DrugBench";
		displayName="Drug Tub";
		descriptionShort="A workbench used for brewing the highest quality drugs in the apocalypse.";
		model="SRP_Tree_Mods\drugs\accessories\methtub\Methtub.p3d";
		weight=1000;    
		itemSize[]={12,12};
    itemBehaviour=0;
    isTakeable=0;
    carveNavmesh=1;
    physLayer="item_large";
    attachments[]=
		{
			"MethRecipe",
			"BathSaltsRecipe",
			"AcidRecipe",
			"GasCanister",
			"LargeBattery", //CarBattery and TruckBattery fill this (do script check?)
			"LightBulb",
      "Disinfectant",
      "Chemlight",
			"Material_MetalSheets",
      "Material_MetalWire"
		};
    class Cargo
		{
      itemsCargoSize[]={8,8};
      openable=1;
      allowOwnedCargoManipulation=0;
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
            {1,{"SRP_Tree_Mods\drugs\accessories\methtub\data\Methtub.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\drugs\accessories\methtub\data\Methtub.rvmat"}},
            {0.5,{"SRP_Tree_Mods\drugs\accessories\methtub\data\Methtub.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\drugs\accessories\methtub\data\Methtub.rvmat"}},
            {0,{"SRP_Tree_Mods\drugs\accessories\methtub\data\Methtub.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
    class GUIInventoryAttachmentsProps
		{
			class Recipes
			{
				name="Recipe Book";
				description="";
				attachmentSlots[]=
				{
					"MethRecipe",
					"BathSaltsRecipe",
					"AcidRecipe"
				};
				icon="set:dayz_inventory image:book";
			};
			class Material
			{
				name="Raw Materials";
				description="";
				attachmentSlots[]=
				{
          "GasCanister",
          "LargeBattery", //CarBattery and TruckBattery fill this (do script check?)
          "LightBulb",
          "Disinfectant",
          "Chemlight",
          "Material_MetalSheets",
          "Material_MetalWire"
				};
				icon="set:dayz_inventory image:disinfectant";
			};
		};	
	};
};

class CfgSlots
{
	class Slot_DrugRecipe_Meth
	{
		name="MethRecipe";
		displayName="MethRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_DrugRecipe_BathSalts
	{
		name="BathSaltsRecipe";
		displayName="BathSaltsRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_DrugRecipe_Acid
	{
		name="AcidRecipe";
		displayName="AcidRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
};