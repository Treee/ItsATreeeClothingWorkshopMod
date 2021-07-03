class CfgMods
{
	class Survivalists_Mods
	{
		type = "mod";
		author = "Orin | Alevaric | Sir Locksley |ItsATreee";
		name = "Survivalists_Mods";
		dir = "Survivalists_Mods";
    inputs="Survivalists_Mods\inputs\Inputs.xml";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
      // class imageSets
      // {
      //   files[]=
      //   {
      //     "Survivalists_Mods/gui/images/srp_tree_iconset.imageset"
      //   };
      // };
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_Mods/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Mods/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_Mods/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class Survivalists_Mods
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "Munghardssleepingbag", // munghards
      "MunghardsBrain",     // mung_brain
      "Mass_Textures", // MassNBC_Bag, MassRatnik
      "MSP_Scripts"    // MSP_Fridge_Base
		};
	};
};

class CfgVehicles
{
  class Container_Base;

  class SRP_KitBase: Container_Base //SRP_dec_base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Kit Box";
		descriptionShort="A wooden box used to transport small items. Find a suitable place to construct. Can be disassembled.";
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
			"Survivalists_Mods\gear\crafting\data\srp_kitbase_co.paa"
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