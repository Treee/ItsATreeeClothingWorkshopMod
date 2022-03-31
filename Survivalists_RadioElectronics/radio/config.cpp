class CfgPatches
{
  class Survivalists_RadioElectronics_Radio
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

  class SRP_RadioElectronics_KitBase;

  class SRP_ElectronicsJammer_Base: Inventory_Base
	{
		scope=0;
		displayName="Electronics Jammer";
		descriptionShort="A rudimentary radio frequency jamming tool.";
		model="Survivalists_RadioElectronics\radio\srp_radiojammer.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_large";		
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]={};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RadioElectronics\radio\data\srp_radiojammer_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{1.0,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.69999999,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.5,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.30000001,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.0,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_ElectronicsJammer_Dish_Kit: SRP_RadioElectronics_KitBase
	{
		scope=2;
		displayName="Electronics Jammer Kit - Dish";
		descriptionShort="This kit contains the required materials to build a rudimentary radio jammer.";
    model="Survivalists_RadioElectronics\radio\srp_radiojammer.p3d";
	};

  class SRP_ElectronicsJammer_Dish: SRP_ElectronicsJammer_Base
	{
		scope=2;
		displayName="Electronics Jammer - Dish";
		descriptionShort="A rudimentary radio frequency jamming tool.";
		model="Survivalists_RadioElectronics\radio\srp_radiojammer.p3d";
	};

  class SRP_ElectronicsJammer_Tower_Kit: SRP_RadioElectronics_KitBase
	{
		scope=2;
		displayName="Electronics Jammer Kit - Tower";
		descriptionShort="This kit contains the required materials to build a rudimentary radio jammer.";
    model="Survivalists_RadioElectronics\radio\srp_radiojammer_2.p3d";
	};

  class SRP_ElectronicsJammer_Tower: SRP_ElectronicsJammer_Base
	{
		scope=2;
		displayName="Electronics Jammer - Tower";
		descriptionShort="A rudimentary radio frequency jamming tool.";
		model="Survivalists_RadioElectronics\radio\srp_radiojammer_2.p3d";
	};

  class SRP_ElectronicsJammer_TowerAdvanced_Kit: SRP_RadioElectronics_KitBase
	{
		scope=2;
		displayName="Electronics Jammer Kit - Advanced Tower";
		descriptionShort="This kit contains the required materials to build an advanced radio jammer.";
    model="Survivalists_RadioElectronics\radio\srp_radiojammer_1.p3d";
	};

  class SRP_ElectronicsJammer_TowerAdvanced: SRP_ElectronicsJammer_Base
	{
		scope=2;
		displayName="Electronics Jammer - Advanced Tower";
		descriptionShort="A rudimentary radio frequency jamming tool.";
		model="Survivalists_RadioElectronics\radio\srp_radiojammer_1.p3d";
	};
};