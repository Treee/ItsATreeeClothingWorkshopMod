class CfgPatches
{
	class Survivalists_Building_Structures_Specific
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Specific"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
  class Inventory_Base;
  class SRP_BaseBuildingBase: Inventory_Base{};

  class SRPB_Wall_Palisade: SRP_BaseBuildingBase
	{
		scope=2;
		displayName="Test";
		descriptionShort="Test";
		model="Survivalists_Building\structures\fortification\srp_palisade_all.p3d";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=60000;
		itemSize[]={6,6};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed"
		};
		mountables[]=
		{
			"Level_1_Wall_1_Barbedwire_1",
			"Level_1_Wall_1_Barbedwire_2",
			"Level_1_Wall_2_Barbedwire_1",
			"Level_1_Wall_2_Barbedwire_2",
			"Level_1_Wall_3_Barbedwire_1",
			"Level_1_Wall_3_Barbedwire_2"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{					
						{1,{""}},					
						{0.69999999,{""}},					
						{0.5,{""}},					
						{0.30000001,{""}},					
						{0,{""}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class Body
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},							
							{0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},							
							{0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},							
							{0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},							
							{0,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"body"
					};
					fatalInjuryCoef=-1;
				};
				class Material_L1_WoodenLogs
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=53;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"Material_L1_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_L1_WoodenLogs"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Stairs
				{
					class Health
					{
						hitpoints=7500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Stairs";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=53;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_stairs"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Base_Down
				{
					class Health
					{
						hitpoints=12000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=20;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_base_down"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_1_wall_1_base_up"
					};
				};
				class Level_1_Wall_1_Wood_Down
				{
					class Health
					{
						hitpoints=16000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=53;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_wood_down"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_1_wall_1_wood_up"
					};
				};
				class Level_1_Wall_1_Metal_Down
				{
					class Health
					{
						hitpoints=21000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_metalsheets.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_metal_down"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_1_wall_1_metal_up"
					};
				};
				class Level_1_Wall_1_Barbedwire_1
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\barbed_wire.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\barbed_wire.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\barbed_wire_damage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\barbed_wire_damage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\barbed_wire_destruct.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							}
						};
					};
					displayName="$STR_cfgvehicles_barbedwire0";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.0099999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=40;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_barbedwire_1",
						"level_1_wall_1_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_1_Barbedwire_1"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Barbedwire_2: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_1_barbedwire_2",
						"level_1_wall_1_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_1_Barbedwire_2"
					};
				};
				class Level_1_Wall_2_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_1_wall_2_base_down"
					};
				};
				class Level_1_Wall_2_Base_Up: Level_1_Wall_1_Base_Up
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_1_wall_2_base_up"
					};
				};
				class Level_1_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_1_wall_2_wood_down"
					};
				};
				class Level_1_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_1_wall_2_wood_up"
					};
				};
				class Level_1_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_1_wall_2_metal_down"
					};
				};
				class Level_1_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_1_wall_2_metal_up"
					};
				};
				class Level_1_Wall_2_Barbedwire_1: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_2_barbedwire_1",
						"level_1_wall_2_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_2_Barbedwire_1"
					};
				};
				class Level_1_Wall_2_Barbedwire_2: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_2_barbedwire_2",
						"level_1_wall_2_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_2_Barbedwire_2"
					};
				};
				class Level_1_Wall_3_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_1_wall_3_base_down"
					};
				};
				class Level_1_Wall_3_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_1_wall_3_base_up"
					};
				};
				class Level_1_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_1_wall_3_wood_down"
					};
				};
				class Level_1_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_1_wall_3_wood_up"
					};
				};
				class Level_1_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_1_wall_3_metal_down"
					};
				};
				class Level_1_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_1_wall_3_metal_up"
					};
				};
				class Level_1_Wall_3_Barbedwire_1: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_3_barbedwire_1",
						"level_1_wall_3_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_3_Barbedwire_1"
					};
				};
				class Level_1_Wall_3_Barbedwire_2: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_3_barbedwire_2",
						"level_1_wall_3_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_3_Barbedwire_2"
					};
				};
				class Material_L2_WoodenLogs: Material_L1_WoodenLogs
				{
					componentNames[]=
					{
						"Material_L2_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_L2_WoodenLogs"
					};
				};
				class Level_2_Stairs: Level_1_Stairs
				{
					displayName="$STR_CfgVehicles_Construction_Part_Stairs";
					componentNames[]=
					{
						"level_2_stairs"
					};
				};
				class Level_2_Wall_1_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_2_wall_1_base_down"
					};
				};
				class Level_2_Wall_1_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_2_wall_1_base_up"
					};
				};
				class Level_2_Wall_1_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_2_wall_1_wood_down"
					};
				};
				class Level_2_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_2_wall_1_wood_up"
					};
				};
				class Level_2_Wall_1_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_2_wall_1_metal_down"
					};
				};
				class Level_2_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_2_wall_1_metal_up"
					};
				};
				class Level_2_Wall_2_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_2_wall_2_base_down"
					};
				};
				class Level_2_Wall_2_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_2_wall_2_base_up"
					};
				};
				class Level_2_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_2_wall_2_wood_down"
					};
				};
				class Level_2_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_2_wall_2_wood_up"
					};
				};
				class Level_2_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_2_wall_2_metal_down"
					};
				};
				class Level_2_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_2_wall_2_metal_up"
					};
				};
				class Level_2_Wall_3_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_2_wall_3_base_down"
					};
				};
				class Level_2_Wall_3_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_2_wall_3_base_up"
					};
				};
				class Level_2_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_2_wall_3_wood_down"
					};
				};
				class Level_2_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_2_wall_3_wood_up"
					};
				};
				class Level_2_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_2_wall_3_metal_down"
					};
				};
				class Level_2_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_2_wall_3_metal_up"
					};
				};
				class Material_L3_WoodenLogs: Material_L1_WoodenLogs
				{
					componentNames[]=
					{
						"Material_L3_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_L3_WoodenLogs"
					};
				};
				class Level_3_Wall_1_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_3_wall_1_base_down"
					};
				};
				class Level_3_Wall_1_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_3_wall_1_base_up"
					};
				};
				class Level_3_Wall_1_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_3_wall_1_wood_down"
					};
				};
				class Level_3_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_3_wall_1_wood_up"
					};
				};
				class Level_3_Wall_1_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_3_wall_1_metal_down"
					};
				};
				class Level_3_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_3_wall_1_metal_up"
					};
				};
				class Level_3_Wall_2_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_3_wall_2_base_down"
					};
				};
				class Level_3_Wall_2_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_3_wall_2_base_up"
					};
				};
				class Level_3_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_3_wall_2_wood_down"
					};
				};
				class Level_3_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_3_wall_2_wood_up"
					};
				};
				class Level_3_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_3_wall_2_metal_down"
					};
				};
				class Level_3_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_3_wall_2_metal_up"
					};
				};
				class Level_3_Wall_3_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_3_wall_3_base_down"
					};
				};
				class Level_3_Wall_3_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_3_wall_3_base_up"
					};
				};
				class Level_3_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_3_wall_3_wood_down"
					};
				};
				class Level_3_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_3_wall_3_wood_up"
					};
				};
				class Level_3_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_3_wall_3_metal_down"
					};
				};
				class Level_3_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_3_wall_3_metal_up"
					};
				};
				class Level_3_Roof
				{
					class Health
					{
						hitpoints=19000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_metalsheets.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_worn.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_damage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Roof";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_3_roof"
					};
					fatalInjuryCoef=-1;
				};
			};
		};
		attachments[]=
		{
			"Level_1_Wall_1_Barbedwire_1",
			"Level_1_Wall_1_Barbedwire_2",
			"Level_1_Wall_2_Barbedwire_1",
			"Level_1_Wall_2_Barbedwire_2",
			"Level_1_Wall_3_Barbedwire_1",
			"Level_1_Wall_3_Barbedwire_2",
			"Level_1_Wall_1_Camonet",
			"Level_1_Wall_2_Camonet",
			"Level_1_Wall_3_Camonet",
			"Level_2_Wall_1_Camonet",
			"Level_2_Wall_2_Camonet",
			"Level_2_Wall_3_Camonet",
			"Level_3_Wall_1_Camonet",
			"Level_3_Wall_2_Camonet",
			"Level_3_Wall_3_Camonet",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs",
			"Material_L1_Nails",
			"Material_L1W1_Nails",
			"Material_L1W2_Nails",
			"Material_L1W3_Nails",
			"Material_L2_Nails",
			"Material_L2W1_Nails",
			"Material_L2W2_Nails",
			"Material_L2W3_Nails",
			"Material_L3_Nails",
			"Material_L3W1_Nails",
			"Material_L3W2_Nails",
			"Material_L3W3_Nails",
			"Material_L1_WoodenPlanks",
			"Material_L1W1_WoodenPlanks",
			"Material_L1W2_WoodenPlanks",
			"Material_L1W3_WoodenPlanks",
			"Material_L2_WoodenPlanks",
			"Material_L2W1_WoodenPlanks",
			"Material_L2W2_WoodenPlanks",
			"Material_L2W3_WoodenPlanks",
			"Material_L3_WoodenPlanks",
			"Material_L3W1_WoodenPlanks",
			"Material_L3W2_WoodenPlanks",
			"Material_L3W3_WoodenPlanks",
			"Material_L3_MetalSheets",
			"Material_L1W1_MetalSheets",
			"Material_L1W2_MetalSheets",
			"Material_L1W3_MetalSheets",
			"Material_L2W1_MetalSheets",
			"Material_L2W2_MetalSheets",
			"Material_L2W3_MetalSheets",
			"Material_L3W1_MetalSheets",
			"Material_L3W2_MetalSheets",
			"Material_L3W3_MetalSheets"
		};
		class GUIInventoryAttachmentsProps
		{
			class Level_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_L1_WoodenLogs",
					"Material_L1_Nails",
					"Material_L1_WoodenPlanks"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower";
				selection="level_1";
			};
			class Level_1_Wall_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Wall_1";
				description="";
				attachmentSlots[]=
				{
					"Material_L1W1_Nails",
					"Material_L1W1_WoodenPlanks",
					"Material_L1W1_MetalSheets",
					"Level_1_Wall_1_Camonet",
					"Level_1_Wall_1_Barbedwire_1",
					"Level_1_Wall_1_Barbedwire_2"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_1";
				selection="level_1_wall_1";
			};
			class Level_1_Wall_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Wall_2";
				description="";
				attachmentSlots[]=
				{
					"Material_L1W2_Nails",
					"Material_L1W2_WoodenPlanks",
					"Material_L1W2_MetalSheets",
					"Level_1_Wall_2_Camonet",
					"Level_1_Wall_2_Barbedwire_1",
					"Level_1_Wall_2_Barbedwire_2"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_2";
				selection="level_1_wall_2";
			};
			class Level_1_Wall_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Wall_3";
				description="";
				attachmentSlots[]=
				{
					"Material_L1W3_Nails",
					"Material_L1W3_WoodenPlanks",
					"Material_L1W3_MetalSheets",
					"Level_1_Wall_3_Camonet",
					"Level_1_Wall_3_Barbedwire_1",
					"Level_1_Wall_3_Barbedwire_2"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_3";
				selection="level_1_wall_3";
			};
			class Level_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_L2_WoodenLogs",
					"Material_L2_Nails",
					"Material_L2_WoodenPlanks"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower";
				selection="level_2";
			};
			class Level_2_Wall_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Wall_1";
				description="";
				attachmentSlots[]=
				{
					"Material_L2W1_Nails",
					"Material_L2W1_WoodenPlanks",
					"Material_L2W1_MetalSheets",
					"Level_2_Wall_1_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_1";
				selection="level_2_wall_1";
			};
			class Level_2_Wall_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Wall_2";
				description="";
				attachmentSlots[]=
				{
					"Material_L2W2_Nails",
					"Material_L2W2_WoodenPlanks",
					"Material_L2W2_MetalSheets",
					"Level_2_Wall_2_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_2";
				selection="level_2_wall_2";
			};
			class Level_2_Wall_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Wall_3";
				description="";
				attachmentSlots[]=
				{
					"Material_L2W3_Nails",
					"Material_L2W3_WoodenPlanks",
					"Material_L2W3_MetalSheets",
					"Level_2_Wall_3_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_3";
				selection="level_2_wall_3";
			};
			class Level_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_L3_WoodenLogs",
					"Material_L3_Nails",
					"Material_L3_WoodenPlanks",
					"Material_L3_MetalSheets"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower";
				selection="level_3";
			};
			class Level_3_Wall_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Wall_1";
				description="";
				attachmentSlots[]=
				{
					"Material_L3W1_Nails",
					"Material_L3W1_WoodenPlanks",
					"Material_L3W1_MetalSheets",
					"Level_3_Wall_1_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_1";
				selection="level_3_wall_1";
			};
			class Level_3_Wall_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Wall_2";
				description="";
				attachmentSlots[]=
				{
					"Material_L3W2_Nails",
					"Material_L3W2_WoodenPlanks",
					"Material_L3W2_MetalSheets",
					"Level_3_Wall_2_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_2";
				selection="level_3_wall_2";
			};
			class Level_3_Wall_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Wall_3";
				description="";
				attachmentSlots[]=
				{
					"Material_L3W3_Nails",
					"Material_L3W3_WoodenPlanks",
					"Material_L3W3_MetalSheets",
					"Level_3_Wall_3_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_3";
				selection="level_3_wall_3";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Deployed: AnimSourceHidden
			{
			};
			class Level_1: AnimSourceHidden
			{
			};
			class Level_1_Base: AnimSourceHidden
			{
			};
			class Level_1_Stairs: AnimSourceHidden
			{
			};
			class Level_1_Roof: AnimSourceHidden
			{
			};
			class Material_L1_WoodenLogs: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Camonet: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Camonet: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Camonet: AnimSourceHidden
			{
			};
			class Level_1_Wall_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Base_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Base_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Wood_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Wood_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Metal_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Metal_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Base_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Base_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Wood_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Wood_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Metal_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Metal_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_3: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Base_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Base_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Wood_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Wood_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Metal_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Metal_Up: AnimSourceHidden
			{
			};
			class Level_2: AnimSourceHidden
			{
			};
			class Level_2_Base: AnimSourceHidden
			{
			};
			class Level_2_Stairs: AnimSourceHidden
			{
			};
			class Level_2_Roof: AnimSourceHidden
			{
			};
			class Material_L2_WoodenLogs: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Camonet: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Camonet: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Camonet: AnimSourceHidden
			{
			};
			class Level_2_Wall_1: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Base_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Base_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Wood_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Wood_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Metal_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Metal_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_2: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Base_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Base_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Wood_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Wood_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Metal_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Metal_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_3: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Base_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Base_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Wood_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Wood_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Metal_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Metal_Up: AnimSourceHidden
			{
			};
			class Level_3: AnimSourceHidden
			{
			};
			class Level_3_Base: AnimSourceHidden
			{
			};
			class Level_3_Stairs: AnimSourceHidden
			{
			};
			class Level_3_Roof: AnimSourceHidden
			{
			};
			class Material_L3_WoodenLogs: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Camonet: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Camonet: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Camonet: AnimSourceHidden
			{
			};
			class Level_3_Wall_1: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Base_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Base_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Wood_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Wood_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Metal_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Metal_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_2: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Base_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Base_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Wood_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Wood_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Metal_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Metal_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_3: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Base_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Base_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Wood_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Wood_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Metal_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Metal_Up: AnimSourceHidden
			{
			};
		};
		class Construction
		{
			class level_1
			{
				class level_1_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					platform_support="level_1";
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_stairs_min",
						"level_1_stairs_max"
					};
					build_action_type=4;
					dismantle_action_type=4;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_L1_WoodenLogs";
							quantity=4;
							lockable=1;
						};
					};
				};
				class level_1_stairs
				{
					name="$STR_CfgVehicles_Construction_Part_Stairs";
					id=2;
					required_parts[]=
					{
						"level_1_base",
						"level_1_roof"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_stairs_min",
						"level_1_stairs_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=3;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1_WoodenPlanks";
							quantity=6;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1_Nails";
							quantity=18;
						};
					};
				};
				class level_1_roof
				{
					name="$STR_cfgvehicles_construction_part_floor_base";
					id=3;
					platform_support="level_2";
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_roof_min",
						"level_1_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1_WoodenPlanks";
							quantity=10;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1_Nails";
							quantity=20;
						};
					};
				};
			};
			class level_1_wall_1
			{
				class level_1_wall_1_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=4;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_1_down_min",
						"level_1_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_1_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=6;
					required_parts[]=
					{
						"level_1_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_metal_down"
					};
					collision_data[]=
					{
						"level_1_wall_1_down_min",
						"level_1_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_1_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=8;
					required_parts[]=
					{
						"level_1_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_wood_down"
					};
					collision_data[]=
					{
						"level_1_wall_1_down_min",
						"level_1_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=12;
						};
					};
				};
				class level_1_wall_1_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=5;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_1_up_min",
						"level_1_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_1_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=7;
					required_parts[]=
					{
						"level_1_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_metal_up"
					};
					collision_data[]=
					{
						"level_1_wall_1_up_min",
						"level_1_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_1_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=9;
					required_parts[]=
					{
						"level_1_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_wood_up"
					};
					collision_data[]=
					{
						"level_1_wall_1_up_min",
						"level_1_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_1_wall_2
			{
				class level_1_wall_2_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=10;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_2_down_min",
						"level_1_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_2_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=12;
					required_parts[]=
					{
						"level_1_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_metal_down"
					};
					collision_data[]=
					{
						"level_1_wall_2_down_min",
						"level_1_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_2_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=14;
					required_parts[]=
					{
						"level_1_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_wood_down"
					};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=12;
						};
					};
				};
				class level_1_wall_2_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=11;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_2_up_min",
						"level_1_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_2_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=13;
					required_parts[]=
					{
						"level_1_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_metal_up"
					};
					collision_data[]=
					{
						"level_1_wall_2_up_min",
						"level_1_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_2_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=15;
					required_parts[]=
					{
						"level_1_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_wood_up"
					};
					collision_data[]=
					{
						"level_1_wall_2_up_min",
						"level_1_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_1_wall_3
			{
				class level_1_wall_3_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=16;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_3_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=18;
					required_parts[]=
					{
						"level_1_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_metal_down"
					};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_3_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=20;
					required_parts[]=
					{
						"level_1_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_wood_down"
					};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=12;
						};
					};
				};
				class level_1_wall_3_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=17;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_3_up_min",
						"level_1_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_3_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=19;
					required_parts[]=
					{
						"level_1_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_metal_up"
					};
					collision_data[]=
					{
						"level_1_wall_3_up_min",
						"level_1_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_3_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=21;
					required_parts[]=
					{
						"level_1_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_wood_up"
					};
					collision_data[]=
					{
						"level_1_wall_3_up_min",
						"level_1_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_2
			{
				class level_2_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					id=22;
					platform_support="level_2";
					required_parts[]=
					{
						"level_1_roof"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=8;
					dismantle_action_type=8;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_L2_WoodenLogs";
							quantity=4;
							lockable=1;
						};
					};
				};
				class level_2_stairs
				{
					name="$STR_CfgVehicles_Construction_Part_Stairs";
					id=23;
					required_parts[]=
					{
						"level_2_roof"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_stairs_min",
						"level_2_stairs_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=3;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2_WoodenPlanks";
							quantity=6;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2_Nails";
							quantity=18;
						};
					};
				};
				class level_2_roof
				{
					name="$STR_cfgvehicles_construction_part_floor_base";
					id=24;
					platform_support="level_3";
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_roof_min",
						"level_2_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2_WoodenPlanks";
							quantity=10;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2_Nails";
							quantity=20;
						};
					};
				};
			};
			class level_2_wall_1
			{
				class level_2_wall_1_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=25;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_1_down_min",
						"level_2_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_1_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=27;
					required_parts[]=
					{
						"level_2_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_metal_down"
					};
					collision_data[]=
					{
						"level_2_wall_1_down_min",
						"level_2_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_1_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=29;
					required_parts[]=
					{
						"level_2_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_wood_down"
					};
					collision_data[]=
					{
						"level_2_wall_1_down_min",
						"level_2_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=12;
						};
					};
				};
				class level_2_wall_1_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=26;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_1_up_min",
						"level_2_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_1_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=28;
					required_parts[]=
					{
						"level_2_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_metal_up"
					};
					collision_data[]=
					{
						"level_2_wall_1_up_min",
						"level_2_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_1_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=30;
					required_parts[]=
					{
						"level_2_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_wood_up"
					};
					collision_data[]=
					{
						"level_2_wall_1_up_min",
						"level_2_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_2_wall_2
			{
				class level_2_wall_2_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=31;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_2_down_min",
						"level_2_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_2_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=33;
					required_parts[]=
					{
						"level_2_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_metal_down"
					};
					collision_data[]=
					{
						"level_2_wall_2_down_min",
						"level_2_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_2_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=35;
					required_parts[]=
					{
						"level_2_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_wood_down"
					};
					collision_data[]=
					{
						"level_2_wall_2_down_min",
						"level_2_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=12;
						};
					};
				};
				class level_2_wall_2_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=32;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_2_up_min",
						"level_2_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_2_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=34;
					required_parts[]=
					{
						"level_2_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_metal_up"
					};
					collision_data[]=
					{
						"level_2_wall_2_up_min",
						"level_2_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_2_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=36;
					required_parts[]=
					{
						"level_2_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_wood_up"
					};
					collision_data[]=
					{
						"level_2_wall_2_up_min",
						"level_2_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_2_wall_3
			{
				class level_2_wall_3_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=37;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_3_down_min",
						"level_2_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_3_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=39;
					required_parts[]=
					{
						"level_2_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_metal_down"
					};
					collision_data[]=
					{
						"level_2_wall_3_down_min",
						"level_2_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_3_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=41;
					required_parts[]=
					{
						"level_2_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_wood_down"
					};
					collision_data[]=
					{
						"level_2_wall_3_down_min",
						"level_2_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=12;
						};
					};
				};
				class level_2_wall_3_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=38;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_3_up_min",
						"level_2_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_3_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=40;
					required_parts[]=
					{
						"level_2_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_metal_up"
					};
					collision_data[]=
					{
						"level_2_wall_3_up_min",
						"level_2_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_3_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=42;
					required_parts[]=
					{
						"level_2_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_wood_up"
					};
					collision_data[]=
					{
						"level_2_wall_3_up_min",
						"level_2_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_3
			{
				class level_3_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					id=43;
					platform_support="level_3";
					required_parts[]=
					{
						"level_2_roof"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=8;
					dismantle_action_type=8;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_L3_WoodenLogs";
							quantity=4;
							lockable=1;
						};
					};
				};
				class level_3_roof
				{
					name="$STR_CfgVehicles_Construction_Part_Roof";
					id=44;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_roof_min",
						"level_3_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3_Nails";
							quantity=20;
						};
						class Material3
						{
							type="MetalPlate";
							slot_name="Material_L3_MetalSheets";
							quantity=6;
						};
					};
				};
			};
			class level_3_wall_1
			{
				class level_3_wall_1_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=45;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_1_down_min",
						"level_3_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_1_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=47;
					required_parts[]=
					{
						"level_3_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_metal_down"
					};
					collision_data[]=
					{
						"level_3_wall_1_down_min",
						"level_3_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_1_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=49;
					required_parts[]=
					{
						"level_3_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_wood_down"
					};
					collision_data[]=
					{
						"level_3_wall_1_down_min",
						"level_3_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=12;
						};
					};
				};
				class level_3_wall_1_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=46;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_1_up_min",
						"level_3_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_1_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=48;
					required_parts[]=
					{
						"level_3_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_metal_up"
					};
					collision_data[]=
					{
						"level_3_wall_1_up_min",
						"level_3_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_1_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=50;
					required_parts[]=
					{
						"level_3_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_wood_up"
					};
					collision_data[]=
					{
						"level_3_wall_1_up_min",
						"level_3_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_3_wall_2
			{
				class level_3_wall_2_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=51;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_2_down_min",
						"level_3_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_2_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=53;
					required_parts[]=
					{
						"level_3_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_metal_down"
					};
					collision_data[]=
					{
						"level_3_wall_2_down_min",
						"level_3_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_2_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=55;
					required_parts[]=
					{
						"level_3_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_wood_down"
					};
					collision_data[]=
					{
						"level_3_wall_2_down_min",
						"level_3_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=12;
						};
					};
				};
				class level_3_wall_2_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=52;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_2_up_min",
						"level_3_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_2_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=54;
					required_parts[]=
					{
						"level_3_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_metal_up"
					};
					collision_data[]=
					{
						"level_3_wall_2_up_min",
						"level_3_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_2_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=56;
					required_parts[]=
					{
						"level_3_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_wood_up"
					};
					collision_data[]=
					{
						"level_3_wall_2_up_min",
						"level_3_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_3_wall_3
			{
				class level_3_wall_3_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=57;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_3_down_min",
						"level_3_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_3_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=59;
					required_parts[]=
					{
						"level_3_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_metal_down"
					};
					collision_data[]=
					{
						"level_3_wall_3_down_min",
						"level_3_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_3_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=61;
					required_parts[]=
					{
						"level_3_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_wood_down"
					};
					collision_data[]=
					{
						"level_3_wall_3_down_min",
						"level_3_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=12;
						};
					};
				};
				class level_3_wall_3_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=58;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_3_up_min",
						"level_3_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_3_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=60;
					required_parts[]=
					{
						"level_3_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_metal_up"
					};
					collision_data[]=
					{
						"level_3_wall_3_up_min",
						"level_3_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_3_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=62;
					required_parts[]=
					{
						"level_3_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_wood_up"
					};
					collision_data[]=
					{
						"level_3_wall_3_up_min",
						"level_3_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=12;
						};
					};
				};
			};
		};
	};
  class SRPB_Wall_PalisadeTowers: SRP_BaseBuildingBase
	{
		scope=2;
		displayName="Test";
		descriptionShort="Test";
		model="Survivalists_Building\structures\fortification\srp_palisade_towers.p3d";
		overrideDrawArea="3.0";
		forceFarBubble="true";
		lootCategory="Crafted";
		carveNavmesh=1;
		weight=60000;
		itemSize[]={6,6};
		physLayer="item_large";
		createProxyPhysicsOnInit="false";
		createdProxiesOnInit[]=
		{
			"Deployed"
		};
		mountables[]=
		{
			"Level_1_Wall_1_Barbedwire_1",
			"Level_1_Wall_1_Barbedwire_2",
			"Level_1_Wall_2_Barbedwire_1",
			"Level_1_Wall_2_Barbedwire_2",
			"Level_1_Wall_3_Barbedwire_1",
			"Level_1_Wall_3_Barbedwire_2"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{					
						{1,{""}},					
						{0.69999999,{""}},					
						{0.5,{""}},					
						{0.30000001,{""}},					
						{0,{""}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class Body
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},							
							{0.69999999,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},							
							{0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},							
							{0.30000001,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},							
							{0,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"body"
					};
					fatalInjuryCoef=-1;
				};
				class Material_L1_WoodenLogs
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							}
						};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=53;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"Material_L1_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_L1_WoodenLogs"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Stairs
				{
					class Health
					{
						hitpoints=7500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Stairs";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=53;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_stairs"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Base_Down
				{
					class Health
					{
						hitpoints=12000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=20;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_base_down"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_1_wall_1_base_up"
					};
				};
				class Level_1_Wall_1_Wood_Down
				{
					class Health
					{
						hitpoints=16000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=53;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_wood_down"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_1_wall_1_wood_up"
					};
				};
				class Level_1_Wall_1_Metal_Down
				{
					class Health
					{
						hitpoints=21000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_metalsheets.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_metal_down"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_1_wall_1_metal_up"
					};
				};
				class Level_1_Wall_1_Barbedwire_1
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\barbed_wire.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\barbed_wire.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\barbed_wire_damage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\barbed_wire_damage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\barbed_wire_destruct.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							}
						};
					};
					displayName="$STR_cfgvehicles_barbedwire0";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.0099999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=40;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_1_wall_1_barbedwire_1",
						"level_1_wall_1_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_1_Barbedwire_1"
					};
					fatalInjuryCoef=-1;
				};
				class Level_1_Wall_1_Barbedwire_2: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_1_barbedwire_2",
						"level_1_wall_1_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_1_Barbedwire_2"
					};
				};
				class Level_1_Wall_2_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_1_wall_2_base_down"
					};
				};
				class Level_1_Wall_2_Base_Up: Level_1_Wall_1_Base_Up
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_1_wall_2_base_up"
					};
				};
				class Level_1_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_1_wall_2_wood_down"
					};
				};
				class Level_1_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_1_wall_2_wood_up"
					};
				};
				class Level_1_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_1_wall_2_metal_down"
					};
				};
				class Level_1_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_1_wall_2_metal_up"
					};
				};
				class Level_1_Wall_2_Barbedwire_1: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_2_barbedwire_1",
						"level_1_wall_2_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_2_Barbedwire_1"
					};
				};
				class Level_1_Wall_2_Barbedwire_2: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_2_barbedwire_2",
						"level_1_wall_2_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_2_Barbedwire_2"
					};
				};
				class Level_1_Wall_3_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_1_wall_3_base_down"
					};
				};
				class Level_1_Wall_3_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_1_wall_3_base_up"
					};
				};
				class Level_1_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_1_wall_3_wood_down"
					};
				};
				class Level_1_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_1_wall_3_wood_up"
					};
				};
				class Level_1_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_1_wall_3_metal_down"
					};
				};
				class Level_1_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_1_wall_3_metal_up"
					};
				};
				class Level_1_Wall_3_Barbedwire_1: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_3_barbedwire_1",
						"level_1_wall_3_barbedwire_1_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_3_Barbedwire_1"
					};
				};
				class Level_1_Wall_3_Barbedwire_2: Level_1_Wall_1_Barbedwire_1
				{
					displayName="$STR_cfgvehicles_barbedwire0";
					componentNames[]=
					{
						"level_1_wall_3_barbedwire_2",
						"level_1_wall_3_barbedwire_2_mounted"
					};
					inventorySlots[]=
					{
						"Level_1_Wall_3_Barbedwire_2"
					};
				};
				class Material_L2_WoodenLogs: Material_L1_WoodenLogs
				{
					componentNames[]=
					{
						"Material_L2_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_L2_WoodenLogs"
					};
				};
				class Level_2_Stairs: Level_1_Stairs
				{
					displayName="$STR_CfgVehicles_Construction_Part_Stairs";
					componentNames[]=
					{
						"level_2_stairs"
					};
				};
				class Level_2_Wall_1_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_2_wall_1_base_down"
					};
				};
				class Level_2_Wall_1_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_2_wall_1_base_up"
					};
				};
				class Level_2_Wall_1_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_2_wall_1_wood_down"
					};
				};
				class Level_2_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_2_wall_1_wood_up"
					};
				};
				class Level_2_Wall_1_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_2_wall_1_metal_down"
					};
				};
				class Level_2_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_2_wall_1_metal_up"
					};
				};
				class Level_2_Wall_2_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_2_wall_2_base_down"
					};
				};
				class Level_2_Wall_2_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_2_wall_2_base_up"
					};
				};
				class Level_2_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_2_wall_2_wood_down"
					};
				};
				class Level_2_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_2_wall_2_wood_up"
					};
				};
				class Level_2_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_2_wall_2_metal_down"
					};
				};
				class Level_2_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_2_wall_2_metal_up"
					};
				};
				class Level_2_Wall_3_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_2_wall_3_base_down"
					};
				};
				class Level_2_Wall_3_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_2_wall_3_base_up"
					};
				};
				class Level_2_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_2_wall_3_wood_down"
					};
				};
				class Level_2_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_2_wall_3_wood_up"
					};
				};
				class Level_2_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_2_wall_3_metal_down"
					};
				};
				class Level_2_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_2_wall_3_metal_up"
					};
				};
				class Material_L3_WoodenLogs: Material_L1_WoodenLogs
				{
					componentNames[]=
					{
						"Material_L3_WoodenLogs"
					};
					inventorySlots[]=
					{
						"Material_L3_WoodenLogs"
					};
				};
				class Level_3_Wall_1_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_3_wall_1_base_down"
					};
				};
				class Level_3_Wall_1_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_3_wall_1_base_up"
					};
				};
				class Level_3_Wall_1_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_3_wall_1_wood_down"
					};
				};
				class Level_3_Wall_1_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_3_wall_1_wood_up"
					};
				};
				class Level_3_Wall_1_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_3_wall_1_metal_down"
					};
				};
				class Level_3_Wall_1_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_3_wall_1_metal_up"
					};
				};
				class Level_3_Wall_2_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_3_wall_2_base_down"
					};
				};
				class Level_3_Wall_2_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_3_wall_2_base_up"
					};
				};
				class Level_3_Wall_2_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_3_wall_2_wood_down"
					};
				};
				class Level_3_Wall_2_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_3_wall_2_wood_up"
					};
				};
				class Level_3_Wall_2_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_3_wall_2_metal_down"
					};
				};
				class Level_3_Wall_2_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_3_wall_2_metal_up"
					};
				};
				class Level_3_Wall_3_Base_Down: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Down";
					componentNames[]=
					{
						"level_3_wall_3_base_down"
					};
				};
				class Level_3_Wall_3_Base_Up: Level_1_Wall_1_Base_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[]=
					{
						"level_3_wall_3_base_up"
					};
				};
				class Level_3_Wall_3_Wood_Down: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Down";
					componentNames[]=
					{
						"level_3_wall_3_wood_down"
					};
				};
				class Level_3_Wall_3_Wood_Up: Level_1_Wall_1_Wood_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[]=
					{
						"level_3_wall_3_wood_up"
					};
				};
				class Level_3_Wall_3_Metal_Down: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Down";
					componentNames[]=
					{
						"level_3_wall_3_metal_down"
					};
				};
				class Level_3_Wall_3_Metal_Up: Level_1_Wall_1_Metal_Down
				{
					displayName="$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[]=
					{
						"level_3_wall_3_metal_up"
					};
				};
				class Level_3_Roof
				{
					class Health
					{
						hitpoints=19000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"DZ\gear\camping\data\fence_metalsheets.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_worn.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_damage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat",
									"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"
								}
							}
						};
					};
					displayName="$STR_CfgVehicles_Construction_Part_Roof";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.64999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"level_3_roof"
					};
					fatalInjuryCoef=-1;
				};
			};
		};
		attachments[]=
		{
			"Level_1_Wall_1_Barbedwire_1",
			"Level_1_Wall_1_Barbedwire_2",
			"Level_1_Wall_2_Barbedwire_1",
			"Level_1_Wall_2_Barbedwire_2",
			"Level_1_Wall_3_Barbedwire_1",
			"Level_1_Wall_3_Barbedwire_2",
			"Level_1_Wall_1_Camonet",
			"Level_1_Wall_2_Camonet",
			"Level_1_Wall_3_Camonet",
			"Level_2_Wall_1_Camonet",
			"Level_2_Wall_2_Camonet",
			"Level_2_Wall_3_Camonet",
			"Level_3_Wall_1_Camonet",
			"Level_3_Wall_2_Camonet",
			"Level_3_Wall_3_Camonet",
			"Material_L1_WoodenLogs",
			"Material_L2_WoodenLogs",
			"Material_L3_WoodenLogs",
			"Material_L1_Nails",
			"Material_L1W1_Nails",
			"Material_L1W2_Nails",
			"Material_L1W3_Nails",
			"Material_L2_Nails",
			"Material_L2W1_Nails",
			"Material_L2W2_Nails",
			"Material_L2W3_Nails",
			"Material_L3_Nails",
			"Material_L3W1_Nails",
			"Material_L3W2_Nails",
			"Material_L3W3_Nails",
			"Material_L1_WoodenPlanks",
			"Material_L1W1_WoodenPlanks",
			"Material_L1W2_WoodenPlanks",
			"Material_L1W3_WoodenPlanks",
			"Material_L2_WoodenPlanks",
			"Material_L2W1_WoodenPlanks",
			"Material_L2W2_WoodenPlanks",
			"Material_L2W3_WoodenPlanks",
			"Material_L3_WoodenPlanks",
			"Material_L3W1_WoodenPlanks",
			"Material_L3W2_WoodenPlanks",
			"Material_L3W3_WoodenPlanks",
			"Material_L3_MetalSheets",
			"Material_L1W1_MetalSheets",
			"Material_L1W2_MetalSheets",
			"Material_L1W3_MetalSheets",
			"Material_L2W1_MetalSheets",
			"Material_L2W2_MetalSheets",
			"Material_L2W3_MetalSheets",
			"Material_L3W1_MetalSheets",
			"Material_L3W2_MetalSheets",
			"Material_L3W3_MetalSheets"
		};
		class GUIInventoryAttachmentsProps
		{
			class Level_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_L1_WoodenLogs",
					"Material_L1_Nails",
					"Material_L1_WoodenPlanks"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower";
				selection="level_1";
			};
			class Level_1_Wall_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Wall_1";
				description="";
				attachmentSlots[]=
				{
					"Material_L1W1_Nails",
					"Material_L1W1_WoodenPlanks",
					"Material_L1W1_MetalSheets",
					"Level_1_Wall_1_Camonet",
					"Level_1_Wall_1_Barbedwire_1",
					"Level_1_Wall_1_Barbedwire_2"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_1";
				selection="level_1_wall_1";
			};
			class Level_1_Wall_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Wall_2";
				description="";
				attachmentSlots[]=
				{
					"Material_L1W2_Nails",
					"Material_L1W2_WoodenPlanks",
					"Material_L1W2_MetalSheets",
					"Level_1_Wall_2_Camonet",
					"Level_1_Wall_2_Barbedwire_1",
					"Level_1_Wall_2_Barbedwire_2"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_2";
				selection="level_1_wall_2";
			};
			class Level_1_Wall_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_1_Wall_3";
				description="";
				attachmentSlots[]=
				{
					"Material_L1W3_Nails",
					"Material_L1W3_WoodenPlanks",
					"Material_L1W3_MetalSheets",
					"Level_1_Wall_3_Camonet",
					"Level_1_Wall_3_Barbedwire_1",
					"Level_1_Wall_3_Barbedwire_2"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_3";
				selection="level_1_wall_3";
			};
			class Level_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_L2_WoodenLogs",
					"Material_L2_Nails",
					"Material_L2_WoodenPlanks"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower";
				selection="level_2";
			};
			class Level_2_Wall_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Wall_1";
				description="";
				attachmentSlots[]=
				{
					"Material_L2W1_Nails",
					"Material_L2W1_WoodenPlanks",
					"Material_L2W1_MetalSheets",
					"Level_2_Wall_1_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_1";
				selection="level_2_wall_1";
			};
			class Level_2_Wall_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Wall_2";
				description="";
				attachmentSlots[]=
				{
					"Material_L2W2_Nails",
					"Material_L2W2_WoodenPlanks",
					"Material_L2W2_MetalSheets",
					"Level_2_Wall_2_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_2";
				selection="level_2_wall_2";
			};
			class Level_2_Wall_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_2_Wall_3";
				description="";
				attachmentSlots[]=
				{
					"Material_L2W3_Nails",
					"Material_L2W3_WoodenPlanks",
					"Material_L2W3_MetalSheets",
					"Level_2_Wall_3_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_3";
				selection="level_2_wall_3";
			};
			class Level_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Base";
				description="";
				attachmentSlots[]=
				{
					"Material_L3_WoodenLogs",
					"Material_L3_Nails",
					"Material_L3_WoodenPlanks",
					"Material_L3_MetalSheets"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower";
				selection="level_3";
			};
			class Level_3_Wall_1
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Wall_1";
				description="";
				attachmentSlots[]=
				{
					"Material_L3W1_Nails",
					"Material_L3W1_WoodenPlanks",
					"Material_L3W1_MetalSheets",
					"Level_3_Wall_1_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_1";
				selection="level_3_wall_1";
			};
			class Level_3_Wall_2
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Wall_2";
				description="";
				attachmentSlots[]=
				{
					"Material_L3W2_Nails",
					"Material_L3W2_WoodenPlanks",
					"Material_L3W2_MetalSheets",
					"Level_3_Wall_2_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_2";
				selection="level_3_wall_2";
			};
			class Level_3_Wall_3
			{
				name="$STR_CfgVehicles_Watchtower_Att_Category_Level_3_Wall_3";
				description="";
				attachmentSlots[]=
				{
					"Material_L3W3_Nails",
					"Material_L3W3_WoodenPlanks",
					"Material_L3W3_MetalSheets",
					"Level_3_Wall_3_Camonet"
				};
				icon="set:dayz_inventory image:cat_bb_watchtower_wall_3";
				selection="level_3_wall_3";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Deployed: AnimSourceHidden
			{
			};
			class Level_1: AnimSourceHidden
			{
			};
			class Level_1_Base: AnimSourceHidden
			{
			};
			class Level_1_Stairs: AnimSourceHidden
			{
			};
			class Level_1_Roof: AnimSourceHidden
			{
			};
			class Material_L1_WoodenLogs: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_1_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Barbedwire_2_Mounted: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Camonet: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Camonet: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Camonet: AnimSourceHidden
			{
			};
			class Level_1_Wall_1: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Base_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Base_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Wood_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Wood_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Metal_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_1_Metal_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_2: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Base_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Base_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Wood_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Wood_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Metal_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_2_Metal_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_3: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Base_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Base_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Wood_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Wood_Up: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Metal_Down: AnimSourceHidden
			{
			};
			class Level_1_Wall_3_Metal_Up: AnimSourceHidden
			{
			};
			class Level_2: AnimSourceHidden
			{
			};
			class Level_2_Base: AnimSourceHidden
			{
			};
			class Level_2_Stairs: AnimSourceHidden
			{
			};
			class Level_2_Roof: AnimSourceHidden
			{
			};
			class Material_L2_WoodenLogs: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Camonet: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Camonet: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Camonet: AnimSourceHidden
			{
			};
			class Level_2_Wall_1: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Base_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Base_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Wood_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Wood_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Metal_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_1_Metal_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_2: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Base_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Base_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Wood_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Wood_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Metal_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_2_Metal_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_3: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Base_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Base_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Wood_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Wood_Up: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Metal_Down: AnimSourceHidden
			{
			};
			class Level_2_Wall_3_Metal_Up: AnimSourceHidden
			{
			};
			class Level_3: AnimSourceHidden
			{
			};
			class Level_3_Base: AnimSourceHidden
			{
			};
			class Level_3_Stairs: AnimSourceHidden
			{
			};
			class Level_3_Roof: AnimSourceHidden
			{
			};
			class Material_L3_WoodenLogs: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Camonet: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Camonet: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Camonet: AnimSourceHidden
			{
			};
			class Level_3_Wall_1: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Base_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Base_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Wood_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Wood_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Metal_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_1_Metal_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_2: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Base_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Base_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Wood_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Wood_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Metal_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_2_Metal_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_3: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Base_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Base_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Wood_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Wood_Up: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Metal_Down: AnimSourceHidden
			{
			};
			class Level_3_Wall_3_Metal_Up: AnimSourceHidden
			{
			};
		};
		class Construction
		{
			class level_1
			{
				class level_1_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					is_base=1;
					id=1;
					platform_support="level_1";
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_stairs_min",
						"level_1_stairs_max"
					};
					build_action_type=4;
					dismantle_action_type=4;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_L1_WoodenLogs";
							quantity=4;
							lockable=1;
						};
					};
				};
				class level_1_stairs
				{
					name="$STR_CfgVehicles_Construction_Part_Stairs";
					id=2;
					required_parts[]=
					{
						"level_1_base",
						"level_1_roof"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_stairs_min",
						"level_1_stairs_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=3;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1_WoodenPlanks";
							quantity=6;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1_Nails";
							quantity=18;
						};
					};
				};
				class level_1_roof
				{
					name="$STR_cfgvehicles_construction_part_floor_base";
					id=3;
					platform_support="level_2";
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_roof_min",
						"level_1_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1_WoodenPlanks";
							quantity=10;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1_Nails";
							quantity=20;
						};
					};
				};
			};
			class level_1_wall_1
			{
				class level_1_wall_1_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=4;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_1_down_min",
						"level_1_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_1_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=6;
					required_parts[]=
					{
						"level_1_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_metal_down"
					};
					collision_data[]=
					{
						"level_1_wall_1_down_min",
						"level_1_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_1_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=8;
					required_parts[]=
					{
						"level_1_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_wood_down"
					};
					collision_data[]=
					{
						"level_1_wall_1_down_min",
						"level_1_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=12;
						};
					};
				};
				class level_1_wall_1_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=5;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_1_up_min",
						"level_1_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_1_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=7;
					required_parts[]=
					{
						"level_1_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_metal_up"
					};
					collision_data[]=
					{
						"level_1_wall_1_up_min",
						"level_1_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_1_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=9;
					required_parts[]=
					{
						"level_1_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_1_wood_up"
					};
					collision_data[]=
					{
						"level_1_wall_1_up_min",
						"level_1_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W1_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_1_wall_2
			{
				class level_1_wall_2_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=10;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_2_down_min",
						"level_1_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_2_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=12;
					required_parts[]=
					{
						"level_1_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_metal_down"
					};
					collision_data[]=
					{
						"level_1_wall_2_down_min",
						"level_1_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_2_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=14;
					required_parts[]=
					{
						"level_1_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_wood_down"
					};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=12;
						};
					};
				};
				class level_1_wall_2_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=11;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_2_up_min",
						"level_1_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_2_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=13;
					required_parts[]=
					{
						"level_1_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_metal_up"
					};
					collision_data[]=
					{
						"level_1_wall_2_up_min",
						"level_1_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_2_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=15;
					required_parts[]=
					{
						"level_1_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_2_wood_up"
					};
					collision_data[]=
					{
						"level_1_wall_2_up_min",
						"level_1_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W2_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_1_wall_3
			{
				class level_1_wall_3_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=16;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_3_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=18;
					required_parts[]=
					{
						"level_1_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_metal_down"
					};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_3_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=20;
					required_parts[]=
					{
						"level_1_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_wood_down"
					};
					collision_data[]=
					{
						"level_1_wall_3_down_min",
						"level_1_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=12;
						};
					};
				};
				class level_1_wall_3_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=17;
					required_parts[]=
					{
						"level_1_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_1_wall_3_up_min",
						"level_1_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=8;
						};
					};
				};
				class level_1_wall_3_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=19;
					required_parts[]=
					{
						"level_1_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_metal_up"
					};
					collision_data[]=
					{
						"level_1_wall_3_up_min",
						"level_1_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L1W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=10;
						};
					};
				};
				class level_1_wall_3_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=21;
					required_parts[]=
					{
						"level_1_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_1_wall_3_wood_up"
					};
					collision_data[]=
					{
						"level_1_wall_3_up_min",
						"level_1_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L1W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L1W3_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_2
			{
				class level_2_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					id=22;
					platform_support="level_2";
					required_parts[]=
					{
						"level_1_roof"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=8;
					dismantle_action_type=8;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_L2_WoodenLogs";
							quantity=4;
							lockable=1;
						};
					};
				};
				class level_2_stairs
				{
					name="$STR_CfgVehicles_Construction_Part_Stairs";
					id=23;
					required_parts[]=
					{
						"level_2_roof"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_stairs_min",
						"level_2_stairs_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=3;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2_WoodenPlanks";
							quantity=6;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2_Nails";
							quantity=18;
						};
					};
				};
				class level_2_roof
				{
					name="$STR_cfgvehicles_construction_part_floor_base";
					id=24;
					platform_support="level_3";
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_roof_min",
						"level_2_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2_WoodenPlanks";
							quantity=10;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2_Nails";
							quantity=20;
						};
					};
				};
			};
			class level_2_wall_1
			{
				class level_2_wall_1_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=25;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_1_down_min",
						"level_2_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_1_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=27;
					required_parts[]=
					{
						"level_2_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_metal_down"
					};
					collision_data[]=
					{
						"level_2_wall_1_down_min",
						"level_2_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_1_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=29;
					required_parts[]=
					{
						"level_2_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_wood_down"
					};
					collision_data[]=
					{
						"level_2_wall_1_down_min",
						"level_2_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=12;
						};
					};
				};
				class level_2_wall_1_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=26;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_1_up_min",
						"level_2_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_1_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=28;
					required_parts[]=
					{
						"level_2_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_metal_up"
					};
					collision_data[]=
					{
						"level_2_wall_1_up_min",
						"level_2_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_1_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=30;
					required_parts[]=
					{
						"level_2_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_1_wood_up"
					};
					collision_data[]=
					{
						"level_2_wall_1_up_min",
						"level_2_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W1_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_2_wall_2
			{
				class level_2_wall_2_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=31;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_2_down_min",
						"level_2_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_2_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=33;
					required_parts[]=
					{
						"level_2_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_metal_down"
					};
					collision_data[]=
					{
						"level_2_wall_2_down_min",
						"level_2_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_2_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=35;
					required_parts[]=
					{
						"level_2_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_wood_down"
					};
					collision_data[]=
					{
						"level_2_wall_2_down_min",
						"level_2_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=12;
						};
					};
				};
				class level_2_wall_2_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=32;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_2_up_min",
						"level_2_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_2_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=34;
					required_parts[]=
					{
						"level_2_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_metal_up"
					};
					collision_data[]=
					{
						"level_2_wall_2_up_min",
						"level_2_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_2_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=36;
					required_parts[]=
					{
						"level_2_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_2_wood_up"
					};
					collision_data[]=
					{
						"level_2_wall_2_up_min",
						"level_2_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W2_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_2_wall_3
			{
				class level_2_wall_3_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=37;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_3_down_min",
						"level_2_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_3_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=39;
					required_parts[]=
					{
						"level_2_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_metal_down"
					};
					collision_data[]=
					{
						"level_2_wall_3_down_min",
						"level_2_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_3_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=41;
					required_parts[]=
					{
						"level_2_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_wood_down"
					};
					collision_data[]=
					{
						"level_2_wall_3_down_min",
						"level_2_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=12;
						};
					};
				};
				class level_2_wall_3_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=38;
					required_parts[]=
					{
						"level_2_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_2_wall_3_up_min",
						"level_2_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=8;
						};
					};
				};
				class level_2_wall_3_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=40;
					required_parts[]=
					{
						"level_2_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_metal_up"
					};
					collision_data[]=
					{
						"level_2_wall_3_up_min",
						"level_2_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L2W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=10;
						};
					};
				};
				class level_2_wall_3_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=42;
					required_parts[]=
					{
						"level_2_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_2_wall_3_wood_up"
					};
					collision_data[]=
					{
						"level_2_wall_3_up_min",
						"level_2_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L2W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L2W3_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_3
			{
				class level_3_base
				{
					name="$STR_CfgVehicles_Construction_Part_Base";
					id=43;
					platform_support="level_3";
					required_parts[]=
					{
						"level_2_roof"
					};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=8;
					dismantle_action_type=8;
					material_type=1;
					class Materials
					{
						class Material1
						{
							type="WoodenLog";
							slot_name="Material_L3_WoodenLogs";
							quantity=4;
							lockable=1;
						};
					};
				};
				class level_3_roof
				{
					name="$STR_CfgVehicles_Construction_Part_Roof";
					id=44;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_roof_min",
						"level_3_roof_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3_Nails";
							quantity=20;
						};
						class Material3
						{
							type="MetalPlate";
							slot_name="Material_L3_MetalSheets";
							quantity=6;
						};
					};
				};
			};
			class level_3_wall_1
			{
				class level_3_wall_1_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=45;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_1_down_min",
						"level_3_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_1_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=47;
					required_parts[]=
					{
						"level_3_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_metal_down"
					};
					collision_data[]=
					{
						"level_3_wall_1_down_min",
						"level_3_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_1_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=49;
					required_parts[]=
					{
						"level_3_wall_1_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_wood_down"
					};
					collision_data[]=
					{
						"level_3_wall_1_down_min",
						"level_3_wall_1_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=12;
						};
					};
				};
				class level_3_wall_1_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=46;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_1_up_min",
						"level_3_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_1_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=48;
					required_parts[]=
					{
						"level_3_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_metal_up"
					};
					collision_data[]=
					{
						"level_3_wall_1_up_min",
						"level_3_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W1_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_1_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=50;
					required_parts[]=
					{
						"level_3_wall_1_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_1_wood_up"
					};
					collision_data[]=
					{
						"level_3_wall_1_up_min",
						"level_3_wall_1_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W1_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W1_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_3_wall_2
			{
				class level_3_wall_2_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=51;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_2_down_min",
						"level_3_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_2_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=53;
					required_parts[]=
					{
						"level_3_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_metal_down"
					};
					collision_data[]=
					{
						"level_3_wall_2_down_min",
						"level_3_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_2_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=55;
					required_parts[]=
					{
						"level_3_wall_2_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_wood_down"
					};
					collision_data[]=
					{
						"level_3_wall_2_down_min",
						"level_3_wall_2_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=12;
						};
					};
				};
				class level_3_wall_2_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=52;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_2_up_min",
						"level_3_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_2_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=54;
					required_parts[]=
					{
						"level_3_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_metal_up"
					};
					collision_data[]=
					{
						"level_3_wall_2_up_min",
						"level_3_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W2_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_2_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=56;
					required_parts[]=
					{
						"level_3_wall_2_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_2_wood_up"
					};
					collision_data[]=
					{
						"level_3_wall_2_up_min",
						"level_3_wall_2_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W2_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W2_Nails";
							quantity=12;
						};
					};
				};
			};
			class level_3_wall_3
			{
				class level_3_wall_3_base_down
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Down";
					id=57;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_3_down_min",
						"level_3_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_3_wood_down
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Down";
					id=59;
					required_parts[]=
					{
						"level_3_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_metal_down"
					};
					collision_data[]=
					{
						"level_3_wall_3_down_min",
						"level_3_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_3_metal_down
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Down";
					id=61;
					required_parts[]=
					{
						"level_3_wall_3_base_down"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_wood_down"
					};
					collision_data[]=
					{
						"level_3_wall_3_down_min",
						"level_3_wall_3_down_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=12;
						};
					};
				};
				class level_3_wall_3_base_up
				{
					name="$STR_CfgVehicles_Construction_Part_Base_Up";
					id=58;
					required_parts[]=
					{
						"level_3_base"
					};
					conflicted_parts[]={};
					collision_data[]=
					{
						"level_3_wall_3_up_min",
						"level_3_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=4;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=8;
						};
					};
				};
				class level_3_wall_3_wood_up
				{
					name="$STR_CfgVehicles_Construction_Part_Wood_Up";
					id=60;
					required_parts[]=
					{
						"level_3_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_metal_up"
					};
					collision_data[]=
					{
						"level_3_wall_3_up_min",
						"level_3_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=2;
					class Materials
					{
						class Material1
						{
							type="WoodenPlank";
							slot_name="Material_L3W3_WoodenPlanks";
							quantity=5;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=10;
						};
					};
				};
				class level_3_wall_3_metal_up
				{
					name="$STR_CfgVehicles_Construction_Part_Metal_Up";
					id=62;
					required_parts[]=
					{
						"level_3_wall_3_base_up"
					};
					conflicted_parts[]=
					{
						"level_3_wall_3_wood_up"
					};
					collision_data[]=
					{
						"level_3_wall_3_up_min",
						"level_3_wall_3_up_max"
					};
					build_action_type=2;
					dismantle_action_type=2;
					material_type=4;
					class Materials
					{
						class Material1
						{
							type="MetalPlate";
							slot_name="Material_L3W3_MetalSheets";
							quantity=3;
						};
						class Material2
						{
							type="Nail";
							slot_name="Material_L3W3_Nails";
							quantity=12;
						};
					};
				};
			};
		};
	};
};