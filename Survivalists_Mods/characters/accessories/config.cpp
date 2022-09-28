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
  class DayZInfected;

  class SRP_KitBase;

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
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\accessories\data\Wedding_ring.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\accessories\data\Wedding_ring.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\accessories\data\Wedding_ring.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\accessories\data\Wedding_ring.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\accessories\data\Wedding_ring.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_AccessoryRing_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Accessory Kit - Ring";
		descriptionShort="An accessory kit. Used to make rings.";
    attachments[]=
		{
			"SRP_MetalPlate1",
      "SRP_MetalRod1",
      "SRP_RawCrystal1",
      "Material_MetalWire",
		};
	};
  
  class ZombieBase: DayZInfected
	{
    class Skinning
		{
			class Guts
			{
				item = "Guts";
				count = 1;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class Bones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.2,0.4};
			};
			class Skin
			{
				item = "DUB_Humanpelt";
				count = 1;
				quantityMinMaxCoef[] = {0.8,1};
			};
		};
  };
};
