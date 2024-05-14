class CfgPatches
{
    class SRP_Core_Proxy
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Data", "DZ_Scripts" };
    };
};

class CfgSlots
{
    //==================================================== METALLURGY
    class Slot_SRP_ForgeStarterKit
    {
        name = "SRP_ForgeStarterKit";
        displayName = "Forge Starter Kit.";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 10;
    };

    class Slot_SRP_ForgeBellows
    {
        name = "SRP_ForgeBellows";
        displayName = "Bellows";
        ghostIcon = "set:dayz_inventory image:cat_vehicle_engine";
    };
    class Slot_SRP_Crucible
    {
        name = "SRP_Crucible";
        displayName = "Hot Crucible";
        ghostIcon = "set:dayz_inventory image:missing";
    };
    class Slot_SRP_Coin
    {
        name = "SRP_Coin";
        displayName = "Hot Blank";
        ghostIcon = "set:dayz_inventory image:missing";
    };
    class Slot_SRP_IngotMold
    {
        name = "SRP_IngotMold";
        displayName = "Hot Ingot Mold";
        ghostIcon = "set:dayz_inventory image:missing";
    };
    class Slot_SRP_Ingot
    {
        name = "SRP_Ingot";
        displayName = "Hot Ingot";
        ghostIcon = "set:dayz_inventory image:missing";
    };

    //======================= COINAGE
    class Slot_SRP_CoinPlatinum
    {
        name = "SRP_CoinPlatinum";
        displayName = "Platinum Coins";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 500;
    };
    class Slot_SRP_CoinIron
    {
        name = "SRP_CoinIron";
        displayName = "Iron Coins";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 500;
    };
    class Slot_SRP_CoinGold
    {
        name = "SRP_CoinGold";
        displayName = "Gold Coins";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 500;
    };
    class Slot_SRP_CoinBronze
    {
        name = "SRP_CoinBronze";
        displayName = "Bronze Coins";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 500;
    };
    class Slot_SRP_CoinCopper
    {
        name = "SRP_CoinCopper";
        displayName = "Copper Coins";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 500;
    };

    class Slot_SRP_RawOre1
    {
        name = "SRP_RawOre1";
        displayName = "Raw Ore";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 4;
    };
    class Slot_SRP_RawOre2
    {
        name = "SRP_RawOre2";
        displayName = "Raw Ore";
        ghostIcon = "set:dayz_inventory image:missing";
        stackMax = 4;
    };

    class Slot_SRP_RawTar
    {
        name = "SRP_RawTar";
        displayName = "Raw Tar";
        ghostIcon = "set:dayz_inventory image:missing";
    };
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT

};

class CfgNonAIVehicles
{
    class ProxyAttachment;

    //==================================================== METALLURGY
    class Proxysrp_forge_stoneadvancedbellows : ProxyAttachment //same as p3d name
    {
        scope = 2;
        inventorySlot[] = { "SRP_ForgeBellows" }; // same as slot name
        model = "SRP\Core\Proxy\data\srp_forge_stoneadvancedbellows.p3d"; //proxy path
    };
    class Proxysrp_crucible_proxy : ProxyAttachment //same as p3d name
    {
        scope = 2;
        inventorySlot[] = { "SRP_Crucible" }; // same as slot name
        model = "SRP\Core\Proxy\data\srp_crucible_proxy.p3d"; //proxy path
    };
    class Proxysrp_ingotmold_proxy : ProxyAttachment //same as p3d name
    {
        scope = 2;
        inventorySlot[] = { "SRP_IngotMold" }; // same as slot name
        model = "SRP\Core\Proxy\data\srp_ingotmold_proxy.p3d"; //proxy path
    };
    class Proxysrp_ingot_proxy : ProxyAttachment //same as p3d name
    {
        scope = 2;
        inventorySlot[] = { "SRP_Ingot" }; // same as slot name
        model = "SRP\Core\Proxy\data\srp_ingot_proxy.p3d"; //proxy path
    };
    class Proxysrp_coin_proxy : ProxyAttachment //same as p3d name
    {
        scope = 2;
        inventorySlot[] = { "SRP_Coin" }; // same as slot name
        model = "SRP\Core\Proxy\data\srp_coin_proxy.p3d"; //proxy path
    };

    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT
    //==================================================== NEXT

};