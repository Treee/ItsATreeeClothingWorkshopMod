class CfgPatches
{
    class Survivalists_Characters_Gloves
    {
        units[] = {	};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Characters",
            "DZ_Characters_Gloves",
            "Fingerless_Gloves"
        };
    };
};
class CfgVehicles
{
    // class Gloves_Base;
    class Clothing;
    class MeleeDamage;
    //-------------------------------------BASE GAME OVERRIDE
    class WorkingGloves_ColorBase : Clothing
    {
        itemSize[] = { 1,2 };
        rootClassName = "WorkingGloves";
        colorVariants[] =
        {
          "Black",
          "Beige",
          "Brown",
          "Yellow",
          "White",
          "Red"
        };
    };
    class HandsCover_Improvised : Clothing
    {
        itemSize[] = { 1,2 };
        rootClassName = "HandsCover_Improvised";
        colorVariants[] =
        {
          "Green",
          "Black",
          "Orange",
          "Blue",
          "Red",
        };
    };
    class TacticalGloves_ColorBase : Clothing
    {
        itemSize[] = { 1,2 };
        rootClassName = "TacticalGloves";
        colorVariants[] =
        {
          "Black",
          "Beige",
          "Green",
          "MTP",
          "ATAC",
          "ATACSFG",
          "USNAOR1",
          "USNAOR2",
          "SURPAT",
          "MARPATWinter",
          "EMP6",
        };
    };
    class NBCGloves_ColorBase : Clothing
    {
        heatIsolation = 0.8;
        repairableWithKits[] = { 5,6 }; // duct tape and repair kit
        itemSize[] = { 1,2 };
        class Protection
        {
            biological = 1;
        };
        rootClassName = "NBCGloves";
        colorVariants[] =
        {
          "Blue",
          "Gray",
          "Yellow",
          "White",
        };
    };
    class SurgicalGloves_ColorBase : Clothing
    {
        rootClassName = "SurgicalGloves";
        colorVariants[] =
        {
          "Blue",
          "LightBlue",
          "Green",
          "White",
          "SkyBlue",
          "Coal",
          "Lime",
          "LightGreen",
          "Orange",
          "Pink",
          "Purple",
          "Red",
          "Yellow"
        };
    };
    class LeatherGloves_ColorBase : Clothing
    {
        rootClassName = "LeatherGloves";
        itemSize[] = { 1,2 };
        colorVariants[] =
        {
          "Natural",
          "Beige",
          "Black",
          "Brown",
          "Choco",
          "Lime",
          "Orange",
          "Pink",
          "Purple",
          "Storm",
          "Yellow",
        };
    };
    class OMNOGloves_ColorBase : Clothing
    {
        rootClassName = "OMNOGloves";
        itemSize[] = { 1,2 };
        colorVariants[] =
        {
          "Gray",
          "Brown",
          "Green",
          "Black"
        };
    };
    class WoolGloves_ColorBase : Clothing
    {
        rootClassName = "WoolGloves";
        itemSize[] = { 1,2 };
        colorVariants[] =
        {
          "Black",
          "Green",
          "Tan",
          "White"
        };
    };
    class WoolGlovesFingerless_ColorBase : Clothing
    {
        rootClassName = "WoolGlovesFingerless";
        itemSize[] = { 1,2 };
        colorVariants[] =
        {
          "Black",
          "Green",
          "Tan",
          "White"
        };
    };
    class PaddedGloves_ColorBase : Clothing
    {
        rootClassName = "PaddedGloves";
        itemSize[] = { 1,2 };
        colorVariants[] =
        {
          "Brown",
          "Beige",
          "Threat"
        };
    };
    //-------------------------------------MODDED OVERRIDE
    class Fingerless_Gloves : WorkingGloves_ColorBase
    {
        rootClassName = "Fingerless_Gloves";
        colorVariants[] =
        {
          "Brown"
        };
    };
    class Fingerless_Gloves_Wool : Fingerless_Gloves
    {
        rootClassName = "Fingerless_Gloves_Wool";
        colorVariants[] =
        {
          "Grey",
          "Black"
        };
    };
    //====================================== CUSTOM STUFF
    class MeleeStunHit : MeleeDamage
    {
        affectSkeleton = 1.4;
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 1;
            class Health
            {
                damage = 2;
            };
            class Blood
            {
                damage = 0;
            };
            class Shock
            {
                damage = 20;
            };
        };
        soundGroundSoft1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_01",
            0.5,
            1,
            60
        };
        soundGroundSoft2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_02",
            0.5,
            1,
            60
        };
        soundGroundSoft3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_03",
            0.5,
            1,
            60
        };
        soundGroundSoft4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_04",
            0.5,
            1,
            60
        };
        soundGroundSoft5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_05",
            0.5,
            1,
            60
        };
        soundGroundSoft6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_06",
            0.5,
            1,
            60
        };
        soundGroundSoft7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_07",
            0.5,
            1,
            60
        };
        soundGroundSoft8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_08",
            0.5,
            1,
            60
        };
        soundGroundHard1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_01",
            0.5,
            1,
            80
        };
        soundGroundHard2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_02",
            0.5,
            1,
            80
        };
        soundGroundHard3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_03",
            0.5,
            1,
            80
        };
        soundGroundHard4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_04",
            0.5,
            1,
            80
        };
        soundGroundHard5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_05",
            0.5,
            1,
            80
        };
        soundGroundHard6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_06",
            0.5,
            1,
            80
        };
        soundGroundHard7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_07",
            0.5,
            1,
            80
        };
        soundGroundHard8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_08",
            0.5,
            1,
            80
        };
        soundMetal1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_01",
            0.5,
            1,
            80
        };
        soundMetal2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_02",
            0.5,
            1,
            80
        };
        soundMetal3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_03",
            0.5,
            1,
            80
        };
        soundMetal4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_04",
            0.5,
            1,
            80
        };
        soundMetal5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_05",
            0.5,
            1,
            80
        };
        soundMetal6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_06",
            0.5,
            1,
            80
        };
        soundMetal7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_07",
            0.5,
            1,
            80
        };
        soundMetal8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_08",
            0.5,
            1,
            80
        };
        soundHitGlass1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_01",
            0.5,
            1,
            100
        };
        soundHitGlass2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_02",
            0.5,
            1,
            100
        };
        soundHitGlass3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_03",
            0.5,
            1,
            100
        };
        soundHitGlass4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_04",
            0.5,
            1,
            100
        };
        soundHitGlass5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_05",
            0.5,
            1,
            100
        };
        soundHitGlass6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_06",
            0.5,
            1,
            100
        };
        soundGlassArmored1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_01",
            0.5,
            1,
            60
        };
        soundGlassArmored2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_02",
            0.5,
            1,
            60
        };
        soundGlassArmored3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_03",
            0.5,
            1,
            60
        };
        soundGlassArmored4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_04",
            0.5,
            1,
            60
        };
        soundGlassArmored5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_05",
            0.5,
            1,
            60
        };
        soundGlassArmored6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_06",
            0.5,
            1,
            60
        };
        soundVehiclePlate1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_01",
            0.5,
            1,
            80
        };
        soundVehiclePlate2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_02",
            0.5,
            1,
            80
        };
        soundVehiclePlate3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_03",
            0.5,
            1,
            80
        };
        soundVehiclePlate4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_04",
            0.5,
            1,
            80
        };
        soundVehiclePlate5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_05",
            0.5,
            1,
            80
        };
        soundVehiclePlate6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_06",
            0.5,
            1,
            80
        };
        soundVehiclePlate7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_07",
            0.5,
            1,
            80
        };
        soundVehiclePlate8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_08",
            0.5,
            1,
            80
        };
        soundWood1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_01",
            0.5,
            1,
            80
        };
        soundWood2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_02",
            0.5,
            1,
            80
        };
        soundWood3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_03",
            0.5,
            1,
            80
        };
        soundWood4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_04",
            0.5,
            1,
            80
        };
        soundWood5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_05",
            0.5,
            1,
            80
        };
        soundWood6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_06",
            0.5,
            1,
            80
        };
        soundWood7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_07",
            0.5,
            1,
            80
        };
        soundWood8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_08",
            0.5,
            1,
            80
        };
        soundHitBody1[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_1",
            0.56234133,
            1,
            60
        };
        soundHitBody2[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_2",
            0.56234133,
            1,
            60
        };
        soundHitBody3[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_3",
            0.56234133,
            1,
            60
        };
        soundHitBody4[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_4",
            0.56234133,
            1,
            60
        };
        soundHitBody5[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_5",
            0.56234133,
            1,
            60
        };
        soundHitBody6[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_light_6",
            0.56234133,
            1,
            60
        };
        soundHitBuilding1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_01",
            0.5,
            1,
            60
        };
        soundHitBuilding2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_02",
            0.5,
            1,
            60
        };
        soundHitBuilding3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_03",
            0.5,
            1,
            60
        };
        soundHitBuilding4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_04",
            0.5,
            1,
            60
        };
        soundHitBuilding5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_05",
            0.5,
            1,
            60
        };
        soundHitBuilding6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_06",
            0.5,
            1,
            60
        };
        soundHitBuilding7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_07",
            0.5,
            1,
            60
        };
        soundHitBuilding8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_08",
            0.5,
            1,
            60
        };
        soundHitFoliage1[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_01",
            0.5,
            1,
            20
        };
        soundHitFoliage2[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_02",
            0.5,
            1,
            20
        };
        soundHitFoliage3[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_03",
            0.5,
            1,
            20
        };
        soundHitFoliage4[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_04",
            0.5,
            1,
            20
        };
        soundPlastic1[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_01",
            0.5,
            1,
            70
        };
        soundPlastic2[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_02",
            0.5,
            1,
            70
        };
        soundPlastic3[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_03",
            0.5,
            1,
            70
        };
        soundPlastic4[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_04",
            0.5,
            1,
            70
        };
        soundConcrete1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_01",
            0.5,
            1,
            70
        };
        soundConcrete2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_02",
            0.5,
            1,
            70
        };
        soundConcrete3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_03",
            0.5,
            1,
            70
        };
        soundConcrete4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_04",
            0.5,
            1,
            70
        };
        soundConcrete5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_05",
            0.5,
            1,
            70
        };
        soundConcrete6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_06",
            0.5,
            1,
            70
        };
        soundConcrete7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_07",
            0.5,
            1,
            70
        };
        soundConcrete8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_08",
            0.5,
            1,
            70
        };
        soundRubber1[] =
        {
            "",
            0.5,
            1,
            50
        };
        soundRubber2[] =
        {
            "",
            0.5,
            1,
            50
        };
        soundRubber3[] =
        {
            "",
            0.5,
            1,
            50
        };
        soundRubber4[] =
        {
            "",
            0.5,
            1,
            50
        };
        soundWater1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_water_hit_01",
            0.5,
            1,
            40
        };
        soundWater2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_water_hit_02",
            0.5,
            1,
            40
        };
        soundWater3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_water_hit_03",
            0.5,
            1,
            40
        };
        hitGroundSoft[] =
        {
            "soundGroundSoft1",
            0.2,
            "soundGroundSoft2",
            0.2,
            "soundGroundSoft3",
            0.1,
            "soundGroundSoft4",
            0.1,
            "soundGroundSoft5",
            0.1,
            "soundGroundSoft6",
            0.1,
            "soundGroundSoft7",
            0.1,
            "soundGroundSoft8",
            0.1
        };
        hitGroundHard[] =
        {
            "soundGroundHard1",
            0.2,
            "soundGroundHard2",
            0.2,
            "soundGroundHard3",
            0.1,
            "soundGroundHard4",
            0.1,
            "soundGroundHard5",
            0.1,
            "soundGroundHard6",
            0.1,
            "soundGroundHard7",
            0.1,
            "soundGroundHard8",
            0.1
        };
        hitMan[] =
        {
            "soundHitBody1",
            0.16599999,
            "soundHitBody2",
            0.16599999,
            "soundHitBody3",
            0.16599999,
            "soundHitBody4",
            0.16599999,
            "soundHitBody5",
            0.16599999,
            "soundHitBody6",
            0.17
        };
        hitArmor[] =
        {
            "soundVehiclePlate1",
            0.125,
            "soundVehiclePlate2",
            0.125,
            "soundVehiclePlate3",
            0.125,
            "soundVehiclePlate4",
            0.125,
            "soundVehiclePlate5",
            0.125,
            "soundVehiclePlate6",
            0.125,
            "soundVehiclePlate7",
            0.125,
            "soundVehiclePlate8",
            0.125
        };
        hitBuilding[] =
        {
            "soundHitBuilding1",
            0.2,
            "soundHitBuilding2",
            0.2,
            "soundHitBuilding3",
            0.1,
            "soundHitBuilding4",
            0.1,
            "soundHitBuilding5",
            0.1,
            "soundHitBuilding6",
            0.1,
            "soundHitBuilding7",
            0.1,
            "soundHitBuilding8",
            0.1
        };
        hitFoliage[] =
        {
            "soundHitFoliage1",
            0.25,
            "soundHitFoliage2",
            0.25,
            "soundHitFoliage3",
            0.25,
            "soundHitFoliage4",
            0.25
        };
        hitWood[] =
        {
            "soundWood1",
            0.125,
            "soundWood2",
            0.125,
            "soundWood3",
            0.125,
            "soundWood4",
            0.125,
            "soundWood5",
            0.125,
            "soundWood6",
            0.125,
            "soundWood7",
            0.125,
            "soundWood8",
            0.125
        };
        hitGlass[] =
        {
            "soundHitGlass1",
            0.16599999,
            "soundHitGlass2",
            0.16599999,
            "soundHitGlass3",
            0.167,
            "soundHitGlass4",
            0.167,
            "soundHitGlass5",
            0.167,
            "soundHitGlass6",
            0.167
        };
        hitGlassArmored[] =
        {
            "soundGlassArmored1",
            0.16599999,
            "soundGlassArmored2",
            0.16599999,
            "soundGlassArmored3",
            0.167,
            "soundGlassArmored4",
            0.167,
            "soundGlassArmored5",
            0.167,
            "soundGlassArmored6",
            0.167
        };
        hitConcrete[] =
        {
            "soundConcrete1",
            0.125,
            "soundConcrete2",
            0.125,
            "soundConcrete3",
            0.125,
            "soundConcrete4",
            0.125,
            "soundConcrete5",
            0.125,
            "soundConcrete6",
            0.125,
            "soundConcrete7",
            0.125,
            "soundConcrete8",
            0.125
        };
        hitRubber[] =
        {
            "soundRubber1",
            0.25,
            "soundRubber2",
            0.25,
            "soundRubber3",
            0.25,
            "soundRubber4",
            0.25
        };
        hitPlastic[] =
        {
            "soundPlastic1",
            0.25,
            "soundPlastic2",
            0.25,
            "soundPlastic3",
            0.25,
            "soundPlastic4",
            0.25
        };
        hitDefault[] =
        {
            "soundConcrete1",
            0.125,
            "soundConcrete2",
            0.125,
            "soundConcrete3",
            0.125,
            "soundConcrete4",
            0.125,
            "soundConcrete5",
            0.125,
            "soundConcrete6",
            0.125,
            "soundConcrete7",
            0.125,
            "soundConcrete8",
            0.125
        };
        hitMetal[] =
        {
            "soundMetal1",
            0.125,
            "soundMetal2",
            0.125,
            "soundMetal3",
            0.125,
            "soundMetal4",
            0.125,
            "soundMetal5",
            0.125,
            "soundMetal6",
            0.125,
            "soundMetal7",
            0.125,
            "soundMetal8",
            0.125
        };
        hitMetalplate[] =
        {
            "soundVehiclePlate1",
            0.125,
            "soundVehiclePlate2",
            0.125,
            "soundVehiclePlate3",
            0.125,
            "soundVehiclePlate4",
            0.125,
            "soundVehiclePlate5",
            0.125,
            "soundVehiclePlate6",
            0.125,
            "soundVehiclePlate7",
            0.125,
            "soundVehiclePlate8",
            0.125
        };
        hitWater[] =
        {
            "soundWater1",
            0.333,
            "soundWater2",
            0.333,
            "soundWater3",
            0.333
        };
    };
    class MeleeStunHit_Heavy : MeleeStunHit
    {
        hitAnimation = 1;
        class DamageApplied
        {
            type = "Melee";
            bleedThreshold = 1;
            class Health
            {
                damage = 5;
            };
            class Blood
            {
                damage = 0;
            };
            class Shock
            {
                damage = 50;
            };
        };
        soundGroundSoft1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_01",
            1,
            1,
            60
        };
        soundGroundSoft2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_02",
            1,
            1,
            60
        };
        soundGroundSoft3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_03",
            1,
            1,
            60
        };
        soundGroundSoft4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_04",
            1,
            1,
            60
        };
        soundGroundSoft5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_05",
            1,
            1,
            60
        };
        soundGroundSoft6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_06",
            1,
            1,
            60
        };
        soundGroundSoft7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_07",
            1,
            1,
            60
        };
        soundGroundSoft8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_dirt_hit_08",
            1,
            1,
            60
        };
        soundGroundHard1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_01",
            1,
            1,
            80
        };
        soundGroundHard2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_02",
            1,
            1,
            80
        };
        soundGroundHard3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_03",
            1,
            1,
            80
        };
        soundGroundHard4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_04",
            1,
            1,
            80
        };
        soundGroundHard5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_05",
            1,
            1,
            80
        };
        soundGroundHard6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_06",
            1,
            1,
            80
        };
        soundGroundHard7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_07",
            1,
            1,
            80
        };
        soundGroundHard8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_default_hit_08",
            1,
            1,
            80
        };
        soundMetal1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_01",
            1,
            1,
            80
        };
        soundMetal2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_02",
            1,
            1,
            80
        };
        soundMetal3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_03",
            1,
            1,
            80
        };
        soundMetal4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_04",
            1,
            1,
            80
        };
        soundMetal5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_05",
            1,
            1,
            80
        };
        soundMetal6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_06",
            1,
            1,
            80
        };
        soundMetal7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_07",
            1,
            1,
            80
        };
        soundMetal8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_08",
            1,
            1,
            80
        };
        soundHitGlass1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_01",
            1,
            1,
            100
        };
        soundHitGlass2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_02",
            1,
            1,
            100
        };
        soundHitGlass3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_03",
            1,
            1,
            100
        };
        soundHitGlass4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_04",
            1,
            1,
            100
        };
        soundHitGlass5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_05",
            1,
            1,
            100
        };
        soundHitGlass6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_glass_hit_06",
            1,
            1,
            100
        };
        soundGlassArmored1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_01",
            1,
            1,
            60
        };
        soundGlassArmored2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_02",
            1,
            1,
            60
        };
        soundGlassArmored3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_03",
            1,
            1,
            60
        };
        soundGlassArmored4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_04",
            1,
            1,
            60
        };
        soundGlassArmored5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_05",
            1,
            1,
            60
        };
        soundGlassArmored6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_armored_glass_hit_06",
            1,
            1,
            60
        };
        soundVehiclePlate1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_01",
            1,
            1,
            80
        };
        soundVehiclePlate2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_02",
            1,
            1,
            80
        };
        soundVehiclePlate3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_03",
            1,
            1,
            80
        };
        soundVehiclePlate4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_04",
            1,
            1,
            80
        };
        soundVehiclePlate5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_05",
            1,
            1,
            80
        };
        soundVehiclePlate6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_06",
            1,
            1,
            80
        };
        soundVehiclePlate7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_07",
            1,
            1,
            80
        };
        soundVehiclePlate8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_metal_hit_08",
            1,
            1,
            80
        };
        soundWood1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_01",
            1,
            1,
            80
        };
        soundWood2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_02",
            1,
            1,
            80
        };
        soundWood3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_03",
            1,
            1,
            80
        };
        soundWood4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_04",
            1,
            1,
            80
        };
        soundWood5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_05",
            1,
            1,
            80
        };
        soundWood6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_06",
            1,
            1,
            80
        };
        soundWood7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_07",
            1,
            1,
            80
        };
        soundWood8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_wood_hit_08",
            1,
            1,
            80
        };
        soundHitBody1[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_1",
            0.56234133,
            1,
            60
        };
        soundHitBody2[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_2",
            0.56234133,
            1,
            60
        };
        soundHitBody3[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_3",
            0.56234133,
            1,
            60
        };
        soundHitBody4[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_4",
            0.56234133,
            1,
            60
        };
        soundHitBody5[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_5",
            0.56234133,
            1,
            60
        };
        soundHitBody6[] =
        {
            "dz\sounds\weapons\hits\melee\shortblade\hit_shortblade_body_heavy_6",
            0.56234133,
            1,
            60
        };
        soundHitBuilding1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_01",
            1,
            1,
            60
        };
        soundHitBuilding2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_02",
            1,
            1,
            60
        };
        soundHitBuilding3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_03",
            1,
            1,
            60
        };
        soundHitBuilding4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_04",
            1,
            1,
            60
        };
        soundHitBuilding5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_05",
            1,
            1,
            60
        };
        soundHitBuilding6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_06",
            1,
            1,
            60
        };
        soundHitBuilding7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_07",
            1,
            1,
            60
        };
        soundHitBuilding8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_08",
            1,
            1,
            60
        };
        soundHitFoliage1[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_01",
            1,
            1,
            20
        };
        soundHitFoliage2[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_02",
            1,
            1,
            20
        };
        soundHitFoliage3[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_03",
            1,
            1,
            20
        };
        soundHitFoliage4[] =
        {
            "dz\sounds\weapons\meleehits\blunt_metal_weapon_hits\blunt_metal_weapon_leaves_hit_04",
            1,
            1,
            20
        };
        soundPlastic1[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_01",
            1,
            1,
            70
        };
        soundPlastic2[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_02",
            1,
            1,
            70
        };
        soundPlastic3[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_03",
            1,
            1,
            70
        };
        soundPlastic4[] =
        {
            "dz\sounds\weapons\meleehits\fist_hits\fist_hard_plastic_hit_04",
            1,
            1,
            70
        };
        soundConcrete1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_01",
            1,
            1,
            70
        };
        soundConcrete2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_02",
            1,
            1,
            70
        };
        soundConcrete3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_03",
            1,
            1,
            70
        };
        soundConcrete4[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_04",
            1,
            1,
            70
        };
        soundConcrete5[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_05",
            1,
            1,
            70
        };
        soundConcrete6[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_06",
            1,
            1,
            70
        };
        soundConcrete7[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_07",
            1,
            1,
            70
        };
        soundConcrete8[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_concrete_hit_08",
            1,
            1,
            70
        };
        soundRubber1[] =
        {
            "",
            1,
            1,
            50
        };
        soundRubber2[] =
        {
            "",
            1,
            1,
            50
        };
        soundRubber3[] =
        {
            "",
            1,
            1,
            50
        };
        soundRubber4[] =
        {
            "",
            1,
            1,
            50
        };
        soundWater1[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_water_hit_01",
            1,
            1,
            40
        };
        soundWater2[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_water_hit_02",
            1,
            1,
            40
        };
        soundWater3[] =
        {
            "dz\sounds\weapons\meleehits\long_blade_weapon_hits\long_blade_weapon_water_hit_03",
            1,
            1,
            40
        };
        hitGroundSoft[] =
        {
            "soundGroundSoft1",
            0.2,
            "soundGroundSoft2",
            0.2,
            "soundGroundSoft3",
            0.1,
            "soundGroundSoft4",
            0.1,
            "soundGroundSoft5",
            0.1,
            "soundGroundSoft6",
            0.1,
            "soundGroundSoft7",
            0.1,
            "soundGroundSoft8",
            0.1
        };
        hitGroundHard[] =
        {
            "soundGroundHard1",
            0.2,
            "soundGroundHard2",
            0.2,
            "soundGroundHard3",
            0.1,
            "soundGroundHard4",
            0.1,
            "soundGroundHard5",
            0.1,
            "soundGroundHard6",
            0.1,
            "soundGroundHard7",
            0.1,
            "soundGroundHard8",
            0.1
        };
        hitMan[] =
        {
            "soundHitBody1",
            0.16599999,
            "soundHitBody2",
            0.16599999,
            "soundHitBody3",
            0.16599999,
            "soundHitBody4",
            0.16599999,
            "soundHitBody5",
            0.16599999,
            "soundHitBody6",
            0.17
        };
        hitArmor[] =
        {
            "soundVehiclePlate1",
            0.125,
            "soundVehiclePlate2",
            0.125,
            "soundVehiclePlate3",
            0.125,
            "soundVehiclePlate4",
            0.125,
            "soundVehiclePlate5",
            0.125,
            "soundVehiclePlate6",
            0.125,
            "soundVehiclePlate7",
            0.125,
            "soundVehiclePlate8",
            0.125
        };
        hitBuilding[] =
        {
            "soundHitBuilding1",
            0.2,
            "soundHitBuilding2",
            0.2,
            "soundHitBuilding3",
            0.1,
            "soundHitBuilding4",
            0.1,
            "soundHitBuilding5",
            0.1,
            "soundHitBuilding6",
            0.1,
            "soundHitBuilding7",
            0.1,
            "soundHitBuilding8",
            0.1
        };
        hitFoliage[] =
        {
            "soundHitFoliage1",
            0.25,
            "soundHitFoliage2",
            0.25,
            "soundHitFoliage3",
            0.25,
            "soundHitFoliage4",
            0.25
        };
        hitWood[] =
        {
            "soundWood1",
            0.125,
            "soundWood2",
            0.125,
            "soundWood3",
            0.125,
            "soundWood4",
            0.125,
            "soundWood5",
            0.125,
            "soundWood6",
            0.125,
            "soundWood7",
            0.125,
            "soundWood8",
            0.125
        };
        hitGlass[] =
        {
            "soundHitGlass1",
            0.16599999,
            "soundHitGlass2",
            0.16599999,
            "soundHitGlass3",
            0.167,
            "soundHitGlass4",
            0.167,
            "soundHitGlass5",
            0.167,
            "soundHitGlass6",
            0.167
        };
        hitGlassArmored[] =
        {
            "soundGlassArmored1",
            0.16599999,
            "soundGlassArmored2",
            0.16599999,
            "soundGlassArmored3",
            0.167,
            "soundGlassArmored4",
            0.167,
            "soundGlassArmored5",
            0.167,
            "soundGlassArmored6",
            0.167
        };
        hitConcrete[] =
        {
            "soundConcrete1",
            0.125,
            "soundConcrete2",
            0.125,
            "soundConcrete3",
            0.125,
            "soundConcrete4",
            0.125,
            "soundConcrete5",
            0.125,
            "soundConcrete6",
            0.125,
            "soundConcrete7",
            0.125,
            "soundConcrete8",
            0.125
        };
        hitRubber[] =
        {
            "soundRubber1",
            0.25,
            "soundRubber2",
            0.25,
            "soundRubber3",
            0.25,
            "soundRubber4",
            0.25
        };
        hitPlastic[] =
        {
            "soundPlastic1",
            0.25,
            "soundPlastic2",
            0.25,
            "soundPlastic3",
            0.25,
            "soundPlastic4",
            0.25
        };
        hitDefault[] =
        {
            "soundConcrete1",
            0.125,
            "soundConcrete2",
            0.125,
            "soundConcrete3",
            0.125,
            "soundConcrete4",
            0.125,
            "soundConcrete5",
            0.125,
            "soundConcrete6",
            0.125,
            "soundConcrete7",
            0.125,
            "soundConcrete8",
            0.125
        };
        hitMetal[] =
        {
            "soundMetal1",
            0.125,
            "soundMetal2",
            0.125,
            "soundMetal3",
            0.125,
            "soundMetal4",
            0.125,
            "soundMetal5",
            0.125,
            "soundMetal6",
            0.125,
            "soundMetal7",
            0.125,
            "soundMetal8",
            0.125
        };
        hitMetalplate[] =
        {
            "soundVehiclePlate1",
            0.125,
            "soundVehiclePlate2",
            0.125,
            "soundVehiclePlate3",
            0.125,
            "soundVehiclePlate4",
            0.125,
            "soundVehiclePlate5",
            0.125,
            "soundVehiclePlate6",
            0.125,
            "soundVehiclePlate7",
            0.125,
            "soundVehiclePlate8",
            0.125
        };
        hitWater[] =
        {
            "soundWater1",
            0.333,
            "soundWater2",
            0.333,
            "soundWater3",
            0.333
        };
    };
    class HookHand : Clothing
    {
        scope = 2;
        displayName = "Metal Hook";
        descriptionShort = "Espen Industries. A simple prosthetic for those that need a hand.";
        model = "Survivalists_Characters\gloves\hook_g.p3d";
        inventorySlot[] = { "Gloves" };
        itemInfo[] = { "Clothing","Gloves" };
        repairableWithKits[] = { 5,8 };
        repairCosts[] = { 30,25 };
        rotationFlags = 16;
        weight = 1000;
        itemSize[] = { 1,2 };
        absorbency = 0;
        heatIsolation = 0.80;
        hiddenSelections[] =
        {
            "zbytek",
            "personality"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Characters\gloves\data\hook_CO.paa"
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\gloves\hook_m.p3d";
            female = "Survivalists_Characters\gloves\hook_f.p3d";
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
            {1.0,{"Survivalists_Characters\gloves\data\hook.rvmat"}},
            {0.69999999,{"Survivalists_Characters\gloves\data\hook.rvmat"}},
            {0.5,{"Survivalists_Characters\gloves\data\hook_damage.rvmat"}},
            {0.30000001,{"Survivalists_Characters\gloves\data\hook_damage.rvmat"}},
            {0.0,{"Survivalists_Characters\gloves\data\hook_destruct.rvmat"}}
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
    class SRP_BoxingGloves_Colorbase : Clothing
    {
        scope = 0;
        displayName = "Boxing Gloves";
        descriptionShort = "Espen Industries. Boxing gloves manufactures to soften even the hardest blows.";
        model = "Survivalists_Characters\gloves\srp_boxinggloves_g.p3d";
        inventorySlot[] = { "Gloves" };
        itemInfo[] = { "Clothing","Gloves" };
        attachments[] =
        {
          "SRP_Patch",
          "SRP_PatchMirror"
        };
        weight = 454;
        itemSize[] = { 1,2 };
        varWetMax = 0.79000002;
        heatIsolation = 0.60000002;
        repairableWithKits[] = { 5,2 };
        repairCosts[] = { 30,25 };
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Characters\gloves\data\srp_boxinggloves_co.paa"
        };
        rootClassName = "SRP_BoxingGloves";
        colorVariants[] =
        {
          "Red",
          "Blue",
          "Green",
          "Grey",
          "Pink",
        };
        class ClothingTypes
        {
            male = "Survivalists_Characters\gloves\srp_boxinggloves_m.p3d";
            female = "Survivalists_Characters\gloves\srp_boxinggloves_m.p3d";
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 15000;
                    healthLevels[] =
                    {
                        {1.0,	{	"Survivalists_Characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.5,	{	"Survivalists_Characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.0,	{	"Survivalists_Characters\gloves\data\srp_boxinggloves.rvmat"}}
                    };
                };
            };
        };
        isMeleeWeapon = 1;
        suicideAnim = "sword";
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeStunHit";
                range = 1.8;
            };
            class Heavy
            {
                ammo = "MeleeStunHit_Heavy";
                range = 1.8;
            };
            class Sprint
            {
                ammo = "MeleeStunHit_Heavy";
                range = 3.7;
            };
        };
    };
    //====================================== END
};