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
  class Inventory_Base;

  class SRP_Carpentry_RussianHouse_Foundation_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Foundation Kit";
		descriptionShort="The kit for the foundation of a house";
	};

  class SRP_Carpentry_RussianHouse_Foundation: Inventory_Base  // new
	{
		scope=2;
		displayName="Russian House Foundation";
		descriptionShort="The foundation for a house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhousefoundation.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
		attachments[]=
		{
			"BuildingFrame",
      "FrontDoorStairs",
      "Roof"
		};
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\carpentry\data\srp_russianhousefoundation_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\carpentry\data\srp_russianhousefoundation.rvmat"
    };
		class GUIInventoryAttachmentsProps
		{
			class Building
			{
				name="Building";
				description="";
				attachmentSlots[]=
				{
					"BuildingFrame",
          "FrontDoorStairs",
					"Roof"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
		};
	};

  class SRP_Carpentry_RussianHouse_Stairs: Inventory_Base  // new
	{
		scope=2;
		displayName="Russian House Stairs";
		descriptionShort="The Stairs for a house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhousestairs.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
    inventorySlot[]=
    {
      "FrontDoorStairs"
    };
    hiddenSelections[]=
		{
      "zbytek"
		};
		hiddenSelectionsTextures[]={
      "Survivalists_Mods\gear\carpentry\data\srp_russianhousestairs_co.paa"
    };
		hiddenSelectionsMaterials[]={
      "Survivalists_Mods\gear\carpentry\data\srp_russianhousestairs.rvmat"
    };
	};

  //------------------------------ BASE BUILDING

};


class CfgSlots
{
  class Slot_SRP_FrontDoorStairs
  {
      name="FrontDoorStairs";
      displayName="Front Door Stairs";
      ghostIcon="set:dayz_inventory image:cat_common_cargo";
  };
};

class CfgNonAIVehicles
{
  class ProxyAttachment;
  class Proxysrp_russianhousestairs_proxy: ProxyAttachment 
  {
      scope = 2; 
      inventorySlot[] = {"FrontDoorStairs"}; 
      model = "Survivalists_Mods\gear\carpentry\srp_russianhousestairs_proxy.p3d"; 
  };
};