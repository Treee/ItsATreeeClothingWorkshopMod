class CfgPatches
{
	class SRP_Tree_Weapons_Melee
	{
    units[] = {
      "SRP_Trenchknife"
    };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Characters"};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SRP_Trenchknife : Inventory_Base
  {
		scope=2;
		displayName="Trenchknife";
		descriptionShort="A knife with a blade and brass knuckless";
		model="SRP_Tree_Mods\weapons\melee\trenchknife.p3d";
    inventorySlot[]=
		{
			"Knife"
		};
    repairableWithKits[]={4};
		repairCosts[]={10};
		RestrainUnlockType=1;
		canSkinBodies=1;
		weight=200;
    varTemperatureMax=100;
    itemSize[]={1,3};
    lootTag[]=
		{
			"Hunting",
			"Camping"
		};
		lootCategory="Tools";
		openItemSpillRange[]={10,20};
    isMeleeWeapon=1;
		suicideAnim="onehanded";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "SRP_Tree_Mods\weapons\data\trenchknife_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"SRP_Tree_Mods\weapons\data\trenchknife.rvmat"
		};
		class MeleeModes
		{
			class Default
			{
        action="MeleeAttack%d";
        ammo="MeleeLightBlunt";
        range=1.2;
        actionSounds="action_punch";
			};
			class Heavy
			{
				ammo="MeleeKnife_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeKnife_Heavy";
				range=3.3;
			};
		};    
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						{1,{"SRP_Tree_Mods\weapons\data\trenchknife.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\weapons\data\trenchknife.rvmat"}},
            {0.5,{"SRP_Tree_Mods\weapons\data\trenchknife_damage.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\weapons\data\trenchknife_damage.rvmat"}},
            {0,{"SRP_Tree_Mods\weapons\data\trenchknife_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
  };

  class SRP_KatanaFormal: Inventory_Base
	{
		scope=2;
		displayName="Katana";
		descriptionShort="A well kept katana. Most likely taken from a museum";
		model="SRP_Tree_Mods\weapons\melee\katanaformal.p3d";
		repairableWithKits[]={4};
		repairCosts[]={20};
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
		itemBehaviour=2;
		fragility=0.0099999998;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		lootCategory="Tools";
		dismantle_action_type=74;
		openItemSpillRange[]={20,40};
		itemInfo[]=
		{
			"Axe"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\weapons\data\katanaandbambooword_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"SRP_Tree_Mods\weapons\data\katanaaformal.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
            {1,{"SRP_Tree_Mods\weapons\data\katanaaformal.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\weapons\data\katanaaformal.rvmat"}},
            {0.5,{"SRP_Tree_Mods\weapons\data\katanaaformal_damage.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\weapons\data\katanaaformal_damage.rvmat"}},
            {0,{"SRP_Tree_Mods\weapons\data\katanaaformal_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="fireaxe";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFireAxe";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeFireAxe_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeFireAxe_Heavy";
				range=3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};

  class SRP_KatanaBamboo: Inventory_Base
	{
		scope=2;
		displayName="Bamboo Katana";
		descriptionShort="A bamboo katana. Used mostly for training.";
		model="SRP_Tree_Mods\weapons\melee\katanabamboo.p3d";
		repairCosts[]={20};
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
		itemBehaviour=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"SRP_Tree_Mods\weapons\data\katanaandbambooword_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"SRP_Tree_Mods\weapons\data\katanaabamboo.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
            {1,{"SRP_Tree_Mods\weapons\data\katanaabamboo.rvmat"}},
            {0.69999999,{"SRP_Tree_Mods\weapons\data\katanaabamboo.rvmat"}},
            {0.5,{"SRP_Tree_Mods\weapons\data\katanaabamboo_damage.rvmat"}},
            {0.30000001,{"SRP_Tree_Mods\weapons\data\katanaabamboo_damage.rvmat"}},
            {0,{"SRP_Tree_Mods\weapons\data\katanaabamboo_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="fireaxe";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFireAxe";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeFireAxe_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeFireAxe_Heavy";
				range=3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet="FirefighterAxe_loop_SoundSet";
					id=1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet="FirefighterAxe_end_SoundSet";
					id=1122;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
		};
	};

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