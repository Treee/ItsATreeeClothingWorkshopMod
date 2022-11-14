class CfgPatches
{
	class Survivalists_Mods_Gear_Carpentry
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Camping",
      "Survivalists_Mods"      
		};
	};
};

class CfgVehicles
{
  class HouseNoDestruct;
  class Fence;
  class Inventory_Base;

  class SRP_KitBase;
//------------------------------ BASE BUILDING
  class SRP_Deconstruction_Kit: SRP_KitBase //new
	{
		scope=0;
		displayName="Carpentry Deconstruction Kit. (Tagged for Removal. Do not store anything inside this item.)";
		descriptionShort="A kit with the appropriate tools to correctly disassemble a placed item.";
    attachments[]=
    {
      "SRP_ToolKit_Hammer",
      "SRP_ToolKit_Hatchet",
      "SRP_ToolKit_HandSaw",
      "SRP_ToolKit_Pliers",
      "SRP_ToolKit_Screwdriver",      
      "SRP_ToolKit_Shovel",            
      "SRP_ToolKit_Caliper",
      "SRP_ToolKit_Handdrill",
      "SRP_ToolKit_Crowbar",
      "SRP_ToolKit_Wrench",
    };
	};

//--------------------------------- TAXIDERMY
  class SRP_Taxidermy_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Taxidermy Kit - Base Mount";
		descriptionShort="A kit with the appropriate tools to build the base mount for a properly taxidermied animal.";
    attachments[]=
    {
      "AnimalSkull",
      "AnimalPelt1",
      "AnimalPelt2",
      "AnimalPelt3",
      "AnimalPelt4",
      "Material_Shelter_Leather",
      "Material_Shelter_FrameSticks",
			"MetalWire",
			"Material_MetalWire",
			"Material_FPole_MetalWire",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags",
    };
	};
  class SRP_TaxidermyWall_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Taxidermy Kit - Wall Mount";
		descriptionShort="A kit with the appropriate tools to build the wall mount for a properly taxidermied animal.";
    attachments[]=
    {
      "AnimalSkull",
      "AnimalPelt1",
      "AnimalPelt2",
      "AnimalPelt3",
      "AnimalPelt4",
      "Material_Shelter_FrameSticks",
			"MetalWire",
			"Material_MetalWire",
			"Material_FPole_MetalWire",
      "Material_Shelter_Leather",
      "Material_Shelter_Fabric",
      "Rope",
      "Rags",
    };
	};


