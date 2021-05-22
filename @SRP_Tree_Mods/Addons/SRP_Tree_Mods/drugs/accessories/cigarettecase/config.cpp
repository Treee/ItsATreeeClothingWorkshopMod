class CfgPatches
{
	class SRP_Tree_CigaretteCase
	{
    units[] = {
      "SRP_CigaretteCase"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SRP_CigaretteCase: Inventory_Base
	{
    scope=2;
		displayName="Cigarette Case";
		descriptionShort="An old luxurious case for holding cigarettes";
		model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase.p3d";
		destroyOnEmpty=0;
		attachments[]={
      "CigaretteCase1",
      "CigaretteCase2",
      "CigaretteCase3",
      "CigaretteCase4",
      "CigaretteCase5", 
      "CigaretteCase6",
      "CigaretteCase7",
      "CigaretteCase8",
      "CigaretteCase9",
      "CigaretteCase10",
      "CigaretteCase11",
      "CigaretteCase12",
      "CigaretteCase13",
      "CigaretteCase14"      
    };
		weight=100;
    varTemperatureMax=100;
		itemSize[]={3,2};
		itemBehaviour=1;
		allowOwnedCargoManipulation=0;
		hiddenSelections[]={"camoGround"};
		class DamageSystem
		{
      class GlobalHealth
      {
        class Health
        {
          hitpoints=50;
        };
      };
      class GlobalArmor
      {
        class FragGrenade
        {
          class Health{damage=8;};
          class Blood{damage=8;};
          class Shock{damage=8;};
        };
      };
		};
		class Cargo
		{
      itemsCargoSize[]={2,1};
      openable=1;
      allowOwnedCargoManipulation=0;
		};
		class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
      class cigarettecase_proxy1
			{
        source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
      class SoundWeapon
      {
        class open
				{
					soundSet="compass_open_SoundSet";
					id=204;
				};
				class close
				{
					soundSet="compass_close_SoundSet";
					id=205;
				};
      };
		};
	};
};

class CfgSlots
{
	class Slot_SRP_CigaretteCase1
	{
		name="CigaretteCase1";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase2
	{
		name="CigaretteCase2";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase3
	{
		name="CigaretteCase3";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase4
	{
		name="CigaretteCase4";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase5
	{
		name="CigaretteCase5";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase6
	{
		name="CigaretteCase6";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase7
	{
		name="CigaretteCase7";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase8
	{
		name="CigaretteCase8";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase9
	{
		name="CigaretteCase9";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase10
	{
		name="CigaretteCase10";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase11
	{
		name="CigaretteCase11";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase12
	{
		name="CigaretteCase12";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase13
	{
		name="CigaretteCase13";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase14
	{
		name="CigaretteCase14";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
};

class CfgNonAIVehicles
{
  class ProxyAttachment;
  class Proxycigarettecase_proxy1: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase1"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy1.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy2: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase2"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy2.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy3: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase3"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy3.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy4: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase4"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy4.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy5: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase5"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy5.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy6: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase6"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy6.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy7: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase7"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy7.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy8: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase8"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy8.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy9: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase9"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy9.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy10: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase10"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy10.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy11: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase11"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy11.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy12: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase12"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy12.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy13: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase13"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy13.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy14: ProxyAttachment //same as p3d name
  {
      scope=2;
      inventorySlot[]={"CigaretteCase14"}; // same as slot name 
      model="SRP_Tree_Mods\drugs\accessories\cigarettecase\cigarettecase_proxy14.p3d"; //proxy path 
  };
};