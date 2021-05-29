class CfgPatches
{
	class SRP_Tree_Explosives
	{
    units[] = {
      "SRP_Tree_Dynamite_Stick"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Grenade_Base;
  class SRP_Dynamite_Stick : Grenade_Base
  {
		scope=2;
		displayName="Dynamite";
		descriptionShort="A single stick of dynamite... explosive.";
		model="SRP_Tree_Mods\explosives\dynamite_stick.p3d";
		weight=50;
    itemSize[]={1,3};
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {
      "SRP_Tree_Mods\explosives\data\dynamite_stick_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"SRP_Tree_Mods\explosives\data\dynamite_stick.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]={
            {1,{	"DZ\weapons\explosives\data\frag_RGD5.rvmat"}},
            {0.69999999,{	"DZ\weapons\explosives\data\frag_RGD5.rvmat"}},
            {0.5,{	"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"}},
            {0.30000001,{	"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"}},
            {0,{	"DZ\weapons\explosives\data\frag_RGD5_destruct.rvmat"}}
					};
				};
			};
		};		
  }
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