//------------------------------- BUILDING FRAMES
  class SRP_BuildingComponentFrame_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit";
		descriptionShort="A Building Component Kit";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_BuildingComponentFrame_ColorBase: Inventory_Base // new
	{
		scope=0;
		displayName="Wooden Building Component";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornramp.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    itemsCargoSize[]={0,0};
    color="base";
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\srp_woodbuildingcomponents.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_BuildingComponentFrame_WornRamp_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn Ramp";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornRamp: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn Ramp";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornramp.p3d";
    itemsCargoSize[]={0,0};
    color="wornramp";
  };

  class SRP_BuildingComponentFrame_WornLPlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn L Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornLPlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn L Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornlplatform.p3d";
    itemsCargoSize[]={0,0};
    color="wornlplatform";
  };
  
  class SRP_BuildingComponentFrame_WornUPlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn U Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornUPlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn U Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornuplatform.p3d";
    itemsCargoSize[]={0,0};
    color="wornuplatform";
  };

  class SRP_BuildingComponentFrame_WornFlatPlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn Flat Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornFlatPlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn Flat Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornflatplatform.p3d";
    itemsCargoSize[]={0,0};
    color="wornflatplatform";
  };

  class SRP_BuildingComponentFrame_WornFlatDoublePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn Long Flat Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornFlatDoublePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn Long Flat Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornflatdoubleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="wornflatdoubleplatform";
  };

  class SRP_BuildingComponentFrame_WornSinglePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn Single Rail Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornSinglePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn Single Rail Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornsingleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="wornsingleplatform";
  };

  class SRP_BuildingComponentFrame_WornDoublePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn Double Rail Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornDoublePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn Double Rail Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_worndoubleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="worndoubleplatform";
  };

  class SRP_BuildingComponentFrame_WornLongDoublePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Worn Long Double Rail Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_WornLongDoublePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Worn Long Double Rail Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_wornlongdoubleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="wornlongdoubleplatform";
  };



  class SRP_BuildingComponentFrame_FineRamp_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine Ramp";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineRamp: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine Ramp";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_fineramp.p3d";
    itemsCargoSize[]={0,0};
    color="fineramp";
  };

  class SRP_BuildingComponentFrame_FineLPlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine L Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineLPlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine L Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_finelplatform.p3d";
    itemsCargoSize[]={0,0};
    color="finelplatform";
  };
  
  class SRP_BuildingComponentFrame_FineUPlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine U Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineUPlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine U Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_fineuplatform.p3d";
    itemsCargoSize[]={0,0};
    color="fineuplatform";
  };

  class SRP_BuildingComponentFrame_FineFlatPlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine Flat Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineFlatPlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine Flat Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_fineflatplatform.p3d";
    itemsCargoSize[]={0,0};
    color="fineflatplatform";
  };

  class SRP_BuildingComponentFrame_FineFlatDoublePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine Long Flat Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineFlatDoublePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine Long Flat Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_fineflatdoubleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="fineflatplatform";
  };

  class SRP_BuildingComponentFrame_FineSinglePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine Single Rail Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineSinglePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine Single Rail Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_finesingleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="finesingleplatform";
  };

  class SRP_BuildingComponentFrame_FineDoublePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine Double Rail Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineDoublePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine Double Rail Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_finedoubleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="finedoubleplatform";
  };

  class SRP_BuildingComponentFrame_FineLongDoublePlatform_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Building Component Kit - Fine Long Double Rail Platform";
		descriptionShort="A Building Component Kit";
	};
  class SRP_BuildingComponentFrame_FineLongDoublePlatform: SRP_BuildingComponentFrame_ColorBase // new
	{
		scope=2;
		displayName="Wooden Building Component - Fine Long Double Rail Platform";
		descriptionShort="This component can be used to build up a large compound.";
		model="Survivalists_Mods\gear\carpentry\srp_buildingcomponent_finelongdoubleplatform.p3d";
    itemsCargoSize[]={0,0};
    color="finedoubleplatform";
  };

//-------------------------------- Barricades
  class SRP_BarricadeKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Barricade Kit";
		descriptionShort="A Barricade Kit - Still needs a bit of work. Combine with other materials to finish.";
    attachments[]=
    {
      "Material_Nails",
      "Material_WoodenPlanks",
      "Material_MetalSheets",
      "Material_MetalWire"
    };
	};

  class SRP_Barricade_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Barricade Kit";
		descriptionShort="A Wooden Barricade Kit";
	};

  class SRP_Barricade_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenbarricade.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_BarricadeWithWindow_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Barricade Kit";
		descriptionShort="A Wooden Barricade Kit";
	};

  class SRP_BarricadeWithWindow_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenbarricade_windowed.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_WindowBarricade_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Window Barricade Kit";
		descriptionShort="A Wooden Window Barricade Kit";
	};

  class SRP_WindowBarricade_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Window Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenwindowbarricade.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_WindowBarricadeTall_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Tall Wooden Window Barricade Kit";
		descriptionShort="A Tall Wooden Window Barricade Kit";
	};

  class SRP_WindowBarricadeTall_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Tall Wooden Window Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenwindowbarricadetall.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_SpikeBarricade_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Spike Barricade Kit";
		descriptionShort="A Wooden Spike Barricade Kit";
	};

  class SRP_SpikeBarricade_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Spike Barricade";
		descriptionShort="This puts some distance between you and them.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenspikebarricade.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenspikesbarricade.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

