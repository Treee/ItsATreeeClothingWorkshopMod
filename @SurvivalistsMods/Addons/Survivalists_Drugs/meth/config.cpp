class CfgPatches
{
	class Survivalists_Drugs
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "Mass_Food" };
	};
};
class CfgVehicles
{
  class MassMeth;
	class SRP_MassMeth_Small1: MassMeth
	{
		scope = 2;
		displayName = "Small Bag of Suspicious Blue Candy";
		descriptionShort = "As Innocent as the Bright Blue Sky 'Effects done by Niphoria' 'Mass'";
		model = "Food\Meth\Meth.p3d";
		rotationFlags = 16;
		itemSize[] = {1,2};
		weight = 40;
	};
	class SRP_MassMeth_Medium1: MassMeth
	{
		scope = 2;
		displayName = "Medium Bag of Suspicious Blue Candy";
		descriptionShort = "As Innocent as the Bright Blue Sky 'Effects done by Niphoria' 'Mass'";
		model = "Food\Meth\Meth.p3d";
		rotationFlags = 16;
		itemSize[] = {2,2};
		weight = 80;
	};
	class SRP_MassMeth_Large1: MassMeth
	{
		scope = 2;
		displayName = "Large Bag of Suspicious Blue Candy";
		descriptionShort = "As Innocent as the Bright Blue Sky 'Effects done by Niphoria' 'Mass'";
		model = "Food\Meth\Meth.p3d";
		rotationFlags = 16;
		itemSize[] = {4,3};
		weight = 160;
	};

};