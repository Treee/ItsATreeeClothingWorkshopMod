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
	class IAT_DeleteObjectOnRuined_test_wall_board: Inventory_Base
	{
		scope=2;
    displayName="test 1";
		descriptionShort="test 1";
		model="DZ\structures\Furniture\Decoration\WallBoards\wall_board\wall_board.p3d";
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
	class IAT_DeleteObjectOnRuined_test_wall_board_02: Inventory_Base
	{
		scope=2;
    displayName="test 2";
		descriptionShort="test 2";
		model="DZ\structures\Furniture\Decoration\WallBoards\wall_board_02\wall_board_02.p3d";
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
	class IAT_DeleteObjectOnRuined_test_wall_board_03: Inventory_Base
	{
		scope=2;
    displayName="test 3";
		descriptionShort="test 3";
		model="DZ\structures\Furniture\Decoration\WallBoards\wall_board_03\wall_board_03.p3d";
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
};