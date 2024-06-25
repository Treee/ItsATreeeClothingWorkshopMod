class CfgPatches
{
    class Survivalists_Retextures_Gear_Patches
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "Survivalists_Retextures",
            "Survivalists_Mods_Gear_Patches"
        };
    };
};
class CfgVehicles
{
    class SRP_PatchFlag_ColorBase;
    class SRP_PatchLogo_ColorBase;
    class SRP_Armband_Base;
    class SRP_BeltFlag_ColorBase;

    class SRP_Armband_Duskar : SRP_Armband_Base
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\gear\patches\data\armband\srp_armband_duskar_co.paa" };
    };
    class SRP_Armband_Cannibal : SRP_Armband_Base
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\gear\patches\data\armband\srp_armband_cannibalface_co.paa" };
    };

    class SRP_PatchFlag_DarkQueen : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Dark Queen";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_DarkQueen_Co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mayor : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Mayor";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\MayorPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Blacksmith : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Blacksmith";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BlacksmithPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Carpenter : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Carpenter";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\CarpenterPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Herbologist : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Herbologist";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\HerbologistPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Medic : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Medic";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\MedicPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mutant : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Mutant";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\MutantPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Pirate : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Pirate";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\PiratePatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Resident : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Resident";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\ResidentPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Security : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Security";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SecurityPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tailor : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Tailor";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\TailorPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Trader : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Trader";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\TraderPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Barber : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Barber";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BarberPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Biologist : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Biologist";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BiologistPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Brewer : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Brewer";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BrewerPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Builder : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Builder";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BuilderPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Corporal : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Corporal";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\CplPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Drug : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Drug";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\DrugPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Junker : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Junker";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\JunkerPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Miner : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Miner";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\MinerPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Neurologist : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Neurologist";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\NeurologistPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Physicist : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Physicist";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\PhysicistPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Private : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Private";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\PvtPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Scrapper : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Scrapper";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\ScrapperPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Seaman : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Seaman";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SeamanPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Seaman1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Seaman1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SemenPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Sergeant : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Sergeant";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SgtPatch_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GreenMountain : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - GreenMountain";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\srp_patchflag_GreenMountain_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Chernus : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Identifier - Chernus";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\srp_flagpatch_chernus_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };

    class SRP_BGSDID_Patch : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "A BGSD Identification patch";
        color = "bgsdid";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\srp_flagpatch_BGSD_ID_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_Madhatter_Patch : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "US Navy Patch";
        color = "Madhatter";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\srp_flagpatch_madhatter_co.paa",
            "Survivalists_Retextures\gear\patches\data\srp_wovencloth_Armband_madhatter_co.paa"
        };
    };
    class SRP_PatchFlag_Afghanistan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Afghanistan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Afghanistan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Albania : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Albania";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Albania.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Algeria : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Algeria";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Algeria.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AmericanSamoa : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - American Samoa";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\AmericanSamoa.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Andorra : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Andorra";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Andorra.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Angola : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Angola";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Angola.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Antigua : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Antigua";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Antigua.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Argentina : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Argentina";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Argentina.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Armenia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Armenia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Armenia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Aruba : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Aruba";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Aruba.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Australia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Australia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Australia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Austria : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Austria";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Austria.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Azerbaijan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Azerbaijan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Azerbaijan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Azores : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Azores";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Azores.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bahamas : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bahamas";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bahamas.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bahrain : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bahrain";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bahrain.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bangladesh : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bangladesh";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bangladesh.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Barbados : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Barbados";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Barbados.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Belarus : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Belarus";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Belarus.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Belgium : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Belgium";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Belgium.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Belize : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Belize";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Belize.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Benin : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Benin";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Benin.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bermuda : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bermuda";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bermuda.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bhutan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bhutan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bhutan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bolivia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bolivia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bolivia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bosnia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bosnia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bosnia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Botswana : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Botswana";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Botswana.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Brazil : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Brazil";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Brazil.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BritishVirginIslands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - British Virgin Islands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BritishVirginIslands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BruneiDarussalam : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Brunei Darussalam";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BruneiDarussalam.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bulgaria : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Bulgaria";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Bulgaria.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BurkinaFaso : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Burkina Faso";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\BurkinaFaso.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Burma : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Burma";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Burma.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Burundi : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Burundi";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Burundi.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Cambodia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cambodia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Cambodia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Cameroon : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cameroon";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Cameroon.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Canada : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Canada";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Canada.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CanadaFrench : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - French Canada";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\srp_canadafrench_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CapeVerde : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cape Verde";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\CapeVerde.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CaymanIslands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cayman Islands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\CaymanIslands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Chad : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Chad";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Chad.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Chile : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Chile";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Chile.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_China : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - China";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\China.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Colombia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Colombia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Colombia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Comoros : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Comoros";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Comoros.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CookIslands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cook Islands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\CookIslands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CostaRica : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Costa Rica";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\CostaRica.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Croatia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Croatia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Croatia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Cuba : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cuba";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Cuba.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Curacao : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Curacao";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Curacao.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Cyprus : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Cyprus";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Cyprus.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Czech : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Czech";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Czech.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Denmark : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Denmark";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Denmark.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Djibouti : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Djibouti";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Djibouti.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_DominicanRepublic : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Dominican Republic";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\DominicanRepublic.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_EastTimor : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - East Timor";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\EastTimor.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ecuador : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Ecuador";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Ecuador.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Egypt : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Egypt";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Egypt.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ElSalvador : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - El Salvador";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\ElSalvador.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Eritrea : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Eritrea";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Eritrea.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Estonia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Estonia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Estonia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ethiopia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Ethiopia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Ethiopia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FalklandIslands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Falkland Islands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FalklandIslands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Fiji : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Fiji";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Fiji.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Finland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Finland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Finland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_France : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - France";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\France.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Gabon : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Gabon";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Gabon.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Gambia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Gambia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Gambia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Germany : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Germany";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Germany.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ghana : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Ghana";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Ghana.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Gibraltar : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Gibraltar";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Gibraltar.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Greece : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Greece";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Greece.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Greenland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Greenland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Greenland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Grenada : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Grenada";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Grenada.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Guam : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Guam";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Guam.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Guatemala : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Guatemala";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Guatemala.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Guinea : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Guinea";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Guinea.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Guyana : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Guyana";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Guyana.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GypsyRomani : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Gypsy Romani";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\GypsyRomani.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Haiti : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Haiti";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Haiti.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Honduras : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Honduras";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Honduras.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Hungary : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Hungary";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Hungary.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Iceland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Iceland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Iceland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_India : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - India";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\India.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Indonesia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Indonesia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Indonesia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Iran : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Iran";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Iran.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Iraq : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Iraq";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Iraq.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ireland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Ireland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Ireland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Israel : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Israel";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Israel.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Italy : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Italy";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Italy.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Jamaica : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Jamaica";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Jamaica.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Japan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Japan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Japan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Jordan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Jordan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Jordan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kazakhstan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Kazakhstan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Kazakhstan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kenya : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Kenya";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Kenya.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kiribati : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Kiribati";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Kiribati.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kosovo : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Kosovo";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Kosovo.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kuwait : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Kuwait";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Kuwait.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kyrgyzstan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Kyrgyzstan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Kyrgyzstan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Laos : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Laos";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Laos.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Latvia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Latvia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Latvia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Lebanon : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Lebanon";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Lebanon.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Lesotho : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Lesotho";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Lesotho.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Liberia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Liberia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Liberia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Libya : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Libya";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Libya.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Lithuania : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Lithuania";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Lithuania.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Macau : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Macau";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Macau.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Macedonia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Macedonia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Macedonia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Madagascar : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Madagascar";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Madagascar.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Malawi : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Malawi";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Malawi.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Malaysia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Malaysia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Malaysia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Maldives : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Maldives";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Maldives.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mali : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Mali";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Mali.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Malta : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Malta";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Malta.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MarshallIslands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Marshall Islands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\MarshallIslands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mauritius : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Mauritius";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Mauritius.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mexico : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Mexico";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Mexico.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Micronesia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Micronesia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Micronesia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Moldova : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Moldova";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Moldova.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Monaco : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Monaco";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Monaco.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mongolia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Mongolia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Mongolia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Montenegro : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Montenegro";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Montenegro.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Morocco : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Morocco";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Morocco.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mozambique : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Mozambique";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Mozambique.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Namibia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Namibia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Namibia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Nauru : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Nauru";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Nauru.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Netherlands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Netherlands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Netherlands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_NewZealand : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - New Zealand";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\NewZealand.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Nicaragua : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Nicaragua";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Nicaragua.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Niger : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Niger";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Niger.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Nigeria : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Nigeria";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Nigeria.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_NorthernIreland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Northern Ireland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\NorthernIreland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Norway : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Norway";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Norway.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Oman : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Oman";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Oman.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Pakistan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Pakistan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Pakistan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Palau : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Palau";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Palau.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Palestine : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Palestine";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Palestine.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Panama : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Panama";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Panama.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PapuaNewGuinea : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Papua New Guinea";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\PapuaNewGuinea.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Paraguay : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Paraguay";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Paraguay.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Peru : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Peru";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Peru.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Philippines : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Philippines";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Philippines.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Poland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Poland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Poland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Portugal : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Portugal";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Portugal.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PuertoRico : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Puerto Rico";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\PuertoRico.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Qatar : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Qatar";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Qatar.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Romania : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Romania";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Romania.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Russia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Russia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Russia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Rwanda : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Rwanda";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Rwanda.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Samoa : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Samoa";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Samoa.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SanMarino : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - San Marino";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SanMarino.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SaudiArabia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Saudi Arabia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SaudiArabia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Scotland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Scotland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Scotland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Senegal : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Senegal";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Senegal.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Serbia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Serbia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Serbia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Seychelles : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Seychelles";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Seychelles.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Sicily : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Sicily";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Sicily.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SierraLeone : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Sierra Leone";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SierraLeone.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Singapore : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Singapore";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Singapore.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Slovakia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Slovakia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Slovakia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Slovenia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Slovenia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Slovenia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SolomonIslands : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Solomon Islands";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SolomonIslands.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Somalia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Somalia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Somalia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SouthAfrica : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - South Africa";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SouthAfrica.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SouthKorea : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - South Korea";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SouthKorea.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SouthVietnam : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - South Vietnam";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SouthVietnam.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Spain : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Spain";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Spain.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SriLanka : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Sri Lanka";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\SriLanka.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_StLucia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - St Lucia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\StLucia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_StMaarten : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - St Maarten";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\StMaarten.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Sudan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Sudan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Sudan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Suriname : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Suriname";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Suriname.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Swaziland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Swaziland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Swaziland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Sweden : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Sweden";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Sweden.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Switzerland : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Switzerland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Switzerland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Syria : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Syria";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Syria.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Taiwan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Taiwan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Taiwan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tajikistan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Tajikistan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Tajikistan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tanzania : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Tanzania";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Tanzania.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Thailand : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Thailand";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Thailand.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tibet : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Tibet";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Tibet.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Togo : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Togo";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Togo.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tonga : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Tonga";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Tonga.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Trinidad : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Trinidad";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Trinidad.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tunisia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Tunisia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Tunisia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Turkey : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Turkey";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Turkey.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Turkmenistan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Turkmenistan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Turkmenistan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_TurksCaicos : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Turks & Caicos";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\TurksCaicos.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tuvalu : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Tuvalu";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Tuvalu.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_UAE : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - UAE";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\UAE.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Uganda : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Uganda";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Uganda.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ukraine : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Ukraine";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Ukraine.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_UnitedKingdom : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - United Kingdom";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\UnitedKingdom.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_UnitedNations : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - United Nations";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\UnitedNations.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_UnitedStates : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - United States";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\UnitedStates.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Uruguay : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Uruguay";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Uruguay.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_USSR : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - USSR";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\USSR.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Uzbekistan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Uzbekistan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Uzbekistan.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Vanuatu : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Vanuatu";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Vanuatu.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Venezuela : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Venezuela";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Venezuela.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Vietnam : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Vietnam";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Vietnam.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Wales : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Wales";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Wales.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Yemen : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Yemen";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Yemen.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Yugoslavia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Yugoslavia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Yugoslavia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Zambia : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Zambia";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Zambia.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Zimbabwe : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        displayName = "Country Flag - Zimbabwe";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\Zimbabwe.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };

    class SRP_PatchFlag_BisexualFlag : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BisexualFlag";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BisexualFlag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PrideFlag : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "PrideFlag";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_PrideFlag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GBPrideFlag : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "GBPrideFlag";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_GBPrideFlag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_TransFlag : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "TransFlag";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_TransFlag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HeterosexualFlag : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HeterosexualFlag";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HeterosexualFlag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Turkey2 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Turkey";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Turkey_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ireland2 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Ireland";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Ireland_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ukraine2 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Ukraine";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Ukraine_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_JeMeSouviens : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "JeMeSouviens";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_JeMeSouviens_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ViveLeQuebecWeed : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ViveLeQuebecWeed";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ViveLeQuebecWeed_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Jurassic : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Jurassic";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Jurassic_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MaineState : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MaineState";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MaineState_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };

    class SRP_PatchFlag_4thOfJuly : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "4thOfJuly";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_4thOfJuly_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_LandoftheFree : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "LandoftheFree";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_LandoftheFree_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AlchemyBlack : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AlchemyBlack";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AlchemyBlack_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Lawyer : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Lawyer";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Lawyer_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AlchemyWood : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AlchemyWood";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AlchemyWood_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Leatherwork : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Leatherwork";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Leatherwork_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AlienDJ : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AlienDJ";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AlienDJ_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Library : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Library";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Library_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Alien : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Alien";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Alien_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Lilith : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Lilith";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Lilith_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AmericanIndian : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AmericanIndian";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AmericanIndian_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_LiveMusic : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "LiveMusic";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_LiveMusic_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Animalskullandroses : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Animalskullandroses";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Animalskullandroses_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MadKuntz : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MadKuntz";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MadKuntz_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AnimeGirlGuitar : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AnimeGirlGuitar";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AnimeGirlGuitar_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedicalMarijuana : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedicalMarijuana";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedicalMarijuana_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AnimeGirlSinger : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AnimeGirlSinger";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AnimeGirlSinger_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Medical : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Medical";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Medical_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_AssemblyRequired : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "AssemblyRequired";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_AssemblyRequired_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalCreature : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalCreature";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalCreature_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Atom : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Atom";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Atom_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalDog : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalDog";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalDog_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bam : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Bam";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Bam_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalGriffin : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalGriffin";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalGriffin_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Bandit : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Bandit";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Bandit_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalHippogri : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalHippogri";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalHippogriff_.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BaphometDevil : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BaphometDevil";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BaphometDevil_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalSalamander : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalSalamander";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalSalamander_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Barber1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Barber1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Barber_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalSeaMonster : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalSeaMonster";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalSeaMonster_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BeachSunset : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BeachSunset";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BeachSunset_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MedievalUnicornDragon : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MedievalUnicornDragon";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MedievalUnicornDragon_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Biker : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Biker";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Biker_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Medusa : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Medusa";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Medusa_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BitchImFabulous : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BitchImFabulous";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BitchImFabulous_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MermaidVibes : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MermaidVibes";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MermaidVibes_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BlackCat : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BlackCat";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BlackCat_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mermaid : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Mermaid";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Mermaid_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Blacksmith1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Blacksmith1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Blacksmith_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MerryXmas : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MerryXmas";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MerryXmas_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BoxingChamp : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BoxingChamp";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BoxingChamp_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Military : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Military";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Military_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_BrainPlate : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "BrainPlate";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_BrainPlate_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MotherOfAll : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MotherOfAll";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MotherOfAll_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Brewery : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Brewery";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Brewery_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_MushroomDrawing : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "MushroomDrawing";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_MushroomDrawing_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Builder1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Builder1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Builder_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Mushroom : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Mushroom";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Mushroom_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Butcher : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Butcher";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Butcher_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_News : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "News";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_News_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CLub : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "CLub";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_CLub_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_NoFear : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "NoFear";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_NoFear_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Campfire : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Campfire";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Campfire_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Norse : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Norse";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Norse_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CampingGrey : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "CampingGrey";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_CampingGrey_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Octopus : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Octopus";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Octopus_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Camping : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Camping";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Camping_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_OnAir : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "OnAir";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_OnAir_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Carpentry : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Carpentry";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Carpentry_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_OnePercenter : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "OnePercenter";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_OnePercenter_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Cassette : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Cassette";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Cassette_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Persian : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Persian";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Persian_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Circus : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Circus";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Circus_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PiratesGetMoreBooty : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "PiratesGetMoreBooty";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_PiratesGetMoreBooty_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ComedyClub : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ComedyClub";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ComedyClub_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Pizza : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Pizza";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Pizza_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CottageCoreFrog : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "CottageCoreFrog";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_CottageCoreFrog_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PlagueDr : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "PlagueDr";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_PlagueDr_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Courier : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Courier";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Courier_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Pow : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Pow";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Pow_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Cowboy : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Cowboy";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Cowboy_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PrawnGodYellowOutline : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "PrawnGodYellowOutline";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_PrawnGodYellowOutline_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CrueltyFree : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "CrueltyFree";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_CrueltyFree_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_PrawnGod : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "PrawnGod";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_PrawnGod_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_CuteKiller : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "CuteKiller";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_CuteKiller_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Quarantine : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Quarantine";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Quarantine_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_DayOfTheDead : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "DayOfTheDead";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_DayOfTheDead_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Radioactive : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Radioactive";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Radioactive_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Deli : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Deli";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Deli_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ramadan : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Ramadan";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Ramadan_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Easter : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Easter";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Easter_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Reaper : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Reaper";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Reaper_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_EgyptianScarab : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "EgyptianScarab";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_EgyptianScarab_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_RecordStore : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "RecordStore";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_RecordStore_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Esoteric : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Esoteric";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Esoteric_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Reggae : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Reggae";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Reggae_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_EvilCat : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "EvilCat";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_EvilCat_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SadPug : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "SadPug";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_SadPug_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_EwPeople : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "EwPeople";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_EwPeople_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SaintIllusive : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "SaintIllusive";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_SaintIllusive_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_EyeOfHorusYellow : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "EyeOfHorusYellow";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_EyeOfHorusYellow_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Samurai : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Samurai";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Samurai_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_EyeofHorusGold : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "EyeofHorusGold";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_EyeofHorusGold_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SantaMuerteCostume : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "SantaMuerteCostume";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_SantaMuerteCostume_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FaceDry : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FaceDry";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FaceDry_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SantaMuerte : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "SantaMuerte";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_SantaMuerte_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FaithHopeLove : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FaithHopeLove";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FaithHopeLove_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Science : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Science";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Science_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FarmersMarket : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FarmersMarket";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FarmersMarket_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Scottish : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Scottish";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Scottish_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FeelinCute : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FeelinCute";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FeelinCute_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ScubaClub : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ScubaClub";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ScubaClub_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Fisherman : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Fisherman";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Fisherman_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Seafood : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Seafood";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Seafood_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FlowerSkull : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FlowerSkull";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FlowerSkull_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ShrimplytheBest : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ShrimplytheBest";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ShrimplytheBest_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ForestStag : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ForestStag";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ForestStag_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Shroom : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Shroom";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Shroom_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FortuneTeller : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FortuneTeller";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FortuneTeller_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SkullandMoon : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "SkullandMoon";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_SkullandMoon_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_FuckOff : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "FuckOff";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_FuckOff_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_SkullandRoses : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "SkullandRoses";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_SkullandRoses_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Gambling : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Gambling";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Gambling_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_StPatricksDay : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "StPatricksDay";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_StPatricksDay_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Ganesh : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Ganesh";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Ganesh_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_StayBrutal : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "StayBrutal";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_StayBrutal_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GangsterSkull : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "GangsterSkull";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_GangsterSkull_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_StayWeird : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "StayWeird";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_StayWeird_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Genius : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Genius";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Genius_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Stonemason : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Stonemason";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Stonemason_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GirlGangGreen : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "GirlGangGreen";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_GirlGangGreen_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Stoner : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Stoner";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Stoner_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GirlGangRed : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "GirlGangRed";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_GirlGangRed_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Taco : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Taco";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Taco_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GothRose : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "GothRose";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_GothRose_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tailor1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Tailor1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Tailor_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Graffiti : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Graffiti";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Graffiti_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Taxidermy : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Taxidermy";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Taxidermy_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_GunsandAmmo : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "GunsandAmmo";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_GunsandAmmo_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Thanksgiving : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Thanksgiving";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Thanksgiving_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Halloween : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Halloween";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Halloween_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_TheEndisNigh : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "TheEndisNigh";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_TheEndisNigh_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HandInHand : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HandInHand";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HandInHand_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ThreeBears : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ThreeBears";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ThreeBears_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HappyDiwali : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HappyDiwali";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HappyDiwali_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tiger : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Tiger";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Tiger_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HappyPassover : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HappyPassover";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HappyPassover_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Tinny : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Tinny";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Tinny_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HardToKidnap : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HardToKidnap";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HardToKidnap_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_TownHall : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "TownHall";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_TownHall_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HellYeah : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HellYeah";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HellYeah_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Trader1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Trader1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Trader_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HippyPeace : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HippyPeace";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HippyPeace_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_TrickorTreat : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "TrickorTreat";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_TrickorTreat_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HowlingWolf : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HowlingWolf";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HowlingWolf_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Trustno1 : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Trustno1";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Trustno1_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_HummingBird : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "HummingBird";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_HummingBird_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_UnderestimateMe : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "UnderestimateMe";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_UnderestimateMe_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_IGetShitDone : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "IGetShitDone";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_IGetShitDone_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_UnicornVomit : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "UnicornVomit";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_UnicornVomit_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ILoveBooks : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ILoveBooks";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ILoveBooks_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_University : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "University";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_University_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_IPutASpellOnYou : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "IPutASpellOnYou";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_IPutASpellOnYou_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_VIP : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "VIP";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_VIP_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_IceCreamTruck : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "IceCreamTruck";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_IceCreamTruck_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_ValentineDay : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "ValentineDay";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_ValentineDay_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_IceCream : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "IceCream";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_IceCream_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_VampyricCastle : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "VampyricCastle";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_VampyricCastle_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Illuminati : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Illuminati";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Illuminati_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Vet : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Vet";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Vet_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_InMyDefense : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "InMyDefense";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_InMyDefense_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Veteran : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Veteran";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Veteran_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Jail : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Jail";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Jail_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Weed : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Weed";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Weed_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_JapanRisingSun : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "JapanRisingSun";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_JapanRisingSun_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Wicca : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Wicca";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Wicca_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_JapaneseteaHouse : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "JapaneseteaHouse";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_JapaneseteaHouse_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_WildTurkey : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "WildTurkey";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_WildTurkey_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Jesus : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Jesus";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Jesus_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Winner : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Winner";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Winner_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_JustMarried : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "JustMarried";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_JustMarried_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_WitchyEye : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "WitchyEye";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_WitchyEye_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Karaoke : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Karaoke";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Karaoke_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_WithinRange : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "WithinRange";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_WithinRange_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Katanas : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Katanas";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Katanas_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Wizard : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Wizard";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Wizard_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_KeepOut : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "KeepOut";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_KeepOut_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_YeeHaw : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "YeeHaw";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_YeeHaw_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_KillerCat : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "KillerCat";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_KillerCat_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Yeti : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Yeti";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Yeti_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_KillerClown : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "KillerClown";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_KillerClown_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_YippyKiYay : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "YippyKiYay";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_YippyKiYay_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kitsune : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Kitsune";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Kitsune_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchFlag_Kraken : SRP_PatchFlag_ColorBase
    {
        scope = 2;
        color = "Kraken";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\flag\FlagPatch_Kraken_co.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };




    class SRP_PatchLogo_SquadLeader : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Squad Leader";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_sl.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_TeamLeader : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Team Leader";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_tl.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_MachineGunner : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Machinegunner";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_gnr.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Medic : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Medic";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_med.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Sniper : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Sniper";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_snpr.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Rifleman : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Rifleman";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_rfl.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_US : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - US";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_US.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_UK : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - UK";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_UK.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_AUS : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - AUS";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_AUS.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_USIR : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - US";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_US_IR.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_UKIR : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - UK";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_UK_IR.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_AUSIR : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - AUS";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_AUS_IR.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_RottensRaiders : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Rotten's Raiders";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_cobra.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_A10Warthog : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - A10 Warthog";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_a10.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_EOD : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - EOD";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_EOD.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_FckShtUp : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - F*ck Sh*t Up";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_FSU.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_NoFckGvn : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - No F*cks Given";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_fcks.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_TooOld : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - I'm Too Old for This Sh*t";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_old.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_WeylandCorp : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Weyland-Yutani Corp";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_Weyland.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_TheWarriors : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - The Warriors";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_warriors.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_CAN : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Canada";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_CAN.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_CANIR : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Canada";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_CAN_IR.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Obey : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - OBEY";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_obey.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Blackwater : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Blackwater";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_Blackwater.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_LagoonTrade : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Lagoon Trade & Courier Services";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_lagoon.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_HCLI : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - HCLI";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_HCLI.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Boog : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Boogaloo";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_boogaloo.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_UN : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - UN";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_UN.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Umbrella : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Umbrella";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_Umbrella.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_UmbrellaUS : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Umbrella";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_USS.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Romania : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Romania";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_ROM.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Sweden : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Sweden";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_SWE.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_Anarchy : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - Anarchy";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_AN.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_RTO : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - RTO";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_RTO.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_ThisWay : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - This is the Way";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_warrior.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };
    class SRP_PatchLogo_36 : SRP_PatchLogo_ColorBase
    {
        scope = 2;
        displayName = "Identifier Patch - ADMIN";
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Retextures\gear\patches\data\logo\patch_admin.paa",
            "Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
        };
    };

    class SRP_BeltFlag_Basic : SRP_BeltFlag_ColorBase
    {
        scope = 2;
    };
    class SRP_BeltFlag_Espen : SRP_BeltFlag_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\gear\patches\data\beltflag\srp_beltflag_espen_co.paa" };
    };
    class SRP_BeltFlag_Stag : SRP_BeltFlag_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\gear\patches\data\beltflag\srp_beltflag_stag_co.paa" };
    };
    class SRP_BeltFlag_LnS : SRP_BeltFlag_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Retextures\gear\patches\data\beltflag\srp_beltflag_lns_co.paa" };
    };
};
