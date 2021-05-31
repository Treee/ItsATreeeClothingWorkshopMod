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
    descriptionShort="3.6 roentgen not great, not terrible";
		model="SRP_Tree_Mods\gear\labequipment\geigercounter.p3d";
    weight=30;
		varTemperatureMax=1000;
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
};
