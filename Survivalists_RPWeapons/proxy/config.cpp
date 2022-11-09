class CfgPatches
{
	class Survivalists_RPWeapons_Proxy
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data"};
	};
};

class CfgSlots
{
    // WEAPONS
  class Slot_SRP_StockPouch
	{
		name="SRP_StockPouch";
		displayName="ButtStock Pouch";
	};
	class Slot_SRP_GunDerringer
  {
      name="SRP_GunDerringer";
      displayName="Derringer";
      ghostIcon="set:dayz_inventory image:pistol";
  };
  class Slot_SRP_Katana
  {
		name="SRP_Katana";
		displayName="Katana";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_MasterSword
  {
		name="SRP_MasterSword";
		displayName="Master Sword";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_KatanaSheath
  {
		name="SRP_KatanaSheath";
		displayName="Katana Sheath";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_MasterSwordSheath
  {
		name="SRP_MasterSwordSheath";
		displayName="Master Sword Sheath";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_RIS_Adapter
  {
    name="RISAdapter"; // this is the name you use in "attachments[]={};" in your items config
    displayName="RIS Adapter"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
};
  
class CfgNonAIVehicles
{
	class ProxyAttachment;

  class ProxyRIS_Adapter_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot="RISAdapter";
		model="Survivalists_RPWeapons\proxy\RIS_Adapter_Proxy.p3d";
	};
  class Proxysrp_buttstockpouch_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"SRP_StockPouch"
		};
		model="Survivalists_RPWeapons\proxy\srp_buttstockpouch_proxy.p3d";
	};
    class Proxysrp_katana_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_Katana"}; // same as slot name 
    model = "Survivalists_RPWeapons\proxy\srp_katana_proxy.p3d"; //proxy path 
  };
  class Proxysrp_katanasheath_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_KatanaSheath"}; // same as slot name 
    model = "Survivalists_RPWeapons\proxy\srp_katanasheath_proxy.p3d"; //proxy path 
  };
  class Proxysrp_mastersword_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_MasterSword"}; // same as slot name 
    model = "Survivalists_RPWeapons\proxy\srp_mastersword_proxy.p3d"; //proxy path 
  };
  class Proxysrp_masterswordsheath_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_MasterSwordSheath"}; // same as slot name 
    model = "Survivalists_RPWeapons\proxy\srp_masterswordsheath_proxy.p3d"; //proxy path 
  };
};  