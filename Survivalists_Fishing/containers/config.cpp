class CfgPatches
{
	class Survivalists_Fishing_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers",
      "Survivalists_Fishing"
		};
	};
};
class CfgVehicles
{	
	class Container_Base;

  class SRP_Tacklebox: Container_Base // new
	{
		scope=2;
		displayName="Tacklebox";
		descriptionShort="A tacklebox for various fishing accessories.";
		model="Survivalists_Fishing\containers\tacklebox.p3d";    
		itemBehaviour=1;
    useEntityHierarchy="true";
		physLayer="item_small";
		weight=5000;
		itemSize[]={6,5};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\containers\data\tacklebox_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\containers\data\tacklebox.rvmat"
		};
		class Cargo
		{
			itemsCargoSize[]={6,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
    class AnimationSources
		{
      class Lid{source="user";initPhase=0;animPeriod=0.0099999998;};
      class Lid2{source="user";initPhase=1;animPeriod=0.0099999998;};
		};
	};

  class SRP_Aquarium: Container_Base // new
	{
		scope=2;
		displayName="Aquarium";
		descriptionShort="An old world aquarium.";
		model="Survivalists_Fishing\containers\aquarium.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_small";
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Fish_Small1",
      "SRP_Fish_Small2",
      "SRP_Fish_Small3",
      "SRP_Fish_Small4",
      "SRP_Fish_Small5",
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\containers\data\aquarium_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\containers\data\aquarium.rvmat"
		};
	};

  class SRP_WoodenFishHanger: Container_Base // new
	{
		scope=2;
		displayName="Wooden Fish Post";
		descriptionShort="A wooden post to hang a prize fish.";
		model="Survivalists_Fishing\containers\woodenfishhanger.p3d";    
		itemBehaviour=0;
    useEntityHierarchy="true";
		physLayer="item_small";
		weight=5000;
		itemSize[]={6,6};
    itemsCargoSize[]={0,0};
    attachments[]=
    {
      "SRP_Fish_Small1",
      "SRP_Fish_Small2",
      "SRP_Fish_Small3",
      "SRP_Fish_Small4",
      "SRP_Fish_Large1"
    };
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Fishing\containers\data\woodenfishhanger_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"
		};
	};
};