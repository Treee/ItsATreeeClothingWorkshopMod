class CfgPatches
{
    class Survivalists_Characters_Belts
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters",
      "DZ_Characters_Belts",
      "Alv_Tac_Gear_Belt"
        };
    };
};
class CfgVehicles
{
    // class Belt_Base;
    class Clothing;

    //============================== VANILLA OVERRIDE
    class LeatherBelt_ColorBase : Clothing
    {
        rootClassName = "LeatherBelt";
        colorVariants[] =
        {
          "Natural",
          "Beige",
          "Brown",
          "Black",
        };
    };
    //============================== ALEVARIC OVERRIDE
    class AlV_MV_WarBelt_Colorbase : Clothing
    {
        rootClassName = "AlV_MV_WarBelt";
        colorVariants[] =
        {
          "Black",
          "Green",
          "Tan",
        };
    };
    class AlV_MV_DroplegBelt_Colorbase : Clothing
    {
        rootClassName = "AlV_MV_DroplegBelt";
        colorVariants[] =
        {
          "Black"
        };
    };
    class ALV_MV_LeatherBelt_Colorbase : Clothing
    {
        rootClassName = "ALV_MV_LeatherBelt";
        colorVariants[] =
        {
          "Leather"
        };
    };
    class AlV_MV_DroplegBeltSingle_Colorbase : Clothing
    {
        rootClassName = "AlV_MV_DroplegBeltSingle";
        colorVariants[] =
        {
          "Black"
        };
    };
    class AlV_MV_WarBeltDropLeg_Colorbase : Clothing
    {
        rootClassName = "AlV_MV_WarBeltDropLeg";
        colorVariants[] =
        {
          "Black",
          "Green",
          "Tan",
        };
    };
    //============================== CUSTOM STUFF
    class SRP_LegHolster : Clothing
    {
        scope = 2;
        displayName = "Belt and leg holster";
        descriptionShort = "Espen Industries. A form fitting leather belt and leg holster.";
        model = "Survivalists_Characters\belts\legholster_g.p3d";
        attachments[] =
        {
            "Pistol",
      "Belt_Back"
        };
        itemsCargoSize[] = { 5,4 };
        itemSize[] = { 3,1 };
        inventorySlot[] = { "Hips" };
        simulation = "clothing";
        vehicleClass = "Clothing";
        repairableWithKits[] = { 5,2 };
        repairCosts[] = { 30,25 };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\legholster_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Characters\belts\data\legholster.rvmat"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\legholster_m.p3d";
            female = "Survivalists_Characters\belts\legholster_m.p3d";
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Characters\belts\data\legholster.rvmat"}},
            {0.69999999,{"Survivalists_Characters\belts\data\legholster.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\legholster_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\belts\data\legholster_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\legholster_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_PoliceBelt : Clothing
    {
        scope = 2;
        displayName = "Police Belt";
        descriptionShort = "Espen Industries. A well made belt with multiple attachments meant for law enforcement.";
        model = "Survivalists_Characters\belts\policebelt_g.p3d";
        attachments[] =
        {
            "VestHolster",
      "Belt_Left",
      "Belt_Back",
      "WalkieTalkie",
      "Chemlight"
        };
        itemsCargoSize[] = { 3,3 };
        itemSize[] = { 3,1 };
        inventorySlot[] = { "Hips" };
        simulation = "clothing";
        vehicleClass = "Clothing";
        repairableWithKits[] = { 5,2 };
        repairCosts[] = { 30,25 };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\policebelt_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Characters\belts\data\policebelt.rvmat"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\policebelt_m.p3d";
            female = "Survivalists_Characters\belts\policebelt_m.p3d";
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Characters\belts\data\policebelt.rvmat"}},
            {0.69999999,{"Survivalists_Characters\belts\data\policebelt.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\policebelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\belts\data\policebelt_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\policebelt_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_TacticalBelt_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Tactical Belt";
        descriptionShort = "Espen Industries. A military style belt with versatile attachments.";
        model = "Survivalists_Characters\belts\tacticalbelt_g.p3d";
        attachments[] =
        {
            "VestHolster",
      "Belt_Left",
      "Belt_Back",
      "WalkieTalkie",
      "Chemlight",
      "SmallPouch1",
      "SmallPouch2",
      "LargePouch1",
      "LargePouch2"
        };
        inventorySlot[] = { "Hips" };
        itemsCargoSize[] = { 3,1 };
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\tacticalbelt_Tan_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Characters\belts\data\tacticalbelt.rvmat"
        };
        rootClassName = "SRP_TacticalBelt";
        colorVariants[] =
        {
          "Tan",
          "Green",
          "Black"
        };
        vehicleClass = "Clothing";
        simulation = "clothing";
        itemInfo[] =
        {
            "Clothing",
            "Belt"
        };
        weight = 110;
        itemSize[] = { 3,1 };
        absorbency = 0.1;
        heatIsolation = 0;
        repairableWithKits[] = { 3 };
        repairCosts[] = { 25 };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\tacticalbelt_m.p3d";
            female = "Survivalists_Characters\belts\tacticalbelt_m.p3d";
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Characters\belts\data\tacticalbelt.rvmat"}},
            {0.69999999,{"Survivalists_Characters\belts\data\tacticalbelt.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\tacticalbelt_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Elbow_Knee_Pads_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Elbow and Knee pads";
        descriptionShort = "Espen Industries. Elbow and knee pads for maximum protection.";
        model = "Survivalists_Characters\belts\Elbowpads_Kneepads_g.p3d";
        attachments[] = {};
        simulation = "clothing";
        vehicleClass = "Clothing";
        rotationFlags = 16;
        inventorySlot[] =
        {
            "Gloves",
      "Hips",
      "Extra"
        };
        itemInfo[] =
        {
            "Vest",
            "Clothing"
        };
        rootClassName = "SRP_Elbow_Knee_Pads";
        colorVariants[] =
        {
          "Green",
          "Tan",
          "Black"
        };
        weight = 3000;
        itemSize[] = { 2,3 };
        quickBarBonus = 2;
        absorbency = 0;
        heatIsolation = 0.80;
        repairableWithKits[] = { 3 };
        repairCosts[] = { 25 };
        hiddenSelections[] =
        {
            "zbytek",
      "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\Pads_Green_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\Elbowpads_Kneepads_m.p3d";
            female = "Survivalists_Characters\belts\Elbowpads_Kneepads_m.p3d";
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
                        {1.0,	{	"Survivalists_Characters\belts\data\Pads.rvmat"}},
                        {0.7,	{	"Survivalists_Characters\belts\data\Pads.rvmat"}},
                        {0.5,	{	"Survivalists_Characters\belts\data\Pads_damage.rvmat"}},
                        {0.3,	{	"Survivalists_Characters\belts\data\Pads_damage.rvmat"}},
                        {0.0,	{	"Survivalists_Characters\belts\data\Pads_destruct.rvmat"}}
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
                    soundSet = "SmershVest_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "SmershVest_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_Military_Belt_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Military Belt";
        descriptionShort = "Espen Industries. A military style belt with versatile attachments.";
        model = "Survivalists_Characters\belts\Military_Belt_g.p3d";
        attachments[] =
        {
      "SRP_KatanaSheath",
      "SRP_MasterSwordSheath",
      "SRP_GladiusSword",
      "SRP_GladiusSwordSheath",
            "Belt_Left",
            "Chemlight",
            "Belt_Back",
            "Belt_Right",
            "WalkieTalkie",
      "LargePouch1"
        };
        inventorySlot[] = { "Hips" };
        itemsCargoSize[] = { 0,0 };
        itemSize[] = { 2,3 };
        quickBarBonus = 2;
        absorbency = 0;
        heatIsolation = 0.80;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\Military_Belt_Tan_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            "Survivalists_Characters\belts\data\Military_belt.rvmat"
        };
        rootClassName = "SRP_Military_Belt";
        colorVariants[] =
        {
          "Green",
          "Tan",
          "Black"
        };
        repairableWithKits[] = { 5,2 };
        repairCosts[] = { 30,25 };
        vehicleClass = "Clothing";
        simulation = "clothing";
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\Military_Belt.p3d";
            female = "Survivalists_Characters\belts\Military_Belt.p3d";
        };
        class GUIInventoryAttachmentsProps
        {
            class Attachments
            {
                name = "$STR_attachment_accessories";
                description = "";
                attachmentSlots[] =
                {
          "Belt_Left",
          "Chemlight",
          "Belt_Back",
          "Belt_Right",
          "WalkieTalkie",
          "LargePouch1"
                };
                icon = "set:dayz_inventory image:cat_fp_tents";
                view_index = 1;
            };
            class WeaponSheaths
            {
                name = "Weapon Sheaths";
                description = "";
                attachmentSlots[] =
                {
          "SRP_KatanaSheath",
          "SRP_MasterSwordSheath",
          "SRP_GladiusSword",
          "SRP_GladiusSwordSheath"
                };
                icon = "set:dayz_inventory image:cat_fp_tents";
                view_index = 2;
            };
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 130;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Characters\belts\data\Military_belt.rvmat"}},
            {0.7,{"Survivalists_Characters\belts\data\Military_belt.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\Military_belt_damage.rvmat"}},
            {0.3,{"Survivalists_Characters\belts\data\Military_belt_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\Military_belt_destruct.rvmat"}}
                    };
                };
            };
        };
    };
    class SRP_Knife_Sheath_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Knife Sheath";
        descriptionShort = "Espen Industries. A military style knife sheath.";
        model = "Survivalists_Characters\belts\Knife_Sheath.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\sheath_Tan_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
          "Survivalists_Characters\belts\data\sheath.rvmat"
        };
        rootClassName = "SRP_Knife_Sheath";
        colorVariants[] =
        {
          "Green",
          "Tan",
          "Black"
        };
        inventorySlot[] =
        {
            "Belt_Back"
        };
        weight = 110;
        itemSize[] = { 3,1 };
        attachments[] =
        {
            "Knife"
        };
        simulation = "clothing";
        vehicleClass = "Clothing";
        absorbency = 0.1;
        heatIsolation = 0;
        repairableWithKits[] = { 3 };
        repairCosts[] = { 25 };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\Knife_Sheath.p3d";
            female = "Survivalists_Characters\belts\Knife_Sheath.p3d";
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
                      {1.0,{"Survivalists_Characters\belts\data\sheath.rvmat"}},
                      {0.7,{"Survivalists_Characters\belts\data\sheath.rvmat"}},
                      {0.5,{"Survivalists_Characters\belts\data\sheath_damage.rvmat"}},
                      {0.3,{"Survivalists_Characters\belts\data\sheath_damage.rvmat"}},
                      {0.0,{"Survivalists_Characters\belts\data\sheath_destruct.rvmat"}}
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
                    soundSet = "WorkingGloves_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "WorkingGloves_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_Car_WoodenDerby : Clothing
    {
        scope = 2;
        displayName = "Wooden Derby Car";
        descriptionShort = "Espen Industries. A prop car made to satisfy shareholders.";
        model = "Survivalists_Characters\belts\srp_carwoodenderby_g.p3d";
        attachments[] = {};
        inventorySlot[] +=
        {
            "Extra"
        };
        itemInfo[] =
        {
            "Clothing",
            "Hips"
        };
        weight = 12000;
        itemSize[] = { 4,4 };
        itemsCargoSize[] = { 0,0 };
        absorbency = 0;
        heatIsolation = 0.80;
        repairableWithKits[] = { 3 };
        repairCosts[] = { 25 };
        simulation = "clothing";
        vehicleClass = "Clothing";
        hiddenSelections[] =
        {
            "zbytek",
      "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\srp_woodencar_co.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\srp_carwoodenderby_m.p3d";
            female = "Survivalists_Characters\belts\srp_carwoodenderby_m.p3d";
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
                        {1.0,	{	"Survivalists_Characters\belts\data\srp_woodencar.rvmat"}},
                        {0.7,	{	"Survivalists_Characters\belts\data\srp_woodencar.rvmat"}},
                        {0.5,	{	"Survivalists_Characters\belts\data\srp_woodencar_damage.rvmat"}},
                        {0.3,	{	"Survivalists_Characters\belts\data\srp_woodencar_damage.rvmat"}},
                        {0.0,	{	"Survivalists_Characters\belts\data\srp_woodencar_destruct.rvmat"}}
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
                    soundSet = "SmershVest_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "SmershVest_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_Car_WoodenDerby_Metal : SRP_Car_WoodenDerby
    {
        scope = 2;
        displayName = "Metal Derby Car";
        model = "Survivalists_Characters\belts\srp_carmetalderby_g.p3d";
        hiddenSelections[] =
        {
            "zbytek",
      "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\srp_carmetalderby_co.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\srp_carmetalderby_m.p3d";
            female = "Survivalists_Characters\belts\srp_carmetalderby_m.p3d";
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
                        {1.0,{"Survivalists_Characters\belts\data\srp_carmetalderby.rvmat"}},
                        {0.7,{"Survivalists_Characters\belts\data\srp_carmetalderby.rvmat"}},
                        {0.5,{"Survivalists_Characters\belts\data\srp_carmetalderby_damage.rvmat"}},
                        {0.3,{"Survivalists_Characters\belts\data\srp_carmetalderby_damage.rvmat"}},
                        {0.0,{"Survivalists_Characters\belts\data\srp_carmetalderby_destruct.rvmat"}}
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
                    soundSet = "SmershVest_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "SmershVest_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };
    class SRP_Pouch_Belt : Clothing
    {
        scope = 2;
        displayName = "Leather Belt";
        descriptionShort = "Espen Industries. An old leather belt with pouches attached.";
        model = "Survivalists_Characters\belts\Leatherpouch_g.p3d";
        attachments[] =
        {
            "WalkieTalkie",
            "Hatchet",
            "belt_left"
        };
        inventorySlot[] = { "Hips" };
        simulation = "clothing";
        vehicleClass = "Clothing";
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 30,25 };
        weight = 1000;
        itemSize[] = { 3,2 };
        itemsCargoSize[] = { 5,6 };
        absorbency = 0;
        heatIsolation = 0.80;
        hiddenSelections[] =
        {
            "zbytek",
      "pouch"
        };
        hiddenSelectionsTextures[] =
        {
      "Survivalists_Characters\belts\data\Leatherpouchbase_co.paa",
            "Survivalists_Characters\belts\data\Leatherpouch_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\Leatherpouch_m.p3d";
            female = "Survivalists_Characters\belts\Leatherpouch_f.p3d";
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
                        {1.0,{"Survivalists_Characters\belts\data\Leatherpouchbase.rvmat","Survivalists_Characters\belts\data\Leatherpouch.rvmat"}},
            {0.69999999,{"Survivalists_Characters\belts\data\Leatherpouchbase.rvmat","Survivalists_Characters\belts\data\Leatherpouch.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\Leatherpouchbase_damage.rvmat","Survivalists_Characters\belts\data\Leatherpouch_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\belts\data\Leatherpouchbase_damage.rvmat","Survivalists_Characters\belts\data\Leatherpouch_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\Leatherpouchbase_destruct.rvmat","Survivalists_Characters\belts\data\Leatherpouch_destruct.rvmat"}}
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
    class SRP_Holster_Belt : Clothing
    {
        scope = 2;
        displayName = "Leather Belt";
        descriptionShort = "Espen Industries. An old western style belt with a pistol holster.";
        model = "Survivalists_Characters\belts\Holster_Belt_g.p3d";
        attachments[] =
        {
            "Pistol",
            "belt_left",
      "Belt_Back"
        };
        inventorySlot[] = { "Hips" };
        simulation = "clothing";
        vehicleClass = "Clothing";
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 30,25 };
        rotationFlags = 4;
        weight = 1000;
        itemSize[] = { 3,2 };
        itemsCargoSize[] = { 4,6 };
        absorbency = 0;
        heatIsolation = 0.80;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
      "Survivalists_Characters\belts\data\Belt_Holster_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\Holster_Belt_m.p3d";
            female = "Survivalists_Characters\belts\Holster_Belt_f.p3d";
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
                        {1.0,{"Survivalists_Characters\belts\data\Belt_Holster.rvmat"}},
            {0.69999999,{"Survivalists_Characters\belts\data\Belt_Holster.rvmat"}},
            {0.5,{"Survivalists_Characters\belts\data\Belt_Holster_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\belts\data\Belt_Holster_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\belts\data\Belt_Holster_destruct.rvmat"}}
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
    class SRP_TacticalHolster_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Drop leg Holster";
        descriptionShort = "An Espen Industries branded drop leg holster.";
        model = "Survivalists_Characters\belts\SRP_Tactical_Holster_Belt_g.p3d";
        attachments[] =
        {
            "Belt_Back",
            "Belt_Right",
            "Belt_Left"
        };
        inventorySlot[] = { "Hips" };
        simulation = "clothing";
        vehicleClass = "Clothing";
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 30,25 };
        weight = 1000;
        itemSize[] = { 3,2 };
        itemsCargoSize[] = { 4,5 };
        absorbency = 0;
        heatIsolation = 0.60000001;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\SRP_Tactical_Holster_Belt_m.p3d";
            female = "Survivalists_Characters\belts\SRP_Tactical_Holster_Belt_f.p3d";
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
                        {1,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt.rvmat"}},
                        {0.69999999,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt.rvmat"}},
                        {0.5,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_damage.rvmat"}},
                        {0,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_destruct.rvmat"}}
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
    class SRP_DualTacticalHolster_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Double drop leg Holster";
        descriptionShort = "An Espen Industries branded drop leg holster combined with another to fit on both legs.";
        model = "Survivalists_Characters\belts\SRP_Tactical_Holster_Belt_g.p3d";
        attachments[] =
        {
          "Belt_Back",
          "Belt_Right",
          "Belt_Left",
          "LargePouch1"
        };
        inventorySlot[] = { "Hips" };
        simulation = "clothing";
        vehicleClass = "Clothing";
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 30,25 };
        weight = 1000;
        itemSize[] = { 3,2 };
        itemsCargoSize[] = { 5,5 };
        absorbency = 0;
        heatIsolation = 0.60001;
        hiddenSelections[] =
        {
          "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\SRP_Tactical_Dual_Belt_m.p3d";
            female = "Survivalists_Characters\belts\SRP_Tactical_Dual_Belt_m.p3d";
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
                      {1,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt.rvmat" }},
                      {0.69999999,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt.rvmat"}},
                      {0.5,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_damage.rvmat"}},
                      {0.30000001,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_damage.rvmat"}},
                      {0,{"Survivalists_Characters\belts\data\SRP_Tactical_Holster_Belt_destruct.rvmat"}}
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
    class SRP_FlagBelt_ColorBase : Clothing
    {
        scope = 0;
        displayName = "Battle Standard Belt";
        descriptionShort = "A leather belt with an attachment for a flag.";
        model = "Survivalists_Characters\belts\srp_flagbelt_g.p3d";
        attachments[] = { "SRP_VanillaFlag", "SRP_FlagBelt" };
        inventorySlot[] +=
        {
            "Extra",
                "Hips"
        };
        itemInfo[] =
        {
            "Clothing",
            "Hips"
        };
        weight = 12000;
        itemSize[] = { 2,4 };
        itemsCargoSize[] = { 1,2 };
        absorbency = 0;
        heatIsolation = 0.40;
        repairableWithKits[] = { 3 };
        repairCosts[] = { 25 };
        simulation = "clothing";
        vehicleClass = "Clothing";
        hiddenSelections[] =
        {
            "zbytek",
      "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\belts\data\srp_flagbelt_co.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\belts\srp_flagbelt_m.p3d";
            female = "Survivalists_Characters\belts\srp_flagbelt_m.p3d";
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
                        {1.0,	{	"Survivalists_Characters\belts\data\srp_flagbelt.rvmat"}},
                        {0.7,	{	"Survivalists_Characters\belts\data\srp_flagbelt.rvmat"}},
                        {0.5,	{	"Survivalists_Characters\belts\data\srp_flagbelt_damage.rvmat"}},
                        {0.3,	{	"Survivalists_Characters\belts\data\srp_flagbelt_damage.rvmat"}},
                        {0.0,	{	"Survivalists_Characters\belts\data\srp_flagbelt_destruct.rvmat"}}
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
                    soundSet = "SmershVest_pickup_SoundSet";
                    id = 797;
                };
                class drop
                {
                    soundset = "SmershVest_drop_SoundSet";
                    id = 898;
                };
            };
        };
    };

    //============================== END
};