//============================ LETTERS
  // intermediate kit, chooses an option
  class SRP_LetterKit_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
	};
  // deploy kit. one per symbol
  class SRP_Letter_A_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_B_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_C_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_D_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_E_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_F_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_G_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_H_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_I_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_J_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_K_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_L_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_M_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_N_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_O_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_P_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Q_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_R_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_S_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_T_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_U_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_V_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_W_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_X_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Y_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Z_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";
		displayName="Wooden Letter Kit";
		descriptionShort="A Wooden Letter Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_0_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_1_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_2_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_3_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_4_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_5_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_6_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_7_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_8_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_9_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";
		displayName="Wooden Number Kit";
		descriptionShort="A Wooden Number Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Ampersand_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Asterisk_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Dollars_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Equals_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Exclamation_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Hash_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Parenthesis_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Percent_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Plus_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Question_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Slash_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  class SRP_Letter_Times_Kit: SRP_KitBase //new
	{
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";
		displayName="Wooden Symbol Kit";
		descriptionShort="A Wooden Symbol Kit";
    itemBehaviour=1;
	};
  
// DEPLOYED LETTER - DEFAULT
  class SRP_Letter_Colorbase: Inventory_Base // new
	{
		scope=0;
		displayName="Letter";
		descriptionShort="This letter was fashioned out of some sort of material.";
		model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=1;
		physLayer="item_large";
    inherit_rotation=1;
    color="base";
		itemSize[]={2,2};
    rotationFlags=16;
    isTakeable=0;
    itemsCargoSize[]={0,0};
    inventorySlot[]=
    {
      "SRP_MagnetLetter"
    };
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "dz\gear\consumables\data\oak_bark_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"dz\gear\consumables\data\oak_bark.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]=
					{
						{1.0,{"dz\gear\consumables\data\oak_bark.rvmat"}},
            {0.69999999,{"dz\gear\consumables\data\oak_bark.rvmat"}},
            {0.5,{"dz\gear\consumables\data\oak_bark_damage.rvmat"}},
            {0.30000001,{"dz\gear\consumables\data\oak_bark_damage.rvmat"}},
            {0.0,{"dz\gear\consumables\data\oak_bark_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_Letter_A: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";
    color="a";
  };
  class SRP_Letter_B: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";
    color="b";
  };
  class SRP_Letter_C: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";
    color="c";
  };
  class SRP_Letter_D: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";
    color="d";
  };
  class SRP_Letter_E: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";
    color="e";
  };
  class SRP_Letter_F: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";
    color="f";
  };
  class SRP_Letter_G: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";
    color="g";
  };
  class SRP_Letter_H: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";
    color="h";
  };
  class SRP_Letter_I: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";
    color="i";
  };
  class SRP_Letter_J: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";
    color="j";
  };
  class SRP_Letter_K: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";
    color="k";
  };
  class SRP_Letter_L: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";
    color="l";
  };
  class SRP_Letter_M: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";
    color="m";
  };
  class SRP_Letter_N: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";
    color="n";
  };
  class SRP_Letter_O: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";
    color=" o";
  };
  class SRP_Letter_P: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";
    color="p";
  };
  class SRP_Letter_Q: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";
    color="q";
  };
  class SRP_Letter_R: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";
    color="r";
  };
  class SRP_Letter_S: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";
    color="s";
  };
  class SRP_Letter_T: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";
    color="t";
  };
  class SRP_Letter_U: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";
    color="u";
  };
  class SRP_Letter_V: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";
    color="v";
  };
  class SRP_Letter_W: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";
    color="w";
  };
  class SRP_Letter_X: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";
    color="x";
  };
  class SRP_Letter_Y: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";
    color="y";
  };
  class SRP_Letter_Z: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";
    color="z";
  };
  class SRP_Letter_0: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";
    color="0";
    inventorySlot[]={};
  };
  class SRP_Letter_1: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";
    color="1";
    inventorySlot[]={};
  };
  class SRP_Letter_2: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";
    color="2";
    inventorySlot[]={};
  };
  class SRP_Letter_3: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";
    color="3";
    inventorySlot[]={};
  };
  class SRP_Letter_4: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";
    color="4";
    inventorySlot[]={};
  };
  class SRP_Letter_5: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";
    color="5";
    inventorySlot[]={};
  };
  class SRP_Letter_6: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";
    color="6";
    inventorySlot[]={};
  };
  class SRP_Letter_7: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";
    color="7";
    inventorySlot[]={};
  };
  class SRP_Letter_8: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";
    color="8";
    inventorySlot[]={};
  };
  class SRP_Letter_9: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";
    color="9";
    inventorySlot[]={};
  };
  class SRP_Letter_Ampersand: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";
    color="ampersand";
    inventorySlot[]={};
  };
  class SRP_Letter_Asterisk: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";
    color="asterisk";
    inventorySlot[]={};
  };
  class SRP_Letter_Dollars: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";
    color="dollars";
    inventorySlot[]={};
  };
  class SRP_Letter_Equals: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";
    color="equals";
    inventorySlot[]={};
  };
  class SRP_Letter_Exclamation: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";
    color="exclamation";
    inventorySlot[]={};
  };
  class SRP_Letter_Hash: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";
    color="hash";
    inventorySlot[]={};
  };
  class SRP_Letter_Parenthesis: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";
    color="parenthesis";
    inventorySlot[]={};
  };
  class SRP_Letter_Percent: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";
    color="percent";
    inventorySlot[]={};
  };
  class SRP_Letter_Plus: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";
    color="plus";
    inventorySlot[]={};
  };
  class SRP_Letter_Question: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";
    color="question";
    inventorySlot[]={};
  };
  class SRP_Letter_Slash: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";
    color="slash";
    inventorySlot[]={};
  };
  class SRP_Letter_Times: SRP_Letter_Colorbase
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";
    color="times";
    inventorySlot[]={};
  };

