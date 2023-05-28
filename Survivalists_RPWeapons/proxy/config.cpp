class CfgPatches
{
	class Survivalists_RPWeapons_Proxy
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data"};//, "Survivalists_Weapons_JMC_Proxy"};
	};
};

class CfgSlots
{
//======================Melee Weapons
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
  class Slot_SRP_GladiusSword
  {
		name="SRP_GladiusSword";
		displayName="Gladius Sword";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_GladiusSwordSheath
  {
		name="SRP_GladiusSwordSheath";
		displayName="Gladius Sword Sheath";
		ghostIcon="set:dayz_inventory image:missing";
  };
  class Slot_SRP_Melee1
	{
		name="SRP_Melee1";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee2
	{
		name="SRP_Melee2";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee3
	{
		name="SRP_Melee3";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee4
	{
		name="SRP_Melee4";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee5
	{
		name="SRP_Melee5";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee6
	{
		name="SRP_Melee6";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee7
	{
		name="SRP_Melee7";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee8
	{
		name="SRP_Melee8";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee9
	{
		name="SRP_Melee9";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Melee10
	{
		name="SRP_Melee10";
		displayName="Melee";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};

//======================Gun Attachments
  class Slot_R700HndGrd
	{
		name="R700HndGrd";
		displayName="R700 Handguard";
	};
  class Slot_R700Chassis
	{
		name="R700Chassis";
		displayName="R700 Chassis";
	};
  class Slot_VectorHndGrd
	{
		name="VectorHndGrd";
		displayName="Vector Handguard";
	};
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
  class Slot_RIS_Adapter
  {
    name="RISAdapter"; // this is the name you use in "attachments[]={};" in your items config
    displayName="RIS Adapter"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_AK_Adapter
  {
    name="AKRISAdapter"; // this is the name you use in "attachments[]={};" in your items config
    displayName="AK RIS Adapter"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_Scar_HndGrd
  {
    name="ScarHndGrd"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Hand Guard"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_Scar_BttStck
  {
    name="ScarBttStck"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Butt Stock"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_P90_UpgradeKit
  {
    name="P90UpgradeKit"; // this is the name you use in "attachments[]={};" in your items config
    displayName="P90 Upgrade Kit"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_RIS_Left
  {
    name="RISLeft"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Left RIS"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_RIS_Right
  {
    name="RISRight"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Right RIS"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_RIS_Bottom
  {
    name="RISBottom"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Bottom RIS"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_SA80_HndGrd
  {
    name="SA80HndGrd"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Hand Guard"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };
  class Slot_PistolRail
  {
    name="PistolRail"; // this is the name you use in "attachments[]={};" in your items config
    displayName="Pistol Rail"; // this is what shows when the player hovers over the icon
    ghostIcon="set:dayz_inventory image:paper";  // this is the icon the GUI attachment shows
  };

//==================== GUN PROXY
  class Slot_SRP_Rifle1
	{
		name="SRP_Rifle1";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle2
	{
		name="SRP_Rifle2";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle3
	{
		name="SRP_Rifle3";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle4
	{
		name="SRP_Rifle4";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle5
	{
		name="SRP_Rifle5";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle6
	{
		name="SRP_Rifle6";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle7
	{
		name="SRP_Rifle7";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle8
	{
		name="SRP_Rifle8";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle9
	{
		name="SRP_Rifle9";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
  class Slot_SRP_Rifle10
	{
		name="SRP_Rifle10";
		displayName="Rifle";
		ghostIcon="set:dayz_inventory image:shoulderright";
	};
//==================== Grenade PROXY
  class Slot_SRP_Grenade1
	{
		name="SRP_Grenade1";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:grenade";
	};
  class Slot_SRP_Grenade2
	{
		name="SRP_Grenade2";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:grenade";
	};
  class Slot_SRP_Grenade3
	{
		name="SRP_Grenade3";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:grenade";
	};
  class Slot_SRP_Grenade4
	{
		name="SRP_Grenade4";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:grenade";
	};
//==================== Suppressor PROXY
  class Slot_SRP_Suppressor1
	{
		name="SRP_Suppressor1";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:supressor";
	};
  class Slot_SRP_Suppressor2
	{
		name="SRP_Suppressor2";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:supressor";
	};
  class Slot_SRP_Suppressor3
	{
		name="SRP_Suppressor3";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:supressor";
	};
  class Slot_SRP_Suppressor4
	{
		name="SRP_Suppressor4";
		displayName="Explosive";
		ghostIcon="set:dayz_inventory image:supressor";
	};
//==================== Pistol PROXY
  class Slot_SRP_Pistol1
	{
		name="SRP_Pistol1";
		displayName="Pistol";
		ghostIcon="set:dayz_inventory image:pistol";
	};
  class Slot_SRP_Pistol2
	{
		name="SRP_Pistol2";
		displayName="Pistol";
		ghostIcon="set:dayz_inventory image:pistol";
	};
  class Slot_SRP_Pistol3
	{
		name="SRP_Pistol3";
		displayName="Pistol";
		ghostIcon="set:dayz_inventory image:pistol";
	};
  class Slot_SRP_Pistol4
	{
		name="SRP_Pistol4";
		displayName="Pistol";
		ghostIcon="set:dayz_inventory image:pistol";
	};  
  class Slot_SRP_Pistol5
	{
		name="SRP_Pistol5";
		displayName="Pistol";
		ghostIcon="set:dayz_inventory image:pistol";
	};  
//==================== Optic PROXY
  class Slot_SRP_Optic1
	{
		name="SRP_Optic1";
		displayName="Optic";
		ghostIcon="set:dayz_inventory image:weaponoptics";
	};
  class Slot_SRP_Optic2
	{
		name="SRP_Optic2";
		displayName="Optic";
		ghostIcon="set:dayz_inventory image:weaponoptics";
	};
  class Slot_SRP_Optic3
	{
		name="SRP_Optic3";
		displayName="Optic";
		ghostIcon="set:dayz_inventory image:weaponoptics";
	};
  class Slot_SRP_Optic4
	{
		name="SRP_Optic4";
		displayName="Optic";
		ghostIcon="set:dayz_inventory image:weaponoptics";
	};  
  class Slot_SRP_Optic5
	{
		name="SRP_Optic5";
		displayName="Optic";
		ghostIcon="set:dayz_inventory image:weaponoptics";
	}; 
  class Slot_SRP_Optic6
	{
		name="SRP_Optic6";
		displayName="Optic";
		ghostIcon="set:dayz_inventory image:weaponoptics";
	};   
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
//======================WEAPONS
  class ProxyESP_R700HndGrd_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"R700HndGrd"};
		model="Survivalists_RPWeapons\proxy\ESP_R700HndGrd_Proxy.p3d";
	};
  class ProxyESP_R700Chassis_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"R700Chassis"};
		model="Survivalists_RPWeapons\proxy\ESP_R700Chassis_Proxy.p3d";
	};
  class ProxyESP_Vector_HndGrd_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"VectorHndGrd"};
		model="Survivalists_RPWeapons\proxy\ESP_Vector_HndGrd_Proxy.p3d";
	};
  class ProxyRIS_Adapter_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"RISAdapter"};
		model="Survivalists_RPWeapons\proxy\RIS_Adapter_Proxy.p3d";
	};
  class ProxyAK_RIS_Adapter_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"AKRISAdapter"};
		model="Survivalists_RPWeapons\proxy\AK_RIS_Adapter_Proxy.p3d";
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
  class ProxyRIS_Left_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"RISLeft"};
		model="Survivalists_RPWeapons\proxy\RIS_Left_Proxy.p3d";
	};
	class ProxyRIS_Right_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"RISRight"};
		model="Survivalists_RPWeapons\proxy\RIS_Right_Proxy.p3d";
	};
	class ProxyRIS_Bottom_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"RISBottom"};
		model="Survivalists_RPWeapons\proxy\RIS_Bottom_Proxy.p3d";
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
  class Proxysrp_gladius_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_GladiusSword"}; // same as slot name 
    model = "Survivalists_RPWeapons\proxy\srp_gladius_proxy.p3d"; //proxy path 
  };
  class Proxysrp_gladiussheath_proxy: ProxyAttachment //same as p3d name
  {
    scope = 2;
    inventorySlot[] = {"SRP_GladiusSwordSheath"}; // same as slot name 
    model = "Survivalists_RPWeapons\proxy\srp_gladiussheath_proxy.p3d"; //proxy path 
  };
  class ProxyScar_HandGrd_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"ScarHndGrd"};
		model="Survivalists_RPWeapons\proxy\Scar_HandGrd_Proxy.p3d";
	};
	class ProxyScar_BttStck_Proxy: ProxyAttachment 
	{
		scope=2;
		inventorySlot[]={"ScarBttStck"};
		model="Survivalists_RPWeapons\proxy\Scar_BttStck_Proxy.p3d";
	};
	class ProxyESP_P90UpgradeKit_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"P90UpgradeKit"};
		model="Survivalists_RPWeapons\proxy\ESP_P90UpgradeKit_Proxy.p3d";
	};
  class ProxySA80_HandGrd_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot="SA80HndGrd";
		model="Survivalists_RPWeapons\proxy\SA80_HandGrd_Proxy.p3d";
	};
	class ProxyESP_PistolRail_Proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot="PistolRail";
		model="Survivalists_RPWeapons\proxy\ESP_PistolRail_Proxy.p3d";
	};
//=================== Melee Proxies
  class Proxysrp_melee1_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee1"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee1_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee2_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee2"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee2_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee3_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee3"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee3_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee4_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee4"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee4_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee5_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee5"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee5_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee6_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee6"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee6_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee7_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee7"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee7_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee8_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee8"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee8_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee9_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee9"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee9_proxy.p3d"; //proxy path 
  };
  class Proxysrp_melee10_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Melee10"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_melee10_proxy.p3d"; //proxy path 
  };
//=================== RIFLE Proxies
  class Proxysrp_rifle1_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle1"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle1_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle2_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle2"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle2_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle3_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle3"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle3_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle4_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle4"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle4_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle5_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle5"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle5_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle6_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle6"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle6_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle7_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle7"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle7_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle8_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle8"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle8_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle9_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle9"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle9_proxy.p3d"; //proxy path 
  };
  class Proxysrp_rifle10_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Rifle10"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_rifle10_proxy.p3d"; //proxy path 
  };
//=================== Grenade Proxies
  class Proxysrp_grenade1_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Grenade1"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_grenade1_proxy.p3d"; //proxy path 
  };
  class Proxysrp_grenade2_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Grenade2"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_grenade2_proxy.p3d"; //proxy path 
  };
  class Proxysrp_grenade3_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Grenade3"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_grenade3_proxy.p3d"; //proxy path 
  };
  class Proxysrp_grenade4_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Grenade4"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_grenade4_proxy.p3d"; //proxy path 
  };
