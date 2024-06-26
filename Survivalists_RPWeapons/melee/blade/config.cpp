class CfgPatches
{
    class Survivalists_RPWeapons_Melee_Blade
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Weapons_Melee",
            "DZ_Weapons_Melee_Blade",
            "DZ_Weapons_Melee_Blunt",
            "Canvas_Backpack", // Windstride
            "Survivalists_Weapons_JMC_Melee_Blade"
        };
    };
};

class CfgAmmo
{
    class MeleeSlash;

    class SRP_MeleeSlash_1HSword : MeleeSlash
    {
        class DamageApplied
        {
            type = "Melee";
            class Health
            {
                damage = 20;
            };
            class Blood
            {
                damage = 120;
            };
            class Shock
            {
                damage = 0;
            };
        };
    };
    class SRP_MeleeSlash_1HSwordHeavy : SRP_MeleeSlash_1HSword {};
    class SRP_MeleeSlash_2HSword : MeleeSlash
    {
        class DamageApplied
        {
            type = "Melee";
            class Health
            {
                damage = 35;
            };
            class Blood
            {
                damage = 150;
            };
            class Shock
            {
                damage = 2;
            };
        };
    };
    class SRP_MeleeSlash_2HSwordHeavy : SRP_MeleeSlash_2HSword {};
};

class CfgVehicles
{
    class Inventory_Base;
    class HuntingKnife;
    class WoodAxe;

