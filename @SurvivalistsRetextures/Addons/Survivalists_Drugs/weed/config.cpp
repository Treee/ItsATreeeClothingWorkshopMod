class CfgPatches
{
	class Survivalists_Drugs
	{
    units[] = {"ZWeed_Joint", "CigarettePack_ZWeed"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data" };
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
		displayName="Pack of ZWeed Joints";
    descriptionShort="Just looking at one of these gives you a contact high.";
		hiddenSelectionsTextures[]=
		{
			"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa",
			"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa"
		};
	};

};