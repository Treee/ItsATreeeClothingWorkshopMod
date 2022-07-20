class CfgPatches
{
	class Survivalists_MasonryMetallurgy_Scripts
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts", "Survivalists_MasonryMetallurgy"};
	};
};

class CfgSlots
{
    class Slot_SRP_ForgeStarterKit
  {
		name="SRP_ForgeStarterKit";
		displayName="Forge Starter Kit";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=10;
  };

  class Slot_SRP_ForgeBellows
	{
		name="SRP_ForgeBellows";
		displayName="Bellows";
    ghostIcon="set:dayz_inventory image:cat_vehicle_engine";
	};
  class Slot_SRP_Crucible
  {
		name="SRP_Crucible";
		displayName="Hot Crucible";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_IngotMold
  {
		name="SRP_IngotMold";
		displayName="Hot Ingot Mold";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_Ingot
  {
		name="SRP_Ingot";
		displayName="Hot Ingot";
		ghostIcon="set:dayz_inventory image:missing";
  };

  //======================= COINAGE
  class Slot_SRP_CoinPlatinum
	{
		name="SRP_CoinPlatinum";
		displayName="Platinum Coins";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=500;
	};
  class Slot_SRP_CoinIron
	{
		name="SRP_CoinIron";
		displayName="Iron Coins";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=500;
	};
  class Slot_SRP_CoinGold
	{
		name="SRP_CoinGold";
		displayName="Gold Coins";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=500;
	};
  class Slot_SRP_CoinBronze
	{
		name="SRP_CoinBronze";
		displayName="Bronze Coins";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=500;
	};
  class Slot_SRP_CoinCopper
	{
		name="SRP_CoinCopper";
		displayName="Copper Coins";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=500;
	};

  class Slot_SRP_RawOre1
  {
		name="SRP_RawOre1";
		displayName="Raw Ore";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=4;
  };
  class Slot_SRP_RawOre2
  {
		name="SRP_RawOre2";
		displayName="Raw Ore";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=4;
  };
  class Slot_SRP_MetalPlate1
  {
		name="SRP_MetalPlate1";
		displayName="Metal Plate";
		ghostIcon="set:dayz_inventory image:plates";
    stackMax=20;
  };
  class Slot_SRP_MetalPlate2
  {
		name="SRP_MetalPlate2";
		displayName="Metal Plate";
		ghostIcon="set:dayz_inventory image:plates";
    stackMax=20;
  };
  class Slot_SRP_MetalRod1
  {
		name="SRP_MetalRod1";
		displayName="Metal Rod";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=10;
  };
  class Slot_SRP_MetalRod2
  {
		name="SRP_MetalRod2";
		displayName="Metal Rod";
		ghostIcon="set:dayz_inventory image:missing";
    stackMax=10;
  };
  class Slot_SRP_RawCrystal1
  {
		name="SRP_RawCrystal1";
		displayName="Raw Crystal";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_RawCrystal2
  {
		name="SRP_RawCrystal2";
		displayName="Raw Crystal";
		ghostIcon="set:dayz_inventory image:missing";
  };
};

class CfgNonAIVehicles
{
	class ProxyAttachment;

  class Proxysrp_forge_stoneadvancedbellows: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_ForgeBellows"}; // same as slot name 
    model = "Survivalists_MasonryMetallurgy\proxy\srp_forge_stoneadvancedbellows.p3d"; //proxy path 
  };
  class Proxysrp_crucible_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_Crucible"}; // same as slot name 
    model = "Survivalists_MasonryMetallurgy\proxy\srp_crucible_proxy.p3d"; //proxy path 
  };
  class Proxysrp_ingotmold_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_IngotMold"}; // same as slot name 
    model = "Survivalists_MasonryMetallurgy\proxy\srp_ingotmold_proxy.p3d"; //proxy path 
  };
  class Proxysrp_ingot_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_Ingot"}; // same as slot name 
    model = "Survivalists_MasonryMetallurgy\proxy\srp_ingot_proxy.p3d"; //proxy path 
  };

};