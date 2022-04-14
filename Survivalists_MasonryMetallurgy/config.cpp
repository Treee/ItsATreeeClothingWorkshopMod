class CfgMods
{
	class Survivalists_MasonryMetallurgy
	{
		type = "mod";
		author = "ItsATreee";
		name = "Survivalists_MasonryMetallurgy";
		dir = "Survivalists_MasonryMetallurgy";
    dependencies[]={"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value="";
        files[]={"Survivalists_MasonryMetallurgy/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value="";
        files[]={"Survivalists_MasonryMetallurgy/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]={"Survivalists_MasonryMetallurgy/scripts/5_mission"};
			};
		};
	};
};
class CfgPatches
{
  class Survivalists_MasonryMetallurgy
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Scripts"    
    };
  };
};
class CfgVehicles
{
  class Inventory_Base;
  
  class SRP_MasonryMetallurgy_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Masonry & Metallurgy Kit";
		descriptionShort="A wooden box that holds various items.";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={7,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_MasonryMetallurgy\gear\containers\data\wooden_case_masonrymetallurgy_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

};