//================================ ash
  class SRP_Letter_A_ash: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_B_ash: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_C_ash: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_D_ash: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_E_ash: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_F_ash: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_G_ash: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_H_ash: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_I_ash: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_J_ash: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_K_ash: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_L_ash: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_M_ash: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_N_ash: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_O_ash: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_P_ash: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Q_ash: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_R_ash: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_S_ash: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_T_ash: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_U_ash: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_V_ash: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_W_ash: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_X_ash: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Y_ash: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Z_ash: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_0_ash: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_1_ash: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_2_ash: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_3_ash: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_4_ash: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_5_ash: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_6_ash: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_7_ash: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_8_ash: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_9_ash: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Ampersand_ash: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Asterisk_ash: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Dollars_ash: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Equals_ash: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Exclamation_ash: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Hash_ash: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Parenthesis_ash: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Percent_ash: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Plus_ash: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Question_ash: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Slash_ash: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };
  class SRP_Letter_Times_ash: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_ash_co.paa"};
  };

//================================ birchy
  class SRP_Letter_A_birchy: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_B_birchy: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_C_birchy: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_D_birchy: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_E_birchy: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_F_birchy: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_G_birchy: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_H_birchy: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_I_birchy: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_J_birchy: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_K_birchy: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_L_birchy: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_M_birchy: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_N_birchy: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_O_birchy: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_P_birchy: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Q_birchy: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_R_birchy: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_S_birchy: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_T_birchy: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_U_birchy: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_V_birchy: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_W_birchy: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_X_birchy: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Y_birchy: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Z_birchy: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_0_birchy: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_1_birchy: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_2_birchy: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_3_birchy: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_4_birchy: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_5_birchy: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_6_birchy: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_7_birchy: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_8_birchy: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_9_birchy: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Ampersand_birchy: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Asterisk_birchy: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Dollars_birchy: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Equals_birchy: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Exclamation_birchy: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Hash_birchy: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Parenthesis_birchy: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Percent_birchy: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Plus_birchy: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Question_birchy: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Slash_birchy: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };
  class SRP_Letter_Times_birchy: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_birchy_co.paa"};
  };

//================================ blue
  class SRP_Letter_A_blue: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_B_blue: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_C_blue: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_D_blue: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_E_blue: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_F_blue: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_G_blue: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_H_blue: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_I_blue: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_J_blue: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_K_blue: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_L_blue: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_M_blue: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_N_blue: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_O_blue: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_P_blue: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Q_blue: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_R_blue: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_S_blue: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_T_blue: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_U_blue: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_V_blue: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_W_blue: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_X_blue: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Y_blue: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Z_blue: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_0_blue: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_1_blue: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_2_blue: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_3_blue: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_4_blue: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_5_blue: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_6_blue: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_7_blue: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_8_blue: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_9_blue: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Ampersand_blue: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Asterisk_blue: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Dollars_blue: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Equals_blue: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Exclamation_blue: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Hash_blue: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Parenthesis_blue: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Percent_blue: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Plus_blue: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Question_blue: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Slash_blue: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };
  class SRP_Letter_Times_blue: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_blue_co.paa"};
  };

