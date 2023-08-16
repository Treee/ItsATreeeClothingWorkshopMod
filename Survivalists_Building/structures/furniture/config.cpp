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
  class land_SRP_Furniture_StoneBust_Default: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonebust.p3d";
	};
  class land_SRP_Furniture_StoneBench_Default: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonebench.p3d";
	};
  class land_SRP_Furniture_StoneColumn_Default: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonecolumn.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Angel_Default: HouseNoDestruct
	{
		scope=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_angel.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Death_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_death.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Ganesh_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_ganesh.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Gargoyle_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_gargoyle.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Guardian_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_guardian.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Pirate_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_pirate.p3d";
	};
  class land_SRP_Furniture_StoneStatue_Woman_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_standingwoman.p3d";
	};
  class land_SRP_Furniture_StoneStatue_StJacob_Default: HouseNoDestruct
	{
		scope=1;    
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_stjacob.p3d";
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
//========================================== STONE FURNITURE
  class SRP_Furniture_StoneBust_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Head Bust Kit";
		descriptionShort="A stone bust carved in the shape of two heads.";
    projectionTypename="SRP_Furniture_StoneBust_Default";
	};
  class SRP_Furniture_StoneBust_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonebust.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonebust_co.paa"
		};
	};

  class SRP_Furniture_StoneBench_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Bench Kit";
		descriptionShort="A stone bench carved from marble.";
    projectionTypename="SRP_Furniture_StoneBench_Default";
	};
  class SRP_Furniture_StoneBench_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonebench.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stone_bench_co.paa"
		};
	};

  class SRP_Furniture_StoneColumn_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Column Kit";
		descriptionShort="A stone column carved from marble.";
    projectionTypename="SRP_Furniture_StoneColumn_Default";
	};
  class SRP_Furniture_StoneColumn_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonecolumn.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stone_column_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Angel_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Angel";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Angel_Default";
	};
  class SRP_Furniture_StoneStatue_Angel_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_angel.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_angel_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Death_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Death";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Death_Default";
	};
  class SRP_Furniture_StoneStatue_Death_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_death.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_death_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Ganesh_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Ganesh";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Ganesh_Default";
	};
  class SRP_Furniture_StoneStatue_Ganesh_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_ganesh.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_ganesh_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Gargoyle_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Gargoyle";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Gargoyle_Default";
	};
  class SRP_Furniture_StoneStatue_Gargoyle_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_gargoyle.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_gargoyle_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Guardian_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Guardian";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Guardian_Default";
	};
  class SRP_Furniture_StoneStatue_Guardian_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_guardian.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_guardian_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Pirate_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Pirate";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Pirate_Default";
	};
  class SRP_Furniture_StoneStatue_Pirate_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_pirate.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_pirate_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_Woman_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - Woman";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_Woman_Default";
	};
  class SRP_Furniture_StoneStatue_Woman_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_standingwoman.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_standingwoman_co.paa"
		};
	};

  class SRP_Furniture_StoneStatue_StJacob_Default_Kit: SRP_KitBase
	{
		scope=2;
		displayName="Stone Statue Kit - St. Jacob";
		descriptionShort="A stone statue carved kit.";
    projectionTypename="SRP_Furniture_StoneStatue_StJacob_Default";
	};
  class SRP_Furniture_StoneStatue_StJacob_Default: HouseNoDestruct
	{
		scope=2;
    storageCategory=1;
		model="Survivalists_Building\structures\furniture\srp_furniture_stonestatue_stjacob.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\structures\furniture\data\srp_stonestatue_stjacob_co.paa"
		};
	};
};