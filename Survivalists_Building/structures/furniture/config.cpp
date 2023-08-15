class CfgPatches
{
	class Survivalists_Building_Structures_Furniture
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Structures_Furniture"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
  class SRP_KitBase;
//========================================== SCOPE 1
  class land_srp_furniture_japaneseshrine: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japaneseshrine.p3d";
	};
  class land_srp_furniture_japanesetemple: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japanesetemple.p3d";
	};
  class land_srp_furniture_japanesetorigate: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japanestorigate.p3d";
	};
  class land_srp_furniture_japanesetorigate2: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japanesetorigate2.p3d";
	};
//========================================== "HOUSE" FURNITURE
  class SRP_Furniture_JapaneseShrine_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Japanese Shrine Kit - Worn";
		descriptionShort="A placeable japanese shrine kit";
    projectionTypename="SRP_Furniture_JapaneseShrine_Default";
	};
  class SRP_Furniture_JapaneseShrine_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japaneseshrine.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_building_japaneseshrine_co.paa"
		};
	};

  class SRP_Furniture_JapaneseTemple_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Japanese Temple Kit - Worn";
		descriptionShort="A placeable japanese temple kit";
    projectionTypename="SRP_Furniture_JapaneseTemple_Default";
	};
  class SRP_Furniture_JapaneseTemple_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japanesetemple.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_building_japanesetemple_co.paa"
		};
	};

  class SRP_Furniture_JapaneseToriGate_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Japanese Tori Gate Kit - Worn";
		descriptionShort="A placeable japanese tori gate kit";
    projectionTypename="SRP_Furniture_JapaneseToriGate_Default";
	};
  class SRP_Furniture_JapaneseToriGate_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japanestorigate.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_furniture_torigate_co.paa"
		};
	};

  class SRP_Furniture_JapaneseToriGate2_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Japanese Tori Gate Kit - Worn Decorated";
		descriptionShort="A placeable japanese tori gate kit";
    projectionTypename="SRP_Furniture_JapaneseToriGate2_Default";
	};
  class SRP_Furniture_JapaneseToriGate2_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_japanesetorigate2.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_furniture_torigate2_co.paa"
		};
	};
};