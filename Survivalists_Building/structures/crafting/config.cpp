class CfgPatches
{
	class Survivalists_Building_Structures_Crafting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
      "DZ_Scripts"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;

// ---------------------PRE FABS
  class SRP_PrefabCrafting_Base: HouseNoDestruct
	{
		scope=0;
		displayName="BaseCraftingBench";
		descriptionShort="Base Crafting Bench";
		model="Survivalists_Building\structures\crafting\SRP_genericworkbench.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={2,2};
    itemsCargoSize[]={10,10};
		physLayer="item_large";
    minPlacingDist=5;
    slopeTolerance=0.2;
    alignHologramToTerain=1;
	};

  class SRP_PrefabCrafting_carpentry: SRP_PrefabCrafting_Base
	{
		scope=1;
    displayName="Carpentry Workbench";
    descriptionShort="A workbench useful for making wooden crafts.";
    model="Survivalists_Building\structures\crafting\SRP_genericworkbench.p3d";
    attachments[]=
    {
      "SRP_WoodDrill",
      "SRP_WoodClamp",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      // "SRP_Construction_WoodenLogs",
      // "SRP_Construction_WoodenPlanks",
      // "SRP_Construction_Stone",
      // "SRP_Construction_Mortar",
      // "SRP_Construction_Cement",
      // "SRP_Construction_MetalPlate",
      // "SRP_Construction_Nails",
      // "SRP_Construction_MetalWire",
      // "SRP_Construction_Pipe",
      // "SRP_Construction_Epoxy",
      // "SRP_Construction_Fabric",
      // "SRP_Construction_Rope"
    };
    class GUIInventoryAttachmentsProps
		{
      class Augments
			{
				name="Augments";
				description="Attachments for wood workbench";
				attachmentSlots[]=
				{
					"SRP_WoodDrill",
          "SRP_WoodClamp"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};	
      class ExtraMaterials
			{
				name="Extra Materials";
				description="Extra Materials";
				attachmentSlots[]=
				{
          "Material_WoodenPlanks",
          "Material_MetalSheets", 
        };
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};	
		};
	};
  class SRP_PrefabCrafting_metalworking: SRP_PrefabCrafting_Base
	{
		scope=1;
    displayName="Metalworking Workbench";
    descriptionShort="A workbench useful for making metal crafts.";
    model="Survivalists_Building\structures\crafting\SRP_genericworkbench_metal.p3d";
    attachments[]=
    {
      "SRP_WoodDrill",
      "SRP_WoodClamp",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      // "SRP_Construction_WoodenLogs",
      // "SRP_Construction_WoodenPlanks",
      // "SRP_Construction_Stone",
      // "SRP_Construction_Mortar",
      // "SRP_Construction_Cement",
      // "SRP_Construction_MetalPlate",
      // "SRP_Construction_Nails",
      // "SRP_Construction_MetalWire",
      // "SRP_Construction_Pipe",
      // "SRP_Construction_Epoxy",
      // "SRP_Construction_Fabric",
      // "SRP_Construction_Rope"
    };
    class GUIInventoryAttachmentsProps
		{
      class Augments
			{
				name="Augments";
				description="Attachments for wood workbench";
				attachmentSlots[]=
				{
					"SRP_WoodDrill",
          "SRP_WoodClamp"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};	
      class ExtraMaterials
			{
				name="Extra Materials";
				description="Extra Materials";
				attachmentSlots[]=
				{
          "Material_WoodenPlanks",
          "Material_MetalSheets", 
        };
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};	
		};
	};

};