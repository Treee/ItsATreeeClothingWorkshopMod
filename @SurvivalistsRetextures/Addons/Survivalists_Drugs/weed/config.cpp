class CfgPatches
{
	class Survivalists_Drugs
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data" };
	};
};
class CfgVehicles
{
  class joint_mung;
  class ZWeed_Joint: joint_mung
  {
    displayName = "ZWeed Joint";
		descriptionShort = "A joint for smoking...and getting baked";
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