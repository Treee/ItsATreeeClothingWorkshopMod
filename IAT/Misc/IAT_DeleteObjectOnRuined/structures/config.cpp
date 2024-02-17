class CfgPatches
{
	class IAT_DeleteObjectOnRuined_Destroyables
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
	class Inventory_Base;
	class IAT_DeleteObjectOnRuined_FrontDoor_Wall: Inventory_Base
	{
		scope=2;
    displayName="test 1";
		descriptionShort="test 1";
    carveNavmesh=1;
    physLayer="item_large";
		model="IAT\Misc\IAT_DeleteObjectOnRuined\structures\FrontDoor_wall.p3d";
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
				};
			};
		};
	};
	class IAT_DeleteObjectOnRuined_FrontDoor_Wall_Destroyed: Inventory_Base
	{
		scope=2;
    displayName="test 2";
		descriptionShort="test 2";
		model="IAT\Misc\IAT_DeleteObjectOnRuined\structures\FrontDoor_wall_dest.p3d";
    carveNavmesh=1;
    physLayer="item_large";
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
				};
			};
		};
	};
};