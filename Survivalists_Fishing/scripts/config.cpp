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
};

class CfgNonAIVehicles
{
  class ProxyAttachment;

  class Proxysrp_clammeat_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_ClamMeat"};
		model="Survivalists_Mods\proxy\srp_clammeat_proxy.p3d";
	};
  class Proxysrp_clampearl_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_ClamPearl"};
		model="Survivalists_Mods\proxy\srp_clampearl_proxy.p3d";
	};
};