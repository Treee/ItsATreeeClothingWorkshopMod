class CfgPatches
{
	class TestScripts
	{
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods 
{
	class TestScripts
	{
		name = "TestScripts";
		dir = "TestScripts";
		credits = "ItsATreee";
		author = "ItsATreee";
		type = "mod";
		dependencies[] =
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[] = 
				{
					"TestScripts/scripts/4_world"
				};
			};
		};
	};
};
class CfgVehicles
{ 
  class MassMeth;
  class MyMeth: MassMeth
	{
		scope = 2;
		displayName = "Test Description";
		descriptionShort = "As Innocent as the Bright Blue Sky 'Effects done by Niphoria' 'Mass'";
		model = "Food\Meth\Meth.p3d";
		rotationFlags = 16;
		itemSize[] = {2,2};
		weight = 120;
	};

  // class SodaCan_ColorBase
  // {
  //   inventorySlot[]=
	// 	{
	// 		"VestGrenadeA",
	// 		"VestGrenadeB",
	// 		"VestGrenadeC",
	// 		"VestGrenadeD",
	// 		"tripWireAttachment"
	// 	};
  // }
  // class Inventory_Base;
  // class GP5GasMask_Filter: Inventory_Base
	// {
	// 	inventorySlot[]={ "Mask", "GasMaskFilter" };
	// };

  // class Clothing;
  // class GP5GasMask: Clothing
	// {
  //   attachments[]={ "Mask", "GasMaskFilter" };
  // }
};