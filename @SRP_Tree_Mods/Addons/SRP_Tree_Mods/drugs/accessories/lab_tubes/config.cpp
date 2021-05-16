class CfgPatches
{
	class SRP_Tree_Drugs
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SRP_LabTube_Colorbase : Inventory_Base
  {		
		displayName="Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
		model="SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube.p3d";
    color="default";
    itemSize[]={1,3};
    varTemperatureMax=100;
		weight=15;
    inventorySlot[]=
    {
      "TestTube1",
      "TestTube2",
      "TestTube3",
      "TestTube4",
      "TestTube5",
      "TestTube6"
    };
    hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsTextures[]={
      "SRP_Tree_Mods\drugs\accessories\lab_tubes\data\testtube_ca.paa"
    };
		hiddenSelectionsMaterials[]={
      "SRP_Tree_Mods\drugs\accessories\lab_tubes\data\testtube.rvmat"
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
            {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
            {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
            {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
			    };
				};
			};
    };
    class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPaper_SoundSet";
					id=797;
				};
			};
		};
  };

  class SRP_LabTube_Clear : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Clear Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="clear";
  };
  class SRP_LabTube_Blue : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Blue Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="blue";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "SRP_Tree_Mods\drugs\accessories\lab_tubes\data\testtube_blue.rvmat"
    };
  };
  class SRP_LabTube_Red : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Red Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="red";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "SRP_Tree_Mods\drugs\accessories\lab_tubes\data\testtube_red.rvmat"
    };
  };
  class SRP_LabTube_Green : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Green Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="green";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "SRP_Tree_Mods\drugs\accessories\lab_tubes\data\testtube_green.rvmat"
    };
  };
  class SRP_LabTube_Yellow : SRP_LabTube_Colorbase
  {
		scope=2;
		displayName="Yellow Lab Tube";
		descriptionShort="A single test tube. Careful not to break the glass.";
    color="yellow";
		hiddenSelections[]={
      "zbytek"
    };
    hiddenSelectionsMaterials[]={
      "SRP_Tree_Mods\drugs\accessories\lab_tubes\data\testtube_yellow.rvmat"
    };
  };

  class SRP_LabTubeRack : Inventory_Base
  {
		scope=2;
		displayName="Test Tube Rack";
		descriptionShort="A rack that holds multiple test tubes";
		model="SRP_Tree_Mods\drugs\accessories\lab_tubes\testtubeholder.p3d";		
    attachments[]={
      "TestTube1",
      "TestTube2",
      "TestTube3",
      "TestTube4",
      "TestTube5",
      "TestTube6"
    };
		itemSize[]={3,3};
		weight=15;
  };
};

class CfgSlots
{
	class Slot_SRP_TestTube1
	{
		name="TestTube1";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube2
	{
		name="TestTube2";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube3
	{
		name="TestTube3";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube4
	{
		name="TestTube4";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube5
	{
		name="TestTube5";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube6
	{
		name="TestTube6";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
};

class CfgNonAIVehicles
{
  class ProxyAttachment;
  class Proxytesttube_proxy1: ProxyAttachment //same as p3d name
  {
      scope = 2;
      inventorySlot[] = {"TestTube1"}; // same as slot name 
      model = "SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube_proxy1.p3d"; //proxy path 
  };    
  class Proxytesttube_proxy2: ProxyAttachment //same as p3d name
  {
      scope = 2;
      inventorySlot[] = {"TestTube2"}; // same as slot name 
      model = "SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube_proxy2.p3d"; //proxy path 
  };
  class Proxytesttube_proxy3: ProxyAttachment //same as p3d name
  {
      scope = 2;
      inventorySlot[] = {"TestTube3"}; // same as slot name 
      model = "SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube_proxy3.p3d"; //proxy path 
  };
  class Proxytesttube_proxy4: ProxyAttachment //same as p3d name
  {
      scope = 2;
      inventorySlot[] = {"TestTube4"}; // same as slot name 
      model = "SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube_proxy4.p3d"; //proxy path 
  };
  class Proxytesttube_proxy5: ProxyAttachment //same as p3d name
  {
      scope = 2;
      inventorySlot[] = {"TestTube5"}; // same as slot name 
      model = "SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube_proxy5.p3d"; //proxy path 
  };
  class Proxytesttube_proxy6: ProxyAttachment //same as p3d name
  {
      scope = 2;
      inventorySlot[] = {"TestTube6"}; // same as slot name 
      model = "SRP_Tree_Mods\drugs\accessories\lab_tubes\testtube_proxy6.p3d"; //proxy path 
  };
}