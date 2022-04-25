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
  class HuntingKnife;
  class WoodAxe;

  class SRP_KitBase;

  //============================== MODDED VANILLA
  // attachment proxy override
  class Hatchet: Inventory_Base
  {
    inventorySlot[]=
    {
      "MassTool",
			"Hatchet",
			"Hatchet1",
			"Hatchet2",
			"Hatchet3",
			"Hatchet4"
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
		descriptionShort="A bladed weapon kit - Finish with a pipe. Do not put back into the forge.";
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
      "Material_Shelter_Leather",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "Material_MetalWire",
      "Material_Shelter_Rope",    
      "Material_Shelter_Fabric"
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
					hitpoints=130;
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

  class SRP_KatanaSlim: Inventory_Base
	{
		scope=2;
		displayName="Katana";
		descriptionShort="A katana. Forged from steel.";
		model="Survivalists_Mods\weapons\melee\blade\srp_katanaslim.p3d";
		repairCosts[]={20};
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
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
					hitpoints=300;
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
		repairCosts[]={20};
		rotationFlags=12;
		weight=130;
		itemSize[]={2,7};
		itemBehaviour=2;
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
					hitpoints=300;
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
					hitpoints=300;
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
					hitpoints=300;
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
          hitpoints=300;
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

  class SRP_Staff_UnCutGem: Inventory_Base
  {
		scope=2;
		displayName="Improvised Staff";
		descriptionShort="A wooden stick with an uncut gemstone on the head. Your crude construction has damaged the stone somewhat.";
		model="Survivalists_Mods\weapons\melee\blade\srp_staffuncutgem.p3d";		
    physLayer="item_large";    
		weight=500;
		itemSize[]={2,6};
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
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
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
					hitpoints=250;
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
					hitpoints=130;
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
					hitpoints=150;
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
					hitpoints=150;
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

};