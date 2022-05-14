class CfgPatches
{
	class Survivalists_Mods_Characters_Accessories
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class SRP_Wedding_Ring: Clothing
	{
		scope=2;
		displayName="Wedding Ring";
		descriptionShort="A silver wedding ring";
		model="Survivalists_Mods\characters\accessories\Wedding_Ring_g.p3d";
		inventorySlot="Armband";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
		weight=1;
		itemSize[]={1,1};
		absorbency=0;
		heatIsolation=0;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\accessories\data\Wedding_Ring_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\accessories\Wedding_Ring_m.p3d";
			female="Survivalists_Mods\characters\accessories\Wedding_Ring_f.p3d";
		};
	};
};