//================================ burnt
  class SRP_Letter_A_burnt: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_B_burnt: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_C_burnt: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_D_burnt: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_E_burnt: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_F_burnt: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_G_burnt: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_H_burnt: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_I_burnt: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_J_burnt: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_K_burnt: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_L_burnt: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_M_burnt: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_N_burnt: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_O_burnt: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_P_burnt: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Q_burnt: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_R_burnt: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_S_burnt: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_T_burnt: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_U_burnt: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_V_burnt: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_W_burnt: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_X_burnt: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Y_burnt: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Z_burnt: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_0_burnt: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_1_burnt: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_2_burnt: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_3_burnt: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_4_burnt: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_5_burnt: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_6_burnt: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_7_burnt: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_8_burnt: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_9_burnt: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Ampersand_burnt: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Asterisk_burnt: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Dollars_burnt: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Equals_burnt: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Exclamation_burnt: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Hash_burnt: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Parenthesis_burnt: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Percent_burnt: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Plus_burnt: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Question_burnt: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Slash_burnt: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };
  class SRP_Letter_Times_burnt: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_burnt_co.paa"};
  };

//================================ coal
  class SRP_Letter_A_coal: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_B_coal: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_C_coal: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_D_coal: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_E_coal: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_F_coal: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_G_coal: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_H_coal: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_I_coal: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_J_coal: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_K_coal: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_L_coal: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_M_coal: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_N_coal: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_O_coal: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_P_coal: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Q_coal: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_R_coal: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_S_coal: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_T_coal: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_U_coal: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_V_coal: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_W_coal: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_X_coal: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Y_coal: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Z_coal: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_0_coal: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_1_coal: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_2_coal: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_3_coal: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_4_coal: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_5_coal: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_6_coal: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_7_coal: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_8_coal: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_9_coal: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Ampersand_coal: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Asterisk_coal: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Dollars_coal: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Equals_coal: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Exclamation_coal: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Hash_coal: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Parenthesis_coal: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Percent_coal: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Plus_coal: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Question_coal: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Slash_coal: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };
  class SRP_Letter_Times_coal: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_coal_co.paa"};
  };

//================================ green
  class SRP_Letter_A_green: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_B_green: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_C_green: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_D_green: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_E_green: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_F_green: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_G_green: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_H_green: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_I_green: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_J_green: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_K_green: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_L_green: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_M_green: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_N_green: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_O_green: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_P_green: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Q_green: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_R_green: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_S_green: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_T_green: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_U_green: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_V_green: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_W_green: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_X_green: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Y_green: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Z_green: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_0_green: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_1_green: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_2_green: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_3_green: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_4_green: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_5_green: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_6_green: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_7_green: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_8_green: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_9_green: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Ampersand_green: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Asterisk_green: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Dollars_green: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Equals_green: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Exclamation_green: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Hash_green: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Parenthesis_green: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Percent_green: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Plus_green: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Question_green: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Slash_green: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };
  class SRP_Letter_Times_green: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_green_co.paa"};
  };

//================================ lavender
  class SRP_Letter_A_lavender: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_B_lavender: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_C_lavender: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_D_lavender: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_E_lavender: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_F_lavender: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_G_lavender: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_H_lavender: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_I_lavender: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_J_lavender: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_K_lavender: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_L_lavender: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_M_lavender: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_N_lavender: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_O_lavender: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_P_lavender: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Q_lavender: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_R_lavender: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_S_lavender: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_T_lavender: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_U_lavender: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_V_lavender: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_W_lavender: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_X_lavender: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Y_lavender: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Z_lavender: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_0_lavender: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_1_lavender: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_2_lavender: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_3_lavender: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_4_lavender: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_5_lavender: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_6_lavender: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_7_lavender: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_8_lavender: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_9_lavender: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Ampersand_lavender: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Asterisk_lavender: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Dollars_lavender: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Equals_lavender: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Exclamation_lavender: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Hash_lavender: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Parenthesis_lavender: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Percent_lavender: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Plus_lavender: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Question_lavender: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Slash_lavender: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };
  class SRP_Letter_Times_lavender: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lavender_co.paa"};
  };

