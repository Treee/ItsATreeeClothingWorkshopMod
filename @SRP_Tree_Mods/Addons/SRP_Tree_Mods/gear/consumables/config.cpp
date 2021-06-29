class CfgPatches
{
	class SRP_Tree_Consumables
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Consumables",
      "DZ_Vehicles_Parts"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;

  class SRP_ToiletPaper: Inventory_Base
	{
		scope=2;
		displayName="Toilet Paper";
		descriptionShort="1 ply toilet paper. Looks more like sand paper.";
		model="SRP_Tree_Mods\gear\consumables\toiletpaper.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,2};
		inventorySlot[]=
		{
			"Rags"
		};
		ChangeInventorySlot[]=
		{
			"Mask"
		};
		ChangeIntoOnAttach[]=
		{
			"",
			"MouthRag"
		};
		canBeSplit=1;
		varQuantityInit=6;
		varQuantityMin=0;
		varQuantityMax=6;
		varQuantityDestroyOnMin=1;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {	1,{"SRP_Tree_Mods\gear\consumables\data\toiletpaper.rvmat"	}},
            {	0.69999999,{"SRP_Tree_Mods\gear\consumables\data\toiletpaper.rvmat"	}},
            {	0.5,{"SRP_Tree_Mods\gear\consumables\data\toiletpaper_damage.rvmat"	}},
            {	0.30000001,{"SRP_Tree_Mods\gear\consumables\data\toiletpaper_damage.rvmat"	}},
            {	0,{"SRP_Tree_Mods\gear\consumables\data\toiletpaper_destruct.rvmat"	}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

  class SRP_RollingPapers: Inventory_Base
	{
		scope=2;
		displayName="Rolling Papers";
		descriptionShort="A set of rolling papers";
		model="SRP_Tree_Mods\gear\consumables\rollingpapers.p3d";
		weight=20;
		absorbency=1;
		itemSize[]={2,1};
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
            {	1,{"SRP_Tree_Mods\gear\consumables\data\rollingpapers.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\gear\consumables\data\rollingpapers.rvmat"}},
            {	0.5,{"SRP_Tree_Mods\gear\consumables\data\rollingpapers_damage.rvmat"}},
            {	0.30000001,{"SRP_Tree_Mods\gear\consumables\data\rollingpapers_damage.rvmat"}},
            {	0,{"SRP_Tree_Mods\gear\consumables\data\rollingpapers_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet="Bandage_loop_SoundSet";
					id=201;
				};
				class Bandage_loop2
				{
					soundSet="Bandage_loop_SoundSet";
					id=202;
				};
				class Bandage_loop3
				{
					soundSet="Bandage_loop_SoundSet";
					id=203;
				};
				class Bandage_start
				{
					soundSet="Bandage_start_SoundSet";
					id=204;
				};
				class Bandage_end
				{
					soundSet="Bandage_end_SoundSet";
					id=205;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
};
