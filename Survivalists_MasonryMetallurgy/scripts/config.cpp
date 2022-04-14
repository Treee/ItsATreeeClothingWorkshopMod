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