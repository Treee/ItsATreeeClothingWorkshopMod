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

  //=========================================== VANILLA OVERRIDE
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
};