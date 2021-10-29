class CfgPatches
{
	class Survivalists_Mods_Weapons_Melee_Blade
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee",
      "DZ_Weapons_Melee_Blade",
      "DZ_Weapons_Melee_Blunt",
      "Survivalists_Mods"
		};
	};
};

class CfgAmmo
{
  class MeleeMachete;
  class MeleeKnife;
  class MeleeKnife_Heavy;

	class MeleeKatana: MeleeMachete
	{
		affectSkeleton=0.2;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=15;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeKatana_Heavy: MeleeMachete
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeBritva: MeleeKnife
	{
		affectSkeleton=0.2;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=400;
			};
			class Shock
			{
				damage=25;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
	class MeleeBritva_Heavy: MeleeKnife_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=95;
			};
			class Blood
			{
				damage=600;
			};
			class Shock
			{
				damage=40;
			};
			additionAnimalMeleeMultiplier=3;
		};
	};
};

class CfgVehicles
{
  class Inventory_Base;
  class SRP_Trenchknife: Inventory_Base
  {
		scope=2;
		displayName="Trenchknife";
		descriptionShort="A knife with a blade and brass knuckless";
		model="Survivalists_Mods\weapons\melee\blade\trenchknife.p3d";
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
		lootCategory="Tools";
		openItemSpillRange[]={10,20};
    isMeleeWeapon=1;
		suicideAnim="onehanded";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_Mods\weapons\melee\blade\data\trenchknife_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\melee\blade\data\trenchknife.rvmat"
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
						{1,{"Survivalists_Mods\weapons\melee\blade\data\trenchknife.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\trenchknife.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\trenchknife_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\trenchknife_damage.rvmat"}},
            {0,{"Survivalists_Mods\weapons\melee\blade\data\trenchknife_destruct.rvmat"}}
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

  class SRP_KarambitKnife: Inventory_Base
  {
		scope=2;
		displayName="KarambitKnife";
		descriptionShort="A knife with a curved blade.";
		model="Survivalists_Mods\weapons\melee\blade\karambitknife.p3d";
    inventorySlot[]=
		{
			"Knife"
		};
    rotationFlags=17;
    repairableWithKits[]={4};
		repairCosts[]={10};
		RestrainUnlockType=1;
		canSkinBodies=1;
		weight=200;
    varTemperatureMax=100;
    itemSize[]={1,3};
		lootCategory="Tools";
		openItemSpillRange[]={10,20};
    isMeleeWeapon=1;
		suicideAnim="onehanded";
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_Mods\weapons\melee\blade\data\karambitknife_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\melee\blade\data\karambitknife.rvmat"
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
						{1,{"Survivalists_Mods\weapons\melee\blade\data\karambitknife.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\karambitknife.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\karambitknife_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\karambitknife_damage.rvmat"}},
            {0,{"Survivalists_Mods\weapons\melee\blade\data\karambitknife_destruct.rvmat"}}
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

  class SRP_KarambitKnife_Red: SRP_KarambitKnife
  {
		scope=2;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_Mods\weapons\melee\blade\data\karambitknife_red_co.paa"
		};
  };

  class SRP_KarambitKnife_Blue: SRP_KarambitKnife
  {
		scope=2;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= {
      "Survivalists_Mods\weapons\melee\blade\data\karambitknife_blue_co.paa"
		};
  };

  class SRP_KatanaBamboo: Inventory_Base
	{
		scope=2;
		displayName="Bamboo Katana";
		descriptionShort="A bamboo katana. Used mostly for training.";
		model="Survivalists_Mods\weapons\melee\blade\katanabamboo.p3d";
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
			"Survivalists_Mods\weapons\melee\blade\data\katanaandbamboosword_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\katanaabamboo.rvmat"
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
            {1,{"Survivalists_Mods\weapons\melee\blade\data\katanaabamboo.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\katanaabamboo.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\katanaabamboo_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\katanaabamboo_damage.rvmat"}},
            {0,{"Survivalists_Mods\weapons\melee\blade\data\katanaabamboo_destruct.rvmat"}}
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

  class SRP_Staff_UnCutGem: Inventory_Base
  {
		scope=2;
		displayName="Improvised Staff";
		descriptionShort="A wooden stick with an uncut gemstone on the head. Your crude construction has damaged the stone somewhat.";
		model="Survivalists_Mods\weapons\melee\blade\srp_staffuncutgem.p3d";		
    physLayer="item_large";
    color="base";
		weight=500;
		itemSize[]={2,6};
  };
};