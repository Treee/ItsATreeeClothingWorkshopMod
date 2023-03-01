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
      "DZ_Scripts",
      "Survivalists_RadioElectronics"
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
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.69999999,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.5,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.30000001,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}},
						{0.0,{"Survivalists_RadioElectronics\radio\data\srp_radiojammer.rvmat"}}
					};
				};
        class GlobalArmor
        {
          class Projectile
          {
            class Health
            {
              damage=0.30000001;
            };
            class Blood
            {
              damage=0;
            };
            class Shock
            {
              damage=0.60000002;
            };
          };
          class Melee
          {
            class Health
            {
              damage=0.25;
            };
            class Blood
            {
              damage=0;
            };
            class Shock
            {
              damage=0.25;
            };
          };
          class Infected
          {
            class Health
            {
              damage=0.25;
            };
            class Blood
            {
              damage=0;
            };
            class Shock
            {
              damage=0.25;
            };
          };
          class FragGrenade
          {
            class Health
            {
              damage=0.5;
            };
            class Blood
            {
              damage=0;
            };
            class Shock
            {
              damage=0.25999999;
            };
          };
        };
			};
		};
	};

  class SRP_RadioElectronicsJammer_Intermediate_Kit: SRP_RadioElectronics_KitBase
	{
		scope=2;
		displayName="Advanced Electronics Intermediate Kit - Radio Jammer";
		descriptionShort="This kit is missing a few pieces, add the other ingredients and apply work to finish";
    attachments[]=
    {
      "Material_MetalSheets",
      "Lightbulb",
      "MetalWire",
			"Material_MetalWire",
			"Material_FPole_MetalWire",
			"Rope",
			"Material_FPole_Rope",
			"Material_Shelter_Rope",
      "TruckBattery",
			"LargeBattery"
    };
	};

  class SRP_ElectronicsJammer_Dish_Kit: SRP_RadioElectronics_KitBase
	{
		scope=2;
		displayName="Electronics Jammer Kit - Dish";
		descriptionShort="This kit contains the required materials to build a rudimentary radio jammer.";
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
	};

  class SRP_ElectronicsJammer_TowerAdvanced: SRP_ElectronicsJammer_Base
	{
		scope=2;
		displayName="Electronics Jammer - Advanced Tower";
		descriptionShort="A rudimentary radio frequency jamming tool.";
		model="Survivalists_RadioElectronics\radio\srp_radiojammer_1.p3d";
	};
};