class CfgPatches
{
	class SRP_Tree_Weapons_Melee
	{
    units[] = {
      "SRP_Trenchknife"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SRP_Trenchknife : Inventory_Base
  {
		scope=2;
		displayName="Trenchknife";
		descriptionShort="A knife with a blade and brass knuckless";
		model="SRP_Tree_Mods\weapons\melee\trenchknife.p3d";
		weight=10;
    varTemperatureMax=100;
    itemSize[]={1,3};
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "SRP_Tree_Mods\weapons\data\trenchknife_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"SRP_Tree_Mods\weapons\data\trenchknife.rvmat"
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
						{1,{"SRP_Tree_Mods\weapons\data\trenchknife.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\weapons\data\trenchknife.rvmat"}},
            {0.5,{"SRP_Tree_Mods\weapons\data\trenchknife_damage.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\weapons\data\trenchknife_damage.rvmat"}},
            {0,{"SRP_Tree_Mods\weapons\data\trenchknife_destruct.rvmat"}}
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

// class CfgSlots
// {
// 	class Slot_SRP_CigaretteCase1
// 	{
// 		name="CigaretteCase1";
// 		displayName="Cigarette";
// 		ghostIcon="set:dayz_inventory image:paper";
// 	};
// };

// class CfgNonAIVehicles
// {
//   class ProxyAttachment;
//   class Proxycigarettecase_proxy1: ProxyAttachment //same as p3d name
//   {
//       scope=2;
//       inventorySlot[]={"CigaretteCase1"}; // same as slot name 
//       model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy1.p3d"; //proxy path 
//   };    
// };