class CfgPatches
{
    class Survivalists_MainMenu
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Gear_Consumables",
            "DZ_Vehicles_Wheeled",
            "DZ_Structures_Residential",
            "DZ_Sounds_Effects",
            "DZ_Sounds_Weapons",
            "Dressupbox"
        };
    };
};
class CfgMods
{
    class Survivalists_MainMenu
    {
        dir = "Survivalists_MainMenu";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "Survivalists_MainMenu";
        credits = "";
        author = "Survivalists|Orin|Tree";
        authorID = "0";
        version = "0.1";
        extra = 0;
        type = "mod";
        dependencies[] = { "Game","World","Mission" };
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = { "Survivalists_MainMenu/scripts/3_game" };
            };
            class worldScriptModule
            {
                value = "";
                files[] = { "Survivalists_MainMenu/scripts/4_world" };
            };
            class missionScriptModule
            {
                value = "";
                files[] = { "Survivalists_MainMenu/scripts/5_mission" };
            };
        };
    };
};
class cfgCharacterScenes
{
    class Deerisle
    {
        class loc1
        {
            camPos[] = { 5888.04,8.3013,13552.5 };
            playerPos[] = { 5888.87,6.48,13556.3 };
            playerDir[] = { "-166.5 0.000000 0.000000" };
            fov = 0.55;
        };
    };
};
class cfgCharacterCreation
{
    // format = "Survivor%1_%2";
    // gender[] = { "Female","Male" };
    // personalityMale[] = { "Mirek","Boris","Cyril","Denis","Elias","Francis","Guo","Hassan","Indar","Jose","Kaito","Lewis","Manua","Niki","Oliver","Peter","Quinn","Rolf","Seth","Taiki" };
    // personalityFemale[] = { "Eva","Frida","Gabi","Helga","Irena","Judy","Keiko","Linda","Maria","Naomi","Baty" };
    top[] += {
        "Shirt_BlueCheck",
            "Shirt_BlueCheckBright",
            "Shirt_GreenCheck",
            "Shirt_PlaneBlack",
            "Shirt_RedCheck",
            "Shirt_WhiteCheck",
            "Shirt_PlainDenim",
            "Shirt_PlainGrey",
            "Shirt_PlainBurgandy",
            "Shirt_PlainGrape",
            "Medium_Sleeves_Shirt",
            "Medium_Sleeves_Shirt_Red",
            "Medium_Sleeves_Shirt_Blue",
            "Military_Sweater",
            "Military_Sweater_Red",
            "Military_Sweater_Blue",
            "Military_Sweater_Green",
            "Military_Sweater_White",
            "Military_Sweater_Black",
            "Layered_Shirt_Cheburashka",
            "Layered_Shirt_White",
            "Layered_Shirt_Courage",
            "Layered_Shirt_Lily"
    };
    mask[] += {
        "None",
            "SRP_FacialHairGoatee_Brown",
            "SRP_FacialHairGoatee_LightBrown",
            "SRP_FacialHairGoatee_Black",
            "SRP_FacialHairGoatee_Blonde",
            "SRP_FacialHairGoatee_White",
            "SRP_FacialHairBeard_Brown",
            "SRP_FacialHairBeard_LightBrown",
            "SRP_FacialHairBeard_Black",
            "SRP_FacialHairBeard_Blonde",
            "SRP_FacialHairBeard_White",
            "SRP_FacialHairChops_Brown",
            "SRP_FacialHairChops_LightBrown",
            "SRP_FacialHairChops_Black",
            "SRP_FacialHairChops_Blonde",
            "SRP_FacialHairChops_White"
    };
    bottom[] += {
        "Breeches_Beetcheck",
            "Breeches_Beige",
            "Breeches_Black",
            "Breeches_Blackcheck",
            "Breeches_Blue",
            "Breeches_Browncheck",
            "Breeches_Green",
            "Breeches_Pink",
            "Breeches_Red",
            "Breeches_White",
            "CanvasPants_Beige",
            "CanvasPants_Blue",
            "CanvasPants_Grey",
            "CanvasPants_Red",
            "CanvasPants_Violet",
            "Jeans_Black",
            "Jeans_Blue",
            "Jeans_BlueDark",
            "Jeans_Brown",
            "Jeans_Green",
            "Jeans_Grey",
            "ShortJeans_Black",
            "ShortJeans_Blue",
            "ShortJeans_Brown",
            "ShortJeans_Darkblue",
            "ShortJeans_Green",
            "ShortJeans_Red",
            "TrackSuitPants_Black",
            "TrackSuitPants_Blue",
            "TrackSuitPants_Green",
            "TrackSuitPants_LightBlue",
            "TrackSuitPants_Red"
    };
    shoe[] = {
        "HikingBootsLow_Beige",
        "HikingBootsLow_Black",
        "HikingBootsLow_Blue",
        "HikingBootsLow_Grey",
        "JoggingShoes_Black",
        "JoggingShoes_Blue",
        "JoggingShoes_Red",
        "JoggingShoes_Violet",
        "JoggingShoes_White"
    };
    maleCustom[] = {};
    femaleCustom[] = {};
};
class CfgSoundSets
{
    class Survivalists_MainMenu_1_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_1_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
    class Survivalists_MainMenu_2_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_2_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
    class Survivalists_MainMenu_3_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_3_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
    class Survivalists_MainMenu_4_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_4_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
    class Survivalists_MainMenu_5_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_5_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
    class Survivalists_MainMenu_6_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_6_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
    class Survivalists_MainMenu_7_SoundSet
    {
        soundShaders[] = { "Survivalists_MainMenu_7_SoundShader" };
        volumeFactor = 1;
        frequencyFactor = 1;
        spatial = 0;
    };
};
class CfgSoundShaders
{
    class Survivalists_MainMenu_1_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_1.ogg",1} };
        volume = 0.5;
    };
    class Survivalists_MainMenu_2_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_2.ogg",1} };
        volume = 1;
    };
    class Survivalists_MainMenu_3_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_3.ogg",1} };
        volume = 1;
    };
    class Survivalists_MainMenu_4_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_4.ogg",1} };
        volume = 1;
    };
    class Survivalists_MainMenu_5_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_5.ogg",1} };
        volume = 1;
    };
    class Survivalists_MainMenu_6_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_6.ogg",1} };
        volume = 1;
    };
    class Survivalists_MainMenu_7_SoundShader
    {
        samples[] = { {"Survivalists_MainMenu\sounds\mainmenu_7.ogg",1} };
        volume = 1;
    };
};