//================================ lime
  class SRP_Letter_A_lime: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_B_lime: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_C_lime: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_D_lime: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_E_lime: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_F_lime: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_G_lime: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_H_lime: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_I_lime: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_J_lime: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_K_lime: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_L_lime: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_M_lime: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_N_lime: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_O_lime: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_P_lime: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Q_lime: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_R_lime: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_S_lime: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_T_lime: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_U_lime: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_V_lime: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_W_lime: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_X_lime: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Y_lime: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Z_lime: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_0_lime: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_1_lime: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_2_lime: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_3_lime: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_4_lime: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_5_lime: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_6_lime: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_7_lime: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_8_lime: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_9_lime: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Ampersand_lime: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Asterisk_lime: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Dollars_lime: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Equals_lime: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Exclamation_lime: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Hash_lime: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Parenthesis_lime: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Percent_lime: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Plus_lime: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Question_lime: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Slash_lime: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };
  class SRP_Letter_Times_lime: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_lime_co.paa"};
  };

//================================ mossy
  class SRP_Letter_A_mossy: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_B_mossy: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_C_mossy: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_D_mossy: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_E_mossy: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_F_mossy: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_G_mossy: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_H_mossy: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_I_mossy: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_J_mossy: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_K_mossy: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_L_mossy: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_M_mossy: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_N_mossy: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_O_mossy: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_P_mossy: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Q_mossy: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_R_mossy: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_S_mossy: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_T_mossy: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_U_mossy: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_V_mossy: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_W_mossy: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_X_mossy: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Y_mossy: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Z_mossy: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_0_mossy: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_1_mossy: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_2_mossy: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_3_mossy: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_4_mossy: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_5_mossy: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_6_mossy: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_7_mossy: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_8_mossy: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_9_mossy: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Ampersand_mossy: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Asterisk_mossy: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Dollars_mossy: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Equals_mossy: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Exclamation_mossy: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Hash_mossy: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Parenthesis_mossy: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Percent_mossy: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Plus_mossy: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Question_mossy: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Slash_mossy: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };
  class SRP_Letter_Times_mossy: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_mossy_co.paa"};
  };

//================================ pink
  class SRP_Letter_A_pink: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_B_pink: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_C_pink: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_D_pink: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_E_pink: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_F_pink: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_G_pink: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_H_pink: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_I_pink: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_J_pink: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_K_pink: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_L_pink: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_M_pink: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_N_pink: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_O_pink: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_P_pink: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Q_pink: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_R_pink: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_S_pink: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_T_pink: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_U_pink: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_V_pink: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_W_pink: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_X_pink: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Y_pink: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Z_pink: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_0_pink: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_1_pink: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_2_pink: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_3_pink: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_4_pink: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_5_pink: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_6_pink: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_7_pink: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_8_pink: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_9_pink: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Ampersand_pink: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Asterisk_pink: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Dollars_pink: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Equals_pink: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Exclamation_pink: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Hash_pink: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Parenthesis_pink: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Percent_pink: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Plus_pink: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Question_pink: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Slash_pink: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };
  class SRP_Letter_Times_pink: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_pink_co.paa"};
  };

//================================ purple
  class SRP_Letter_A_purple: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_B_purple: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_C_purple: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_D_purple: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_E_purple: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_F_purple: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_G_purple: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_H_purple: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_I_purple: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_J_purple: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_K_purple: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_L_purple: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_M_purple: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_N_purple: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_O_purple: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_P_purple: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Q_purple: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_R_purple: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_S_purple: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_T_purple: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_U_purple: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_V_purple: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_W_purple: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_X_purple: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Y_purple: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Z_purple: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_0_purple: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_1_purple: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_2_purple: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_3_purple: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_4_purple: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_5_purple: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_6_purple: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_7_purple: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_8_purple: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_9_purple: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Ampersand_purple: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Asterisk_purple: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Dollars_purple: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Equals_purple: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Exclamation_purple: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Hash_purple: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Parenthesis_purple: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Percent_purple: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Plus_purple: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Question_purple: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Slash_purple: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };
  class SRP_Letter_Times_purple: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_purple_co.paa"};
  };

