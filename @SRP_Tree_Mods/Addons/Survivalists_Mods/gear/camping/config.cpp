class CfgPatches
{
	class Survivalists_Mods_Gear_Camping
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Survivalists_Mods_Gear_Containers"
		};
	};
};
class CfgVehicles
{
  class BarrelHoles_ColorBase;
  class SRP_KitBase;

  class SRP_Potbelly_Stove_Kit: SRP_KitBase //BP_Pech_kit
	{
		scope=2;
		displayName="Potbelly Stove Kit";
		descriptionShort="A Potbelly Stove Kit";
		model="Survivalists_Mods\gear\camping\Pech_kit.p3d";		
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={8,8};
		carveNavmesh=1;
		rotationFlags=2;
		itemBehaviour=2;
		// forceFarBubble="true";
		// bounding="BSphere";
		physLayer="item_large";
		minPlacingDist=1;
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class Cargo
		{
			itemsCargoSize[]={4,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

  class SRP_Potbelly_Stove: BarrelHoles_ColorBase //BPPech
	{
		scope=2;
		displayName="Potbelly Stove";
		descriptionShort="A Potbelly stove, a very convenient thing when the whole world is in ruin.";
		model="Survivalists_Mods\gear\camping\Pech_kit.p3d";
		itemSize[]={10,15};
		weight=10000;
		stackedUnit="ml";
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Rags",
			"MedicalBandage",
			"Paper",
			"Bark",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=1;
			allowOwnedCargoManipulation=1;
		};
	};

};