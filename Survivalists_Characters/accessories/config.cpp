class CfgPatches
{
	class Survivalists_Characters_Accessories
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters" 
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
		model="Survivalists_Characters\accessories\Wedding_Ring_g.p3d";
		inventorySlot="Rings";
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
			"Survivalists_Characters\accessories\data\Wedding_Ring_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\accessories\Wedding_Ring_m.p3d";
			female="Survivalists_Characters\accessories\Wedding_Ring_f.p3d";
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
						{1.0,{"Survivalists_Characters\accessories\data\Wedding_ring.rvmat"}},
            {0.69999999,{"Survivalists_Characters\accessories\data\Wedding_ring.rvmat"}},
            {0.5,{"Survivalists_Characters\accessories\data\Wedding_ring.rvmat"}},
            {0.30000001,{"Survivalists_Characters\accessories\data\Wedding_ring.rvmat"}},
            {0.0,{"Survivalists_Characters\accessories\data\Wedding_ring.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Ring_Earth_ColorBase: Clothing
	{
		scope=0;
		displayName="Earthen Ring";
		descriptionShort="A ring of earthen color.";
		model="Survivalists_Characters\accessories\srp_ring_earth_g.p3d";
		inventorySlot="Rings";
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
			"Survivalists_Characters\accessories\data\srp_ring_earth_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\accessories\srp_ring_earth_m.p3d";
			female="Survivalists_Characters\accessories\srp_ring_earth_f.p3d";
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
						{1.0,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.69999999,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.5,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.30000001,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.0,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Ring_Earth_Basic: SRP_Ring_Earth_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\accessories\data\srp_ring_earth_co.paa"
		};
	};

  class SRP_Ring_Celtic_ColorBase: Clothing
	{
		scope=0;
		displayName="Celtic Ring";
		descriptionShort="A ring of celtic theme.";
		model="Survivalists_Characters\accessories\srp_ring_celtic_g.p3d";
		inventorySlot="Rings";
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
			"Survivalists_Characters\accessories\data\srp_ring_celtic_co.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\accessories\srp_ring_celtic_m.p3d";
			female="Survivalists_Characters\accessories\srp_ring_celtic_f.p3d";
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
						{1.0,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.69999999,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.5,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.30000001,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}},
            {0.0,{"Survivalists_Characters\accessories\data\srp_ring_earth.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Ring_Celtic_Basic: SRP_Ring_Celtic_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Characters\accessories\data\srp_ring_celtic_co.paa"
		};
	};
};
