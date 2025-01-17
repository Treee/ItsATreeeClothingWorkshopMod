class CfgPatches
{
    class Survivalists_Mods_Gear_Consumables
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Gear_Consumables",
            "Dressupbox_Retextures_Humanpelt",
            "Dressupbox_Retextures_Cowboyboots",
            "Dressupbox_Retextures_AlphaPelt",
            "Dressupbox_Items",
            "Dressupbox",
            "Survivalists_Mods",
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class Paper;
    class Box_Base;
    class Firewood;
    class Bark_Oak;
    class Bark_Birch;
    class Stone;

    //--------------------------------------------- BASE GAME OVERRIDES
    class Spraycan_ColorBase : Inventory_Base
    {
        itemSize[] = { 1,2 };
    };
    class Battery9V : Inventory_Base
    {
        varQuantityInit = 200;
        varQuantityMax = 200;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\9v_espen_co.paa"
        };
        class EnergyManager
        {
            energyStorageMax = 200;
            energyAtSpawn = 200;
        };
    };
    class AircraftBattery : Inventory_Base
    {
        varQuantityInit = 2000;
        varQuantityMax = 2000;
        class EnergyManager
        {
            energyStorageMax = 2000;
            energyAtSpawn = 2000;
        };
    };
    class WoodenPlank : Inventory_Base
    {
        varStackMax = 20;
        varQuantityMax = 400;
        inventorySlot[] +=
        {
            "SRP_Construction_WoodenPlanks"
        };
    };
    class BurlapStrip : Inventory_Base
    {
        varQuantityMax = 30;
        itemSize[] = { 2,1 };
    };
    class ButaneCanister : Inventory_Base
    {
        itemSize[] = { 1,2 };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\butane_canister_espen_co.paa"
        };
    };
    class LargeGasCanister : Inventory_Base
    {
        itemSize[] = { 1,3 };
        varQuantityInit = 0;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\lootgascannisterlarge_espen_co.paa"
        };
    };
    class MediumGasCanister : Inventory_Base
    {
        itemSize[] = { 1,2 };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\lootgascannistermedium_espen_co.paa"
        };
    };
    class SmallGasCanister : Inventory_Base
    {
        itemSize[] = { 1,1 };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\lootgascannistermedium_espen_co.paa"
        };
    };
    class Matchbox : Inventory_Base
    {
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\matchbox_espen_co.paa"
        };
    };
    class GasMask_Filter : Inventory_Base
    {
        itemSize[] = { 1,2 };
    };
    class Rag : Inventory_Base
    {
        itemSize[] = { 2,1 };
        rootClassName = "Rag";
        colorVariants[] =
        {
          "Black",
          "Blue",
          "Brown",
          "Green",
          "Pink",
          "Red",
          "Yellow",
        };
    };
    class TannedLeather : Inventory_Base
    {
        inventorySlot[] +=
        {
            "Smithing_Leather",
                "Tailoring_Leather"
        };
    };
    // --- taxidermy
    class Pelt_Base : Inventory_Base
    {
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 10;
        // varQuantityDestroyOnMin = 1;
        varStackMax = 1;
        inventorySlot[] +=
        {
            "AnimalPelt1",
                "AnimalPelt2",
                "AnimalPelt3",
                "AnimalPelt4",
                "AnimalPelt5",
                "AnimalPelt6",
                "AnimalPelt7",
                "AnimalPelt8",
                "AnimalPelt9",
                "AnimalPelt10",
                "TailoringPelt1",
                "TailoringPelt2",
                "TailoringPelt3",
                "TailoringPelt4",
                "TailoringPelt5",
        };
    };
    class WildboarPelt : Pelt_Base
    {
        color = "boar";
    };
    class RabbitPelt : Pelt_Base
    {
        color = "rabbit";
    };
    class CowPelt : Pelt_Base
    {
        color = "cow";
    };
    class PigPelt : Pelt_Base
    {
        color = "pig";
    };
    class DeerPelt : Pelt_Base
    {
        color = "deer";
    };
    class GoatPelt : Pelt_Base
    {
        color = "goat";
    };
    class BearPelt : Pelt_Base
    {
        color = "bear";
    };
    class WolfPelt : Pelt_Base
    {
        color = "wolf";
    };
    class SheepPelt : Pelt_Base
    {
        color = "sheep";
    };
    class MouflonPelt : Pelt_Base
    {
        color = "mouflon";
    };
    class FoxPelt : Pelt_Base
    {
        color = "fox";
    };
    // drug workbench
    class HeadlightH7 : Inventory_Base
    {
        inventorySlot[] +=
        {
            "Lightbulb"
        };
    };

    // bone armor kit
    class Bone : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Bones",
                "Tailoring_Bones",
                "AnimalPelt1",
                "AnimalPelt2",
                "AnimalPelt3",
                "AnimalPelt4",
                "AnimalPelt5",
                "AnimalPelt6",
                "AnimalPelt7",
                "AnimalPelt8",
                "AnimalPelt9",
                "AnimalPelt10",
        };
        varQuantityMax = 30;
    };

    class Stone_Ruined : Stone
    {
        scope = 2;
        displayName = "Ruined Stone";
        descriptionShort = "This stone is not suitable for building; or anything...a quarry probably has better rocks.";
        inventorySlot[] = {};
    };
    class Bark_ColorBase : Inventory_Base
    {
        itemSize[] = { 1,2 };
    };
    class WoodenLog : Inventory_Base
    {
        varQuantityMax = 400;
        inventorySlot[] +=
        {
            "SRP_Construction_WoodenLogs",
                "Smithing_WoodenLogs"
        };
    };
    class MetalPlate : Inventory_Base
    {
        varQuantityMax = 800;
        inventorySlot[] +=
        {
            "SRP_Construction_MetalPlate",
                "Tailoring_MetalPlate"
        };
    };
    class Roadflare : Inventory_Base
    {
        inventorySlot[] +=
        {
            "VestGrenadeA",
                "VestGrenadeB",
                "VestGrenadeC",
                "VestGrenadeD",
        };
    };
    //----------------------------------------------- MODDED STUFF
    class DUB_Biowolfpelt : Pelt_Base
    {
        color = "biowolf";
    };
    class DUB_Moosepelt : Pelt_Base
    {
        color = "moose";
    };
    class DUB_Humanpelt : Pelt_Base
    {
        color = "human";
    };
    class DUB_AlphaPelt : Pelt_Base
    {
        color = "alpha";
    };
    // windstride override
    class HumanSkull : Inventory_Base
    {
        inventorySlot[] +=
        {
            "AnimalPelt1",
                "AnimalPelt2",
                "AnimalPelt3",
                "AnimalPelt4",
                "AnimalPelt5",
                "AnimalPelt6",
                "AnimalPelt7",
                "AnimalPelt8",
                "AnimalPelt9",
                "AnimalPelt10"
        };
    };
    //----------------------------------------------- CUSTOM STUFF
    class Firewood_Irradiated : Firewood
    {
        scope = 2;
        displayName = "Firewood";
        descriptionShort = "A small log. Oddly feels hot to the touch.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\firewood_irradiated_co.paa"
        };
    };
    class WoodenLog_Irradiated : WoodenLog
    {
        scope = 2;
        displayName = "Wooden Log";
        descriptionShort = "A large log. Oddly feels hot to the touch.";
    };
    class Bark_Oak_Irradiated : Bark_Oak
    {
        scope = 2;
        displayName = "Oak Bark";
        descriptionShort = "Some oak bark. Oddly feels hot to the touch.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\oak_bark_irradiated_co.paa"
        };
    };
    class Bark_Birch_Irradiated : Bark_Birch
    {
        scope = 2;
        displayName = "Birch Bark";
        descriptionShort = "Some birch bark. Oddly feels hot to the touch.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\birch_bark_irradiated_co.paa"
        };
    };

    class GasMask_Filter_Espen : GasMask_Filter
    {
        scope = 2;
        displayName = "Enhanced Gas Mask Filter - Espen Industries";
        descriptionShort = "This gas mask filter has been modified to have an extended lifetime. Will last roughly 3.5x the time of a regular filter.";
        varQuantityInit = 500;
        varQuantityMax = 500;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\gasmask_filter_espen_co.paa"
        };
    };
    class GasMask_Filter_Stag : GasMask_Filter
    {
        scope = 2;
        displayName = "Enhanced Gas Mask Filter - Stag Industries";
        descriptionShort = "This gas mask filter has been modified to have an extended lifetime. Will last roughly 6x the time of a regular filter.";
        varQuantityInit = 1000;
        varQuantityMax = 1000;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\gasmask_filter_stag_co.paa"
        };
    };
    class GasMask_Filter_LockNSons : GasMask_Filter
    {
        scope = 2;
        displayName = "Enhanced Gas Mask Filter - Lock & Sons";
        descriptionShort = "This gas mask filter has been modified to have an extended lifetime. Will last roughly 10x the time of a regular filter.";
        varQuantityInit = 1500;
        varQuantityMax = 1500;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\gasmask_filter_locknsons_co.paa"
        };
    };


    class AmmoBox_Ammo_Flare_5Rnd : Box_Base
    {
        scope = 2;
        displayName = "Boxed Flare Gun Rounds - Yellow";
        descriptionShort = "A box of flare gun rounds in decent condition. Color indicates yellow.";
        model = "\dz\gear\consumables\Nails_box.p3d";
        debug_ItemCategory = 5;
        iconType = 1;
        rotationFlags = 17;
        weight = 85;
        absorbency = 0.80000001;
        itemSize[] = { 1,1 };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\box_of_flaregun_yellow_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 80;
                    healthLevels[] =
                    {

                        {
                            1,

                            {
                                "DZ\gear\consumables\data\Box_of_Nails.rvmat"
                            }
                        },

                        {
                            0.69999999,

                            {
                                "DZ\gear\consumables\data\Box_of_Nails.rvmat"
                            }
                        },

                        {
                            0.5,

                            {
                                "DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"
                            }
                        },

                        {
                            0.30000001,

                            {
                                "DZ\gear\consumables\data\Box_of_Nails_damage.rvmat"
                            }
                        },

                        {
                            0,

                            {
                                "DZ\gear\consumables\data\Box_of_Nails_destruct.rvmat"
                            }
                        }
                    };
                };
            };
        };
        class Resources
        {
            class Ammo_Flare
            {
                value = 5;
                variable = "quantity";
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class interact
                {
                    soundset = "ammoboxUnpack_SoundSet";
                    id = 70;
                };
            };
        };
    };
    class AmmoBox_Ammo_FlareRed_5Rnd : AmmoBox_Ammo_Flare_5Rnd
    {
        scope = 2;
        displayName = "Boxed Flare Gun Rounds - Red";
        descriptionShort = "A box of flare gun rounds in decent condition. Color indicates red.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\box_of_flaregun_red_co.paa"
        };
        class Resources
        {
            class Ammo_FlareRed
            {
                value = 5;
                variable = "quantity";
            };
        };
    };
    class AmmoBox_Ammo_FlareGreen_5Rnd : AmmoBox_Ammo_Flare_5Rnd
    {
        scope = 2;
        displayName = "Boxed Flare Gun Rounds - Green";
        descriptionShort = "A box of flare gun rounds in decent condition. Color indicates green.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\box_of_flaregun_green_co.paa"
        };
        class Resources
        {
            class Ammo_FlareGreen
            {
                value = 5;
                variable = "quantity";
            };
        };
    };
    class AmmoBox_Ammo_FlareBlue_5Rnd : AmmoBox_Ammo_Flare_5Rnd
    {
        scope = 2;
        displayName = "Boxed Flare Gun Rounds - Blue";
        descriptionShort = "A box of flare gun rounds in decent condition. Color indicates blue.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\box_of_flaregun_blue_co.paa"
        };
        class Resources
        {
            class Ammo_FlareBlue
            {
                value = 5;
                variable = "quantity";
            };
        };
    };

    //--------------------------------------------------ELECTRONICS
    class MetalWire_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Electronics Wiring - Base";
        descriptionShort = "Copper wiring with a specific color shielding.";
        model = "\dz\gear\crafting\String_MetalWire.p3d";
        rotationFlags = 17;
        itemSize[] = { 2,3 };
        weight = 170;
        inventorySlot[] =
        {
          "SRP_ElectricalWire1",
          "SRP_ElectricalWire2",
          "SRP_ElectricalWire3",
          "SRP_ElectricalWire4",
          "SRP_ElectricalWire5",
          "SRP_ElectricalWire6",
          "SRP_StackedElectricalWire1",
          "SRP_StackedElectricalWire2",
        };
        color = "base";
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 100;
        varStackMax = 1;
        varQuantityDestroyOnMin = 1;
        hiddenSelections[] =
        {
            "att_battery_car",
            "att_battery_car_plugged",
            "att_battery_truck",
            "att_battery_truck_plugged",
            "att_battery_car_plug",
            "att_battery_truck_plug",
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "Survivalists_Mods\gear\consumables\data\string_metalwire_red_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "",
            "",
            "",
            "",
            "",
            "",
            "dz\gear\crafting\data\String_MetalWire.rvmat",
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
                        {1,{"DZ\gear\crafting\data\String_MetalWire.rvmat"}},
                        {0.69999999,{"DZ\gear\crafting\data\String_MetalWire.rvmat"}},
                        {0.5,{"DZ\gear\crafting\data\String_MetalWire_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\crafting\data\String_MetalWire_damage.rvmat"}},
                        {0,{"DZ\gear\crafting\data\String_MetalWire_destruct.rvmat"}}
                    };
                };
            };
        };
        repairableWithKits[] = { 5,7 };
        repairCosts[] = { 30,25 };
        class AnimEvents
        {
            class SoundWeapon
            {
                class rope_untie
                {
                    soundSet = "rope_untie_SoundSet";
                    id = 202;
                };
                class rope_struggle
                {
                    soundSet = "rope_struggle_SoundSet";
                    id = 203;
                };
                class pickUpItem
                {
                    soundSet = "pickUpBarbedWire_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "barbedwire_drop_SoundSet";
                    id = 898;
                };
            };
        };
        class AnimationSources
        {
            class Att_battery_car
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class Att_battery_car_plugged
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class Att_battery_truck
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class Att_battery_truck_plugged
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class Att_battery_car_plug
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class Att_battery_truck_plug
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 1;
            };
            class Rolled
            {
                source = "user";
                animPeriod = 0.0099999998;
                initPhase = 0;
            };
        };
    };
    class MetalWire_Copper : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Raw Copper Wire";
        descriptionShort = "Copper wire spun from molten copper ingots.";
        color = "copper";
        inventorySlot[] =
        {
            "SRP_CopperWire1",
      "SRP_MaterialSpool_CopperWire"
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_brown_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Black : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Black";
        descriptionShort = "Digit: 0 Multiplier: 1 Tolerance: N/A Temperature Coefficient: N/A";
        color = "black";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_black_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Brown : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Brown";
        descriptionShort = "Digit: 1 Multiplier: 10 Tolerance: 1% Temperature Coefficient: 100C";
        color = "brown";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_brown_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Red : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Red";
        descriptionShort = "Digit: 2 Multiplier: 100 Tolerance: 2% Temperature Coefficient: 50C";
        color = "red";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_red_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Orange : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Orange";
        descriptionShort = "Digit: 3 Multiplier: 1K Tolerance: N/A Temperature Coefficient: 15C";
        color = "orange";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_orange_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Yellow : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Yellow";
        descriptionShort = "Digit: 4 Multiplier: 10K Tolerance: N/A Temperature Coefficient: 25C";
        color = "yellow";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_yellow_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Green : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Green";
        descriptionShort = "Digit: 5 Multiplier: 100K Tolerance: 0.5% Temperature Coefficient: N/A";
        color = "green";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_green_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Blue : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Blue";
        descriptionShort = "Digit: 6 Multiplier: 1M Tolerance: 0.25% Temperature Coefficient: N/A";
        color = "blue";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_blue_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Purple : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Purple";
        descriptionShort = "Digit: 7 Multiplier: 10M Tolerance: 0.01% Temperature Coefficient: N/A";
        color = "purple";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_purple_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_Grey : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - Grey";
        descriptionShort = "Digit: 8 Multiplier: N/A Tolerance: 0.05% Temperature Coefficient: N/A";
        color = "grey";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_grey_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };
    class MetalWire_White : MetalWire_ColorBase
    {
        scope = 2;
        displayName = "Electronics Wiring - White";
        descriptionShort = "Digit: 9 Multiplier: N/A Tolerance: N/A Temperature Coefficient: N/A";
        color = "white";
        inventorySlot[] +=
        {
            "SRP_MaterialSpool_ElectricalWire1",
                "SRP_MaterialSpool_ElectricalWire2",
                "SRP_MaterialSpool_ElectricalWire3",
                "SRP_MaterialSpool_ElectricalWire4",
                "SRP_MaterialSpool_ElectricalWire5",
        };
        hiddenSelections[] =
        {
            "rolled"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\string_metalwire_white_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "dz\gear\crafting\data\String_MetalWire.rvmat",
        };
    };

    //----------------------------------------------------- SPRAYCANS
    class SRP_LongRangeRadioBattery : Battery9V // SRPLRRadioBattery
    {
        scope = 2;
        displayName = "Military Radio Battery";
        descriptionShort = "Military radio battery pack";
        model = "Survivalists_Mods\gear\consumables\SRP_LRRadioBattery.p3d";
        inventorySlot[] = { "SRPRadioBattery" };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\radio\data\srp_longradio_co.paa",
        };
        itemSize[] = { 1,2 };
        class EnergyManager
        {
            hasIcon = 1;
            switchOnAtSpawn = 1;
            isPassiveDevice = 1;
            energyStorageMax = 250;
            energyAtSpawn = 250;
            convertEnergyToQuantity = 1;
            reduceMaxEnergyByDamageCoef = 1;
            powerSocketsCount = 1;
            compatiblePlugTypes[] = { 1 };
        };
    };

    class SRP_Spraycan_Black : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Black Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "black";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_black_co.paa"
        };
    };
    class SRP_Spraycan_Blue : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Blue Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "blue";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_blue_co.paa"
        };
    };
    class SRP_Spraycan_Brown : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Brown Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "brown";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_brown_co.paa"
        };
    };
    class SRP_Spraycan_Green : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Green Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "green";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_green_co.paa"
        };
    };
    class SRP_Spraycan_Orange : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Orange Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "orange";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_orange_co.paa"
        };
    };
    class SRP_Spraycan_Purple : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Purple Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "purple";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_purple_co.paa"
        };
    };
    class SRP_Spraycan_Red : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Red Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "red";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_red_co.paa"
        };
    };
    class SRP_Spraycan_Turquoise : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Turquoise Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "turquoise";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_turquoise_co.paa"
        };
    };
    class SRP_Spraycan_White : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "White Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "white";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_white_co.paa"
        };
    };
    class SRP_Spraycan_Yellow : Spraycan_ColorBase
    {
        scope = 2;
        displayName = "Yellow Spraycan";
        descriptionShort = "A can of spray paint.";
        color = "yellow";
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\consumables\data\srp_spraycan_yellow_co.paa"
        };
    };

    class SRP_ButaneCanister : ButaneCanister
    {
        scope = 2;
        displayName = "Refillable Butane Canister";
        descriptionShort = "A canister used for re-fueling gas containers";
        varQuantityInit = 25;
        varQuantityMin = 0;
        varQuantityMax = 25;
        stackedUnit = "w";
    };

    class SRP_ToiletPaper : Inventory_Base
    {
        scope = 2;
        displayName = "Toilet Paper";
        descriptionShort = "1 ply toilet paper. Looks more like sand paper.";
        model = "Survivalists_Mods\gear\consumables\toiletpaper.p3d";
        weight = 20;
        absorbency = 1;
        itemSize[] = { 2,2 };
        inventorySlot[] = {};
        ChangeInventorySlot[] =
        {
            "Mask"
        };
        ChangeIntoOnAttach[] =
        {
            "",
            "MouthRag"
        };
        canBeSplit = 1;
        varQuantityInit = 6;
        varQuantityMin = 0;
        varQuantityMax = 6;
        varQuantityDestroyOnMin = 1;
        rotationFlags = 17;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
            {	1,{"Survivalists_Mods\gear\consumables\data\toiletpaper.rvmat"	}},
            {	0.69999999,{"Survivalists_Mods\gear\consumables\data\toiletpaper.rvmat"	}},
            {	0.5,{"Survivalists_Mods\gear\consumables\data\toiletpaper_damage.rvmat"	}},
            {	0.30000001,{"Survivalists_Mods\gear\consumables\data\toiletpaper_damage.rvmat"	}},
            {	0,{"Survivalists_Mods\gear\consumables\data\toiletpaper_destruct.rvmat"	}}
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
                    soundSet = "Bandage_loop_SoundSet";
                    id = 201;
                };
                class Bandage_loop2
                {
                    soundSet = "Bandage_loop_SoundSet";
                    id = 202;
                };
                class Bandage_loop3
                {
                    soundSet = "Bandage_loop_SoundSet";
                    id = 203;
                };
                class Bandage_start
                {
                    soundSet = "Bandage_start_SoundSet";
                    id = 204;
                };
                class Bandage_end
                {
                    soundSet = "Bandage_end_SoundSet";
                    id = 205;
                };
                class pickUpItem_Light
                {
                    soundSet = "pickUpCourierBag_Light_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpCourierBag_SoundSet";
                    id = 797;
                };
            };
        };
    };

    class SRP_RollingPapers : Inventory_Base
    {
        scope = 2;
        displayName = "Rolling Papers";
        descriptionShort = "A set of rolling papers";
        model = "Survivalists_Mods\gear\consumables\rollingpapers.p3d";
        weight = 20;
        absorbency = 1;
        itemSize[] = { 2,1 };
        canBeSplit = 1;
        varQuantityInit = 10;
        varQuantityMin = 0;
        varQuantityMax = 10;
        varQuantityDestroyOnMin = 1;
        rotationFlags = 17;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
            {	1,{"Survivalists_Mods\gear\consumables\data\rollingpapers.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\consumables\data\rollingpapers.rvmat"}},
            {	0.5,{"Survivalists_Mods\gear\consumables\data\rollingpapers_damage.rvmat"}},
            {	0.30000001,{"Survivalists_Mods\gear\consumables\data\rollingpapers_damage.rvmat"}},
            {	0,{"Survivalists_Mods\gear\consumables\data\rollingpapers_destruct.rvmat"}}
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
                    soundSet = "Bandage_loop_SoundSet";
                    id = 201;
                };
                class Bandage_loop2
                {
                    soundSet = "Bandage_loop_SoundSet";
                    id = 202;
                };
                class Bandage_loop3
                {
                    soundSet = "Bandage_loop_SoundSet";
                    id = 203;
                };
                class Bandage_start
                {
                    soundSet = "Bandage_start_SoundSet";
                    id = 204;
                };
                class Bandage_end
                {
                    soundSet = "Bandage_end_SoundSet";
                    id = 205;
                };
                class pickUpItem_Light
                {
                    soundSet = "pickUpCourierBag_Light_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpCourierBag_SoundSet";
                    id = 797;
                };
            };
        };
    };

    class SRP_Paper_Hint1 : Paper
    {
        scope = 2;
        displayName = "Diary Page";
        descriptionShort = "The scribbles and rantings of a strange individual.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\loot_paper_mining_co.paa"
        };
    };

    class SRP_Paper_Hint2 : Paper
    {
        scope = 2;
        displayName = "Diary Page";
        descriptionShort = "The scribbles and rantings of a strange individual.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\loot_paper_fishing_co.paa"
        };
    };
    class SRP_Paper_CDCForm1 : Paper
    {
        scope = 2;
        displayName = "Medical Information Form";
        descriptionShort = "Boxes and lines to be filled out.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\loot_paper_cdcforminfo_co.paa"
        };
    };
    class SRP_Paper_CDCForm2 : Paper
    {
        scope = 2;
        displayName = "Surgery Information Form";
        descriptionShort = "Boxes and lines to be filled out.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\loot_paper_cdcformsurgury_co.paa"
        };
    };
    class SRP_Paper_CDCForm3 : Paper
    {
        scope = 2;
        displayName = "Medical Records Form";
        descriptionShort = "Boxes and lines to be filled out.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\loot_paper_cdcformrecord_co.paa"
        };
    };
    class SRP_Paper_BrewingHint : Paper
    {
        scope = 2;
        displayName = "Rough Sketch";
        descriptionShort = "A rough sketch of a makeshift still.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\loot_paper_brewing_co.paa"
        };
    };

    class SRP_Paper_LargeSheetRaw : Inventory_Base
    {
        scope = 2;
        displayName = "Large Sheet of Paper";
        descriptionShort = "A large sheet of paper that can be cut into pieces once dried.";
        model = "\dz\gear\consumables\Paper.p3d";
        isMeleeWeapon = 1;
        weight = 2;
        absorbency = 1;
        itemSize[] = { 2,5 };
        rotationFlags = 16;
        inventorySlot[] = {};
        varWetMax = 1;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 15;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
                        {0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},
                        {0.5,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},
                        {0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class pickUpItem
                {
                    soundSet = "pickUpPaper_SoundSet";
                    id = 797;
                };
            };
        };
    };
    //============================================= CONSUMABLES
    class SRP_CraftingMaterial_Metal : Inventory_Base
    {
        scope = 0;
        displayName = "Metal Crafting Model Base";
        descriptionShort = "Metal Crafting Model Base";
        model = "Survivalists_Mods\gear\consumables\craftingmaterials_sheetmetal.p3d";
        rotationFlags = 34;
        weight = 1200;
        itemSize[] = { 5,5 };
        itemBehaviour = 0;
        canBeSplit = 1;
        varQuantityInit = 5;
        varQuantityMin = 0;
        varQuantityMax = 40;
        varQuantityDestroyOnMin = 1;
        varStackMax = 40;
        inventorySlot[] = {};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\craftingmaterials_metal_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_CraftingMaterial_MetalScraps : SRP_CraftingMaterial_Metal
    {
        scope = 2;
        displayName = "Sheet Metal Scraps - Half";
        descriptionShort = "Sheet metal has been cut in half. A bit easier to manage.";
        model = "Survivalists_Mods\gear\consumables\craftingmaterials_sheetmetal.p3d";
    };
    class SRP_CraftingMaterial_MetalScraps_Cut : SRP_CraftingMaterial_MetalScraps
    {
        scope = 2;
        displayName = "Cut Sheet Metal Scraps - Quarter";
        descriptionShort = "Scraps cut into quarters. Fits in your hands nicely.";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\craftingmaterials_metalcut_co.paa"
        };
    };
    class SRP_CraftingMaterial_MetalRod : SRP_CraftingMaterial_Metal
    {
        scope = 2;
        displayName = "Metal Rod";
        descriptionShort = "Metal Rod. Might be useful on a lathe.";
        model = "Survivalists_Mods\gear\consumables\craftingmaterials_metalrod.p3d";
        itemSize[] = { 2,5 };
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 1;
        varQuantityDestroyOnMin = 1;
        varStackMax = 1;
    };
    class SRP_CraftingMaterial_StoneBrick : SRP_CraftingMaterial_Metal
    {
        scope = 2;
        displayName = "Stone Brick";
        descriptionShort = "Stone Brick. Pretty heavy.";
        model = "Survivalists_Mods\gear\consumables\craftingmaterials_stonebrick.p3d";
        itemSize[] = { 2,3 };
    };
    class SRP_CraftingMaterial_MetalBeam : SRP_CraftingMaterial_Metal
    {
        scope = 2;
        displayName = "Metal Beam";
        descriptionShort = "Metal Beam. Pretty heavy.";
        model = "Survivalists_Mods\gear\consumables\craftingmaterials_metalbeam.p3d";
        itemSize[] = { 3,8 };
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 1;
        varQuantityDestroyOnMin = 1;
        varStackMax = 1;
    };

    class SRP_CraftingMaterial_BagBase : Inventory_Base
    {
        scope = 0;
        displayName = "Bag Crafting Model Base";
        descriptionShort = "Bag Crafting Model Base";
        model = "Survivalists_Mods\gear\consumables\craftingmaterials_bag.p3d";
        weight = 1200;
        itemSize[] = { 4,4 };
        itemBehaviour = 0;
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 400;
        varQuantityDestroyOnMin = 1;
        varStackMax = 4;
        inventorySlot[] = {};
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_cement_bag.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_bag_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_CraftingMaterial_Cement : SRP_CraftingMaterial_BagBase
    {
        scope = 2;
        displayName = "Bag of Cement";
        descriptionShort = "A bag of cement. Combined with various things to build sturdy things.";
        inventorySlot[] =
        {
      "SRP_Construction_Cement"
        };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_cement_bag.paa"
        };
    };
    class SRP_CraftingMaterial_Mortar : SRP_CraftingMaterial_BagBase
    {
        scope = 2;
        displayName = "Bag of Mortar";
        descriptionShort = "A bag of mortar. Combined with various things to fill in gaps between stones.";
        inventorySlot[] =
        {
      "Material_Mortar",
      "SRP_Construction_Mortar"
        };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_craftingmaterials_mortar_bag.paa"
        };
    };

    class SRP_CraftingMaterial_Dye_Base : Inventory_Base
    {
        scope = 0;
        displayName = "Dye Crafting Model Base";
        descriptionShort = "A rudimentary dye. Useful for staining this color on cloth or other various things.";
        model = "Survivalists_Mods\gear\consumables\srp_dyebottle.p3d";
        color = "base";
        weight = 2;
        itemSize[] = { 1,1 };
        itemBehaviour = 1;
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 200;
        varQuantityDestroyOnMin = 1;
        varStackMax = 200;
        inventorySlot[] =
        {
          "SRP_DyeBottle1",
          "SRP_DyeBottle2",
          "SRP_DyeBottle3",
          "SRP_DyeBottle4",
          "SRP_DyeBottle5",
          "SRP_DyeBottle6",
          "SRP_DyeBottle7",
          "SRP_DyeBottle8",
          "SRP_DyeBottle9",
          "SRP_DyeBottle10",
          "SRP_DyeBottle11",
          "SRP_DyeBottle12"
        };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_whitepotion_ca.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\srp_dyebottle_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_CraftingMaterial_Dye_Bleach : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Bleach";
        color = "bleach";
        varQuantityInit = 20;
    };
    class SRP_CraftingMaterial_Dye_Black : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Black";
        color = "black";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_blackpotion_ca.paa"
        };
    };
    class SRP_CraftingMaterial_Dye_Blue : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Blue";
        color = "blue";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_bluepotion_ca.paa"
        };
    };
    class SRP_CraftingMaterial_Dye_Brown : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Brown";
        color = "brown";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_brownpotion_ca.paa"
        };
    };
    class SRP_CraftingMaterial_Dye_Green : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Green";
        color = "green";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_greenpotion_ca.paa"
        };
    };
    class SRP_CraftingMaterial_Dye_Pink : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Pink";
        color = "pink";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_pinkpotion_ca.paa"
        };
    };
    class SRP_CraftingMaterial_Dye_Red : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Red";
        color = "red";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_redpotion_ca.paa"
        };
    };
    class SRP_CraftingMaterial_Dye_Yellow : SRP_CraftingMaterial_Dye_Base
    {
        scope = 2;
        displayName = "Dye - Yellow";
        color = "Yellow";
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_dyebottle_yellowpotion_ca.paa"
        };
    };

    class SRP_SkeletonFrame : Inventory_Base
    {
        scope = 2;
        displayName = "Skeleton";
        descriptionShort = "The torso serves as a foundation for other bones.";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonframe.p3d";
        weight = 1200;
        itemSize[] = { 5,5 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        rotationFlags = 16;
        attachments[] =
        {
          "SRP_SkeletonSkull",
          "SRP_SkeletonArmLeft",
          "SRP_SkeletonArmRight",
          "SRP_SkeletonPelvis",
          "SRP_SkeletonLegLeft",
          "SRP_SkeletonLegRight",
        };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_skeleton_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton.rvmat"}},
            {0.5,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\gear\consumables\data\srp_skeleton_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_SkeletonFrame_Skull : SRP_SkeletonFrame
    {
        scope = 2;
        displayName = "Skeleton Skull";
        descriptionShort = "The skull crowns any skeleton set.";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonhead.p3d";
        weight = 1200;
        itemSize[] = { 3,3 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        attachments[] = {};
        inventorySlot[] =
        {
          "Skullpike",
          "SRP_SkeletonSkull",
          "AnimalPelt1",
          "AnimalPelt2",
          "AnimalPelt3",
          "AnimalPelt4",
          "AnimalPelt5",
          "AnimalPelt6",
          "AnimalPelt7",
          "AnimalPelt8",
          "AnimalPelt9",
          "AnimalPelt10"
        };
    };
    class SRP_SkeletonFrame_ArmLeft : SRP_SkeletonFrame
    {
        scope = 2;
        displayName = "Skeleton Left Arm";
        descriptionShort = "The left arm of a skeleton.";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonarmleft.p3d";
        weight = 1200;
        itemSize[] = { 2,6 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        attachments[] = {};
        inventorySlot[] =
        {
          "SRP_SkeletonArmLeft"
        };
    };
    class SRP_SkeletonFrame_ArmRight : SRP_SkeletonFrame
    {
        scope = 2;
        displayName = "Skeleton Right Arm";
        descriptionShort = "The right arm of a skeleton.";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonarmright.p3d";
        weight = 1200;
        itemSize[] = { 2,6 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        attachments[] = {};
        inventorySlot[] =
        {
          "SRP_SkeletonArmRight"
        };
    };
    class SRP_SkeletonFrame_Pelvis : SRP_SkeletonFrame
    {
        scope = 2;
        displayName = "Skeleton Pelvis";
        descriptionShort = "The pelvis of a skeleton";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonpelvis.p3d";
        weight = 1200;
        itemSize[] = { 3,3 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        attachments[] = {};
        inventorySlot[] =
        {
          "SRP_SkeletonPelvis"
        };
    };
    class SRP_SkeletonFrame_LegLeft : SRP_SkeletonFrame
    {
        scope = 2;
        displayName = "Skeleton Left Leg";
        descriptionShort = "The left leg of a skeleton.";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonlegleft.p3d";
        weight = 1200;
        itemSize[] = { 2,6 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        attachments[] = {};
        inventorySlot[] =
        {
          "SRP_SkeletonLegLeft"
        };
    };
    class SRP_SkeletonFrame_LegRight : SRP_SkeletonFrame
    {
        scope = 2;
        displayName = "Skeleton Right Leg";
        descriptionShort = "The right leg of a skeleton.";
        model = "Survivalists_Mods\gear\consumables\srp_skeletonlegright.p3d";
        weight = 1200;
        itemSize[] = { 2,6 };
        itemsCargoSize[] = { 0,0 };
        itemBehaviour = 0;
        attachments[] = {};
        inventorySlot[] =
        {
          "SRP_SkeletonLegRight"
        };
    };
    //============================================= PROPANE TANKS
    class SRP_PropaneTank_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Propane Tank";
        descriptionShort = "A small propane tank that can be carried. Contents under pressure store properly or risk explosion.";
        model = "Survivalists_Mods\gear\consumables\srp_propanetank.p3d";
        weight = 340;
        weightPerQuantityUnit = 4;
        itemSize[] = { 3,3 };
        stackedUnit = "w";
        quantityBar = 1;
        varQuantityInit = 20;
        varQuantityMin = 0;
        varQuantityMax = 20;
        varQuantityDestroyOnMin = 0;
        hiddenSelections[] = { "zbytek","copper","plastic" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_red_co.paa",
          "Survivalists_Mods\gear\consumables\data\srp_propane_copper_co.paa",
          "Survivalists_Mods\gear\consumables\data\srp_propane_tankplastic_yellow_co.paa"
        };
        inventorySlot[] =
        {
            "GasCanister",
      "SRP_PropaneTank1",
      "SRP_PropaneTank2",
      "SRP_PropaneTank3",
      "SRP_PropaneTank4"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank.rvmat"}},
                        {0.69999999,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank.rvmat"}},
                        {0.5,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_damage.rvmat"}},
                        {0,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_destruct.rvmat"}}
                    };
                };
            };
        };
        class EnergyManager
        {
            switchOnAtSpawn = 1;
            isPassiveDevice = 1;
            energyStorageMax = 2500;
            energyUsagePerSecond = 0;
            energyAtSpawn = 2500;
            powerSocketsCount = 1;
            compatiblePlugTypes[] = { 7 };
            convertEnergyToQuantity = 1;
        };
        soundImpactType = "metal";
    };
    class SRP_PropaneTankLarge_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Large Propane Tank";
        descriptionShort = "A large propane tank. Contents under pressure store properly or risk explosion.";
        model = "Survivalists_Mods\gear\consumables\srp_propanetank_large.p3d";
        weight = 340;
        weightPerQuantityUnit = 4;
        itemSize[] = { 10,8 };
        stackedUnit = "w";
        physLayer = "item_large";
        quantityBar = 1;
        varQuantityInit = 20;
        varQuantityMin = 0;
        varQuantityMax = 20;
        varQuantityDestroyOnMin = 0;
        hiddenSelections[] = { "zbytek","metal" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_large_co.paa",
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_large_metalpipe_co.paa"
        };
        inventorySlot[] =
        {
            "GasCanister"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 10000;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_large.rvmat"}},
                        {0.69999999,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_large.rvmat"}},
                        {0.5,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_large_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_large_damage.rvmat"}},
                        {0,{"Survivalists_Mods\gear\consumables\data\srp_propane_tank_large_destruct.rvmat"}}
                    };
                };
            };
        };
        class EnergyManager
        {
            switchOnAtSpawn = 1;
            isPassiveDevice = 1;
            energyStorageMax = 25000;
            energyUsagePerSecond = 0;
            energyAtSpawn = 25000;
            powerSocketsCount = 1;
            compatiblePlugTypes[] = { 7 };
            convertEnergyToQuantity = 1;
        };
        soundImpactType = "metal";
    };

    class SRP_PropaneTank_Red : SRP_PropaneTank_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek","plastic" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_red_co.paa",
          "Survivalists_Mods\gear\consumables\data\srp_propane_tankplastic_yellow_co.paa"
        };
    };
    class SRP_PropaneTank_Yellow : SRP_PropaneTank_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek","plastic" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_yellow_co.paa",
          "Survivalists_Mods\gear\consumables\data\srp_propane_tankplastic_yellow_co.paa"
        };
    };
    class SRP_PropaneTank_White : SRP_PropaneTank_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek","plastic" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_white_co.paa",
          "Survivalists_Mods\gear\consumables\data\srp_propane_tankplastic_yellow_co.paa"
        };
    };
    class SRP_PropaneTankLarge_DeerIsle : SRP_PropaneTankLarge_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\consumables\data\srp_propane_tank_large_co.paa"
        };
    };
};