//================================ red
  class SRP_Letter_A_red: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_B_red: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_C_red: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_D_red: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_E_red: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_F_red: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_G_red: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_H_red: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_I_red: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_J_red: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_K_red: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_L_red: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_M_red: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_N_red: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_O_red: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_P_red: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Q_red: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_R_red: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_S_red: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_T_red: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_U_red: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_V_red: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_W_red: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_X_red: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Y_red: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Z_red: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_0_red: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_1_red: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_2_red: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_3_red: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_4_red: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_5_red: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_6_red: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_7_red: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_8_red: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_9_red: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Ampersand_red: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Asterisk_red: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Dollars_red: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Equals_red: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Exclamation_red: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Hash_red: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Parenthesis_red: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Percent_red: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Plus_red: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Question_red: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Slash_red: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };
  class SRP_Letter_Times_red: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_red_co.paa"};
  };

//================================ redwood
  class SRP_Letter_A_redwood: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_B_redwood: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_C_redwood: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_D_redwood: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_E_redwood: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_F_redwood: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_G_redwood: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_H_redwood: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_I_redwood: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_J_redwood: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_K_redwood: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_L_redwood: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_M_redwood: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_N_redwood: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_O_redwood: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_P_redwood: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Q_redwood: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_R_redwood: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_S_redwood: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_T_redwood: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_U_redwood: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_V_redwood: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_W_redwood: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_X_redwood: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Y_redwood: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Z_redwood: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_0_redwood: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_1_redwood: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_2_redwood: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_3_redwood: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_4_redwood: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_5_redwood: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_6_redwood: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_7_redwood: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_8_redwood: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_9_redwood: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Ampersand_redwood: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Asterisk_redwood: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Dollars_redwood: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Equals_redwood: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Exclamation_redwood: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Hash_redwood: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Parenthesis_redwood: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Percent_redwood: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Plus_redwood: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Question_redwood: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Slash_redwood: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };
  class SRP_Letter_Times_redwood: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_redwood_co.paa"};
  };

//================================ sky
  class SRP_Letter_A_sky: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_B_sky: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_C_sky: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_D_sky: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_E_sky: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_F_sky: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_G_sky: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_H_sky: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_I_sky: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_J_sky: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_K_sky: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_L_sky: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_M_sky: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_N_sky: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_O_sky: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_P_sky: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Q_sky: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_R_sky: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_S_sky: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_T_sky: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_U_sky: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_V_sky: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_W_sky: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_X_sky: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Y_sky: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Z_sky: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_0_sky: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_1_sky: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_2_sky: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_3_sky: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_4_sky: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_5_sky: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_6_sky: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_7_sky: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_8_sky: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_9_sky: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Ampersand_sky: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Asterisk_sky: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Dollars_sky: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Equals_sky: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Exclamation_sky: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Hash_sky: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Parenthesis_sky: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Percent_sky: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Plus_sky: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Question_sky: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Slash_sky: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };
  class SRP_Letter_Times_sky: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_sky_co.paa"};
  };

//================================ teal
  class SRP_Letter_A_teal: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_B_teal: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_C_teal: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_D_teal: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_E_teal: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_F_teal: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_G_teal: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_H_teal: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_I_teal: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_J_teal: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_K_teal: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_L_teal: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_M_teal: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_N_teal: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_O_teal: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_P_teal: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Q_teal: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_R_teal: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_S_teal: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_T_teal: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_U_teal: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_V_teal: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_W_teal: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_X_teal: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Y_teal: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Z_teal: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_0_teal: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_1_teal: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_2_teal: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_3_teal: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_4_teal: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_5_teal: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_6_teal: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_7_teal: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_8_teal: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_9_teal: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Ampersand_teal: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Asterisk_teal: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Dollars_teal: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Equals_teal: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Exclamation_teal: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Hash_teal: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Parenthesis_teal: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Percent_teal: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Plus_teal: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Question_teal: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Slash_teal: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };
  class SRP_Letter_Times_teal: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_teal_co.paa"};
  };

