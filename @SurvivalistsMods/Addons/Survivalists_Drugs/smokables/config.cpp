class CfgPatches
{
	class Survivalists_Drugs
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters" };
	};
};
class CfgVehicles
{
  class Edible_Base;
  class Inventory_Base;
  
  class SRP_Smokable_ColorBase: Edible_Base
  {
    scope=2;
    model = "\MunghardsItems\joint\joint_g.p3d";
    SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
    varTemperatureMax=100;
    weight=0;
    itemSize[]={1,2};
    rotationFlags = 16;
    destroyOnEmpty = 1;
		// varQuantityDestroyOnMin = 1;
    varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 1;
  };

  class SRP_Smokable_ZWeed: SRP_Smokable_ColorBase
  {
    displayName = "ZWeed Joint";
    color = "ZWeed";
    model = "\MunghardsItems\joint\joint_g.p3d";
		descriptionShort = "A joint for smoking...and getting baked";
  };
  class SRP_Smokable_Cigarette: SRP_Smokable_ColorBase
  {
    displayName = "Cigarette";
    color = "Cigarette";
    model = "\MunghardsItems\cigarette\cigarette_g.p3d";
		descriptionShort = "Relieve that stress... ahhhhh";
  };

  // overriding mung cigarette so it works with the colorbase crap
  class Clothing;
	class cigarette_mung: Clothing
	{
		scope = 2;
		displayName = "Cigarette";
    color = "Cigarette";
		descriptionShort = "A Cigarette for smoking...";
		model = "\MunghardsItems\cigarette\cigarette_g.p3d";
		repairableWithKits[] = {5,8};
		repairCosts[] = {30,25};
		inventorySlot[] = {"Armband"};
		vehicleClass = "Clothing";
		simulation = "clothing";
		SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
		itemInfo[] = {"Clothing","mask"};
		rotationFlags = 16;
		weight = 10;
		itemSize[] = {1,2};
		absorbency = 0;
		heatIsolation = 0.13;
		visibilityModifier = 0.7;
		noMask = 0;
		class ClothingTypes
		{
			male = "\MunghardsItems\cigarette\cigarette.p3d";
			female = "\MunghardsItems\cigarette\cigarette.p3d";
		};
	};

  class SRP_DrugPack_ColorBase: Inventory_Base
  {
		scope=2;
    model="\dz\gear\medical\cigarette_pack.p3d";
    itemSize[]={1,2};
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
    InteractActions[] = {517};
    varTemperatureMax=100;
    hiddenSelections[]= {"camoGround","zbytek"};
  };

  class SRP_DrugPack_ZWeed: SRP_DrugPack_ColorBase
	{
    color="ZWeed";
		displayName="Pack of ZWeed Joints";
    descriptionShort="Just looking at one of these gives you a contact high.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drugs\data\pack_of_z_weed_co.paa",
			"Survivalists_Drugs\data\pack_of_z_weed_co.paa"
		};
	};

  class SRP_DrugPack_Cigarette: SRP_DrugPack_ColorBase
	{
    color="Cigarette";
		displayName="Pack of Cigarette's";
    descriptionShort="Just looking at these is giving you cancer.";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drugs\data\pack_of_cigs_partyzanka_co.paa",
			"Survivalists_Drugs\data\pack_of_cigs_partyzanka_co.paa"
		};
	};

  class SRP_DrugCarton_ColorBase : Inventory_Base {
		scope=2;
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
    attachments[]={};
    rotationFlags=17;
    varTemperatureMax=100;
    itemSize[]={2, 4};
    itemsCargoSize[]={0,0};
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
    InteractActions[] = {517};
    hiddenSelections[]= {"zbytek"};
  };

  class SRP_DrugCarton_ZWeed: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="ZWeed";
    displayName="Carton of ZWeed Packs";
    descriptionShort="A big carton of joint packs!";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drugs\data\carton_of_joints_co.paa"
		};
	};

  class SRP_DrugCarton_Cigarette: SRP_DrugCarton_ColorBase
	{
		scope=2;
    color="Cigarette";
    displayName="Carton of Cigarette Packs";
    descriptionShort="A big carton of cigarette packs!";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Drugs\data\carton_of_cigarettes_co.paa"
		};
	};
};