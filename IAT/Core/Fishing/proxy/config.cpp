class CfgPatches
{
    class IAT_Core_Fishing_Proxy
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Scripts"
        };
    };
};
class CfgSlots
{
    class Slot_IAT_ClamMeat
    {
        name = "IAT_ClamMeat";
        displayName = "Clam Meat";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_ClamPearl
    {
        name = "IAT_ClamPearl";
        displayName = "Clam Pearl";
        ghostIcon = "set:dayz_inventory image:tf_stones";
    };
    class Slot_IAT_WormCan
    {
        name = "IAT_WormCan";
        displayName = "Worms";
        stackMax = 100;
        ghostIcon = "set:dayz_inventory image:hook";
    };
    class Slot_IAT_Fish_Small1
    {
        name = "IAT_Fish_Small1";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small2
    {
        name = "IAT_Fish_Small2";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small3
    {
        name = "IAT_Fish_Small3";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small4
    {
        name = "IAT_Fish_Small4";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small5
    {
        name = "IAT_Fish_Small5";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small6
    {
        name = "IAT_Fish_Small6";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small7
    {
        name = "IAT_Fish_Small7";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Small8
    {
        name = "IAT_Fish_Small8";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_Fish_Large1
    {
        name = "IAT_Fish_Large1";
        displayName = "Fish";
        ghostIcon = "set:dayz_inventory image:food";
    };
    class Slot_IAT_FishingLure
    {
        name = "IAT_FishingLure";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure1
    {
        name = "IAT_FishingLure1";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure2
    {
        name = "IAT_FishingLure2";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure3
    {
        name = "IAT_FishingLure3";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure4
    {
        name = "IAT_FishingLure4";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure5
    {
        name = "IAT_FishingLure5";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure6
    {
        name = "IAT_FishingLure6";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure7
    {
        name = "IAT_FishingLure7";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure8
    {
        name = "IAT_FishingLure8";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure9
    {
        name = "IAT_FishingLure9";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure10
    {
        name = "IAT_FishingLure10";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure11
    {
        name = "IAT_FishingLure11";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure12
    {
        name = "IAT_FishingLure12";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
    class Slot_IAT_FishingLure13
    {
        name = "IAT_FishingLure13";
        displayName = "Fishing Lure";
        ghostIcon = "set:dayz_inventory image:chemlight";
    };
};
class CfgNonAIVehicles
{
    class ProxyAttachment;
    class Proxyiat_clammeat_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_ClamMeat" };
        model = "IAT\Core\Fishing\proxy\iat_clammeat_proxy.p3d";
    };
    class Proxyiat_clampearl_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_ClamPearl" };
        model = "IAT\Core\Fishing\proxy\iat_clampearl_proxy.p3d";
    };
    class Proxyiat_fish1_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small1" };
        model = "IAT\Core\Fishing\proxy\iat_fish1_proxy.p3d";
    };
    class Proxyiat_fish2_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small2" };
        model = "IAT\Core\Fishing\proxy\iat_fish2_proxy.p3d";
    };
    class Proxyiat_fish3_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small3" };
        model = "IAT\Core\Fishing\proxy\iat_fish3_proxy.p3d";
    };
    class Proxyiat_fish4_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small4" };
        model = "IAT\Core\Fishing\proxy\iat_fish4_proxy.p3d";
    };
    class Proxyiat_fish5_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small5" };
        model = "IAT\Core\Fishing\proxy\iat_fish5_proxy.p3d";
    };
    class Proxyiat_fish6_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small6" };
        model = "IAT\Core\Fishing\proxy\iat_fish6_proxy.p3d";
    };
    class Proxyiat_fish7_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small7" };
        model = "IAT\Core\Fishing\proxy\iat_fish7_proxy.p3d";
    };
    class Proxyiat_fish8_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Small8" };
        model = "IAT\Core\Fishing\proxy\iat_fish8_proxy.p3d";
    };

    class Proxyiat_fish1_large_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_Fish_Large1" };
        model = "IAT\Core\Fishing\proxy\iat_fish1_large_proxy.p3d";
    };
    class Proxyiat_fishing_lure1_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure1" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure1_proxy.p3d";
    };
    class Proxyiat_fishing_lure2_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure2" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure2_proxy.p3d";
    };
    class Proxyiat_fishing_lure3_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure3" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure3_proxy.p3d";
    };
    class Proxyiat_fishing_lure4_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure4" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure4_proxy.p3d";
    };
    class Proxyiat_fishing_lure5_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure5" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure5_proxy.p3d";
    };
    class Proxyiat_fishing_lure6_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure6" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure6_proxy.p3d";
    };
    class Proxyiat_fishing_lure7_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure7" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure7_proxy.p3d";
    };
    class Proxyiat_fishing_lure8_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure8" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure8_proxy.p3d";
    };
    class Proxyiat_fishing_lure9_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure9" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure9_proxy.p3d";
    };
    class Proxyiat_fishing_lure10_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure10" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure10_proxy.p3d";
    };
    class Proxyiat_fishing_lure11_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure11" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure11_proxy.p3d";
    };
    class Proxyiat_fishing_lure12_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure12" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure12_proxy.p3d";
    };
    class Proxyiat_fishing_lure13_proxy : ProxyAttachment
    {
        scope = 2;
        inventorySlot[] = { "IAT_FishingLure13" };
        model = "IAT\Core\Fishing\proxy\iat_fishing_lure13_proxy.p3d";
    };
};