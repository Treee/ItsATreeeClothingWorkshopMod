class CfgPatches
{
	class Survivalists_Mods_Weapons_Attachments_Supports
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Weapons_Supports"
		};
	};
};

class CfgVehicles
{
  class Inventory_Base;

	class SRP_ButtstockPouch_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Buttstock Ammo Pouch";
		descriptionShort="Espen Industries. An Ammo-Pouch with just enough room for some loose ammunition. Inspected by Master Gunsmith: Turko";
		itemsize[]={3,2};
		itemsCargoSize[]={3,2};
		model="Survivalists_Mods\weapons\attachments\support\srp_buttstockpouch.p3d";
		inventorySlot[]=
		{
			"StockPouch",
      "SRP_StockPouch"
		};
		weight=100;
		hiddenSelections[]=
		{
			"Pouch","Straps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_CO.paa"
		};
    hiddenSelectionsMaterials[]=
    {
        "Survivalists_Mods\weapons\attachments\support\data\rifle_pouch.rvmat","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps.rvmat"
    };
	};
  class SRP_ButtstockPouch_Red: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Black: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Black_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_Black_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Linen: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Linen_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_Linen_CO.paa"
		};
	};
	class SRP_ButtstockPouch_Purple: SRP_ButtstockPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Purple_CO.paa","Survivalists_Mods\weapons\attachments\support\data\rifle_pouch_Straps_Purple_CO.paa"
		};
	};
};