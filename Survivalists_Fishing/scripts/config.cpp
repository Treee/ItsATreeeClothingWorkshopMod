class CfgPatches
{
	class Survivalists_Fishing_Scripts
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	
    { 
      "Survivalists_Fishing"
    };
	};
};

class CfgSlots
{
  class Slot_SRP_ClamMeat
	{
		name="SRP_ClamMeat";
		displayName="Clam Meat";
		ghostIcon="set:dayz_inventory image:food";
	};  

  class Slot_SRP_ClamPearl
	{
		name="SRP_ClamPearl";
		displayName="Clam Pearl";
		ghostIcon="set:dayz_inventory image:tf_stones";
	};

  class Slot_SRP_Fish_Small1
	{
		name="SRP_Fish_Small1";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small2
	{
		name="SRP_Fish_Small2";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small3
	{
		name="SRP_Fish_Small3";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small4
	{
		name="SRP_Fish_Small4";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small5
	{
		name="SRP_Fish_Small5";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small6
	{
		name="SRP_Fish_Small6";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small7
	{
		name="SRP_Fish_Small7";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small8
	{
		name="SRP_Fish_Small8";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Large1
	{
		name="SRP_Fish_Large1";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_FishingLure
	{
		name="SRP_FishingLure";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure1
	{
		name="SRP_FishingLure1";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure2
	{
		name="SRP_FishingLure2";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure3
	{
		name="SRP_FishingLure3";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure4
	{
		name="SRP_FishingLure4";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure5
	{
		name="SRP_FishingLure5";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure6
	{
		name="SRP_FishingLure6";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure7
	{
		name="SRP_FishingLure7";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure8
	{
		name="SRP_FishingLure8";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure9
	{
		name="SRP_FishingLure9";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure10
	{
		name="SRP_FishingLure10";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure11
	{
		name="SRP_FishingLure11";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure12
	{
		name="SRP_FishingLure12";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_FishingLure13
	{
		name="SRP_FishingLure13";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_Aquarium_Top
	{
		name="SRP_Aquarium_Top";
		displayName="Aquarium Top";
		ghostIcon="set:dayz_inventory image:planks";
	};
  class Slot_SRP_Aquarium_Bot
	{
		name="SRP_Aquarium_Bot";
		displayName="Aquarium Foundation";
		ghostIcon="set:dayz_inventory image:planks";
	};
  class Slot_SRP_Aquarium_Glass1
	{
		name="SRP_Aquarium_Glass1";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
  class Slot_SRP_Aquarium_Glass2
	{
		name="SRP_Aquarium_Glass2";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
  class Slot_SRP_Aquarium_Glass3
	{
		name="SRP_Aquarium_Glass3";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
  class Slot_SRP_Aquarium_Glass4
	{
		name="SRP_Aquarium_Glass4";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
};

class CfgNonAIVehicles
{
  class ProxyAttachment;

  class Proxysrp_clammeat_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_ClamMeat"};
		model="Survivalists_Fishing\proxy\srp_clammeat_proxy.p3d";
	};
  class Proxysrp_clampearl_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_ClamPearl"};
		model="Survivalists_Fishing\proxy\srp_clampearl_proxy.p3d";
	};
  class Proxysrp_fish1_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small1"};
		model="Survivalists_Fishing\proxy\srp_fish1_proxy.p3d";
	};
  class Proxysrp_fish2_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small2"};
		model="Survivalists_Fishing\proxy\srp_fish2_proxy.p3d";
	};
  class Proxysrp_fish3_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small3"};
		model="Survivalists_Fishing\proxy\srp_fish3_proxy.p3d";
	};
  class Proxysrp_fish4_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small4"};
		model="Survivalists_Fishing\proxy\srp_fish4_proxy.p3d";
	};
  class Proxysrp_fish5_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small5"};
		model="Survivalists_Fishing\proxy\srp_fish5_proxy.p3d";
	};
  class Proxysrp_fish6_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small6"};
		model="Survivalists_Fishing\proxy\srp_fish6_proxy.p3d";
	};
  class Proxysrp_fish7_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small7"};
		model="Survivalists_Fishing\proxy\srp_fish7_proxy.p3d";
	};
  class Proxysrp_fish8_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small8"};
		model="Survivalists_Fishing\proxy\srp_fish8_proxy.p3d";
	};

  class Proxysrp_fish1_large_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Large1"};
		model="Survivalists_Fishing\proxy\srp_fish1_large_proxy.p3d";
	};

  class Proxysrp_fishing_lure1_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure1"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure1_proxy.p3d";
	};
  class Proxysrp_fishing_lure2_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure2"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure2_proxy.p3d";
	};
  class Proxysrp_fishing_lure3_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure3"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure3_proxy.p3d";
	};
  class Proxysrp_fishing_lure4_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure4"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure4_proxy.p3d";
	};
  class Proxysrp_fishing_lure5_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure5"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure5_proxy.p3d";
	};
  class Proxysrp_fishing_lure6_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure6"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure6_proxy.p3d";
	};
  class Proxysrp_fishing_lure7_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure7"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure7_proxy.p3d";
	};
  class Proxysrp_fishing_lure8_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure8"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure8_proxy.p3d";
	};
  class Proxysrp_fishing_lure9_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure9"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure9_proxy.p3d";
	};
  class Proxysrp_fishing_lure10_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure10"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure10_proxy.p3d";
	};
  class Proxysrp_fishing_lure11_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure11"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure11_proxy.p3d";
	};
  class Proxysrp_fishing_lure12_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure12"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure12_proxy.p3d";
	};
  class Proxysrp_fishing_lure13_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_FishingLure13"};
		model="Survivalists_Fishing\proxy\srp_fishing_lure13_proxy.p3d";
	};
};