class CfgPatches
{
	class Survivalists_Mods_Vehicles_Wheeled
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Vehicles_Wheeled"};
	};
};
class CfgVehicles
{
  class CarScript;
  class Truck_01_Base;
  class Inventory_Base;

//=========================================== VANILLA OVERRIDE
  class CarDoor: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{						
						{1,{}},						
						{0.69999999,{}},						
						{0.5,{}},						
						{0.30000001,{}},						
						{0,{}}
					};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints=70;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{1,{}},
							{0.69999999,{}},
							{0.5,{}},
							{0.30000001,{}},
							{0,{""}}
						};
					};
					componentNames[]=
					{
						"dmgZone_window"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Doors
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=1;
						healthLevels[]=
						{						
							{1,{}},							
							{0.69999999,{}},							
							{0.5,{}},							
							{0.30000001,{}},							
							{0,{""}}
						};
					};
					componentNames[]=
					{
						"dmgZone_doors"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
			};
		};
	};

  class OffroadHatchback: CarScript
	{
    fuelConsumption=33;
    class Cargo
		{
			itemsCargoSize[]={0,0};
			allowOwnedCargoManipulation=0;
			openable=0;
		};
  };
  class Hatchback_02: CarScript
  {
		fuelConsumption=33;
    class Cargo
		{
			itemsCargoSize[]={0,0};
			allowOwnedCargoManipulation=0;
			openable=0;
		};
  };
  
  class CivilianSedan: CarScript
  {
    fuelConsumption=39;
    class Cargo
		{
			itemsCargoSize[]={0,0};
			allowOwnedCargoManipulation=0;
			openable=0;
		};
  };
  class Sedan_02: CarScript
  {
		fuelConsumption=39;
    class Cargo
		{
			itemsCargoSize[]={0,0};
			allowOwnedCargoManipulation=0;
			openable=0;
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{						
						{1,{}},						
						{0.69999999,{}},						
						{0.5,{}},						
						{0.30000001,{}},						
						{0,{}}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					displayName="$STR_CfgVehicleDmg_Chassis0";
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=0;
					};
					inventorySlots[]={};
				};
				class Front
				{
					displayName="$STR_CfgVehicleDmg_Bumper0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front",
						"dmgZone_bumper_1"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_destruct.rvmat"}}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_1",
						"Fender_2_1"
					};
					transferToZonesCoefs[]={0.2,0.2};
					inventorySlots[]=
					{
						"CivSedanHood",
						"CarRadiator",
						"Sedan_02_Wheel_1_1",
						"Sedan_02_Wheel_2_1"
					};
					inventorySlotsCoefs[]={0.25,0.30000001,0.15000001,0.15000001};
				};
				class Reflector_1_1
				{
					displayName="$STR_CfgVehicleDmg_Reflector0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					class Health
					{
						hitpoints=10;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\glass_frontlights.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\glass_frontlights_damaged.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\glass_frontlights_damaged.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\glass_frontlights_ruined.rvmat"}},							
							{0,"Hidden"}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1"
					};
					transferToZonesCoefs[]={1,1};
					inventorySlots[]=
					{
						"Reflector_1_1",
						"Sedan_02_Wheel_1_1"
					};
					inventorySlotsCoefs[]={1,0.1};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1",
						"Sedan_02_Wheel_2_1"
					};
				};
				class Back
				{
					displayName="$STR_CfgVehicleDmg_Bumper0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_destruct.rvmat"}}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_2",
						"Fender_2_2",
						"Engine"
					};
					transferToZonesCoefs[]={0.2,0.2,0.17};
					inventorySlots[]=
					{
						"Sedan_02_Trunk",
						"Sedan_02_Wheel_1_2",
						"Sedan_02_Wheel_2_2"
					};
					inventorySlotsCoefs[]={0.15000001,0.1,0.1};
				};
				class Roof
				{
					displayName="$STR_CfgVehicleDmg_Roof0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					class Health
					{
						hitpoints=600;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_destruct.rvmat"}}
						};
					};
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					displayName="$STR_CfgVehicleDmg_Fender0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body_destruct.rvmat"}}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_1_1"
					};
					transferToZonesCoefs[]={0.25,0.25};
					inventorySlots[]=
					{
						"Sedan_02_Hood",
						"Sedan_02_Wheel_1_1",
						"Sedan_02_Door_1_1"
					};
					inventorySlotsCoefs[]={0.2,0.15000001,0.15000001};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_2_1"
					};
					transferToZonesCoefs[]={0.25,0.25};
					inventorySlots[]=
					{
						"Sedan_02_Hood",
						"Sedan_02_Wheel_2_1",
						"Sedan_02_Door_2_1"
					};
					inventorySlotsCoefs[]={0.2,0.1,0.1};
				};
				class Fender_1_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"Engine",
						"FuelTank"
					};
					transferToZonesCoefs[]={0.25,0.079999998,0.30000001};
					inventorySlots[]=
					{
						"Sedan_02_Trunk",
						"Sedan_02_Wheel_1_2",
						"Sedan_02_Door_1_2"
					};
					inventorySlotsCoefs[]={0.2,0.15000001,0.15000001};
				};
				class Fender_2_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"Engine",
						"FuelTank"
					};
					transferToZonesCoefs[]={0.25,0.079999998,0.30000001};
					inventorySlots[]=
					{
						"Sedan_02_Trunk",
						"Sedan_02_Wheel_2_2",
						"Sedan_02_Door_2_2"
					};
					inventorySlotsCoefs[]={0.2,0.15000001,0.15000001};
				};
				class WindowFront
				{
					displayName="$STR_CfgVehicleDmg_Window0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowFront"
					};
					componentNames[]=
					{
						"dmgZone_windowFront"
					};
					class Health
					{
						hitpoints=90;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\glass_interior.rvmat"}},
							{0.69999999,{}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\glass_i_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\glass_i_destruct.rvmat"}},
							{0,"hidden"}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class WindowBack: WindowFront
				{
					componentNames[]=
					{
						"dmgZone_windowBack"
					};
					memoryPoints[]=
					{
						"dmgZone_windowBack"
					};
				};
				class Engine
				{
					displayName="$STR_CfgVehicleDmg_Engine0";
					fatalInjuryCoef=0.001;
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							{1,{"DZ\vehicles\wheeled\sedan_02\data\sedan_02_engine.rvmat"}},							
							{0.69999999,{"DZ\vehicles\wheeled\sedan_02\data\sedan_02_engine.rvmat"}},							
							{0.5,{"DZ\vehicles\wheeled\sedan_02\data\sedan_02_engine.rvmat"}},							
							{0.30000001,{"DZ\vehicles\wheeled\sedan_02\data\sedan_02_engine.rvmat"}},							
							{0,{"DZ\vehicles\wheeled\sedan_02\data\sedan_02_engine.rvmat"}}
						};
					};
					inventorySlots[]=
					{
						"CarBattery",
						"SparkPlug"
					};
					inventorySlotsCoefs[]={0.1,0.050000001};
				};
				class FuelTank
				{
					displayName="$STR_CfgVehicleDmg_FuelTank0";
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.5,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0,
								{}
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
			};
		};
  };
  class Sedan_02_Door_1_1: CarDoor
	{
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\glass_interior.rvmat"}},							
							{0.69999999,{}},							
							{0.5,{"dz\vehicles\wheeled\Sedan_02\data\glass_i_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\Sedan_02\data\glass_i_destruct.rvmat"}},							
							{0,"hidden"}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore.rvmat"
						};
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore_destruct.rvmat"}}
						};
					};
				};
			};
		};
	};
  class Sedan_02_Door_2_1: Sedan_02_Door_1_1
	{
		displayName="$STR_Sedan_02_Door_2_10";
		descriptionShort="$STR_Sedan_02_Door_2_11";
		model="\DZ\vehicles\wheeled\Sedan_02\proxy\Sedan_02_Door_2_1.p3d";
		inventorySlot[]=
		{
			"Sedan_02_Door_2_1"
		};
	};
	class Sedan_02_Door_1_2: Sedan_02_Door_1_1
	{
		displayName="$STR_Sedan_02_Door_1_20";
		descriptionShort="$STR_Sedan_02_Door_1_21";
		model="\DZ\vehicles\wheeled\Sedan_02\proxy\Sedan_02_Door_1_2.p3d";
		inventorySlot[]=
		{
			"Sedan_02_Door_1_2"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\glass_interior.rvmat"}},							
							{0.69999999,{}},							
							{0.5,{"dz\vehicles\wheeled\Sedan_02\data\glass_i_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\Sedan_02\data\glass_i_destruct.rvmat"}},							
							{0,"hidden"}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft_destruct.rvmat"}}
						};
					};
				};
			};
		};
	};
	class Sedan_02_Door_2_2: Sedan_02_Door_1_1
	{
    displayName="$STR_Sedan_02_Door_2_20";
		descriptionShort="$STR_Sedan_02_Door_2_21";
		model="\DZ\vehicles\wheeled\Sedan_02\proxy\Sedan_02_Door_2_2.p3d";
		inventorySlot[]=
		{
			"Sedan_02_Door_2_2"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\glass_interior.rvmat"}},							
							{0.69999999,{}},							
							{0.5,{"dz\vehicles\wheeled\Sedan_02\data\glass_i_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\Sedan_02\data\glass_i_destruct.rvmat"}},							
							{0,"hidden"}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"
						};
						healthLevels[]=
						{							
							{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"}},							
							{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat"}},							
							{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft_damage.rvmat"}},							
							{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft_damage.rvmat"}},							
							{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft_destruct.rvmat"}}
						};
					};
				};
			};
		};
	};
  class Sedan_02_Hood: CarDoor
	{
		scope=2;
		displayName="$STR_Sedan_02_Hood0";
		descriptionShort="$STR_Sedan_02_Hood1";
		model="\DZ\vehicles\wheeled\Sedan_02\proxy\Sedan_02_Hood.p3d";
		inventorySlot[]=
		{
			"Sedan_02_Hood"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					RefTexsMats[]=
					{
						"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood.rvmat"
					};
					healthLevels[]=
					{						
						{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood.rvmat"}},						
						{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood.rvmat"}},						
						{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood_damage.rvmat"}},						
						{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood_damage.rvmat"}},						
						{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class Sedan_02_Trunk: CarDoor
	{
		scope=2;
		displayName="$STR_Sedan_02_Trunk0";
		descriptionShort="$STR_Sedan_02_Trunk1";
		model="\DZ\vehicles\wheeled\Sedan_02\proxy\Sedan_02_Trunk.p3d";
		inventorySlot[]=
		{
			"Sedan_02_Trunk"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					RefTexsMats[]=
					{
						"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk.rvmat"
					};
					healthLevels[]=
					{						
						{1,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk.rvmat"}},						
						{0.69999999,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk.rvmat"}},						
						{0.5,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk_damage.rvmat"}},						
						{0.30000001,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk_damage.rvmat"}},						
						{0,{"dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class Truck_01_Covered: Truck_01_Base
  {
    fuelConsumption=100;
    class Cargo
		{
			itemsCargoSize[]={0,0};
			allowOwnedCargoManipulation=0;
			openable=0;
		};
  };
  class Offroad_02: CarScript
  {
    fuelConsumption=100;
    class Cargo
		{
			itemsCargoSize[]={0,0};
			allowOwnedCargoManipulation=0;
			openable=0;
		};
  };
//=========================================== RETEXTURES  
  class SRP_Investor_UniqueItem_KrazyN8: Sedan_02
  {    
    hiddenSelectionsMaterials[] =
    {
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat",
      "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat"
    };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
        class Health : Health
        {
        };
      };
      class DamageZones : DamageZones
      {
        class Chassis : Chassis
        {
          class Health : Health
          {
          };
        };
        class Front : Front
        {
          class Health : Health
          {
            RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
            healthLevels[] =
            {
              { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" }},
              { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
              { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
              { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
              { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
            };
          };
          class Reflector_1_1 : Reflector_1_1
          {
            class Health : Health
            {
            };
          };
          class Reflector_2_1 : Reflector_2_1
          {
          };
          class Back : Back
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
              };
            };
          };
          class Roof : Roof
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
              };
            };
          };
          class Fender_1_1 : Fender_1_1
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
              };
            };
          };
          class Fender_1_2 : Fender_1_2
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
              };
            };
          };
          class Fender_2_1 : Fender_2_1
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
              };
            };
          };
          class Fender_2_2 : Fender_2_2
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_damage.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_body_destruct.rvmat" } }
              };
            };
          };
          class WindowFront : WindowFront
          {
          };
          class WindowBack : WindowBack
          {
          };
          class Engine : Engine
          {
            class Health : Health
            {
              RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_body.rvmat" };
              healthLevels[] =
              {
                { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_engine.rvmat" } },
                { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_engine.rvmat" } },
                { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_engine.rvmat" } },
                { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_engine.rvmat" } },
                { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_engine.rvmat" } }
              };
            };
          };
          class FuelTank : FuelTank
          {
          };
        };
      };
    };
  };
  class SRP_Investor_UniqueItemDoor1_1_KrazyN8: Sedan_02_Door_1_1
  {
    hiddenSelectionsMaterials[] = { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore.rvmat" };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
      };
      class DamageZones : DamageZones
      {
        class Window : Window
        {
          class Health : Health
          {
          };
        };
        class Doors : Doors
        {
          class Health : Health
          {
            RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore.rvmat" };
            healthLevels[] =
            {
              { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore.rvmat" } },
              { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore.rvmat" } },
              { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore_damage.rvmat" } },
              { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore_damage.rvmat" } },
              { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore_destruct.rvmat" } }
            };
          };
        };
      };
    };
  };
  class SRP_Investor_UniqueItemDoor2_1_KrazyN8: Sedan_02_Door_2_1
  {
    hiddenSelectionsMaterials[] = { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore.rvmat" };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
      };
      class DamageZones : DamageZones
      {
        class Window : Window
        {
          class Health : Health
          {
          };
        };
        class Doors : Doors
        {
          class Health : Health
          {
            RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_fore.rvmat" };
            healthLevels[] =
            {
              { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore.rvmat" } },
              { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore.rvmat" } },
              { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore_damage.rvmat" } },
              { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore_damage.rvmat" } },
              { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_fore_destruct.rvmat" } }
            };
          };
        };
      };
    };
  };
  class SRP_Investor_UniqueItemDoor1_2_KrazyN8: Sedan_02_Door_1_2
  {
    hiddenSelectionsMaterials[] = { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft.rvmat" };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
      };
      class DamageZones : DamageZones
      {
        class Window : Window
        {
          class Health : Health
          {
          };
        };
        class Doors : Doors
        {
          class Health : Health
          {
            RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat" };
            healthLevels[] =
            {
              { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft.rvmat" } },
              { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft.rvmat" } },
              { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft_damage.rvmat" } },
              { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft_damage.rvmat" } },
              { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft_destruct.rvmat" } }
            };
          };
        };
      };
    };
  };
  class SRP_Investor_UniqueItemDoor2_2_KrazyN8: Sedan_02_Door_2_2
  {
    hiddenSelectionsMaterials[] = { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft.rvmat" };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
      };
      class DamageZones : DamageZones
      {
        class Window : Window
        {
          class Health : Health
          {
          };
        };
        class Doors : Doors
        {
          class Health : Health
          {
            RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_door_aft.rvmat" };
            healthLevels[] =
            {
              { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft.rvmat" } },
              { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft.rvmat" } },
              { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft_damage.rvmat" } },
              { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft_damage.rvmat" } },
              { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_door_aft_destruct.rvmat" } }
            };
          };
        };
      };
    };
  };
  class SRP_Investor_UniqueItemHood_KrazyN8: Sedan_02_Hood
  {
    hiddenSelectionsMaterials[] = { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_hood.rvmat" };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
        class Health : Health
        {
          RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_hood.rvmat" };
          healthLevels[] =
          {
            { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_hood.rvmat" } },
            { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_hood.rvmat"  } },
            { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_hood_damage.rvmat" } },
            { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_hood_damage.rvmat" } },
            { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_hood_destruct.rvmat" } }
          };
        };
      };
    };
  };
  class SRP_Investor_UniqueItemTrunk_KrazyN8: Sedan_02_Trunk
  {
    hiddenSelectionsMaterials[] = { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_trunk.rvmat" };
    class DamageSystem : DamageSystem
    {
      class GlobalHealth : GlobalHealth
      {
        class Health : Health
        {
          RefTexsMats[] = { "dz\vehicles\wheeled\sedan_02\data\yellow\sedan_02_trunk.rvmat" };
          healthLevels[] =
          {
            { 1, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_trunk.rvmat" } },
            { 0.69999999, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_trunk.rvmat" } },
            { 0.5, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_trunk_damage.rvmat" } },
            { 0.30000001, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_trunk_damage.rvmat" } },
            { 0, { "Survivalists_Mods\vehicles\wheeled\data\krazyn8\sedan_02_trunk_destruct.rvmat" } }
          };
        };
      };
    };
  };
//=========================================== END

};