class CfgPatches
{
    class Survivalists_Mods_Gear_Patches
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Characters",
            "DZ_Characters_Tops",
            "DZ_Gear_Camping",
            "Canvas_Backpack" //windstrides
        };
    };
};
class CfgVehicles
{
    class SRP_KitBase;

    class Clothing;
    class Inventory_Base;
    class Armband_ColorBase;
    //------------------------------ VANILLA OVERRIDE
    class Flag_Base : Inventory_Base
    {
        color = "white";
        rootClassName = "Flag";
        inventorySlot[] +=
        {
            "SRP_FlagPole1",
                "SRP_FlagPole2",
                "SRP_FlagPole3",
                "SRP_FlagPole4",
                "SRP_FlagPole5",
                "SRP_VanillaFlag",
                "SRP_FlagBelt",
        };
        colorVariants[] =
        {
            "Chernarus",
            "Chedaki",
            "NAPA",
            "CDF",
            "Livonia",
            "Altis",
            "SSahrani",
            "NSahrani",
            "DayZ",
            "LivoniaArmy",
            "White",
            "Bohemia",
            "APA",
            "UEC",
            "Pirates",
            "Cannibals",
            "Bear",
            "Bisexual",
            "Wolf",
            "BabyDeer",
            "Rooster",
            "LivoniaPolice",
            "CMC",
            "TEC",
            "CHEL",
            "Zenit",
            "HunterZ",
            "BrainZ",
            "Refuge",
            "RSTA",
            "Snake",
            "Crook",
            "Rex",
            "Zagorky",
            "Mermaid",
            "WildTurkey",
            "Australia",
            "Canada",
            "KentuckyCommonWealth",
            "France",
            "Germany",
            "Italy",
            "Ireland",
            "Japan",
            "Japan1",
            "JeMeSouviens",
            "Jurrasic",
            "MaineState",
            "Mexico",
            "Portugal",
            "QuebecWeed",
            "Russia",
            "Spain",
            "Turkey",
            "UK",
            "Ukraine",
            "USADamaged",
            "Pride1",
            "Pride2",
            "Pride3",
            "Pride4",
            "Hetero",
            "4thOfJuly",
            "AlchemyWood",
            "AlchemyBlack",
            "Alien",
            "AmericanIndian",
            "Bandit",
            "BaphometDevil",
            "Barber",
            "BeachSunset",
            "Biker",
            "Blacksmith",
            "Brewery",
            "Builder",
            "Butcher",
            "Campfire",
            "Camping",
            "Carpentry",
            "Circus",
            "Club",
            "ComedyClub",
            "CottageCoreFrog",
            "Courier",
            "Cowboy",
            "CrueltyFree",
            "Deli",
            "Easter",
            "Esoteric",
            "EvilCat",
            "EyeofHorusEgyptian",
            "FaithHopeLove",
            "FarmersMarket",
            "Fisherman",
            "FlowerSkull",
            "ForestStag",
            "FortuneTeller",
            "FuckOff",
            "Gambling",
            "Ganesh",
            "GothRose",
            "Graffiti",
            "GunsandAmmo",
            "Halloween",
            "HappyDiwali",
            "HappyPassover",
            "HippyPeace",
            "IceCream",
            "Jail",
            "JapaneseteaHouse",
            "JapanRisingSun",
            "Jesus",
            "Karaoke",
            "KeepOut",
            "KillerClown",
            "Knight",
            "LandoftheFree",
            "Lawyer",
            "Leatherwork",
            "Library",
            "LiveMusic",
            "MedicalMarijuana",
            "Medical",
            "Medusa",
            "MerryXmas",
            "News",
            "NoFear",
            "Norse",
            "OnAir",
            "Persian",
            "Pizza",
            "PrawnGod",
            "Quarantine",
            "Radioactive",
            "Ramadan",
            "Raven",
            "RecordStore",
            "SadPug",
            "Science",
            "Scottish",
            "ScubaClub",
            "Seafood",
            "SkullandMoon",
            "Snowman",
            "Stonemason",
            "Stoner",
            "StPatricksDay",
            "Taco",
            "Tailor",
            "Taxidermy",
            "Thanksgiving",
            "TheEndisNigh",
            "ThreeBears",
            "Tiger",
            "Tinny",
            "TownHall",
            "Trader",
            "TrickorTreat",
            "Trustno1",
            "UnicornVomit",
            "University",
            "ValentineDay",
            "VampyricCastle",
            "Vet",
            "Wicca",
            "Wizard",
            "Yeti",
            "BrainPlate",
            "Lilith",
            "Octopus",
            "FaceDry",
            "MotherOfAll",
            "Reaper",
            "HummingBird",
            "MushroomDrawing",
            "SantaMuerte",
            "Kraken",
            "Mushroom",
        };
    };
    //------------------------------ FLAG BELT
    class SRP_BeltFlag_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Belt Flag";
        descriptionShort = "This small flag attaches to the leather flag belt.";
        model = "Survivalists_Mods\gear\patches\srp_beltflag.p3d";
        itemSize[] = { 2,2 };
        absorbency = 0.89999998;
        ragQuantity = 6;
        inventorySlot[] =
        {
            "SRP_VanillaFlag",
      "SRP_FlagBelt"
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\srp_beltflag_co.paa"
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
                        {1,{""}},
                        {0.69999999,{""}},
                        {0.5,{""}},
                        {0.30000001,{""}},
                        {0,{""}}
                    };
                };
                class GlobalArmor
                {
                    class Projectile
                    {
                        class Health
                        {
                            damage = 0;
                        };
                        class Blood
                        {
                            damage = 0;
                        };
                        class Shock
                        {
                            damage = 0;
                        };
                    };
                    class FragGrenade
                    {
                        class Health
                        {
                            damage = 0;
                        };
                        class Blood
                        {
                            damage = 0;
                        };
                        class Shock
                        {
                            damage = 0;
                        };
                    };
                };
            };
        };
        // class AnimationSources
        // {
        // 	class folded
        // 	{
        // 		source="user";
        // 		animPeriod=0.0099999998;
        // 		initPhase=0;
        // 	};
        // 	class unfolded
        // 	{
        // 		source="user";
        // 		animPeriod=0.0099999998;
        // 		initPhase=1;
        // 	};
        // };
    };
    //------------------------------ FLAG PATCHES
    class SRP_PatchFlag_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Country Flag";
        descriptionShort = "Country Flag Patch";
        model = "Survivalists_Mods\gear\patches\srp_patchflag.p3d";
        itemSize[] = { 2,1 };
        weight = 10;
        inventorySlot[] =
        {
            "Armband",
            "patch_01",
            "patch_02",
            "patch_03",
            "patch_04",
            "SRP_Patch",
            "SRP_PatchMirror",
            "SRP_DisplayHook_PatchArmband",
        };
        hiddenSelections[] =
        {
            "zbytek",
            "armband"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\Afghanistan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Mods\gear\patches\data\srp_patchflag.rvmat",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"
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
                      {1.0,{"Survivalists_Mods\gear\patches\data\srp_patchflag.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
                      {0.7,{"Survivalists_Mods\gear\patches\data\srp_patchflag.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
                      {0.5,{"Survivalists_Mods\gear\patches\data\srp_patchflag_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
                      {0.3,{"Survivalists_Mods\gear\patches\data\srp_patchflag_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
                      {0.0,{"Survivalists_Mods\gear\patches\data\srp_patchflag_destruct.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_destruct.rvmat"}}
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_Mods\gear\patches\srp_patcharmbandflag.p3d";
            female = "Survivalists_Mods\gear\patches\srp_patcharmbandflag_f.p3d";
        };
        class AnimEvents
        {
            class SoundWeapon
            {
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

    class SRP_PatchFlag_StarterKit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Country Flags Kit - Empty Canvas";
        descriptionShort = "An empty cloth patch. Add some thread and elbow grease to sew the finished patch.";
        inventorySlot = "";
        attachments[] =
        {
            "SRP_SewingThread1",
            "SRP_SewingThread2"
        };
    };

    class SRP_PatchLogo_StarterKit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Patch Logo Kit - Empty Canvas";
        descriptionShort = "An empty cloth patch. Add some thread and elbow grease to sew the finished patch.";
        inventorySlot = "";
        attachments[] =
        {
            "SRP_SewingThread1",
            "SRP_SewingThread2"
        };
    };

    class SRP_SingleArmband_StarterKit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Single Armband Kit - Empty Canvas";
        descriptionShort = "An empty cloth armband. Add some thread and elbow grease to sew the finished armband.";
        inventorySlot = "";
        attachments[] =
        {
            "SRP_SewingThread1",
            "SRP_SewingThread2"
        };
    };

    class SRP_DoubleArmband_StarterKit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Double Armband Kit - Empty Canvas";
        descriptionShort = "An empty cloth armband. Add some thread and elbow grease to sew the finished armband.";
        inventorySlot = "";
        attachments[] =
        {
            "SRP_SewingThread1",
            "SRP_SewingThread2"
        };
    };

    class SRP_Armband_Base : Clothing
    {
        scope = 2;
        displayName = "Leather Armband";
        descriptionShort = "A piece of leather fashioned into an armband";
        model = "Survivalists_Mods\gear\patches\SRParmband_g.p3d";
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 30,25 };
        // rotationFlags=16;
        inventorySlot[] =
        {
            "Armband",
            "SRP_DisplayHook_LeatherArmband",
        };
        simulation = "clothing";
        vehicleClass = "Clothing";
        weight = 1000;
        itemSize[] = { 3,2 };
        itemsCargoSize[] = { 3,2 };
        absorbency = 0;
        heatIsolation = 0.80;
        rootClassName = "SRP_Armband";
        colorVariants[] = {
            "Duskar",
            "Cannibal",
            "Cannibal1",
            "StagWorker",
            "Hippy1",
            "Hippy2",
            "Hippy3",
            "Hippy4",
            "Hippy5",
            "Hippy6",
            "Rank1",
            "Rank2",
            "Rank3",
            "Rank4",
            "Rank5",
            "Rank6",
            "Rank7",
            "Ensignia1",
            "Ensignia2",
            "Ensignia3",
            "Ensignia4",
            "Ensignia5",
            "Ensignia6",
            "Professional1",
            "Professional2",
            "NoCyborgs",
            "NoGreens",
            "NoGreens1",
            "NoGreensDark",
            "Skull",
            "SkullDark",
            "NoRome",
            "NoStag",
            "NoTa",
        };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\SRParmband_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Mods\gear\patches\SRParmband_m.p3d";
            female = "Survivalists_Mods\gear\patches\SRParmband_f.p3d";
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
                      {1.0,{"Survivalists_Mods\gear\patches\data\srparmband.rvmat"}},
                      {0.7,{"Survivalists_Mods\gear\patches\data\srparmband.rvmat"}},
                      {0.5,{"Survivalists_Mods\gear\patches\data\srparmband_damage.rvmat"}},
                      {0.3,{"Survivalists_Mods\gear\patches\data\srparmband_damage.rvmat"}},
                      {0.0,{"Survivalists_Mods\gear\patches\data\srparmband_destruct.rvmat"}}
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
                    soundSet = "pickUpPot_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "BallisticHelmet_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    class SRP_DoubleArmband_ColorBase : Clothing
    {
        scope = 0;
        displayName = "$STR_CfgVehicles_Armband_ColorBase0";
        descriptionShort = "$STR_CfgVehicles_Armband_ColorBase1";
        model = "\DZ\characters\tops\armbend_g.p3d";
        inventorySlot[] =
        {
      "Armband",
      "SRP_DisplayHook_DoubleArmband",
        };
        itemInfo[] =
        {
            "Clothing",
            "Armband"
        };
        rotationFlags = 34;
        weight = 80;
        itemSize[] = { 1,2 };
        ragQuantity = 1;
        varWetMax = 1;
        repairCosts[] = { 30,25 };
        repairableWithKits[] = { 5,8 };
        itemsCargoSize[] = { 1,1 };
        absorbency = 0;
        heatIsolation = 0.80;
        attachments[] =
        {
          "SRP_Pin1",
          "SRP_Pin2",
          "Pin1", // Windstrides
          "Pin2",
        };
        hiddenSelections[] =
        {
            "camoGround",
      "camoFemale_big_a", // female selections represent right arms
      "camoFemale_small_a",
      "camoMale_big_a", // male selections represent left arms
      "camoMale_small_a",
        };
        hiddenSelectionsTextures[] =
        {
            "\DZ\characters\tops\data\armbend_big_white_co.paa",
            "\DZ\characters\tops\data\armbend_big_white_co.paa",
            "\DZ\characters\tops\data\armbend_big_white_co.paa",
            "\DZ\characters\tops\data\armbend_big_white_co.paa",
            "\DZ\characters\tops\data\armbend_big_white_co.paa",
        };
        class ClothingTypes
        {
            male = "Survivalists_Mods\gear\patches\srp_doublearmband_m.p3d";
            female = "Survivalists_Mods\gear\patches\srp_doublearmband_f.p3d";
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
                      {1.0,{"DZ\characters\tops\Data\armband_big_a.rvmat"}},
                      {0.7,{"DZ\characters\tops\Data\armband_big_a.rvmat"}},
                      {0.5,{"DZ\characters\tops\Data\armband_big_a_damage.rvmat"}},
                      {0.3,{"DZ\characters\tops\Data\armband_big_a_damage.rvmat"}},
                      {0.0,{"DZ\characters\tops\Data\armband_big_a_destruct.rvmat"}}
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
                    soundSet = "Shirt_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "Shirt_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    //---------------------------- LOGO PATCHES
    class SRP_PatchLogo_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Identifier Patch";
        descriptionShort = "Identifier Patch - comes in a variety of patterns and emblems";
        model = "Survivalists_Mods\gear\patches\srp_patchlogo.p3d";
        itemSize[] = { 2,1 };
        weight = 0;
        color = "base";
        inventorySlot[] =
        {
          "Armband",
          "patch_01",
          "patch_02",
          "patch_03",
          "patch_04",
          "SRP_Patch",
          "SRP_PatchMirror",
          "SRP_DisplayHook_PatchArmband",
        };
        hiddenSelections[] =
        {
          "zbytek",
          "armband"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\patch_a10.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
          "Survivalists_Mods\gear\patches\data\srp_patchlogo.rvmat",
                "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"
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
                      {1.0,{"Survivalists_Mods\gear\patches\data\srp_patchlogo.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
                      {0.7,{"Survivalists_Mods\gear\patches\data\srp_patchlogo.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
                      {0.5,{"Survivalists_Mods\gear\patches\data\srp_patchlogo_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
                      {0.3,{"Survivalists_Mods\gear\patches\data\srp_patchlogo_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
                      {0.0,{"Survivalists_Mods\gear\patches\data\srp_patchlogo_destruct.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_destruct.rvmat"}}
                    };
                };
            };
        };
        class ClothingTypes
        {
            male = "Survivalists_Mods\gear\patches\srp_patcharmbandlogo.p3d";
            female = "Survivalists_Mods\gear\patches\srp_patcharmbandlogo.p3d";
        };
        class AnimEvents
        {
            class SoundWeapon
            {
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

    //------------------------------------- EVENT THINGS
      // -------------------------- CUSTOM STUFF
    class SRP_DoubleArmband_Event_Generic : SRP_DoubleArmband_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
        };
    };
    class Armband_Event_Generic : Armband_ColorBase
    {
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_co.paa",
        };
    };
    class Flag_Event_Generic : Flag_Base
    {
        scope = 2;
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\patches\data\template_flag_event_co.paa" };
    };
    class SRP_PatchFlag_Event_Generic : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Event Participant";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\flagpatch_event_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_Armband_Event_Generic : SRP_Armband_Base
    {
        scope = 2;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\SRParmband_event_co.paa"
        };
    };

    //==================== deprecated remove after update (june19)
    class SRP_DoubleArmband_Event_Espen : SRP_DoubleArmband_ColorBase
    {
        scope = 0;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
        };
    };
    class Armband_Event_Espen : Armband_ColorBase
    {
        scope = 0;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_espen_co.paa",
        };
    };
    class Flag_Event_Espen : Flag_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\patches\data\template_flag_event_espen_co.paa" };
    };
    class SRP_PatchFlag_Event_Espen : SRP_PatchFlag_ColorBase
    {
        scope = 0;
        displayName = "Identifier - Event Participant";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\flagpatch_event_espen_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_Armband_Event_Espen : SRP_Armband_Base
    {
        scope = 0;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\SRParmband_event_espen_co.paa"
        };
    };

    class SRP_DoubleArmband_Event_Stag : SRP_DoubleArmband_ColorBase
    {
        scope = 0;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
        };
    };
    class Armband_Event_Stag : Armband_ColorBase
    {
        scope = 0;
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\template_armbend_event_stag_co.paa",
        };
    };
    class Flag_Event_Stag : Flag_Base
    {
        scope = 0;
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\patches\data\template_flag_event_stag_co.paa" };
    };
    class SRP_PatchFlag_Event_Stag : SRP_PatchFlag_ColorBase
    {
        scope = 0;
        displayName = "Identifier - Event Participant";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\flagpatch_event_stag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_Armband_Event_Stag : SRP_Armband_Base
    {
        scope = 0;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\patches\data\SRParmband_event_stag_co.paa"
        };
    };

};
