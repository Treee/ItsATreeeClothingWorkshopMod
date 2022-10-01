class CfgPatches
{
	class Survivalists_Mods_Structures_Signs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Signs",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;
  class Container_Base;

  class SRP_KitBase;

  class Land_srp_billboard_largeground_sign1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\srp_billboard_largeground.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_billboard_apocalypse_co.paa"
		};
	};
  class Land_srp_billboard_largeground_sign2: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\srp_billboard_largeground.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_billboard_apocalypse_sign1_co.paa"
		};
	};
  class Land_srp_billboard_largeground_cougar: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\srp_billboard_largeground.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_billboard_apocalypse_cougar_co.paa"
		};
	};
	class Land_SRP_RoadSign_Waldoboro: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns1.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_1_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Bayville: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns1.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_2_CA.paa"
		};
	};
	class Land_SRP_RoadSign_OldTown: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns1.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_3_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Portland: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns2.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_1_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Westbrook: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns2.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_2_CA.paa"
		};
	};
	class Land_SRP_RoadSign_SandyBay: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns2.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_3_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Stonington: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns3.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_1_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Hazelands: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns3.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_2_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Oceanville: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns3.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_3_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Asheville: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns4.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_1_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Kushville: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns4.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_2_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Duskar: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns4.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_3_CA.paa"
		};
	};


  class Land_SRP_RoadSign_FullMap1: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns1.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_fullmap_co.paa"
		};
	};
  class Land_SRP_RoadSign_FullMap2: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns2.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_fullmap_co.paa"
		};
	};
  class Land_SRP_RoadSign_FullMap3: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_RoadSigns3.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_fullmap_co.paa"
		};
	};


  class Land_SRP_RoadSign_Eastbrook : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns1.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_4_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Oldfield : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns1.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_5_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Fairfield : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns2.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_4_CA.paa"
		};
	};
	class Land_SRP_RoadSign_SunsetCross : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns2.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_5_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Mountainville : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns3.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_4_CA.paa"
		};
	};
	class Land_SRP_RoadSign_WarrenCove : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns3.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_5_CA.paa"
		};
	};
	class Land_SRP_RoadSign_Threepwood : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns4.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_4_CA.paa"
		};
	};
	class Land_SRP_RoadSign_GeorgeTown : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\SRP_RoadSigns4.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\SRP_Town_Signs_5_CA.paa"
		};
	};  

  class Land_srp_templebeacon : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\srp_templebeacon.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
	}; 

  class Land_srp_bunkermonsterbeacon : HouseNoDestruct
	{
		scope = 1;
		model = "Survivalists_Mods\structures\signs\srp_templebeacon.p3d";
		hiddenSelections[] =
		{
			"zbytek"
		};
	};  

  class SRP_ForestSign_Original_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Original Forest Sign Kit";
		descriptionShort="A Original Forest Sign Kit";
	};
  class SRP_ForestSign_Original: Container_Base //new
	{
		scope=2;
		displayName="Forest Sign";
		descriptionShort="A sign for a forest entrance";
    model="Survivalists_Mods\structures\signs\SRP_ForestSign.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign.rvmat"
		};
	};

  class land_srp_forestsign_prospectshores: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_ForestSign.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_prospectshores_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign.rvmat"
		};
	};

	class land_srp_forestsign_base: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\SRP_ForestSign.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign.rvmat"
		};
	};

  class SRP_ForestSign_Sanctuary_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Sanctuary Forest Sign Kit";
		descriptionShort="A Sanctuary Forest Sign Kit";
	};

  class SRP_ForestSign_Sanctuary: Container_Base //new
	{
		scope=2;
		displayName="Forest Sign";
		descriptionShort="A sign for a forest entrance";
    model="Survivalists_Mods\structures\signs\SRP_ForestSign.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_sancutary_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign.rvmat"
		};
	};

  class land_srp_forestsign_sanctuary: land_srp_forestsign_base  // land_srp_sanctuarysign
	{
		scope=1;
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\nationalforestsign_sancutary_co.paa"
		};
	};

  class NeonSign_Wharf: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\neonsign_thewarf.p3d";
	};
  class NeonSign_TheStash: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\neonsign_thestash.p3d";
	};
  class NeonSign_Star: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\neonsign_star.p3d";
	};

  class SRP_KOS_BeaconStone: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\srp_kos_beaconstone.p3d";
	};

  class SRP_KOS_BeaconFire: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\srp_kos_beaconfire.p3d";
	};

  class SRP_BioHazardSign_House: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\streetsigns_caution.p3d";
	};
  
  class SRP_Gravestone_1Stone_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Stone";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_1Stone: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone1.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};
	class land_srp_gravestone1_stone: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone1.p3d";
	};
  class SRP_Gravestone_1Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_1Moss: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone1_moss.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};
  class land_srp_gravestone1_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone1_moss.p3d";
	};
  class SRP_Gravestone_2_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 2";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_2: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone2.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone2: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone2.p3d";
	};
  class SRP_Gravestone_3_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 3";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_3: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone3.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};    
  class land_srp_gravestone3: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone3.p3d";
	};
  class SRP_Gravestone_4_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 4";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_4: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone4.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone4: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone4.p3d";
	};
  class SRP_Gravestone_5_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 5";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_5: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone5.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone5: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone5.p3d";
	};
  class SRP_Gravestone_6_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 6";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_6: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone6.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone6: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone6.p3d";
	};
  class SRP_Gravestone_7_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 7";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_7: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone7.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone7: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone7.p3d";
	};
  class SRP_Gravestone_8_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 8";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_8: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone8.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone8: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone8.p3d";
	};
  class SRP_Gravestone_8Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 8 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_8Moss: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone8_moss.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone8_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone8_moss.p3d";
	};
  class SRP_Gravestone_9_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 9";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_9: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone9.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone9: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone9.p3d";
	};
  class SRP_Gravestone_10_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 10";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_10: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone10.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone10: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone10.p3d";
	};
  class SRP_Gravestone_11_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 11";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_11: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone11.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone11: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone11.p3d";
	};
  class SRP_Gravestone_11Worn_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 11 Worn";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_11Worn: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone11_worn.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone11_worn: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone11_worn.p3d";
	};
  class SRP_Gravestone_1Mud_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Mud";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_1Mud: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestonemud1.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestonemud1: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud1.p3d";
	};
  class SRP_Gravestone_2Mud_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 2 Mud";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_2Mud: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestonemud2.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestonemud2: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud2.p3d";
	};
  class SRP_Gravestone_3Mud_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 3 Mud";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_3Mud: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestonemud3.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestonemud3: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud3.p3d";
	};
  class SRP_Gravestone_1MudGrass_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 1 Mud Grass";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_1MudGrass: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestonemud1_grass.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestonemud1_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud1_grass.p3d";
	};
  class SRP_Gravestone_2MudGrass_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 2 Mud Grass";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_2MudGrass: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestonemud2_grass.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestonemud2_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud2_grass.p3d";
	};
  class SRP_Gravestone_3MudGrass_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 3 Mud Grass";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_3MudGrass: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestonemud3_grass.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestonemud3_grass: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestonemud3_grass.p3d";
	};
  class SRP_Gravestone_12_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 12";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_12: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone12.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone12: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone12.p3d";
	};
  class SRP_Gravestone_13_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 13";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_13: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone13.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone13: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone13.p3d";
	};
  class SRP_Gravestone_14_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 14";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_14: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone14.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone14: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone14.p3d";
	};
  class SRP_Gravestone_14Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 14 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_14Moss: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone14_moss.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone14_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone14_moss.p3d";
	};
  class SRP_Gravestone_15_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 15";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_15: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone15.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone15: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone15.p3d";
	};
  class SRP_Gravestone_15Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 15 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_15Moss: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone15_moss.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone15_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone15_moss.p3d";
	};
  class SRP_Gravestone_16_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 16";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_16: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone16.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone16: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone16.p3d";
	};
  class SRP_Gravestone_16Moss_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 16 Mossy";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_16Moss: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone16_moss.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone16_moss: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone16_moss.p3d";
	};
  class SRP_Gravestone_17_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 17";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_17: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone17.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone17: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone17.p3d";
	};
  class SRP_Gravestone_18_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 18";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_18: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone18.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone18: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone18.p3d";
	};
  class SRP_Gravestone_19_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 19";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_19: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone19.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone19: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone19.p3d";
	};
  class SRP_Gravestone_19Open_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="A gravestone Kit - 19 Open";
		descriptionShort="A gravestone Kit";
	};
  class SRP_Gravestone_19Open: Container_Base //new
	{
		scope=2;
		displayName="Gravestone";
		descriptionShort="A gravestone";
		model="Survivalists_Mods\structures\signs\gravestone19_open.p3d";
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
	};  
  class land_srp_gravestone19_open: HouseNoDestruct  // new
	{
		scope=1;
		model="Survivalists_Mods\structures\signs\gravestone19_open.p3d";
	};

  //====================================== Street Signs
  class SRP_StreetSign_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit";
		descriptionShort="A Street Sign Kit. Needs a bit more work before placing.";
	};

  class SRP_StreetSign_Base: Container_Base 
  {
    scope=2;
    displayName="Street Sign - Base";
		descriptionShort="A Street Sign";
    model="Survivalists_Mods\structures\signs\streetsigns_caution.p3d";
    carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_roadsigns_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_roadsigns.rvmat"
		};
  };

  class SRP_StreetSign_Caution_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Caution";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_Caution: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Caution";
    model="Survivalists_Mods\structures\signs\streetsigns_caution.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_CautionBiohazard_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Caution Biohazard";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_CautionBiohazard: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Caution Biohazard";
    model="Survivalists_Mods\structures\signs\streetsigns_caution.p3d";
    itemsCargoSize[]={0,0};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_roadsigns_biohazard_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_roadsigns_wiped.rvmat"
		};
	};

  class SRP_StreetSign_NoSmoking_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - No Smoking";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_NoSmoking: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - No Smoking";
    model="Survivalists_Mods\structures\signs\streetsigns_nosmoking.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_Handicap_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Handicap";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_Handicap: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Handicap";
    model="Survivalists_Mods\structures\signs\streetsigns_handicap.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_NoParking_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - No Parking";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_NoParking: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - No Parking";
    model="Survivalists_Mods\structures\signs\streetsigns_noparking.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_Yield_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Yield";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_Yield: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Yield";
    model="Survivalists_Mods\structures\signs\streetsigns_yield.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_Pedestrians_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Pedestrians";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_Pedestrians: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Pedestrians";
    model="Survivalists_Mods\structures\signs\streetsigns_pedestrian.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_NoBikes_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - No Bikes";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_NoBikes: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - No Bikes";
    model="Survivalists_Mods\structures\signs\streetsigns_nobikes.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_NoLeftTurn_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - No Left Turn";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_NoLeftTurn: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - No Left Turn";
    model="Survivalists_Mods\structures\signs\streetsigns_noleftturn.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_SpeedLimit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Speed Limit";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_SpeedLimit: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Speed Limit";
    model="Survivalists_Mods\structures\signs\streetsigns_speedlimit.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_BikePath_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Bike Path";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_BikePath: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Bike Path";
    model="Survivalists_Mods\structures\signs\streetsigns_bikepath.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_OneWay_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - One Way";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_OneWay: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - One Way";
    model="Survivalists_Mods\structures\signs\streetsigns_oneway.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_HandicapSmall_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Handicap Small";
		descriptionShort="A Street Sign Kit";
    
	};
  class SRP_StreetSign_HandicapSmall: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Handicap Small";
    model="Survivalists_Mods\structures\signs\streetsigns_handicapsmall.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_StreetSign_Highway_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Street Sign Kit - Highway";
		descriptionShort="A Street Sign Kit";
	};
  class SRP_StreetSign_Highway: SRP_StreetSign_Base //new
	{
		scope=2;
		displayName="Street Sign - Highway";
    model="Survivalists_Mods\structures\signs\streetsigns_highwaysign.p3d";
    itemsCargoSize[]={0,0};
	};

  class SRP_HangingWoodenSign_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Hanging Wooden Sign Kit";
		descriptionShort="A Hanging Wooden Sign Kit";
	};

  class SRP_HangingWoodenSign: Container_Base 
  {
    scope=2;
    displayName="Hanging Wooden Sign";
		descriptionShort="A Hanging Wooden Sign";
    model="Survivalists_Mods\structures\signs\woodensign_hanging.p3d";
    carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
    itemsCargoSize[]={0,0};
		itemBehaviour=0;
		physLayer="item_large";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_woodensign_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_woodensign.rvmat"
		};
  };

  class SRP_CollectableSign_Base: Container_Base
	{
		scope=0;
		displayName="Collectable Sign - Wide";
		descriptionShort="A Collectable Sign";
		model="Survivalists_Mods\structures\signs\SRP_CollectableSign_wide.p3d";
		itemSize[]={4,4};
    itemsCargoSize[]={0,0};
		weight=300;
		rotationFlags=16;
		itemBehaviour=1;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\srp_sign_freshbakery_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"Survivalists_Mods\structures\signs\data\srp_collectablesignwide.rvmat"
		};
	};
  class SRP_CollectableSign2_Base: Container_Base
	{
		scope=0;
		displayName="Collectable Sign - Tall";
		descriptionShort="A Collectable Sign";
		model="Survivalists_Mods\structures\signs\SRP_CollectableSign_tall.p3d";
		itemSize[]={4,4};
    itemsCargoSize[]={0,0};
		weight=300;
		rotationFlags=16;
		itemBehaviour=1;
		hiddenSelections[] =
		{
			"zbytek"
		};
    hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\srp_sign_deserts_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"Survivalists_Mods\structures\signs\data\srp_collectablesigntall.rvmat"
		};
	};

  class SRPInvestor_Sign_Rekis8853_House: HouseNoDestruct
	{
		scope=1;
    model="Survivalists_Mods\structures\signs\SRP_CollectableSign_wide.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\structures\signs\data\srp_collectablesign_rekis_co.paa"
		};
	};

  class SRP_PictureFrame: Container_Base
	{
		scope=0;
		displayName="Picture Frame";
		descriptionShort="A Picture Frame";
		model="Survivalists_Mods\structures\signs\SRP_PictureFrame.p3d";
		itemSize[]={4,4};
    itemsCargoSize[]={0,0};
		weight=300;
		rotationFlags=16;
		itemBehaviour=1;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"Survivalists_Mods\structures\signs\data\srp_pictureframe_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"Survivalists_Mods\structures\signs\data\srp_pictureframe.rvmat"
		};
	};
};