class CfgPatches
{
    class IAT_Core_MusicPlus_Radio
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data", "DZ_Gear_Tools" };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class Cassette;

    class IAT_MusicPlus_CassettePlayer_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Cassette Player";
        descriptionShort = "A electronic device meant for playing cassette tapes.";
        model = "\dz\gear\radio\unitra_wilga.p3d";
        animClass = "Knife";
        weight = 1700;
        itemSize[] = { 2,3 };
        fragility = 0.01;
        absorbency = 0.5;
        simulation = "ItemRadio";
        attachments[] = {
            "BatteryD",
            "IAT_CassetteTape0",
        };
        oldpower = 0;
        repairableWithKits[] = { 7 };
        repairCosts[] = { 25.0 };
        class EnergyManager
        {
            hasIcon = 1;
            autoSwitchOff = 1;
            energyUsagePerSecond = 0.02;
            attachmentAction = 1;
            wetnessExposure = 0.1;
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] = {
                        {1.0,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},
                        {0.7,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},
                        {0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},
                        {0.3,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},
                        {0.0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}
                    };
                };
            };
        };
        class MeleeModes
        {
            class Default
            {
                ammo = "MeleeLightBlunt";
                range = 1.0;
            };
            class Heavy
            {
                ammo = "MeleeLightBlunt_Heavy";
                range = 1.0;
            };
            class Sprint
            {
                ammo = "MeleeLightBlunt_Heavy";
                range = 2.8;
            };
        };
        class Channels
        {
            class Absolute80s
            {
                name = "Absolute 80s";
                url = "http://icecast.timlradio.co.uk/a832.ogg";
            };
            class Absolute90s
            {
                name = "Absolute 90s";
                url = "http://icecast.timlradio.co.uk/a932.ogg";
            };
        };
        soundImpactType = "plastic";
    };

    class IAT_MusicPlus_CassettePlayer_1Track : IAT_MusicPlus_CassettePlayer_ColorBase
    {
        scope = 2;
        displayName = "Single Track Cassette Player";
    };
    class IAT_MusicPlus_CassettePlayer_8Track : IAT_MusicPlus_CassettePlayer_ColorBase
    {
        scope = 2;
        displayName = "8-Track Cassette Player";
        attachments[] +=
        {
            "IAT_CassetteTape1",
                "IAT_CassetteTape2",
                "IAT_CassetteTape3",
                "IAT_CassetteTape4",
                "IAT_CassetteTape5",
                "IAT_CassetteTape6",
                "IAT_CassetteTape7",
        };
    };

    class IAT_MusicPlus_CassetteTape_Base : Cassette
    {
        scope = 0;
        displayName = "Default Cassette";
        descriptionShort = "Cassette Tape with a short recording.";
        weight = 100;
        repairableWithKits[] = { 5,7 };
        repairCosts[] = { 30,25 };
        inventorySlot[] =
        {
            "IAT_CassetteTape0",
            "IAT_CassetteTape1",
            "IAT_CassetteTape2",
            "IAT_CassetteTape3",
            "IAT_CassetteTape4",
            "IAT_CassetteTape5",
            "IAT_CassetteTape6",
            "IAT_CassetteTape7",
            "IAT_CassetteTape8",
            "IAT_CassetteTape9",
            "IAT_CassetteTape10",
            "IAT_CassetteTape11",
            "IAT_CassetteTape12",
            "IAT_CassetteTape13",
            "IAT_CassetteTape14",
            "IAT_CassetteTape15",
            "IAT_CassetteTape16",
            "IAT_CassetteTape17",
            "IAT_CassetteTape18",
            "IAT_CassetteTape19",
            "IAT_CassetteTape20",
            "IAT_CassetteTape21",
            "IAT_CassetteTape22",
            "IAT_CassetteTape23",
            "IAT_CassetteTape24",
            "IAT_CassetteTape25",
            "IAT_CassetteTape26",
            "IAT_CassetteTape27",
            "IAT_CassetteTape28",
            "IAT_CassetteTape29",
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "DZ\gear\tools\data\cassette_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\tools\data\cassette.rvmat"}},
                        {0.69999999,{"DZ\gear\tools\data\cassette.rvmat"}},
                        {0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\tools\data\cassette_damage.rvmat"}},
                        {0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}
                    };
                };
            };
        };
        class CfgCassette {};
    };
    class IAT_MusicPlus_CassetteTape_Kuru1 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 1";
        descriptionShort = "A cassette tape with research notes about kuru; 1 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape1"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru2 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 2";
        descriptionShort = "A cassette tape with research notes about kuru; 2 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape2"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru3 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 3";
        descriptionShort = "A cassette tape with research notes about kuru; 3 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape3"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru4 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 4";
        descriptionShort = "A cassette tape with research notes about kuru; 4 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape4"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru5 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 5";
        descriptionShort = "A cassette tape with research notes about kuru; 5 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape5"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru6 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 6";
        descriptionShort = "A cassette tape with research notes about kuru; 6 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape6"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru7 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 7";
        descriptionShort = "A cassette tape with research notes about kuru; 7 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape7"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru8 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 8";
        descriptionShort = "A cassette tape with research notes about kuru; 8 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape8"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru9 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 9";
        descriptionShort = "A cassette tape with research notes about kuru; 9 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape9"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru10 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 10";
        descriptionShort = "A cassette tape with research notes about kuru; 10 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape10"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru11 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 11";
        descriptionShort = "A cassette tape with research notes about kuru; 11 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape11"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru12 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 12";
        descriptionShort = "A cassette tape with research notes about kuru; 12 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape12"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru13 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 13";
        descriptionShort = "A cassette tape with research notes about kuru; 13 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape13"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru14 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 14";
        descriptionShort = "A cassette tape with research notes about kuru; 14 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape14"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru15 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 15";
        descriptionShort = "A cassette tape with research notes about kuru; 15 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape15"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru16 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 16";
        descriptionShort = "A cassette tape with research notes about kuru; 16 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape16"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru17 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 17";
        descriptionShort = "A cassette tape with research notes about kuru; 17 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape17"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru18 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 18";
        descriptionShort = "A cassette tape with research notes about kuru; 18 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape18"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru19 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 19";
        descriptionShort = "A cassette tape with research notes about kuru; 19 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape19"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru20 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 20";
        descriptionShort = "A cassette tape with research notes about kuru; 20 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape20"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru21 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 21";
        descriptionShort = "A cassette tape with research notes about kuru; 21 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape21"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru22 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 22";
        descriptionShort = "A cassette tape with research notes about kuru; 22 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape22"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru23 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 23";
        descriptionShort = "A cassette tape with research notes about kuru; 23 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape23"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru24 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 24";
        descriptionShort = "A cassette tape with research notes about kuru; 24 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape24"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru25 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 25";
        descriptionShort = "A cassette tape with research notes about kuru; 25 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape25"; };
    };
    class IAT_MusicPlus_CassetteTape_Kuru26 : IAT_MusicPlus_CassetteTape_Base
    {
        scope = 2;
        displayName = "Kuru Research Tape - 26";
        descriptionShort = "A cassette tape with research notes about kuru; 26 of 26.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "IAT\Core\MusicPlus\radio\data\iat_cassette_kuru_co.paa" };
        class CfgCassette { soundSet = "IAT_MusicPlus_SoundSet_Kuru_Tape26"; };
    };
};