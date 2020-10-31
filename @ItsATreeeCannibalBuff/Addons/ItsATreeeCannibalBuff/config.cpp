// class CfgPatches
// {
// 	class ItsATreeeCannibalBuff
// 	{
// 		units[] = {};
// 		weapons[] = {};
// 		requiredVersion = 0.1;
// 		requiredAddons[] = {
//       "JM_CF_Scripts",
//       "DZ_Data",
//       "DZ_Gear_Food"
//     };
// 		author = "ItsATreee";
// 		name = "ItsATreeeCannibalBuff";
// 		url = "https://github.com/Treee/ItsATreeeDayZWorkshopMods/tree/master/TestScript";
// 	};
// };

// class CfgMods
// {
// 	class ItsATreeeCannibalBuff
// 	{	
// 		type = "mod";
// 		class defs
// 		{
// 			class worldScriptModule
// 			{
// 				value = "";
// 				files[] = {"ItsATreeeCannibalBuff/scripts/4_world"};
// 			};
//       class missionScriptModule
// 			{
// 				value = "";
// 				files[] = {"ItsATreeeCannibalBuff/scripts/5_mission"};
// 			};
// 		}
// 	};
// };

// class BaseFoodStageTransitions;
// class FoodAnimationSources;
// class MeatStageTransitions;
// class NutritionModifiers;

// class CfgVehicles
// {
// 	class Edible_Base;

//   class ItsATreee_HumanSteakMeat: Edible_Base
// 	{
// 		scope=2;
// 		displayName="Raw Meat";
// 		descriptionShort="Looks and smells of raw meat.";
// 		model="\dz\gear\food\meat_steak.p3d";
// 		weight=0;
// 		interactionWeight=1;
// 		quantityBar=1;
// 		absorbency=0.30000001;
// 		itemSize[]={1,2};
// 		varQuantityInit=150;
// 		varQuantityMin=0;
// 		varQuantityMax=150;
// 		inventorySlot[]=
// 		{
// 			"Ingredient",
// 			"DirectCookingA",
// 			"DirectCookingB",
// 			"DirectCookingC"
// 		};
// 		isMeleeWeapon=1;
// 		class MeleeModes
// 		{
// 			class Default
// 			{
// 				ammo="MeleeFist";
// 				range=1;
// 			};
// 			class Heavy
// 			{
// 				ammo="MeleeFist_Heavy";
// 				range=1;
// 			};
// 			class Sprint
// 			{
// 				ammo="MeleeFist_Heavy";
// 				range=2.8;
// 			};
// 		};
// 		hiddenSelections[]=
// 		{
// 			"cs_raw"
// 		};
// 		hiddenSelectionsTextures[]=
// 		{
// 			"dz\gear\food\data\meat_steak_raw_co.paa",
// 			"dz\gear\food\data\meat_steak_baked_co.paa",
// 			"dz\gear\food\data\meat_steak_baked_co.paa",
// 			"dz\gear\food\data\meat_steak_dried_co.paa",
// 			"dz\gear\food\data\meat_steak_burned_co.paa"
// 		};
//     hiddenSelectionsMaterials[]=
// 		{
// 			"dz\gear\food\data\meat_steak_raw.rvmat",
// 			"dz\gear\food\data\meat_steak_baked.rvmat",
// 			"dz\gear\food\data\meat_steak_boiled.rvmat",
// 			"dz\gear\food\data\meat_steak_dried.rvmat",
// 			"dz\gear\food\data\meat_steak_burnt.rvmat",
// 			"dz\gear\food\data\meat_steak_rotten.rvmat"
// 		};
// 		class DamageSystem
// 		{
// 			class GlobalHealth
// 			{
// 				class Health
// 				{
// 					hitpoints=50;
// 					healthLevels[]=
// 					{						
// 						{ 1, {} },	
// 						{	0.69999999, {}},
// 						{ 0.5, {}	},
// 						{	0.30000001,	{} },	
// 						{	0,{} }
// 					};
// 				};
// 			};
// 		};
// 		class AnimationSources: FoodAnimationSources
// 		{
// 		};
// 		class Food
// 		{
// 			class FoodStages
// 			{
// 				class Raw
// 				{
// 					visual_properties[]={0,0,0};
// 					nutrition_properties[]={2.5,130,70,1,0,4};
// 					cooking_properties[]={0,0};
// 				};
// 				class Rotten
// 				{
// 					visual_properties[]={-1,-1,5};
// 					nutrition_properties[]=
// 					{	2, 97.5, 35, 1,	0, "4 + 16" };
// 					cooking_properties[]={0,0};
// 				};
// 				class Baked
// 				{
// 					visual_properties[]={0,1,1};
// 					nutrition_properties[]={1.75,227.5,52.5,1,0};
// 					cooking_properties[]={70,45};
// 				};
// 				class Boiled
// 				{
// 					visual_properties[]={0,2,2};
// 					nutrition_properties[]={1.5,162.5,70,1,0};
// 					cooking_properties[]={70,55};
// 				};
// 				class Dried
// 				{
// 					visual_properties[]={0,3,3};
// 					nutrition_properties[]={0.75,130,7,1,0};
// 					cooking_properties[]={70,45,80};
// 				};
// 				class Burned
// 				{
// 					visual_properties[]={0,4,4};
// 					nutrition_properties[]={2,97.5,17.5,1,0,16};
// 					cooking_properties[]={100,30};
// 				};
// 			};
// 			class FoodStageTransitions: MeatStageTransitions
// 			{
// 			};
// 		};
// 		class NoiseImpact
// 		{
// 			strength=600;
// 			type="sound";
// 		};
// 		class AnimEvents
// 		{
// 			class SoundWeapon
// 			{
// 				class openTunaCan
// 				{
// 					soundSet="openTunaCan_SoundSet";
// 					id=204;
// 				};
// 				class Eating_TakeFood
// 				{
// 					soundSet="Eating_TakeFood_Soundset";
// 					id=889;
// 				};
// 				class Eating_BoxOpen
// 				{
// 					soundSet="Eating_BoxOpen_Soundset";
// 					id=893;
// 				};
// 				class Eating_BoxShake
// 				{
// 					soundSet="Eating_BoxShake_Soundset";
// 					id=894;
// 				};
// 				class Eating_BoxEnd
// 				{
// 					soundSet="Eating_BoxEnd_Soundset";
// 					id=895;
// 				};
// 			};
// 		};
// 	};
// };
