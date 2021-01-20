class CfgPatches
{
	class Survivalists_Drugs
	{
    units[] = {"ZWeed_Joint", "CigarettePack_ZWeed"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters" };
	};
};
class CfgVehicles
{
  class Edible_Base;
  class ZWeed_Joint: Edible_Base
  {
    scope=2;
    displayName = "ZWeed Joint";
		descriptionShort = "A joint for smoking...and getting baked";
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

  class CigarettePack_ColorBase;
  class CigarettePack_ZWeed: CigarettePack_ColorBase
	{
		scope=2;
    itemSize[]={1,2};
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
    InteractActions[] = {517};
    varTemperatureMax=100;
		displayName="Pack of ZWeed Joints";
    descriptionShort="Just looking at one of these gives you a contact high.";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa",
			"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa"
		};
	};

  class Inventory_Base;
  class Bag_CigarettePack_ZWeed_DryBag_ColorBase : Inventory_Base {
		scope=2;
		displayName="Bag of ZWeed JointPacks";
    descriptionShort="A big bag of joint packs!";
		model="\dz\characters\backpacks\drybag_g.p3d";
    attachments[]={};
    varTemperatureMax=100;
    itemSize[]={5,6};
    itemsCargoSize[]={0,0};
    varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
    InteractActions[] = {517};
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
  };
  class Bag_CigarettePack_ZWeed_DryBag_Orange: Bag_CigarettePack_ZWeed_DryBag_ColorBase
	{
		scope=2;
    color="Orange";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa",
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa",
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa"
		};
	};
	class Bag_CigarettePack_ZWeed_DryBag_Yellow: Bag_CigarettePack_ZWeed_DryBag_ColorBase
	{
		scope=2;
    color="Yellow";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Yellow_co.paa",
			"DZ\characters\backpacks\data\DryBag_Yellow_co.paa",
			"DZ\characters\backpacks\data\DryBag_Yellow_co.paa"
		};
	};
	class Bag_CigarettePack_ZWeed_DryBag_Blue: Bag_CigarettePack_ZWeed_DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
    color="Blue";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Blue_co.paa",
			"DZ\characters\backpacks\data\DryBag_Blue_co.paa",
			"DZ\characters\backpacks\data\DryBag_Blue_co.paa"
		};
	};
	class Bag_CigarettePack_ZWeed_DryBag_Green: Bag_CigarettePack_ZWeed_DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
    color="Green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Green_co.paa",
			"DZ\characters\backpacks\data\DryBag_Green_co.paa",
			"DZ\characters\backpacks\data\DryBag_Green_co.paa"
		};
	};
	class Bag_CigarettePack_ZWeed_DryBag_Black: Bag_CigarettePack_ZWeed_DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
    color="Black";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_black_co.paa",
			"DZ\characters\backpacks\data\DryBag_black_co.paa",
			"DZ\characters\backpacks\data\DryBag_black_co.paa"
		};
	};
	class Bag_CigarettePack_ZWeed_DryBag_Red: Bag_CigarettePack_ZWeed_DryBag_ColorBase
	{
		scope=2;
    color="Red";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Red_co.paa",
			"DZ\characters\backpacks\data\DryBag_Red_co.paa",
			"DZ\characters\backpacks\data\DryBag_Red_co.paa"
		};
	};
};