    //============================== MODDED VANILLA
      // attachment proxy override
    class Hatchet : Inventory_Base
    {
        inventorySlot[] +=
        {
            "Hatchet",
                "SRP_ToolKit_Hatchet"
        };
    };
    class Sword : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Melee1",
                "SRP_Melee2",
                "SRP_Melee3",
                "SRP_Melee4",
                "SRP_Melee5",
                "SRP_Melee6",
                "SRP_Melee7",
                "SRP_Melee8",
                "SRP_Melee9",
                "SRP_Melee10",
        };
    };
    class Mace : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Melee1",
                "SRP_Melee2",
                "SRP_Melee3",
                "SRP_Melee4",
                "SRP_Melee5",
                "SRP_Melee6",
                "SRP_Melee7",
                "SRP_Melee8",
                "SRP_Melee9",
                "SRP_Melee10",
        };
    };
    class KukriKnife : Inventory_Base
    {
        inventorySlot[] +=
        {
            "Shoulder",
                "Melee",
                "SRP_Melee1",
                "SRP_Melee2",
                "SRP_Melee3",
                "SRP_Melee4",
                "SRP_Melee5",
                "SRP_Melee6",
                "SRP_Melee7",
                "SRP_Melee8",
                "SRP_Melee9",
                "SRP_Melee10",
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                // position[] = { 0.06,0.2,-0.2 };//FB,UD,LR
                position[] = { -0.2,0.5,0.01 };//FB,UD,LR
                // orientation[] = { 0,155,0 };//x,y,z
                orientation[] = { 0,0,45 };//x,y,z
            };
            class Melee
            {
                // position[] = { -0.2,0.55,-0.027 };
                // orientation[] = { 90,145,0 };
                position[] = { -0.2,0.5,-0.05 };//FB,UD,LR
                orientation[] = { 0,0,45 };
            };
        };
    };
    //============================== KNIVES
    class SRP_Trenchknife : HuntingKnife
    {
        scope = 2;
        displayName = "Trenchknife";
        descriptionShort = "A knife with a blade and brass knuckless";
        model = "Survivalists_RPWeapons\melee\blade\trenchknife.p3d";
        inventorySlot[] =
        {
            "Knife",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 10 };
        RestrainUnlockType = 1;
        canSkinBodies = 1;
        weight = 200;
        varTemperatureMax = 100;
        itemSize[] = { 1,3 };
        lootCategory = "Tools";
        openItemSpillRange[] = { 10,20 };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_RPWeapons\melee\blade\data\trenchknife_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "Survivalists_RPWeapons\melee\blade\data\trenchknife.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\trenchknife.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\trenchknife.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\trenchknife_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\trenchknife_damage.rvmat"}},
            {0,{"Survivalists_RPWeapons\melee\blade\data\trenchknife_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_SnakeDagger : HuntingKnife
    {
        scope = 2;
        displayName = "Snake Dagger";
        descriptionShort = "An ornate dagger.";
        model = "Survivalists_RPWeapons\melee\blade\srp_snakedagger.p3d";
        inventorySlot[] =
        {
            "Knife",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 10 };
        RestrainUnlockType = 1;
        canSkinBodies = 1;
        weight = 200;
        varTemperatureMax = 100;
        itemSize[] = { 1,3 };
        lootCategory = "Tools";
        openItemSpillRange[] = { 10,20 };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_RPWeapons\melee\blade\data\srp_snakedagger_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "Survivalists_RPWeapons\melee\blade\data\srp_snakedagger.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 250;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_snakedagger.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_snakedagger.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_snakedagger_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_snakedagger_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_snakedagger_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_SnakeDagger_Arbiters : SRP_SnakeDagger
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_snakedagger_arbiters_co.paa"
        };
    };

    class SRP_KnifeOld : HuntingKnife
    {
        scope = 2;
        displayName = "Forged Knife";
        descriptionShort = "An forged dagger. Very crude.";
        model = "Survivalists_RPWeapons\melee\blade\srp_knifeold.p3d";
        inventorySlot[] =
        {
            "Knife",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 10 };
        RestrainUnlockType = 1;
        canSkinBodies = 1;
        weight = 200;
        varTemperatureMax = 100;
        itemSize[] = { 1,3 };
        lootCategory = "Tools";
        openItemSpillRange[] = { 10,20 };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_knifeold_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_knifeold.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_knifeold.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_knifeold.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_KarambitKnife : Inventory_Base
    {
        scope = 2;
        displayName = "KarambitKnife";
        descriptionShort = "A knife with a curved blade.";
        model = "Survivalists_RPWeapons\melee\blade\karambitknife.p3d";
        inventorySlot[] =
        {
            "Knife",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        rotationFlags = 17;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 25 };
        RestrainUnlockType = 1;
        canSkinBodies = 1;
        weight = 200;
        varTemperatureMax = 100;
        itemSize[] = { 1,3 };
        lootCategory = "Tools";
        itemInfo[] =
        {
            "Knife"
        };
        openItemSpillRange[] = { 10,20 };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_RPWeapons\melee\blade\data\karambitknife_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "Survivalists_RPWeapons\melee\blade\data\karambitknife.rvmat"
        };
        class MeleeModes
        {
            class Default
            {
                action = "MeleeAttack%d";
                ammo = "MeleeLightBlunt";
                range = 1.2;
                actionSounds = "action_punch";
            };
            class Heavy
            {
                ammo = "MeleeKnife_Heavy";
                range = 1.2;
            };
            class Sprint
            {
                ammo = "MeleeKnife_Heavy";
                range = 3.3;
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\karambitknife.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\karambitknife.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\karambitknife_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\karambitknife_damage.rvmat"}},
            {0,{"Survivalists_RPWeapons\melee\blade\data\karambitknife_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_KarambitKnife_Red : SRP_KarambitKnife
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_RPWeapons\melee\blade\data\karambitknife_red_co.paa"
        };
    };

    class SRP_KarambitKnife_Blue : SRP_KarambitKnife
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_RPWeapons\melee\blade\data\karambitknife_blue_co.paa"
        };
    };


    //================================================================== MISC
    class SRP_KatanaSlim : Inventory_Base // deprecated
    {
        scope = 2;
        displayName = "Katana - Deprecated";
        descriptionShort = "A katana. Forged from steel. DEPRECATED. APPLY HAMMER TO UPGRADE";
        model = "Survivalists_RPWeapons\melee\blade\srp_katanaslim.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,7 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Katana",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { -90,35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 180,20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class tnails_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Nailed Baseball Bat";
        descriptionShort = "Espen Industries. Reinforced baseball bat used for nailing heads. Inspected by Master Gunsmith: Turko";
        model = "Survivalists_RPWeapons\melee\blade\tnails.p3d";
        debug_ItemCategory = 2;
        animClass = "Knife";
        RestrainUnlockType = 1;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 12 };
        inventorySlot[] =
        {
      "Melee",
      "Shoulder",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        rotationFlags = 17;
        canSkinBodies = 1;
        weight = 500;
        itemSize[] = { 1,5 };
        lootTag[] =
        {
            "Work",
            "Forester",
            "Hunting",
            "Farm"
        };
        lootCategory = "Tools";
        itemInfo[] =
        {
            "Knife"
        };
        openItemSpillRange[] = { 20,35 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\tnails_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\tnails.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\tnails.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\tnails.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\tnails.rvmat"}},
                        {0,{"Survivalists_RPWeapons\melee\blade\data\tnails.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeMachete";
                range = 1.4;
            };
            class Heavy
            {
                ammo = "MeleeMachete_Heavy";
                range = 1.4;
            };
            class Sprint
            {
                ammo = "MeleeMachete_Heavy";
                range = 3.3;
            };
        };
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
                class CutTies_end
                {
                    soundSet = "CutTies_end_SoundSet";
                    id = 519;
                };
                class CutTies_loop
                {
                    soundSet = "CutTies_loop_SoundSet";
                    id = 520;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class tnails_Simple : tnails_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\tnails_co.paa"
        };
    };

    class tbladed_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Bladed Baseball Bat";
        descriptionShort = "Espen Industries. Reinforced baseball bat used for slashing heads. Inspected by Master Gunsmith: Turko";
        model = "Survivalists_RPWeapons\melee\blade\tbladed.p3d";
        debug_ItemCategory = 2;
        animClass = "Knife";
        RestrainUnlockType = 1;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 12 };
        inventorySlot[] =
        {
      "Melee",
      "Shoulder",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        rotationFlags = 12;
        canSkinBodies = 1;
        weight = 500;
        itemSize[] = { 1,5 };
        lootTag[] =
        {
            "Work",
            "Forester",
            "Hunting",
            "Farm"
        };
        lootCategory = "Tools";
        itemInfo[] =
        {
            "Knife"
        };
        openItemSpillRange[] = { 20,50 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\tbladed_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\tbladed.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\tbladed.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\tbladed.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\tbladed.rvmat"}},
                        {0,{"Survivalists_RPWeapons\melee\blade\data\tbladed.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
                class CutTies_end
                {
                    soundSet = "CutTies_end_SoundSet";
                    id = 519;
                };
                class CutTies_loop
                {
                    soundSet = "CutTies_loop_SoundSet";
                    id = 520;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class tbladed_Simple : tbladed_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\tbladed_co.paa"
        };
    };
    class SRP_WarCleaver : Inventory_Base
    {
        displayName = "War Cleaver - Deprecated";
        descriptionShort = "Combine with hammer to fix in hand animation.";
    };
    class SRP_WarCleaver1 : Inventory_Base
    {
        scope = 2;
        displayName = "War Cleaver";
        descriptionShort = "A knife with a curved blade.";
        model = "Survivalists_RPWeapons\melee\blade\srp_warcleaver.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,3 };
        fragility = 0.001;
        itemBehaviour = 1;
        RestrainUnlockType = 1;
        canSkinBodies = 1;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "woodaxe";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Knife",
            "Shoulder",
            "Melee",
            "SRP_Melee1",
            "SRP_Melee2",
            "SRP_Melee3",
            "SRP_Melee4",
            "SRP_Melee5",
            "SRP_Melee6",
            "SRP_Melee7",
            "SRP_Melee8",
            "SRP_Melee9",
            "SRP_Melee10",
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_RPWeapons\melee\blade\data\srp_warcleaver.rvmat" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
                        {0,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };


    class SRP_BeanBasher : Inventory_Base
    {
        scope = 2;
        displayName = "Bean Basher";
        descriptionShort = "A creative way to feed someone beans.";
        model = "Survivalists_RPWeapons\melee\blade\srp_beanbasher.p3d";
        rotationFlags = 17;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        weight = 600;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        fragility = 0.02;
        openItemSpillRange[] = { 40,70 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 30 };
        isMeleeWeapon = 1;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_beanbasher_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_beanbasher.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 250;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_beanbasher.rvmat"}},
                        {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_beanbasher.rvmat"}},
                        {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_beanbasher_damage.rvmat"}},
                        {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_beanbasher_damage.rvmat"}},
                        {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_beanbasher_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeBlunt_1H";
                range = 2.2;
            };
            class Heavy
            {
                ammo = "SRP_MeleeBlunt_1HHeavy";
                range = 2.7;
            };
            class Sprint
            {
                ammo = "SRP_MeleeBlunt_1HHeavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    class SRP_CrystalMace : Inventory_Base
    {
        scope = 2;
        displayName = "Antique Mace";
        descriptionShort = "An antique mace found somewhere on the island.";
        model = "\Survivalists_RPWeapons\melee\blade\srp_crystalmace.p3d";
        rotationFlags = 17;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        weight = 600;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        fragility = 0.02;
        openItemSpillRange[] = { 40,70 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        isMeleeWeapon = 1;
        hiddenSelections[] =
        {
            "zbytek",
      "glass"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_macehandle_co.paa",
      "Survivalists_RPWeapons\melee\blade\data\srp_maceglass_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_macehandle.rvmat",
      "Survivalists_RPWeapons\melee\blade\data\srp_maceglass.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_macehandle.rvmat", "Survivalists_RPWeapons\melee\blade\data\srp_maceglass.rvmat"}},
                        {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_macehandle.rvmat", "Survivalists_RPWeapons\melee\blade\data\srp_maceglass.rvmat"}},
                        {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_macehandle_damage.rvmat", "Survivalists_RPWeapons\melee\blade\data\srp_maceglass_damage.rvmat"}},
                        {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_macehandle_damage.rvmat", "Survivalists_RPWeapons\melee\blade\data\srp_maceglass_damage.rvmat"}},
                        {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_macehandle_destruct.rvmat", "Survivalists_RPWeapons\melee\blade\data\srp_maceglass_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeBlunt_1H";
                range = 2.2;
            };
            class Heavy
            {
                ammo = "SRP_MeleeBlunt_1HHeavy";
                range = 2.7;
            };
            class Sprint
            {
                ammo = "SRP_MeleeBlunt_1HHeavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    class SRP_CogBat_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Geared Baseball Bat";
        descriptionShort = "Espen Industries. Reinforced baseball bat used for bashing heads.";
        model = "Survivalists_RPWeapons\melee\blade\srp_cogbat.p3d";
        debug_ItemCategory = 2;
        animClass = "Knife";
        RestrainUnlockType = 1;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 12 };
        inventorySlot[] =
        {
            "Melee",
            "Shoulder",
            "SRP_Melee1",
            "SRP_Melee2",
            "SRP_Melee3",
            "SRP_Melee4",
            "SRP_Melee5",
            "SRP_Melee6",
            "SRP_Melee7",
            "SRP_Melee8",
            "SRP_Melee9",
            "SRP_Melee10",
        };
        rotationFlags = 12;
        weight = 500;
        itemSize[] = { 1,5 };
        lootTag[] =
        {
            "Work",
            "Forester",
            "Hunting",
            "Farm"
        };
        lootCategory = "Tools";
        itemInfo[] =
        {
            "Knife"
        };
        openItemSpillRange[] = { 20,50 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_cogbat_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\srp_cogbat.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_cogbat.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_cogbat_damage.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_cogbat_damage.rvmat"}},
                        {0,{"Survivalists_RPWeapons\melee\blade\data\srp_cogbat_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
                class CutTies_end
                {
                    soundSet = "CutTies_end_SoundSet";
                    id = 519;
                };
                class CutTies_loop
                {
                    soundSet = "CutTies_loop_SoundSet";
                    id = 520;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_CogBat_Basic : SRP_CogBat_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_cogbat_co.paa" };
    };

    //================================================================== AXES
    class ttcelticaxe_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Celtic War Axe";
        descriptionShort = "Espen Industries. Double edge war axe. Inspected by Master Gunsmith: Turko";
        model = "Survivalists_RPWeapons\melee\blade\ttcelticaxe.p3d";
        inventorySlot[] =
        {
            "Knife",
      "Melee",
      "Shoulder",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        rotationFlags = 12;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 20 };
        build_action_type = 10;
        RestrainUnlockType = 1;
        canSkinBodies = 1;
        weight = 200;
        varTemperatureMax = 100;
        itemSize[] = { 1,3 };
        lootCategory = "Tools";
        openItemSpillRange[] = { 10,20 };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "Survivalists_RPWeapons\melee\blade\data\srp_warcleaver.rvmat"
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_damage.rvmat"}},
            {0,{"Survivalists_RPWeapons\melee\blade\data\srp_warcleaver_destruct.rvmat"}}
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
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class ttcelticaxe_Simple : ttcelticaxe_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\ttcelticaxe_co.paa"
        };
    };
    class SRP_Viking_Axe : WoodAxe
    {
        scope = 2;
        displayName = "Old Viking Axe";
        descriptionShort = "An old norse axe from a time long forgotten.";
        model = "Survivalists_RPWeapons\melee\blade\srp_viking_Axe.p3d";
        repairableWithKits[] = { 5,4 };
        repairCosts[] = { 30,25 };
        rotationFlags = 12;
        autoQuickbar = 1;
        weight = 1550;
        itemSize[] = { 2,7 };
        itemBehaviour = 2;
        fragility = 0.01;
        inventorySlot[] =
        {
          "Melee",
          "SRP_Melee1",
          "SRP_Melee2",
          "SRP_Melee3",
          "SRP_Melee4",
          "SRP_Melee5",
          "SRP_Melee6",
          "SRP_Melee7",
          "SRP_Melee8",
          "SRP_Melee9",
          "SRP_Melee10",
        };
        lootCategory = "Tools";
        openItemSpillRange[] = { 20,40 };
        itemInfo[] =
        {
            "Axe"
        };
        isMeleeWeapon = 1;
        suicideAnim = "woodaxe";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\SRP_Viking_Battle_Axe_CO.paa"
        };

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\SRP_Viking_Axe.rvmat"}},
            {0.7,{"Survivalists_RPWeapons\melee\blade\data\SRP_Viking_Axe.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\SRP_Viking_Axe_damage.rvmat"}},
            {0.3,{"Survivalists_RPWeapons\melee\blade\data\SRP_Viking_Axe_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\SRP_Viking_Axe_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeFireAxe";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeFireAxe_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeFireAxe_Heavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_GreatBattleAxe : WoodAxe
    {
        scope = 2;
        displayName = "Battle Axe";
        descriptionShort = "A large axe needed to be wielded by a large man.";
        model = "Survivalists_RPWeapons\melee\blade\srp_greatbattleaxe.p3d";
        repairableWithKits[] = { 5,4 };
        repairCosts[] = { 30,25 };
        rotationFlags = 12;
        autoQuickbar = 1;
        weight = 1550;
        itemSize[] = { 2,7 };
        itemBehaviour = 2;
        fragility = 0.01;
        inventorySlot[] =
        {
          "Melee",
          "Shoulder",
          "SRP_Melee1",
          "SRP_Melee2",
          "SRP_Melee3",
          "SRP_Melee4",
          "SRP_Melee5",
          "SRP_Melee6",
          "SRP_Melee7",
          "SRP_Melee8",
          "SRP_Melee9",
          "SRP_Melee10",
        };
        lootCategory = "Tools";
        openItemSpillRange[] = { 20,40 };
        itemInfo[] =
        {
            "Axe"
        };
        isMeleeWeapon = 1;
        suicideAnim = "woodaxe";
        hiddenSelections[] =
        {
            "zbytek",
      "wraps"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_wraps_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe.rvmat"}},
            {0.7,{"Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_damage.rvmat"}},
            {0.3,{"Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    class SRP_GreatBattleAxe_Phantom : SRP_GreatBattleAxe
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek",
      "wraps"
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_phantom_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_greatbattleaxe_wraps_phantom_co.paa",
        };
    };
    class PipeAxe_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Pipe Axe";
        descriptionShort = "Espen Industries. A light homemade axe that is used for cutting. Inspected by Master Gunsmith: Turko";
        model = "Survivalists_RPWeapons\melee\blade\homemadeaxe.p3d";
        debug_ItemCategory = 2;
        build_action_type = 10;
        dismantle_action_type = 74;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 18 };
        rotationFlags = 12;
        weight = 1133;
        itemSize[] = { 2,4 };
        fragility = 0.0099999998;
        inventorySlot[] =
        {
      "Melee",
      "Shoulder",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        lootCategory = "Tools";
        lootTag[] =
        {
            "Work",
            "Forester",
            "Camping"
        };
        itemInfo[] =
        {
            "Axe"
        };
        openItemSpillRange[] = { 20,50 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\homemadeaxe_ca.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 150;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\homemadeaxe.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\homemadeaxe.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\homemadeaxe.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\homemadeaxe.rvmat"}},
                        {0,{"Survivalists_RPWeapons\melee\blade\data\homemadeaxe.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "woodaxe";
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class WoodHammer_SoundSet
                {
                    soundSet = "WoodHammer_SoundSet";
                    id = 11161;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class PipeAxe_Simple : PipeAxe_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\homemadeaxe_ca.paa"
        };
    };
    class SRP_VikingHandAxe_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Viking Hand Axe";
        descriptionShort = "A forged hand axe in the Norse style.";
        model = "Survivalists_RPWeapons\melee\blade\srp_vikinghandaxe.p3d";
        debug_ItemCategory = 2;
        build_action_type = 10;
        dismantle_action_type = 74;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 18.0 };
        rotationFlags = 17;
        weight = 1000;
        itemSize[] = { 2,4 };
        fragility = 0.01;
        inventorySlot[] +=
        {
            "Hatchet",
                "SRP_ToolKit_Hatchet"
        };
        lootCategory = "Tools";
        lootTag[] = { "Work","Forester","Camping" };
        itemInfo[] = { "Axe" };
        openItemSpillRange[] = { 20,40 };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldround_co.paa",
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 150;
                    healthLevels[] = { {1.0,{"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood.rvmat"}},{0.7,{"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood.rvmat"}},{0.5,{"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood_damage.rvmat"}},{0.3,{"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood_damage.rvmat"}},{0.0,{"Survivalists_RPWeapons\melee\shield\data\srp_woodenshieldroundwood_destruct.rvmat"}} };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeSharpLight_2";
                range = 1.4;
            };
            class Heavy
            {
                ammo = "MeleeSharpHeavy_2";
                range = 1.4;
            };
            class Sprint
            {
                ammo = "MeleeSharpHeavy_2";
                range = 3.3;
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "woodaxe";
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class WoodHammer_SoundSet
                {
                    soundSet = "WoodHammer_SoundSet";
                    id = 11161;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_VikingHandAxe_Basic : SRP_VikingHandAxe_ColorBase
    {
        scope = 2;
    };
    //================================================================== 1H SWORDS
    class tantosword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Raider's Machete";
        descriptionShort = "Espen Industries. A heavy bladed weapon intended for cutting and slashing. Inspected by Master Gunsmith: Turko";
        model = "Survivalists_RPWeapons\melee\blade\tantosword.p3d";
        debug_ItemCategory = 2;
        animClass = "Knife";
        RestrainUnlockType = 1;
        repairableWithKits[] = { 4 };
        repairCosts[] = { 12 };
        inventorySlot[] =
        {
      "Melee",
      "Shoulder",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        rotationFlags = 12;
        canSkinBodies = 1;
        weight = 500;
        itemSize[] = { 1,5 };
        lootTag[] =
        {
            "Work",
            "Forester",
            "Hunting",
            "Farm"
        };
        lootCategory = "Tools";
        itemInfo[] =
        {
            "Knife"
        };
        openItemSpillRange[] = { 20,50 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\tantosword_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_RPWeapons\melee\blade\data\tantosword.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\tantosword.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\tantosword.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\tantosword.rvmat"}},
                        {0,{"Survivalists_RPWeapons\melee\blade\data\tantosword.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "onehanded";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        soundImpactType = "metal";
        class AnimEvents
        {
            class SoundWeapon
            {
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
                class CutTies_end
                {
                    soundSet = "CutTies_end_SoundSet";
                    id = 519;
                };
                class CutTies_loop
                {
                    soundSet = "CutTies_loop_SoundSet";
                    id = 520;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class tantosword_Simple : tantosword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\tantosword_co.paa"
        };
    };

    class SRP_KatanaBamboo : Inventory_Base
    {
        scope = 2;
        displayName = "Bamboo Katana";
        descriptionShort = "A bamboo katana. Used mostly for training.";
        model = "Survivalists_RPWeapons\melee\blade\katanabamboo.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 25,25 };
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\katanaandbamboosword_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\katanaabamboo.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 0,0,35 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 90,0,-20 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] =
                    {
            {1,{"Survivalists_RPWeapons\melee\blade\data\katanaabamboo.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\katanaabamboo.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\katanaabamboo_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\katanaabamboo_damage.rvmat"}},
            {0,{"Survivalists_RPWeapons\melee\blade\data\katanaabamboo_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeFireAxe";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeFireAxe_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeFireAxe_Heavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_KatanaSlim_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Katana";
        descriptionShort = "A katana. Forged from steel.";
        model = "Survivalists_RPWeapons\melee\blade\srp_katanaslim.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,7 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Katana",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { -90,35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 180,20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_KatanaSlim_Default : SRP_KatanaSlim_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_co.paa" };
        hiddenSelectionsMaterials[] = { "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat" };
    };

    class SRP_KatanaSlim_Sheath_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Katana Sheath";
        descriptionShort = "A katana sheath. Holds a katana.";
        model = "Survivalists_RPWeapons\melee\blade\srp_katanaslim_sheath.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 50,25 };
        rootClassName = "SRP_KatanaSlim_Sheath";
        colorVariants[] =
        {
          "Black",
          "White",
          "Red",
        };
        attachments[] =
        {
          "SRP_Katana",
        };
        inventorySlot[] =
        {
      "SRP_KatanaSheath",
      "Shoulder",
      "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_sheath_black_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.1,0.7,-0.027 };
                orientation[] = { 90,155,0 };
            };
            class Shoulder
            {
                position[] = { 0.05,0.25,-0.2 };//FB,UD,LR
                orientation[] = { 0,150,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeBat";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeBat_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeBat_Heavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_KatanaSlim_Sheath_Black : SRP_KatanaSlim_Sheath_ColorBase
    {
        scope = 2;
        color = "Black";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_sheath_black_co.paa"
        };
    };
    class SRP_KatanaSlim_Sheath_White : SRP_KatanaSlim_Sheath_ColorBase
    {
        scope = 2;
        color = "White";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_sheath_white_co.paa"
        };
    };
    class SRP_KatanaSlim_Sheath_Red : SRP_KatanaSlim_Sheath_ColorBase
    {
        scope = 2;
        color = "Red";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_sheath_red_co.paa"
        };
    };

    class SRP_Investor_KatanaSlim_Luci : SRP_KatanaSlim_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Investor_KatanaSlim_Sheath_Luci : SRP_KatanaSlim_Sheath_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_Investor_KatanaSlim_Sheath_Fred : SRP_KatanaSlim_Sheath_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_fred_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim.rvmat"
        };
    };

    class SRP_Investor_KatanaSlim_Ding : SRP_KatanaSlim_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_ding_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
                      {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
                      {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
                      {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
                      {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
                      {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_Investor_KatanaSlim_Railen : SRP_KatanaSlim_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_railen_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Investor_KatanaSlim_Sheath_Railen : SRP_KatanaSlim_Sheath_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_railen_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_katanaslim_luci_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_MasterSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Replica Master Sword";
        descriptionShort = "The master sword held by only the worthy. A wooden replica.";
        model = "Survivalists_RPWeapons\melee\blade\srp_mastersword.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,7 };
        fragility = 0.001;
        itemBehaviour = 1;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "woodaxe";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_MasterSword",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "blade",
      "hiltdeco",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {
                            1.0,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
                            }
                        },
                        {
                            0.69999999,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
                            }
                        },
                        {
                            0.5,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
                            }
                        },
                        {
                            0.30000001,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
                            }
                        },
                        {
                            0.0,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco.rvmat",
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
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_MasterSword_Sheath_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Replica Master Sword Sheath";
        descriptionShort = "Holds the master sword. A wooden replica.";
        model = "Survivalists_RPWeapons\melee\blade\srp_mastersword_sheath.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,7 };
        fragility = 0.001;
        itemBehaviour = 1;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 50,25 };
        suicideAnim = "woodaxe";
        isMeleeWeapon = 1;
        attachments[] =
        {
          "SRP_MasterSword",
        };
        inventorySlot[] =
        {
      "SRP_MasterSwordSheath",
      "Melee",
      "Shoulder",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
      "scabard",
      "scabarddeco",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.1,0.6,-0.027 };
                orientation[] = { 90,145,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0.2,-0.2 };//FB,UD,LR
                orientation[] = { 0,155,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {
                            1.0,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
                            }
                        },
                        {
                            0.69999999,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
                            }
                        },
                        {
                            0.5,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
                            }
                        },
                        {
                            0.30000001,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
                            }
                        },
                        {
                            0.0,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard.rvmat",
                                "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco.rvmat",
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
                ammo = "MeleeCrowbar";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeCrowbar_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeCrowbar_Heavy";
                range = 4.0999999;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };

    class SRP_MasterSword_Basic : SRP_MasterSword_ColorBase
    {
        scope = 2;
        displayName = "Replica Master Sword";
        descriptionShort = "The master sword held by only the worthy. A wooden replica.";
        hiddenSelections[] =
        {
            "blade",
      "hiltdeco",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_blade_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_hiltdeco_co.paa",
        };
    };
    class SRP_MasterSword_Sheath_Basic : SRP_MasterSword_Sheath_ColorBase
    {
        scope = 2;
        displayName = "Replica Master Sword Sheath";
        descriptionShort = "Holds the master sword. A wooden replica.";
        hiddenSelections[] =
        {
      "scabard",
      "scabarddeco",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabard_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_mastersword_scabarddeco_co.paa",
        };
    };

    class SRP_GreatRuneSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Great Rune Sword";
        descriptionShort = "A sword forged with runes etched into the sides.";
        model = "Survivalists_RPWeapons\melee\blade\srp_greatrunesword.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,5 };
        fragility = 0.001;
        itemBehaviour = 1;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "woodaxe";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_co.paa"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword.rvmat"}},
                        {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };

    class SRP_GreatRuneSword_Basic : SRP_GreatRuneSword_ColorBase
    {
        scope = 2;
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_co.paa"
        };
    };
    class SRP_GreatRuneSword_Black : SRP_GreatRuneSword_ColorBase
    {
        scope = 2;
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_black_co.paa"
        };
    };
    class SRP_GreatRuneSword_Blue : SRP_GreatRuneSword_ColorBase
    {
        scope = 2;
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_blueish_co.paa"
        };
    };
    class SRP_GreatRuneSword_Gold : SRP_GreatRuneSword_ColorBase
    {
        scope = 2;
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_gold_co.paa"
        };
    };
    class SRP_GreatRuneSword_Red : SRP_GreatRuneSword_ColorBase
    {
        scope = 2;
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_red_co.paa"
        };
    };
    class SRP_GreatRuneSword_Silver : SRP_GreatRuneSword_ColorBase
    {
        scope = 2;
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_greatrunesword_silver_co.paa"
        };
    };

    class SRP_GladiusSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Gladius";
        descriptionShort = "A forged short sword used by ancient gladiators.";
        model = "Survivalists_RPWeapons\melee\blade\srp_gladius.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_GladiusSword",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_gladius_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_gladius.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_GladiusSwordSheath_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Gladius Sheath";
        descriptionShort = "A short sword sheath. Holds a gladius.";
        model = "Survivalists_RPWeapons\melee\blade\srp_gladius_sheath.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        itemBehaviour = 2;
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 50,25 };
        attachments[] =
        {
          "SRP_GladiusSword",
        };
        inventorySlot[] =
        {
      "SRP_GladiusSwordSheath",
      "Shoulder",
      "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_gladius_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_gladius.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.2,0.55,-0.027 };
                orientation[] = { 90,145,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0.2,-0.2 };//FB,UD,LR
                orientation[] = { 0,155,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_gladius_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeBat";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeBat_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeBat_Heavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };

    class SRP_GladiusSword_Basic : SRP_GladiusSword_ColorBase
    {
        scope = 2;
    };
    class SRP_GladiusSwordSheath_Basic : SRP_GladiusSwordSheath_ColorBase
    {
        scope = 2;
    };

    class SRP_GladiusSword_Ornamental : SRP_GladiusSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_gladius_ornamental_co.paa" };
    };
    class SRP_GladiusSwordSheath_Ornamental : SRP_GladiusSwordSheath_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_gladius_ornamental_co.paa" };
    };
    class SRP_GladiusSword_Tyler : SRP_GladiusSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_gladius_tyler_co.paa" };
    };
    class SRP_GladiusSwordSheath_Tyler : SRP_GladiusSwordSheath_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_gladius_tyler_co.paa" };
    };

    class SRP_LeafSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Leaf Sword";
        descriptionShort = "A forged short sword used by ancient gardeners.";
        model = "Survivalists_RPWeapons\melee\blade\srp_leafsword.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_leafsword_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_leafsword.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_leafsword.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_leafsword.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_leafsword_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_leafsword_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_leafsword_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_LeafSword_Basic : SRP_LeafSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_leafsword_co.paa" };
    };

    class SRP_RunicSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Runic Sword";
        descriptionShort = "A forged short sword etched with runes.";
        model = "Survivalists_RPWeapons\melee\blade\srp_runicsword.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_RunicSword",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_runicsword_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_runicsword.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_RunicSword_Basic : SRP_RunicSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_runicsword_co.paa" };
    };
    class SRP_RunicSwordSheath_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Runic Sheath";
        descriptionShort = "A short sword sheath. Holds a runic sword.";
        model = "Survivalists_RPWeapons\melee\blade\srp_runicsword_sheath.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        itemBehaviour = 2;
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 50,25 };
        attachments[] =
        {
          "SRP_RunicSword",
        };
        inventorySlot[] =
        {
      "SRP_RunicSwordSheath",
      "Shoulder",
      "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_runicsword_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_runicsword.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.2,0.55,-0.027 };
                orientation[] = { 90,145,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0.2,-0.2 };//FB,UD,LR
                orientation[] = { 0,155,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_runicsword_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeBat";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeBat_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeBat_Heavy";
                range = 3.7;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_RunicSwordSheath_Basic : SRP_RunicSwordSheath_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_runicsword_co.paa" };
    };

    class SRP_TidalSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Tidal Sword";
        descriptionShort = "A delicate and finely crafted sword.";
        model = "Survivalists_RPWeapons\melee\blade\srp_tidalsword.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_tidalsword_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_tidalsword.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_tidalsword.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_tidalsword.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_tidalsword_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_tidalsword_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_tidalsword_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_TidalSword_Basic : SRP_TidalSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_tidalsword_co.paa" };
    };

    class SRP_TurkishSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Turkish Sword";
        descriptionShort = "A delicate and finely crafted sword.";
        model = "Survivalists_RPWeapons\melee\blade\srp_turkishsword.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_turkishsword_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_turkishsword.rvmat"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
            {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_turkishsword.rvmat"}},
            {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_turkishsword.rvmat"}},
            {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_turkishsword_damage.rvmat"}},
            {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_turkishsword_damage.rvmat"}},
            {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_turkishsword_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_TurkishSword_Basic : SRP_TurkishSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_RPWeapons\melee\blade\data\srp_turkishsword_co.paa" };
    };

    class SRP_DeerSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Deer Sword";
        descriptionShort = "A delicate and finely crafted sword. Ornate bones cover the hilt.";
        model = "Survivalists_RPWeapons\melee\blade\srp_deersword.p3d";
        rotationFlags = 12;
        weight = 130;
        itemSize[] = { 1,5 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        itemBehaviour = 2;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
            "SRP_Melee1",
            "SRP_Melee2",
            "SRP_Melee3",
            "SRP_Melee4",
            "SRP_Melee5",
            "SRP_Melee6",
            "SRP_Melee7",
            "SRP_Melee8",
            "SRP_Melee9",
            "SRP_Melee10",
        };
        hiddenSelections[] = { "metal","bone","leather","crystal" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,0,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 600;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_deersword_metal.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_deersword_metal.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_deersword_metal_damage.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_deersword_metal_damage.rvmat"}},
                        {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_deersword_metal_destruct.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "fireaxe";
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickup_light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "woodaxe_drop_SoundSet";
                    id = 898;
                };
                class FirefighterAxe_loop_SoundSet
                {
                    soundSet = "FirefighterAxe_loop_SoundSet";
                    id = 1121;
                };
                class FirefighterAxe_end_SoundSet
                {
                    soundSet = "FirefighterAxe_end_SoundSet";
                    id = 1122;
                };
                class ShoulderR_Hide
                {
                    soundset = "ShoulderR_Hide_SoundSet";
                    id = 1210;
                };
                class ShoulderR_Show
                {
                    soundset = "ShoulderR_Show_SoundSet";
                    id = 1211;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_DeerSword_Basic : SRP_DeerSword_ColorBase
    {
        scope = 2;
    };
    class SRP_DeerSword_AlexCow : SRP_DeerSword_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "metal","bone","leather","crystal" };
        hiddenSelectionsTextures[] = {
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_alexcow_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_alexcow_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_alexcow_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_deersword_alexcow_co.paa",
        };
    };
    //================================================================== 2H SWORDS
    class SRP_BerserkSword : Inventory_Base
    {
        scope = 2;
        displayName = "Antique Replica Berserk Sword";
        descriptionShort = "That thing was too big to be called a sword. Too big, too thick, too heavy, and too rough, it was more like a large hunk of iron.";
        model = "\Survivalists_RPWeapons\melee\blade\srp_berserksword.p3d";
        rotationFlags = 12;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        weight = 600;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        fragility = 0.02;
        openItemSpillRange[] = { 40,70 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        isMeleeWeapon = 1;
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.05,-0.2,0 };//FB,UD,LR
                orientation[] = { 0,20,0 };//x,y,z
            };
            class Melee
            {
                position[] = { 0.01,-0.2,0 };//FB,UD,LR
                orientation[] = { -0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 750;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_berserksword.rvmat"}},
                        {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_berserksword.rvmat"}},
                        {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_berserksword_damage.rvmat"}},
                        {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_berserksword_damage.rvmat"}},
                        {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_berserksword_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 3.9;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    class SRP_WitcherSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Antique Replica Witcher Sword";
        descriptionShort = "A trusty sword that is known to slay monsters of the most terrible kind.";
        model = "\Survivalists_RPWeapons\melee\blade\srp_witchersword.p3d";
        rotationFlags = 12;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        weight = 600;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        fragility = 0.02;
        openItemSpillRange[] = { 40,70 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        isMeleeWeapon = 1;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_witchersword_co.paa"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-20,0 };
            };
            class Shoulder
            {
                position[] = { 0.05,-0.15,-0.35 };//FB,UD,LR
                orientation[] = { 0,-30,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 750;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_witchersword.rvmat"}},
                        {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_witchersword.rvmat"}},
                        {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_witchersword_damage.rvmat"}},
                        {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_witchersword_damage.rvmat"}},
                        {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_witchersword_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 3.9;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_WitcherSword_Basic : SRP_WitcherSword_ColorBase
    {
        scope = 2;
        displayName = "Aerondight Replica";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_witchersword_co.paa"
        };
    };

    class SRP_LotR_SwordAnduril_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Antique Replica Lord of the Rings Sword - Anduril";
        descriptionShort = "A trusty sword that is known to slay monsters of the most terrible kind.";
        model = "\Survivalists_RPWeapons\melee\blade\srp_lotr_swordanduril.p3d";
        rotationFlags = 12;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        weight = 600;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        fragility = 0.02;
        openItemSpillRange[] = { 40,70 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        isMeleeWeapon = 1;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril_co.paa"
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-20,0 };
            };
            class Shoulder
            {
                position[] = { 0.05,-0.15,-0.35 };//FB,UD,LR
                orientation[] = { 0,-30,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 750;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril.rvmat"}},
                        {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril.rvmat"}},
                        {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril_damage.rvmat"}},
                        {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril_damage.rvmat"}},
                        {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 3.9;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_LotR_SwordAnduril_Basic : SRP_LotR_SwordAnduril_ColorBase
    {
        scope = 2;
        displayName = "Anduril Replica";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_lotr_swordanduril_co.paa"
        };
    };

    class SRP_FireyGreatsword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Twisted Greatsword";
        descriptionShort = "A wrought piece of iron twisted into a spire.";
        model = "\Survivalists_RPWeapons\melee\blade\srp_fireygreatsword.p3d";
        rotationFlags = 12;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        weight = 600;
        itemSize[] = { 1,7 };
        itemBehaviour = 2;
        fragility = 0.02;
        openItemSpillRange[] = { 40,70 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        isMeleeWeapon = 1;
        hiddenSelections[] =
        {
      "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.05,-0.25,0 };//FB,UD,LR
                orientation[] = { 0,20,0 };//x,y,z
            };
            class Melee
            {
                position[] = { 0.01,-0.25,0 };//FB,UD,LR
                orientation[] = { -0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 750;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword.rvmat"}},
                        {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword.rvmat"}},
                        {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword.rvmat"}},
                        {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword.rvmat"}},
                        {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 3.9;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUp_Light
                {
                    soundSet = "hatchet_pickup_light_SoundSet";
                    id = 796;
                };
                class pickup
                {
                    soundSet = "hatchet_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "baseballbat_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_FireyGreatsword_Basic : SRP_FireyGreatsword_ColorBase
    {
        scope = 2;
        displayName = "Twisted Greatsword";
        descriptionShort = "A wrought piece of iron twisted into a spire.";
        hiddenSelections[] =
        {
      "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_firegreatsword_co.paa",
        };
    };

    class SRP_NVWNightsSword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Replica Aribeth's Sword";
        descriptionShort = "'So as you shiver in the cold and the dark, Look into the fire and see in its spark— My eye, Watching over you.' (Excerpt from a traditional trail ballad of the Savage Frontier - composer unknown)";
        model = "Survivalists_RPWeapons\melee\blade\srp_nvwnightssword.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,7 };
        fragility = 0.001;
        itemBehaviour = 1;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "woodaxe";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_nvwnightssword_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.05,-0.2,0 };//FB,UD,LR
                orientation[] = { 0,20,0 };//x,y,z
            };
            class Melee
            {
                position[] = { 0.01,-0.2,0 };//FB,UD,LR
                orientation[] = { -0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {
                            1.0,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_nvwnightssword.rvmat"
                            }
                        },
                        {
                            0.69999999,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_nvwnightssword.rvmat"
                            }
                        },
                        {
                            0.5,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_nvwnightssword_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_nvwnightssword_damage.rvmat"
                            }
                        },
                        {
                            0.0,
                                {
                                "Survivalists_RPWeapons\melee\blade\data\srp_nvwnightssword_destruct.rvmat"
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
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_NVWNightsSword_Basic : SRP_NVWNightsSword_ColorBase
    {
        scope = 2;
    };
    class SRP_NVWNightsSword_the0nlyluci : SRP_NVWNightsSword_ColorBase
    {
        scope = 2;
    };

    class SRP_BrokenPinesClaymore_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Broken Pines Claymore";
        descriptionShort = "A replica of a large claymore.";
        model = "Survivalists_RPWeapons\melee\blade\srp_brokenpinesclaymore.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,7 };
        fragility = 0.001;
        itemBehaviour = 2;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "sword";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore_damage.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore_damage.rvmat"}},
                        {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_BrokenPinesClaymore_Basic : SRP_BrokenPinesClaymore_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_brokenpinesclaymore_co.paa",
        };
    };

    class SRP_CrossGreatsword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Cross Greatsword";
        descriptionShort = "A forged sword in the form of a cross. Encrusted with a gem.";
        model = "Survivalists_RPWeapons\melee\blade\srp_crossgreatsword.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,7 };
        fragility = 0.001;
        itemBehaviour = 2;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "sword";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_ca.paa",
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_damage.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_damage.rvmat"}},
                        {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_CrossGreatsword_Basic : SRP_CrossGreatsword_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek",
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_ca.paa",
        };
    };

    class SRP_HolyGreatsword_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Holy Greatsword";
        descriptionShort = "A forged geometric sword.";
        model = "Survivalists_RPWeapons\melee\blade\srp_holygreatsword.p3d";
        debug_ItemCategory = 2;
        rotationFlags = 12;
        weight = 4400;
        itemSize[] = { 1,7 };
        fragility = 0.001;
        itemBehaviour = 2;
        openItemSpillRange[] = { 20,50 };
        repairableWithKits[] = { 5 };
        repairCosts[] = { 50 };
        suicideAnim = "sword";
        isMeleeWeapon = 1;
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        hiddenSelections[] =
        {
      "zbytek",
            "blade",
      "handle"
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_holygreatswordbody_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_holygreatswordblade_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_holygreatswordhandle_co.paa",
        };
        class InventorySlotsOffsets
        {
            class Melee
            {
                position[] = { -0.3,0.35,-0.027 };
                orientation[] = { 90,-35,0 };
            };
            class Shoulder
            {
                position[] = { 0.06,-0.1,-0.33 };//FB,UD,LR
                orientation[] = { 0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword.rvmat"}},
                        {0.69999999,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword.rvmat"}},
                        {0.5,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_damage.rvmat"}},
                        {0.30000001,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_damage.rvmat"}},
                        {0.0,{"Survivalists_RPWeapons\melee\blade\data\srp_crossgreatsword_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_1HSword";
                range = 1.1;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 1.1;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_1HSwordHeavy";
                range = 3.3;
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class drop
                {
                    soundset = "crowbar_drop_SoundSet";
                    id = 898;
                };
                class Crowbar_loop
                {
                    soundSet = "Crowbar_loop_SoundSet";
                    id = 1119;
                };
                class Crowbar_end
                {
                    soundSet = "Crowbar_end_SoundSet";
                    id = 1120;
                };
                class animalSkinning_in
                {
                    soundSet = "animalSkinning_in_SoundSet";
                    id = 516;
                };
                class animalSkinning
                {
                    soundSet = "animalSkinning_SoundSet";
                    id = 517;
                };
                class animalSkinning_out
                {
                    soundSet = "animalSkinning_out_SoundSet";
                    id = 518;
                };
            };
        };
    };
    class SRP_HolyGreatsword_Basic : SRP_HolyGreatsword_ColorBase
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek",
      "blade",
      "handle"
        };
        hiddenselectionsTextures[] =
        {
            "Survivalists_RPWeapons\melee\blade\data\srp_holygreatswordbody_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_holygreatswordblade_co.paa",
            "Survivalists_RPWeapons\melee\blade\data\srp_holygreatswordhandle_co.paa",
        };
    };
    //================================================================== SPEARS
    class SRP_Spear_Pike_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Spear - Pike";
        descriptionShort = "A long wooden dowl with a sharp metal pike at the end.";
        model = "Survivalists_RPWeapons\melee\blade\srp_warhammers_pike.p3d";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike_co.paa"
        };
        rotationFlags = 12;
        weight = 500;
        itemSize[] = { 1,8 };
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        suicideAnim = "spear";
        itemBehaviour = 2;
        openItemSpillRange[] = { 30,60 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.05,0,0 };//FB,UD,LR
                orientation[] = { 0,20,0 };//x,y,z
            };
            class Melee
            {
                position[] = { 0.01,0,0 };//FB,UD,LR
                orientation[] = { -0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 3.9;
            };
        };
    };
    class SRP_Spear_Pike_Basic : SRP_Spear_Pike_ColorBase
    {
        scope = 2;
        displayName = "Spear - Pike";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pike_co.paa"
        };
    };

    class SRP_Spear_PikeHook_ColorBase : SRP_Spear_Pike_ColorBase
    {
        scope = 0;
        displayName = "Spear - Hook Pike";
        descriptionShort = "A long wooden dowl with a sharp metal pike at the end.";
        model = "Survivalists_RPWeapons\melee\blade\srp_warhammers_pikehook.p3d";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook_co.paa"
        };
        rotationFlags = 12;
        weight = 500;
        itemSize[] = { 1,8 };
        inventorySlot[] =
        {
            "Shoulder",
            "Melee",
      "SRP_Melee1",
      "SRP_Melee2",
      "SRP_Melee3",
      "SRP_Melee4",
      "SRP_Melee5",
      "SRP_Melee6",
      "SRP_Melee7",
      "SRP_Melee8",
      "SRP_Melee9",
      "SRP_Melee10",
        };
        suicideAnim = "spear";
        itemBehaviour = 2;
        openItemSpillRange[] = { 30,60 };
        repairableWithKits[] = { 4 };
        repairCosts[] = { 50 };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[] = { 0.05,0,0 };//FB,UD,LR
                orientation[] = { 0,20,0 };//x,y,z
            };
            class Melee
            {
                position[] = { 0.01,0,0 };//FB,UD,LR
                orientation[] = { -0,-20,0 };//x,y,z
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 500;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.69999999,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.5,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.30000001,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}},
            {0.0,	{	"Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "SRP_MeleeSlash_2HSword";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "SRP_MeleeSlash_2HSwordHeavy";
                range = 3.9;
            };
        };
    };
    class SRP_Spear_PikeHook_Basic : SRP_Spear_PikeHook_ColorBase
    {
        scope = 2;
        displayName = "Spear - Hook Pike";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_RPWeapons\melee\blade\data\srp_warhammer_pikehook_co.paa"
        };
    };

};