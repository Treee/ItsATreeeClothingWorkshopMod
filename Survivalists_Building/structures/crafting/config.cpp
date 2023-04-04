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
  class Inventory_Base;

// ---------------------PRE FABS
  class SRP_PrefabCrafting_Base: Inventory_Base
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
      "Material_WoodenLogs", // 2
      "Material_L1_WoodenLogs", // 4
      "Material_L2_WoodenLogs", // 4
      "Material_L3_WoodenLogs", // 4
      "Material_L1_WoodenPlanks", // 20
      "Material_L1W1_WoodenPlanks", // 20
      "Material_L1W2_WoodenPlanks", // 20
      "Material_L1W3_WoodenPlanks", // 20
      "Material_L2_WoodenPlanks", // 20
      "Material_L2W1_WoodenPlanks", // 20
      "Material_L2W2_WoodenPlanks", // 20
      "Material_L2W3_WoodenPlanks", // 20       
      "Truck_01_WoodenPlanks", //100
      "Material_MetalSheets", // 20
      "Material_Nails", // 99
      "Material_L1_Nails",
      "Material_L1W1_Nails",
      "Material_L1W2_Nails",
      "Material_L1W3_Nails",
      "Material_L2_Nails",
      "Material_L2W1_Nails",
      "Material_L2W2_Nails",
      "Material_L2W3_Nails",
      "Material_L3_Nails",        
      "Material_Shelter_Fabric", // 4
      "Material_FPole_Rope", // 1
      "Material_Shelter_Rope", // 1
      "Rope", // 1
      "MetalWire", // 1
      "Material_MetalWire", // 1
      "Material_FPole_MetalWire", // 1
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
      class WoodenLogs
			{
				name="Wooden Logs";
				description="Wooden Logs";
				attachmentSlots[]=
				{
          "Material_WoodenLogs", // 2
          "Material_L1_WoodenLogs", // 4
          "Material_L2_WoodenLogs", // 4
          "Material_L3_WoodenLogs", // 4
        };
				icon="set:dayz_inventory image:woodenlog";
			};	
      class WoodenPlanks
			{
				name="Wooden Planks";
				description="Wooden Planks";
				attachmentSlots[]=
				{
          "Material_L1_WoodenPlanks", // 20
          "Material_L1W1_WoodenPlanks", // 20
          "Material_L1W2_WoodenPlanks", // 20
          "Material_L1W3_WoodenPlanks", // 20
          "Material_L2_WoodenPlanks", // 20
          "Material_L2W1_WoodenPlanks", // 20
          "Material_L2W2_WoodenPlanks", // 20
          "Material_L2W3_WoodenPlanks", // 20       
          "Truck_01_WoodenPlanks", //100
        };
				icon="set:dayz_inventory image:planks";
			};
      class MetalSheet
			{
				name="Sheet Metal";
				description="Sheet Metal";
				attachmentSlots[]=
				{
          "Material_MetalSheets", // 2
        };
				icon="set:dayz_inventory image:plates";
			};
      class Nails
			{
				name="Nails";
				description="Nails";
				attachmentSlots[]=
				{
          "Material_Nails", // 99
          "Material_L1_Nails",
          "Material_L1W1_Nails",
          "Material_L1W2_Nails",
          "Material_L1W3_Nails",
          "Material_L2_Nails",
          "Material_L2W1_Nails",
          "Material_L2W2_Nails",
          "Material_L2W3_Nails",
          "Material_L3_Nails",        
        };
				icon="set:dayz_inventory image:nails";
			};	
      class ExtraMaterial
			{
				name="Extra Material";
				description="Extra Material";
				attachmentSlots[]=
				{
          "Material_Shelter_Fabric", // 4
          "Material_FPole_Rope", // 1
          "Material_Shelter_Rope", // 1
          "Rope", // 1
          "MetalWire", // 1
          "Material_MetalWire", // 1
          "Material_FPole_MetalWire", // 1
        };
				icon="set:dayz_inventory image:metalwire";
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
      "Material_WoodenPlanks", // 20
      "Material_L1_WoodenPlanks", // 20
      "Material_L1W1_WoodenPlanks", // 20
      "Material_L1W2_WoodenPlanks", // 20
      "Material_L1W3_WoodenPlanks", // 20
      "Material_L1W1_MetalSheets", // 20
      "Material_L1W2_MetalSheets", // 20
      "Material_L1W3_MetalSheets", // 20
      "Material_L2W1_MetalSheets", // 20
      "Material_L2W2_MetalSheets", // 20
      "Material_L2W3_MetalSheets", // 20
      "Material_L3W1_MetalSheets", // 20
      "Material_L3W2_MetalSheets", // 20
      "Material_L3W3_MetalSheets", // 20
      "Material_Nails", // 99
      "Material_L1_Nails",
      "Material_L1W1_Nails",
      "Material_L1W2_Nails",
      "Material_L1W3_Nails",
      "BatteryD", // 1
      "CarBattery",
      "TruckBattery",
      "LargeBattery",
      "Material_Shelter_Fabric", // 4
      "Material_FPole_Rope", // 1
      "Material_Shelter_Rope", // 1
      "Rope", // 1
      "MetalWire", // 1
      "Material_MetalWire", // 1
      "Material_FPole_MetalWire", // 1
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
      class WoodenPlanks
			{
				name="Wooden Planks";
				description="Wooden Planks";
				attachmentSlots[]=
				{
          "Material_WoodenPlanks",
          "Material_L1_WoodenPlanks", // 20
          "Material_L1W1_WoodenPlanks", // 20
          "Material_L1W2_WoodenPlanks", // 20
          "Material_L1W3_WoodenPlanks", // 20
        };
				icon="set:dayz_inventory image:planks";
			};
      class MetalSheet
			{
				name="Sheet Metal";
				description="Sheet Metal";
				attachmentSlots[]=
				{
          "Material_L1W1_MetalSheets", // 20
          "Material_L1W2_MetalSheets", // 20
          "Material_L1W3_MetalSheets", // 20
          "Material_L2W1_MetalSheets", // 20
          "Material_L2W2_MetalSheets", // 20
          "Material_L2W3_MetalSheets", // 20
          "Material_L3W1_MetalSheets", // 20
          "Material_L3W2_MetalSheets", // 20
          "Material_L3W3_MetalSheets", // 20
        };
				icon="set:dayz_inventory image:plates";
			};
      class Nails
			{
				name="Nails";
				description="Nails";
				attachmentSlots[]=
				{
          "Material_Nails", // 99
          "Material_L1_Nails",
          "Material_L1W1_Nails",
          "Material_L1W2_Nails",
          "Material_L1W3_Nails",
        };
				icon="set:dayz_inventory image:nails";
			};	
      class PowerGeneration
			{
				name="Power Source";
				description="Power Source";
				attachmentSlots[]=
				{
          "BatteryD", // 1
          "CarBattery",
          "TruckBattery",
          "LargeBattery",
        };
				icon="set:dayz_inventory image:carbattery";
			};	
      class ExtraMaterial
			{
				name="Extra Material";
				description="Extra Material";
				attachmentSlots[]=
				{
          "Material_Shelter_Fabric", // 4
          "Material_FPole_Rope", // 1
          "Material_Shelter_Rope", // 1
          "Rope", // 1
          "MetalWire", // 1
          "Material_MetalWire", // 1
          "Material_FPole_MetalWire", // 1
        };
				icon="set:dayz_inventory image:metalwire";
			};	
		};
	};
};