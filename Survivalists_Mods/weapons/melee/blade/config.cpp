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
      "Survivalists_Weapons"
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
  class HuntingKnife;
  class WoodAxe;
  class Cleaver;

  class SRP_KitBase;

  //============================== MODDED VANILLA
  // attachment proxy override
  class Hatchet: Inventory_Base
  {
    inventorySlot[]+=
    {      
			"Hatchet",
      "SRP_ToolKit_Hatchet"
    };
  };
  //============================== CUSTOM STUFF

  class SRP_WeaponBladeKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Blade";
		descriptionShort="A Weapon Kit - Still needs a bit of work";
	};

  class SRP_WeaponBladeKarambitKnife_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Karambit Knife";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};
  class SRP_WeaponBladeSnakeDagger_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Snake Dagger";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};
  class SRP_WeaponBladeKnifeOld_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Forged Knife";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};
  class SRP_WeaponBladeBerserkSword_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Berserk Sword";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"  
		};
	};
  class SRP_WeaponBladeAerondightSword_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Aerondight Sword";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"  
		};
	};
  class SRP_WeaponBladeCrystalMace_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Crystal Mace";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"
		};
	};
  class SRP_WeaponBladeKatana_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Katana";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope",    
      "Material_Shelter_Fabric"
		};
	};
  class SRP_WeaponBladeWarCleaver_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - War Cleaver";
		descriptionShort="A bladed weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",  
      "Material_Shelter_Fabric"
		};
	};
  class SRP_WeaponBladePipeAxe_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Pipe Axe";
		descriptionShort="A bladed weapon kit - Finish with an axe. Do not put back into the forge.";
    attachments[]={};
	};
  class SRP_WeaponBladeCelticAxe_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Celtic Axe";
		descriptionShort="A bladed weapon kit - Finish with some leather and other materials. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope",    
      "Material_Shelter_Fabric",
      "Material_Shelter_Leather",
		};
	};

  class SRP_Trenchknife: HuntingKnife
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

  class SRP_SnakeDagger: HuntingKnife
  {
		scope=2;
		displayName="Snake Dagger";
		descriptionShort="An ornate dagger.";
		model="Survivalists_Mods\weapons\melee\blade\srp_snakedagger.p3d";
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
      "Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger.rvmat"
		};  
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger_destruct.rvmat"}}
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

  class SRP_SnakeDagger_Arbiters: SRP_SnakeDagger
  {
		scope=2;
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_snakedagger_arbiters_co.paa"
		};
  };

  class SRP_KnifeOld: HuntingKnife
  {
		scope=2;
		displayName="Forged Knife";
		descriptionShort="An forged dagger. Very crude.";
		model="Survivalists_Mods\weapons\melee\blade\srp_knifeold.p3d";
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
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_knifeold_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_knifeold.rvmat"
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
						{1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_knifeold.rvmat"}}
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
		repairCosts[]={25};
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
					hitpoints=300;
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
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
		itemBehaviour=2;
    repairableWithKits[]={5,8};
		repairCosts[]={25,25};
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

  class SRP_KatanaSlim: Inventory_Base
	{
		scope=2;
		displayName="Katana";
		descriptionShort="A katana. Forged from steel.";
		model="Survivalists_Mods\weapons\melee\blade\srp_katanaslim.p3d";
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
    repairableWithKits[]={4};
		repairCosts[]={50};
		itemBehaviour=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
      "SRP_Katana"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_destruct.rvmat"}}
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

  class SRP_KatanaSlim_Sheath: Inventory_Base
	{
		scope=2;
		displayName="Katana Sheath";
		descriptionShort="A katana sheath. Holds a katana.";
		model="Survivalists_Mods\weapons\melee\blade\srp_katanaslim_sheath.p3d";
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
		itemBehaviour=2;
    repairableWithKits[]={5,8};
		repairCosts[]={50,25};

    attachments[]=
    {
      "SRP_Katana"
    };
		inventorySlot[]=
		{
      "SRP_KatanaSheath"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
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

  class SRP_KatanaSlim_Luci: SRP_KatanaSlim
  {
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_KatanaSlim_Sheath_Luci: SRP_KatanaSlim_Sheath
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_KatanaSlim_Sheath_Fred: SRP_KatanaSlim_Sheath
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_fred_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim.rvmat"
		};
	};

  class SRP_KatanaSlim_Ding: SRP_KatanaSlim
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_ding_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"
    };
    class DamageSystem
    {
      class GlobalHealth
      {
        class Health
        {
          hitpoints=600;
          healthLevels[]=
          {
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}            
          };
        };
      };
    };
  };

  class SRP_KatanaSlim_Railen: SRP_KatanaSlim
  {
    scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_railen_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_KatanaSlim_Sheath_Railen: SRP_KatanaSlim_Sheath
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_railen_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=600;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_BerserkSword: Inventory_Base
	{
		scope=2;
		displayName="Antique Replica Berserk Sword";
		descriptionShort="That thing was too big to be called a sword. Too big, too thick, too heavy, and too rough, it was more like a large hunk of iron.";
		model="\Survivalists_Mods\weapons\melee\blade\srp_berserksword.p3d";
		rotationFlags=16;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
    repairableWithKits[]={4};
		repairCosts[]={50};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_berserksword.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_berserksword.rvmat"}},
						{0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_berserksword_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_berserksword_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_berserksword_destruct.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  class SRP_WitcherSword_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Antique Replica Witcher Sword";
		descriptionShort="A trusty sword that is known to slay monsters of the most terrible kind.";
		model="\Survivalists_Mods\weapons\melee\blade\srp_witchersword.p3d";
		rotationFlags=16;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
    repairableWithKits[]={4};
		repairCosts[]={50};
		isMeleeWeapon=1;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_witchersword_co.paa"
    };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_witchersword.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_witchersword.rvmat"}},
						{0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_witchersword_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_witchersword_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_witchersword_destruct.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  
  class SRP_WitcherSword_Basic: SRP_WitcherSword_ColorBase
	{
    scope=2;
		displayName="Aerondight Replica";
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_witchersword_co.paa"
    };
  };
  class SRP_CrystalMace: Inventory_Base
	{
		scope=2;
		displayName="Antique Mace";
		descriptionShort="An antique mace found somewhere on the island.";
		model="\Survivalists_Mods\weapons\melee\blade\srp_crystalmace.p3d";
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
    repairableWithKits[]={4};
		repairCosts[]={50};
		isMeleeWeapon=1;
    hiddenSelections[]=
		{
			"zbytek",
      "glass"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle_co.paa",
      "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle.rvmat",
      "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle.rvmat", "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle.rvmat", "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass.rvmat"}},
						{0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle_damage.rvmat", "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle_damage.rvmat", "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_macehandle_destruct.rvmat", "Survivalists_Mods\weapons\melee\blade\data\srp_maceglass_destruct.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_WarCleaver: Inventory_Base
  {
		scope=2;
		displayName="War Cleaver";
		descriptionShort="A knife with a curved blade.";
		model="Survivalists_Mods\weapons\melee\blade\srp_warcleaver.p3d";
    inventorySlot[]=
		{
			"Knife"
		};
    rotationFlags=17;
    repairableWithKits[]={4};
		repairCosts[]={20};
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
      "Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver.rvmat"
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
					hitpoints=500;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						{1,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
            {0,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_destruct.rvmat"}}
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

  class SRP_BeanBasher: Inventory_Base
	{
		scope=2;
		displayName="Bean Basher";
		descriptionShort="A creative way to feed someone beans.";
		model="Survivalists_Mods\weapons\melee\blade\srp_beanbasher.p3d";
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
    repairableWithKits[]={5};
		repairCosts[]={30};
		isMeleeWeapon=1;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher.rvmat"}},
						{0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher_damage.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_beanbasher_destruct.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  
	class SRP_Viking_Axe: WoodAxe
	{
		scope=2;
		displayName="Old Viking Axe";
		descriptionShort="An old norse axe from a time long forgotten.";
		model="Survivalists_Mods\weapons\melee\blade\srp_viking_Axe.p3d";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		rotationFlags=12;
		autoQuickbar=1;
		weight=1550;
		itemSize[]={2,7};
		itemBehaviour=2;
		fragility=0.01;
		inventorySlot="Melee";
		lootCategory="Tools";
		openItemSpillRange[]={20,40};
		itemInfo[]=
		{
			"Axe"
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\SRP_Viking_Battle_Axe_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{						
						{1.0,{"Survivalists_Mods\weapons\melee\blade\data\SRP_Viking_Axe.rvmat"}},
            {0.7,{"Survivalists_Mods\weapons\melee\blade\data\SRP_Viking_Axe.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\SRP_Viking_Axe_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\weapons\melee\blade\data\SRP_Viking_Axe_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\SRP_Viking_Axe_destruct.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_GreatBattleAxe: WoodAxe
	{
		scope=2;
		displayName="Battle Axe";
		descriptionShort="A large axe needed to be wielded by a large man.";
		model="Survivalists_Mods\weapons\melee\blade\srp_greatbattleaxe.p3d";
		repairableWithKits[]={5,4};
		repairCosts[]={30,25};
		rotationFlags=12;
		autoQuickbar=1;
		weight=1550;
		itemSize[]={2,7};
		itemBehaviour=2;
		fragility=0.01;
		inventorySlot="Melee";
		lootCategory="Tools";
		openItemSpillRange[]={20,40};
		itemInfo[]=
		{
			"Axe"
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		hiddenSelections[]=
		{
			"zbytek",
      "wraps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_co.paa",
			"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_wraps_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe.rvmat"}},
            {0.7,{"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_destruct.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class SRP_GreatBattleAxe_Phantom: SRP_GreatBattleAxe
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek",
      "wraps"
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_phantom_co.paa",
			"Survivalists_Mods\weapons\melee\blade\data\srp_greatbattleaxe_wraps_phantom_co.paa",      
		};
	};

  class SRP_MasterSword_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Replica Master Sword";
		descriptionShort="The master sword held by only the worthy. A wooden replica.";
		model="Survivalists_Mods\weapons\melee\blade\srp_mastersword.p3d";
		debug_ItemCategory=2;
		rotationFlags=20;
		weight=4400;
		itemSize[]={2,7};
		fragility=0.001;
		itemBehaviour=1;
		openItemSpillRange[]={20,50};
    repairableWithKits[]={5};
		repairCosts[]={50};
		suicideAnim="woodaxe";
		isMeleeWeapon=1;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
      "SRP_MasterSword"
		};
    hiddenSelections[]=
		{
			"blade",
      "hiltdeco",
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade_co.paa",
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco_co.paa",      
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard_co.paa",      
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco_co.paa",      
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{
							1.0,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
							}
						},
						{
							0.69999999,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
							}
						},
						{
							0.5,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
							}
						},
						{
							0.30000001,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
							}
						},
						{
							0.0,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeCrowbar";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeCrowbar_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeCrowbar_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="crowbar_drop_SoundSet";
					id=898;
				};
				class Crowbar_loop
				{
					soundSet="Crowbar_loop_SoundSet";
					id=1119;
				};
				class Crowbar_end
				{
					soundSet="Crowbar_end_SoundSet";
					id=1120;
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

  class SRP_MasterSword_Sheath_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Replica Master Sword Sheath";
		descriptionShort="Holds the master sword. A wooden replica.";
		model="Survivalists_Mods\weapons\melee\blade\srp_mastersword_sheath.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=4400;
		itemSize[]={2,7};
		fragility=0.001;
		itemBehaviour=1;
		openItemSpillRange[]={20,50};
    repairableWithKits[]={5,8};
		repairCosts[]={50,25};
		suicideAnim="woodaxe";
		isMeleeWeapon=1;
    attachments[]=
    {
      "SRP_MasterSword"
    };
		inventorySlot[]=
		{
      "SRP_MasterSwordSheath"
		};
    hiddenSelections[]=
		{
      "scabard",
      "scabarddeco",
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard_co.paa",      
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco_co.paa",      
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{
							1.0,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
							}
						},
						{
							0.69999999,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
							}
						},
						{
							0.5,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
							}
						},
						{
							0.30000001,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
							}
						},
						{
							0.0,
								{
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard.rvmat",
								"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeCrowbar";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeCrowbar_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeCrowbar_Heavy";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="crowbar_drop_SoundSet";
					id=898;
				};
				class Crowbar_loop
				{
					soundSet="Crowbar_loop_SoundSet";
					id=1119;
				};
				class Crowbar_end
				{
					soundSet="Crowbar_end_SoundSet";
					id=1120;
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

  class SRP_MasterSword_Basic: SRP_MasterSword_ColorBase
	{
		scope=2;
		displayName="Replica Master Sword";
		descriptionShort="The master sword held by only the worthy. A wooden replica.";
    hiddenSelections[]=
		{
			"blade",
      "hiltdeco",
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_blade_co.paa",
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_hiltdeco_co.paa",      
		};
	};

  class SRP_MasterSword_Sheath_Basic: SRP_MasterSword_Sheath_ColorBase
	{
		scope=2;
		displayName="Replica Master Sword Sheath";
		descriptionShort="Holds the master sword. A wooden replica.";
    hiddenSelections[]=
		{
      "scabard",
      "scabarddeco",
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabard_co.paa",      
			"Survivalists_Mods\weapons\melee\blade\data\srp_mastersword_scabarddeco_co.paa",      
		};
	};

  class SRP_FireyGreatsword_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Firey Greatsword";
		descriptionShort="A bladed weapon kit - Finish with some leather and other materials. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope",    
      "Material_Shelter_Fabric"
		};
	};

  class SRP_FireyGreatsword_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Twisted Greatsword";
		descriptionShort="A wrought piece of iron twisted into a spire.";
		model="\Survivalists_Mods\weapons\melee\blade\srp_fireygreatsword.p3d";
		rotationFlags=16;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
    repairableWithKits[]={4};
		repairCosts[]={50};
		isMeleeWeapon=1;
    hiddenSelections[]=
		{
      "zbytek",
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword_co.paa",     
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword.rvmat"}},
						{0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword.rvmat"}},
						{0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword.rvmat"}},
						{0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword.rvmat"}},
						{0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword.rvmat"}}
					};
				};
			};
		};
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_FireyGreatsword_Basic: SRP_FireyGreatsword_ColorBase
	{
		scope=2;
		displayName="Twisted Greatsword";
		descriptionShort="A wrought piece of iron twisted into a spire.";
		hiddenSelections[]=
		{
      "zbytek",
		};
		hiddenselectionsTextures[]=
		{
			"Survivalists_Mods\weapons\melee\blade\data\srp_firegreatsword_co.paa",     
		};
	};

  class ttcelticaxe_ColorBase: Inventory_Base
  {
		scope=0;
		displayName="Celtic War Axe";
		descriptionShort="Espen Industries. Double edge war axe. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\melee\blade\ttcelticaxe.p3d";
    inventorySlot[]=
		{
			"Knife"
		};
    rotationFlags=17;
    repairableWithKits[]={4};
		repairCosts[]={20};
    build_action_type=10;
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
      "Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver.rvmat"
		};
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
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLabels[]={1,0.69999999,0.5,0.30000001,0};
					healthLevels[]=
					{
						{1,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver.rvmat"}},
            {0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver.rvmat"}},
            {0.5,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
            {0,{"Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_destruct.rvmat"}}
					};
				};
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
  class ttcelticaxe_Simple: ttcelticaxe_ColorBase
  {
		scope=2;
		hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]= 
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_warcleaver_co.paa"
		};		
  };

  class tnails_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Nailed Baseball Bat";
		descriptionShort="Espen Industries. Reinforced baseball bat used for nailing heads. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\melee\blade\tnails.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		RestrainUnlockType=1;
		repairableWithKits[]={4};
		repairCosts[]={12};
		inventorySlot[]={};
		rotationFlags=17;
		canSkinBodies=1;
		weight=500;
		itemSize[]={1,5};
		lootTag[]=
		{
			"Work",
			"Forester",
			"Hunting",
			"Farm"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={20,35};
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\tnails_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{						
						{1,{"Survivalists_Mods\weapons\melee\blade\data\tnails.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\tnails.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\melee\blade\data\tnails.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\tnails.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\melee\blade\data\tnails.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMachete";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeMachete_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeMachete_Heavy";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
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
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
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
			};
		};
	};
  class tnails_Simple: tnails_ColorBase
	{
		scope=2;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\tnails_co.paa"
		};
	};

  class tbladed_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Bladed Baseball Bat";
		descriptionShort="Espen Industries. Reinforced baseball bat used for slashing heads. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\melee\blade\tbladed.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		RestrainUnlockType=1;
		repairableWithKits[]={4};
		repairCosts[]={12};
		inventorySlot[]={};
		rotationFlags=17;
		canSkinBodies=1;
		weight=500;
		itemSize[]={1,5};
		lootTag[]=
		{
			"Work",
			"Forester",
			"Hunting",
			"Farm"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={20,50};
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\tbladed_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{						
						{1,{"Survivalists_Mods\weapons\melee\blade\data\tbladed.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\tbladed.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\melee\blade\data\tbladed.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\tbladed.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\melee\blade\data\tbladed.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMachete";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeMachete_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeMachete_Heavy";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
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
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
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
			};
		};
	};
  class tbladed_Simple: tbladed_ColorBase
	{
		scope=2;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\tbladed_co.paa"
		};
	};

  class tantosword_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Raider's Machete";
		descriptionShort="Espen Industries. A heavy bladed weapon intended for cutting and slashing. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\melee\blade\tantosword.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		RestrainUnlockType=1;
		repairableWithKits[]={4};
		repairCosts[]={12};
		inventorySlot[]={};
		rotationFlags=17;
		canSkinBodies=1;
		weight=500;
		itemSize[]={1,5};
		lootTag[]=
		{
			"Work",
			"Forester",
			"Hunting",
			"Farm"
		};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		openItemSpillRange[]={20,50};
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\tantosword_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{						
						{1,{"Survivalists_Mods\weapons\melee\blade\data\tantosword.rvmat"}},						
						{0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\tantosword.rvmat"}},						
						{0.5,{"Survivalists_Mods\weapons\melee\blade\data\tantosword.rvmat"}},						
						{0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\tantosword.rvmat"}},						
						{0,{"Survivalists_Mods\weapons\melee\blade\data\tantosword.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMachete";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeMachete_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeMachete_Heavy";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
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
				class CutTies_end
				{
					soundSet="CutTies_end_SoundSet";
					id=519;
				};
				class CutTies_loop
				{
					soundSet="CutTies_loop_SoundSet";
					id=520;
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
			};
		};
	};
  class tantosword_Simple: tantosword_ColorBase
	{
		scope=2;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\tantosword_co.paa"
		};
	};
  
  class PipeAxe_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Pipe Axe";
		descriptionShort="Espen Industries. A light homemade axe that is used for cutting. Inspected by Master Gunsmith: Turko";
		model="Survivalists_Mods\weapons\melee\blade\homemadeaxe.p3d";
		debug_ItemCategory=2;
		build_action_type=10;
		dismantle_action_type=74;
		repairableWithKits[]={4};
		repairCosts[]={18};
		rotationFlags=17;
		weight=1133;
		itemSize[]={2,4};
		fragility=0.0099999998;
		inventorySlot[]={};
		lootCategory="Tools";
		lootTag[]=
		{
			"Work",
			"Forester",
			"Camping"
		};
		itemInfo[]=
		{
			"Axe"
		};
		openItemSpillRange[]={20,50};
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\homemadeaxe_ca.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{					
						{1,{"Survivalists_Mods\weapons\melee\blade\data\homemadeaxe.rvmat"}},					
						{0.69999999,{"Survivalists_Mods\weapons\melee\blade\data\homemadeaxe.rvmat"}},					
						{0.5,{"Survivalists_Mods\weapons\melee\blade\data\homemadeaxe.rvmat"}},					
						{0.30000001,{"Survivalists_Mods\weapons\melee\blade\data\homemadeaxe.rvmat"}},					
						{0,{"Survivalists_Mods\weapons\melee\blade\data\homemadeaxe.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeHatchet";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeHatchet_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeHatchet_Heavy";
				range=3.3;
			};
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		soundImpactType="metal";
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
				class WoodHammer_SoundSet
				{
					soundSet="WoodHammer_SoundSet";
					id=11161;
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
  class PipeAxe_Simple: PipeAxe_ColorBase
	{
		scope=2;
    hiddenSelections[]= {"zbytek"};
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\homemadeaxe_ca.paa"
		};
	};
//================================================================== SPEARS
  class SRP_WeaponSpear_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Weapon Kit - Spear";
		descriptionShort="A spear weapon kit - Finish with the appropriate tools. Do not put back into the forge.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope"      
		};
	};

  class SRP_Spear_Pike_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Spear - Pike";
		descriptionShort="A long wooden dowl with a sharp metal pike at the end.";
		model="Survivalists_Mods\weapons\melee\blade\srp_warhammers_pike.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike_co.paa"
		};
		rotationFlags=16;
		weight=500;
		itemSize[]={1,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		suicideAnim="spear";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
    repairableWithKits[]={4};
		repairCosts[]={50};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSpear";
				range=2.2;
			};
			class Heavy
			{
				ammo="MeleeSpear_Heavy";
				range=2.8;
			};
			class Sprint
			{
				ammo="MeleeSpear_Heavy";
				range=3.7;
			};
		};
	};
  class SRP_Spear_Pike_Basic: SRP_Spear_Pike_ColorBase
  {
    scope=2;
		displayName="Spear - Pike";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pike_co.paa"
		};
  };

  class SRP_Spear_PikeHook_ColorBase: SRP_Spear_Pike_ColorBase
	{
		scope=0;
		displayName="Spear - Hook Pike";
		descriptionShort="A long wooden dowl with a sharp metal pike at the end.";
		model="Survivalists_Mods\weapons\melee\blade\srp_warhammers_pikehook.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook_co.paa"
		};
		rotationFlags=16;
		weight=500;
		itemSize[]={1,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		suicideAnim="spear";
		itemBehaviour=2;
		openItemSpillRange[]={30,60};
    repairableWithKits[]={4};
		repairCosts[]={50};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.5,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.0,	{	"Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSpear";
				range=2.2;
			};
			class Heavy
			{
				ammo="MeleeSpear_Heavy";
				range=2.8;
			};
			class Sprint
			{
				ammo="MeleeSpear_Heavy";
				range=3.7;
			};
		};
	};
  class SRP_Spear_PikeHook_Basic: SRP_Spear_PikeHook_ColorBase
  {
    scope=2;
		displayName="Spear - Hook Pike";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\weapons\melee\blade\data\srp_warhammer_pikehook_co.paa"
		};
  };

};