class CfgMods
{
	class Survivalists_Fishing
	{
		type="mod";
		author="ItsATreee";
		name="Survivalists_Fishing";
		dir="Survivalists_Fishing";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"Survivalists_Fishing/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_Fishing/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"Survivalists_Fishing/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_Fishing
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
  class Bitterlings;
  class Sardines;
  class Carp;
  class Mackerel;
  
  // Carp, Sardines, Mackerel, Bitterlings  
  class Bitterlings_Small: Bitterlings
	{
		scope=2;
		itemSize[]={1,1};
		weight=125;
		varQuantityInit=250;
		varQuantityMax=250;
    stackedUnit="percentage";
	};
  class Bitterlings_Medium: Bitterlings
	{
    scope=2;
		itemSize[]={2,1};
		weight=250;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="percentage";
  };
  class Bitterlings_Large: Bitterlings
	{
		scope=2;
		itemSize[]={2,2};
		weight=375;
		varQuantityInit=750;
		varQuantityMax=750;
    stackedUnit="percentage";
	};
  class Bitterlings_Epic: Bitterlings
	{
		scope=2;
		itemSize[]={2,3};
		weight=500;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="percentage";
	};

  class Sardines_Small: Sardines
	{
		scope=2;
		itemSize[]={1,1};
		weight=100;
		varQuantityInit=200;
		varQuantityMax=200;
    stackedUnit="percentage";
	};
  class Sardines_Medium: Sardines
	{
    scope=2;
		itemSize[]={2,1};
		weight=200;
		varQuantityInit=400;
		varQuantityMax=400;
    stackedUnit="percentage";
  };
  class Sardines_Large: Sardines
	{
		scope=2;
		itemSize[]={2,2};
		weight=300;
		varQuantityInit=600;
		varQuantityMax=600;
    stackedUnit="percentage";
	};
  class Sardines_Epic: Sardines
	{
		scope=2;
		itemSize[]={2,3};
		weight=400;
		varQuantityInit=800;
		varQuantityMax=800;
    stackedUnit="percentage";
	};

  class Carp_Small: Carp
	{
		scope=2;
		itemSize[]={1,2};
		weight=1000;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="percentage";
	};
  class Carp_Medium: Carp
	{
    scope=2;
		itemSize[]={1,3};
		weight=2000;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="percentage";
  };
  class Carp_Large: Carp
	{
		scope=2;
		itemSize[]={2,3};
		weight=2500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    stackedUnit="percentage";
	};
  class Carp_Epic: Carp
	{
		scope=2;
		itemSize[]={2,4};
		weight=3000;
		varQuantityInit=2000;
		varQuantityMax=2000;
    stackedUnit="percentage";
	};

  class Mackerel_Small: Mackerel
	{
		scope=2;
		itemSize[]={3,1};
		weight=1000;
		varQuantityInit=500;
		varQuantityMax=500;
    stackedUnit="percentage";
	};
  class Mackerel_Medium: Mackerel
	{
    scope=2;
		itemSize[]={4,2};
		weight=2000;
		varQuantityInit=1000;
		varQuantityMax=1000;
    stackedUnit="percentage";
  };
  class Mackerel_Large: Mackerel
	{
		scope=2;
		itemSize[]={5,2};
		weight=2500;
		varQuantityInit=1500;
		varQuantityMax=1500;
    stackedUnit="percentage";
	};
  class Mackerel_Epic: Mackerel
	{
		scope=2;
		itemSize[]={5,3};
		weight=3000;
		varQuantityInit=2000;
		varQuantityMax=2000;
    stackedUnit="percentage";
	};

};