//================================ yellow
  class SRP_Letter_A_yellow: SRP_Letter_A
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_a.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_B_yellow: SRP_Letter_B
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_b.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_C_yellow: SRP_Letter_C
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_c.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_D_yellow: SRP_Letter_D
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_d.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_E_yellow: SRP_Letter_E
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_e.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_F_yellow: SRP_Letter_F
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_f.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_G_yellow: SRP_Letter_G
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_g.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_H_yellow: SRP_Letter_H
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_h.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_I_yellow: SRP_Letter_I
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_i.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_J_yellow: SRP_Letter_J
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_j.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_K_yellow: SRP_Letter_K
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_k.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_L_yellow: SRP_Letter_L
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_l.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_M_yellow: SRP_Letter_M
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_m.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_N_yellow: SRP_Letter_N
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_n.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_O_yellow: SRP_Letter_O
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_o.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_P_yellow: SRP_Letter_P
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_p.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Q_yellow: SRP_Letter_Q
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_q.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_R_yellow: SRP_Letter_R
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_r.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_S_yellow: SRP_Letter_S
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_s.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_T_yellow: SRP_Letter_T
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_t.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_U_yellow: SRP_Letter_U
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_u.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_V_yellow: SRP_Letter_V
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_v.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_W_yellow: SRP_Letter_W
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_w.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_X_yellow: SRP_Letter_X
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_x.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Y_yellow: SRP_Letter_Y
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_y.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Z_yellow: SRP_Letter_Z
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_z.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_0_yellow: SRP_Letter_0
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_0.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_1_yellow: SRP_Letter_1
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_1.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_2_yellow: SRP_Letter_2
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_2.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_3_yellow: SRP_Letter_3
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_3.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_4_yellow: SRP_Letter_4
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_4.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_5_yellow: SRP_Letter_5
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_5.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_6_yellow: SRP_Letter_6
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_6.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_7_yellow: SRP_Letter_7
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_7.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_8_yellow: SRP_Letter_8
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_8.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_9_yellow: SRP_Letter_9
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_numbers_9.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Ampersand_yellow: SRP_Letter_Ampersand
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_ampersand.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Asterisk_yellow: SRP_Letter_Asterisk
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_asterisk.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Dollars_yellow: SRP_Letter_Dollars
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_dollars.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Equals_yellow: SRP_Letter_Equals
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_equals.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Exclamation_yellow: SRP_Letter_Exclamation
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_exclamation.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Hash_yellow: SRP_Letter_Hash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_hash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Parenthesis_yellow: SRP_Letter_Parenthesis
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_parenthesis.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Percent_yellow: SRP_Letter_Percent
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_percent.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Plus_yellow: SRP_Letter_Plus
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_plus.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Question_yellow: SRP_Letter_Question
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_question.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Slash_yellow: SRP_Letter_Slash
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_slash.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };
  class SRP_Letter_Times_yellow: SRP_Letter_Times
  {
		scope=2;
    model="Survivalists_Mods\gear\carpentry\srp_letters_signs_times.p3d";    
    inventorySlot[]={};
    hiddenSelections[]={"zbytek"};
    hiddenSelectionsTextures[]={"Survivalists_Mods\gear\carpentry\data\oak_bark_yellow_co.paa"};
  };

//======================================= POOL BALLS
  class SRP_PoolBall_ColorBase: Inventory_Base // new
	{
		scope=0;
		displayName="Pool Ball";
		descriptionShort="This pool ball is relatively round and solid.";
		model="Survivalists_Mods\gear\carpentry\srp_poolball.p3d";
		weight=1000;
		itemBehaviour=1;
		physLayer="item_small";
    color="base";
		itemSize[]={2,2};
    isTakeable=0;
    itemsCargoSize[]={0,0};
    inventorySlot[]={};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\srp_poolball8_co.paa"
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
						{1.0,{"Survivalists_Mods\gear\carpentry\data\srp_poolball.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\srp_poolball.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\srp_poolball.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\srp_poolball.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\srp_poolball.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_PoolBall_8: SRP_PoolBall_ColorBase // new
  {
    scope=2;
		displayName="Pool Ball - 8";
    color="8";
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\srp_poolball8_co.paa"
		};
  };

};