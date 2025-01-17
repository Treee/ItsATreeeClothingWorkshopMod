class CfgPatches
{
    class Survivalists_Fishing_Containers
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Gear_Containers",
            "Survivalists_Fishing"
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class Container_Base;
    class SRP_Fishing_KitBase;

    class SRP_Tacklebox : Container_Base
    {
        scope = 2;
        displayName = "Tacklebox";
        descriptionShort = "A tacklebox for various fishing accessories. DEPRECATED. Replace with IAT_Fishing_Tacklebox_Basic";
        model = "Survivalists_Fishing\containers\tacklebox.p3d";
        itemBehaviour = 1;
        useEntityHierarchy = "true";
        physLayer = "item_small";
        weight = 5000;
        itemSize[] = { 6,5 };
        attachments[] =
        {
            "SRP_FishingLure1",
            "SRP_FishingLure2",
            "SRP_FishingLure3",
            "SRP_FishingLure4",
            "SRP_FishingLure5",
            "SRP_FishingLure6",
            "SRP_FishingLure7",
            "SRP_FishingLure8",
            "SRP_FishingLure9",
            "SRP_FishingLure10",
            "SRP_FishingLure11",
            "SRP_FishingLure12",
            "SRP_FishingLure13",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Fishing\containers\data\tacklebox_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Fishing\containers\data\tacklebox.rvmat"
        };
        class Cargo
        {
            itemsCargoSize[] = { 6,5 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        class AnimationSources
        {
            class Lid { source = "user";initPhase = 0;animPeriod = 0.0099999998; };
            class Lid2 { source = "user";initPhase = 1;animPeriod = 0.0099999998; };
        };
    };

    class SRP_AquariumIntermediate_Kit : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Aquarium Starter Kit";
        descriptionShort = "DEPRECATED. Finish to complete the kit.";
        attachments[] =
        {
            "SRP_Aquarium_Top",
            "SRP_Aquarium_Bot",
            "SRP_Aquarium_Glass1",
            "SRP_Aquarium_Glass2",
            "SRP_Aquarium_Glass3",
            "SRP_Aquarium_Glass4"
        };
    };
    class SRP_AquariumIntermediate_Top : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Aquarium Top";
        descriptionShort = "DEPRECATED. Finish to complete the kit.";
        model = "Survivalists_Fishing\containers\aquarium_top.p3d";
        inventorySlot[] =
        {
            "SRP_Aquarium_Top"
        };
    };
    class SRP_AquariumIntermediate_Bot : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Aquarium Bottom";
        descriptionShort = "DEPRECATED. Finish to complete the kit.";
        model = "Survivalists_Fishing\containers\aquarium_bot.p3d";
        inventorySlot[] =
        {
            "SRP_Aquarium_Bot"
        };
    };
    class SRP_AquariumIntermediate_Glass : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Aquarium Glass";
        descriptionShort = "DEPRECATED. Finish to complete the kit.";
        model = "Survivalists_Fishing\containers\aquarium_glass.p3d";
        inventorySlot[] =
        {
            "SRP_Aquarium_Glass1",
            "SRP_Aquarium_Glass2",
            "SRP_Aquarium_Glass3",
            "SRP_Aquarium_Glass4",
        };
    };

    class SRP_Aquarium_Kit : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Aquarium Kit";
        descriptionShort = "DEPRECATED: Replace with IAT_Fishing_Aquarium_Kit";
        projectionTypename = "SRP_Aquarium";
    };

    class SRP_Aquarium : Container_Base
    {
        scope = 2;
        displayName = "DEPRECATED Aquarium";
        descriptionShort = "DEPRECATED replace with IAT_Fishing_Aquarium_Basic. An old world aquarium.";
        model = "Survivalists_Fishing\containers\aquarium.p3d";
        itemBehaviour = 0;
        carveNavmesh = 1;
        useEntityHierarchy = "true";
        physLayer = "item_large";
        weight = 5000;
        itemSize[] = { 6,6 };
        itemsCargoSize[] = { 0,0 };
        attachments[] =
        {
            "SRP_Fish_Small1",
            "SRP_Fish_Small2",
            "SRP_Fish_Small3",
            "SRP_Fish_Small4",
            "SRP_Fish_Small5",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Fishing\containers\data\aquarium_ca.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Fishing\containers\data\aquarium.rvmat"
        };
    };

    class SRP_WoodenFishHangerIntermediate_Kit : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Wooden Fish Hanger Starter Kit";
        descriptionShort = "DEPRECATED. Finish to complete the kit.";
        attachments[] =
        {
            "Material_FPole_WoodenLog2",
            "MetalWire",
            "Material_MetalWire",
            "Rope",
            "Material_FPole_Rope",
            "Material_Shelter_Rope",
            "Material_FPole_Nails"
        };
    };

    class SRP_WoodenFishHanger_Kit : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Wooden Fish Display Kit";
        descriptionShort = "DEPRECATED: Replace with IAT_Fishing_WoodenFishHanger_Kit";
        projectionTypename = "SRP_WoodenFishHanger";
    };

    class SRP_WoodenFishHanger : Container_Base
    {
        scope = 2;
        displayName = "DEPRECATED Wooden Fish Post";
        descriptionShort = "DEPRECATED, replace with IAT_Fishing_WoodenFishHanger_Basic. A wooden post to hang a prize fish.";
        model = "Survivalists_Fishing\containers\woodenfishhanger.p3d";
        itemBehaviour = 0;
        useEntityHierarchy = "true";
        physLayer = "item_large";
        weight = 5000;
        itemSize[] = { 6,6 };
        itemsCargoSize[] = { 0,0 };
        attachments[] =
        {
            "SRP_Fish_Small1",
            "SRP_Fish_Small2",
            "SRP_Fish_Small3",
            "SRP_Fish_Small4",
            "SRP_Fish_Large1"
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Fishing\containers\data\woodenfishhanger_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"}},
                        {0.5,{"Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"}},
                        {0.0,{"Survivalists_Fishing\containers\data\woodenfishhanger.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_WoodenFishRackIntermediate_Kit : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Wooden Fish Rack Starter Kit";
        descriptionShort = "DEPRECATED. Finish to complete the kit.";
        attachments[] =
        {
            "Material_L2_WoodenLogs",
            "MetalWire",
            "Material_MetalWire",
            "Rope",
            "Material_FPole_Rope",
            "Material_Shelter_Rope",
            "Material_FPole_Nails"
        };
    };

    class SRP_WoodenFishRack_Kit : SRP_Fishing_KitBase
    {
        scope = 2;
        displayName = "Wooden Fish Rack Kit";
        descriptionShort = "DEPRECATED: Replace with IAT_Fishing_WoodenFishRack_Kit";
        projectionTypename = "SRP_WoodenFishRack";
    };

    class SRP_WoodenFishRack : Container_Base
    {
        scope = 2;
        displayName = "DEPRECATED Wooden Fish Rack";
        descriptionShort = "DEPRECATED: Replace with IAT_Fishing_WoodenFishRack_Basic. A wooden rack to hang a several fish.";
        model = "Survivalists_Fishing\containers\woodenfishrack.p3d";
        itemBehaviour = 0;
        useEntityHierarchy = "true";
        physLayer = "item_large";
        weight = 5000;
        itemSize[] = { 6,6 };
        itemsCargoSize[] = { 0,0 };
        attachments[] =
        {
            "SRP_Fish_Small1",
            "SRP_Fish_Small2",
            "SRP_Fish_Small3",
            "SRP_Fish_Small4",
            "SRP_Fish_Small5",
            "SRP_Fish_Small6",
            "SRP_Fish_Small7",
            "SRP_Fish_Small8",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Fishing\containers\data\woodenfishrack_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Fishing\containers\data\woodenfishrack.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Fishing\containers\data\woodenfishrack.rvmat"}},
                        {0.69999999,{"Survivalists_Fishing\containers\data\woodenfishrack.rvmat"}},
                        {0.5,{"Survivalists_Fishing\containers\data\woodenfishrack.rvmat"}},
                        {0.30000001,{"Survivalists_Fishing\containers\data\woodenfishrack.rvmat"}},
                        {0.0,{"Survivalists_Fishing\containers\data\woodenfishrack.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_CanOfWorms : Inventory_Base
    {
        scope = 2;
        displayName = "DEPRECATED Can of Worms";
        descriptionShort = "DEPRECATED, replace with IAT_Fishing_CanOfWorms_Basic. A whole can of worms. Wriggly.";
        model = "\dz\gear\food\food_can.p3d";
        weight = 20;
        absorbency = 1;
        itemSize[] = { 2,2 };
        canBeSplit = 0;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 50;
        varQuantityDestroyOnMin = 1;
        rotationFlags = 63;
        hiddenSelections[] =
        {
            "camoGround"
        };
        hiddenSelectionsTextures[] =
        {
            "dz\gear\food\data\UnknownFoodCan_co.paa"
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
                        {1.0,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.69999999,{"DZ\gear\food\data\food_can.rvmat"}},
                        {0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\food\data\food_can_damage.rvmat"}},
                        {0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class openTunaCan
                {
                    soundSet = "openTunaCan_SoundSet";
                    id = 204;
                };
                class Eating_TakeFood
                {
                    soundSet = "Eating_TakeFood_Soundset";
                    id = 889;
                };
                class Eating_BoxOpen
                {
                    soundSet = "Eating_BoxOpen_Soundset";
                    id = 893;
                };
                class Eating_BoxShake
                {
                    soundSet = "Eating_BoxShake_Soundset";
                    id = 894;
                };
                class Eating_BoxEnd
                {
                    soundSet = "Eating_BoxEnd_Soundset";
                    id = 895;
                };
            };
        };
    };
};