//=================== Suppressor Proxies
  class Proxysrp_suppressor1_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Suppressor1"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_suppressor1_proxy.p3d"; //proxy path 
  };
  class Proxysrp_suppressor2_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Suppressor2"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_suppressor2_proxy.p3d"; //proxy path 
  };
  class Proxysrp_suppressor3_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Suppressor3"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_suppressor3_proxy.p3d"; //proxy path 
  };
  class Proxysrp_suppressor4_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Suppressor4"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_suppressor4_proxy.p3d"; //proxy path 
  };
//=================== Pistol Proxies
  class Proxysrp_pistol1_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Pistol1"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_pistol1_proxy.p3d"; //proxy path 
  };
  class Proxysrp_pistol2_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Pistol2"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_pistol2_proxy.p3d"; //proxy path 
  };
  class Proxysrp_pistol3_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Pistol3"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_pistol3_proxy.p3d"; //proxy path 
  };
  class Proxysrp_pistol4_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Pistol4"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_pistol4_proxy.p3d"; //proxy path 
  };  
  class Proxysrp_pistol5_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Pistol5"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_pistol5_proxy.p3d"; //proxy path 
  };  
//=================== optic Proxies
  class Proxysrp_optic1_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Optic1"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_optic1_proxy.p3d"; //proxy path 
  };
  class Proxysrp_optic2_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Optic2"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_optic2_proxy.p3d"; //proxy path 
  };
  class Proxysrp_optic3_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Optic3"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_optic3_proxy.p3d"; //proxy path 
  };
  class Proxysrp_optic4_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Optic4"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_optic4_proxy.p3d"; //proxy path 
  };  
  class Proxysrp_optic5_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Optic5"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_optic5_proxy.p3d"; //proxy path 
  };  
  class Proxysrp_optic6_proxy: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"SRP_Optic6"}; // same as slot name 
    model="Survivalists_RPWeapons\proxy\srp_optic6_proxy.p3d"; //proxy path 
  };  
};  