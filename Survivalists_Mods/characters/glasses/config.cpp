class CfgPatches
{
	class Survivalists_Mods_Characters_Glasses
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics",
      "DZ_Characters_Glasses",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class NVGoggles;
  class AviatorGlasses;
  // ------------------------------ Custom Stuff

  class SRP_NVGoggles_Default: NVGoggles
	{
		scope=2;
		displayName="Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="Survivalists_Mods\characters\glasses\SRP_NVG.p3d";
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
	};

  class SRP_NVGoggles_Quad: NVGoggles
	{
		scope=2;
		displayName="Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="Survivalists_Mods\characters\glasses\SRP_QuadNVG.p3d";
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
	};	

  class SRP_NVGoggles_ShortRange: NVGoggles  // BP_NVBinocular
	{
		scope=2;
    displayName="Short Range Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
      modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			opticsZoomMin=0.050000001;
			opticsZoomMax=0.050000001;
			opticsZoomInit=0.050000001;
		};
	};


  class SRP_WeldingGoggles: AviatorGlasses
	{
		scope=2;
		displayName="Welding Goggles";
    descriptionShort="Espen Industries. Full eye protection from very bright lights.";
		model="Survivalists_Mods\characters\glasses\srp_weldinggoggles_g.p3d";
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\glasses\srp_weldinggoggles_m.p3d";
			female="Survivalists_Mods\characters\glasses\srp_weldinggoggles_m.p3d";
		};
	};

  class SRP_Goggles_Face: Clothing
  {	
		scope=2;
		displayName="Old Goggles";
    descriptionShort="Espen Industries. Full eye protection from particulate in the environment.";
		model="Survivalists_Mods\characters\headgear\gogglesHead_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		inventorySlot="Eyewear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=1000;
		itemSize[]={2,1};
		absorbency=0;
		heatIsolation=1;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\glasses\data\goggles_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\glasses\gogglesFace_m.p3d";
			female="Survivalists_Mods\characters\glasses\gogglesFace_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\glasses\data\goggles.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\glasses\data\goggles.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\glasses\data\goggles_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\glasses\data\goggles_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\glasses\data\goggles_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_EyePatch: Clothing
	{	
		scope=2;
		displayName="Eyepatch";
    descriptionShort="Espen Industries. An eye patch meant to obscure light or an eye injury.";
		model="Survivalists_Mods\characters\glasses\eyepatch_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Eyewear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		weight=1000;
		itemSize[]={1,1};
		absorbency=0;
		heatIsolation=1;
		noMask=0;
		hiddenSelections[]=
		{
			"zbytek",
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\glasses\data\eyepatch_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\glasses\eyepatch_m.p3d";
			female="Survivalists_Mods\characters\glasses\eyepatch_f.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\headgear\data\eyepatch.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\headgear\data\eyepatch.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\headgear\data\eyepatch_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\headgear\data\eyepatch_damage.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\headgear\data\eyepatch_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};