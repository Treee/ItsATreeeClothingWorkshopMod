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
};