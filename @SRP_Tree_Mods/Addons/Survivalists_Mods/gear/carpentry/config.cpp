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

  class SRP_Carpentry_RussianHouse_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Kit";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_RussianHouse: Inventory_Base  // new
	{
		scope=2;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
    minPlacingDist=15;
	};

  //------------------------------ BASE BUILDING

};