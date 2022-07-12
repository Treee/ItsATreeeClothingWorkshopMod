class CfgPatches
{
	class Survivalists_Mods_Gear_Optics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols",
      "DZ_Gear_Optics",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class ItemOptics;
  class PistolOptic;
  // --------------------------------------- BASE GAME OVERRIDE

	class Binoculars: ItemOptics
	{
		inventorySlot[]+={"Binoculars"};
	};

  class SRP_PistolOptic_Golden: PistolOptic
	{
    scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold.rvmat"
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
						{1.0,	{	"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",	"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold.rvmat"}},
            {0.69999999,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",	"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold.rvmat"}},
            {0.5,	{	"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",	"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",	"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold_damage.rvmat"}},
            {0.0,	{	"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",	"Survivalists_Mods\gear\optics\data\srp_pistolscope_gold_destruct.rvmat"}}
					};
				};
			};
		};
  };

  
  // ------------------------------------------ Custom Stuff
  
  class SRP_ItemOptics_CanScope: ItemOptics
	{
		scope=2;
		displayName="Crafted Sight";
		descriptionShort="A tin can that has been modified with some wire to resemble something along the lines of a weapons optic. Also known as the CanCog";
		model="Survivalists_Mods\gear\optics\SRP_CanCog.p3d";
		rotationFlags=16;
		reversed=0;
		weight=350;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsHunting",
			"weaponOpticsLRS",
			"weaponOpticsCrossbow"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\weapons\attachments\data\m4_handle.rvmat"}},
            {0.69999999,{"DZ\weapons\attachments\data\m4_handle.rvmat"}},
            {0.5,{"DZ\weapons\attachments\data\m4_handle_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\attachments\data\m4_handle_damage.rvmat"}},
            {0,{"DZ\weapons\attachments\data\m4_handle_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};

	class SRP_ItemOptics_AKCanScope: ItemOptics
	{
		displayName="Crafted AK Mount & Sight";
		descriptionShort="A tin can that has been modified with some wire to resemble something along the lines of a weapons optic. This versoin has an L Bracket attatched to it so that it may be attatched to an AK or Mosin. Also known as the CanCog";
		model="Survivalists_Mods\gear\optics\SRP_AKMCanCog.p3d";
		inventorySlot[]=
		{
			"weaponOpticsAK",
			"weaponOpticsMosin"
		};
    rotationFlags=16;
		reversed=0;
		weight=350;
		itemSize[]={2,1};
		animClass="Binoculars";
		simulation="itemoptics";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\weapons\attachments\data\m4_handle.rvmat"}},
            {0.69999999,{"DZ\weapons\attachments\data\m4_handle.rvmat"}},
            {0.5,{"DZ\weapons\attachments\data\m4_handle_damage.rvmat"}},
            {0.30000001,{"DZ\weapons\attachments\data\m4_handle_damage.rvmat"}},
            {0,{"DZ\weapons\attachments\data\m4_handle_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};

	};
};