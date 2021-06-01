class CfgPatches
{
	class SRP_Tree_LabEquipment
	{
		units[]={
      "SRP_GeigerCounter"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Characters"
		};
	};
};
class CfgVehicles
{

  class Inventory_Base;
  class SRP_GeigerCounter: Inventory_Base
	{
    scope=2;
    displayName="Geiger Counter";
    descriptionShort="3.6 roentgen not great, not terrible. Used for measuring radiation.";
		model="SRP_Tree_Mods\gear\labequipment\geigercounter.p3d";
    weight=30;
		varTemperatureMax=100;
    itemSize[]={2,3};
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "SRP_Tree_Mods\gear\labequipment\data\geigercounter_ca.paa"
		};
		hiddenSelectionsMaterials[]= {
			"SRP_Tree_Mods\gear\labequipment\data\geigercounter.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						{1,{"SRP_Tree_Mods\gear\labequipment\data\geigercounter.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\gear\labequipment\data\geigercounter.rvmat"}},
            {0.5,{"SRP_Tree_Mods\gear\labequipment\data\geigercounter_damage.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\gear\labequipment\data\geigercounter_damage.rvmat"}},
            {0,{"SRP_Tree_Mods\gear\labequipment\data\geigercounter_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_LabEquipment_Base: Inventory_Base
	{
    displayName="Base Lab Equipment (Do not spawn)";
    descriptionShort="Do not spawn me";
    weight=30;
		varTemperatureMax=100;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "SRP_Tree_Mods\gear\labequipment\data\labequipment_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"SRP_Tree_Mods\gear\labequipment\data\labequipment.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						{1,{"SRP_Tree_Mods\gear\labequipment\data\labequipment.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\gear\labequipment\data\labequipment.rvmat"}},
            {0.5,{"SRP_Tree_Mods\gear\labequipment\data\labequipment_damage.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\gear\labequipment\data\labequipment_damage.rvmat"}},
            {0,{"SRP_Tree_Mods\gear\labequipment\data\labequipment_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_LabEquipment_Projector : SRP_LabEquipment_Base
  {
    scope=2;
    displayName="Lab Projector";
    itemBehaviour=0;
    descriptionShort="Project the results of your experiments.";
		model="SRP_Tree_Mods\gear\labequipment\labequipment_projector.p3d";
    itemSize[]={5,6};
  };

  class SRP_LabEquipment_Tuner : SRP_LabEquipment_Base
  {
    scope=2;
    displayName="Lab Tuner";
    descriptionShort="Tune in for the best results.";
		model="SRP_Tree_Mods\gear\labequipment\labequipment_tuner.p3d";
    itemSize[]={3,3};
  };

  class SRP_LabEquipment_Oscilliscope : SRP_LabEquipment_Base
  {
    scope=2;
    displayName="Lab Oscilliscope";
    descriptionShort="Measure the wavyness of your experiments.";
		model="SRP_Tree_Mods\gear\labequipment\labequipment_oscilliscope.p3d";
    itemSize[]={3,3};
  };

  class SRP_LabEquipment_GeigerCounter : SRP_LabEquipment_Base
  {
    scope=2;
    displayName="Lab Geiger Counter";
    descriptionShort="An advanced tool for measuring radiation AND biohazards.";
		model="SRP_Tree_Mods\gear\labequipment\labequipment_geigercounter1.p3d";
    itemSize[]={2,3};
  };
};
