class CfgPatches
{
	class Survivalists_Characters_Glasses
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics",
      "DZ_Characters_Glasses",
      "Ragged_Eyepatch", //windstride
      "Eyepatch", //windstride
      "Alv_Tac_Gear_Glasses"
		};
	};
};
class CfgVehicles
{
  // class Glasses_Base;
  class Clothing;
  class NVGoggles;
// ========================== VANILLA OVERRIDE
  class SportGlasses_ColorBase: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={8};
		repairCosts[]={30};
  };
  class AviatorGlasses: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={8};
		repairCosts[]={30};
  };
  class DesignerGlasses: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={8};
		repairCosts[]={30};
  };
  class ThickFramesGlasses: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={8};
		repairCosts[]={30};
  };
  class ThinFramesGlasses: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={8};
		repairCosts[]={30};
  };
  class TacticalGoggles: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={8};
		repairCosts[]={30};
  };
  class EyePatch_Improvised: Clothing
  {
    inventorySlot[]+={"Extra"};
    repairableWithKits[]={2,3};
		repairCosts[]={30,30};
  };
  class EyeMask_ColorBase: Clothing
  {
    inventorySlot[]+={"Extra"};
    rootClassName="EyeMask";
    colorVariants[]=
    {
      "Valentines",
      "NewYears",
      "Christmas",
      "Dead",
      "Black",
      "Blue",
      "Red",
      "Yellow",
    };
    repairableWithKits[]={2,3};
		repairCosts[]={30,30};
  };
// ========================== ALEVARIC OVERRIDE
  class ALV_MV_Ballistic_Glasses_Colorbase: Clothing
  {
    inventorySlot[]+={"Extra"};
    rootClassName="ALV_MV_Ballistic_Glasses";
    colorVariants[]=
    {
      "Blue",
    };
  };
  class ALV_MV_Ballistic_Goggles_Colorbase: Clothing
  {
    inventorySlot[]+={"Extra"};
    rootClassName="ALV_MV_Ballistic_Goggles";
    colorVariants[]=
    {
      "Blue",
    };
  };
  class ALV_MV_Ballistic_Visor_Colorbase: NVGoggles
  {
    rootClassName="ALV_MV_Ballistic_Visor";
    colorVariants[]=
    {
      "Black",
      "Tan",
      "Green",
    };
  };
// ======================= Modded stuff
  class Eyepatch: Clothing
  {
    inventorySlot[]+={"Extra"};
  };
  class Ragged_Eyepatch: Clothing
  {
    inventorySlot[]+={"Extra"};
  };
// ------------------------------ Custom Stuff
  class SRP_NVGoggles_Default: NVGoggles
	{
		scope=2;
		displayName="Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="Survivalists_Characters\glasses\SRP_NVG.p3d";
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
	};
  class SRP_NVGoggles_Quad: NVGoggles
	{
		scope=2;
		displayName="Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="Survivalists_Characters\glasses\SRP_QuadNVG.p3d";
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
	};
  class SRP_NVGoggles_ShortRange: NVGoggles
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
  class SRP_WeldingGoggles: Clothing
	{
		scope=2;
		displayName="Welding Goggles";
    descriptionShort="Espen Industries. Full eye protection from very bright lights.";
		model="Survivalists_Characters\glasses\srp_weldinggoggles_g.p3d";
    inventorySlot[]+={"Eyewear","Extra"};
    vehicleClass="Clothing";
		simulation="clothing";
    itemSize[]={2,1};
    weight=36;
    lootCategory="Eyewear";
		soundImpactType="glass";
    itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\glasses\srp_weldinggoggles_m.p3d";
			female="Survivalists_Characters\glasses\srp_weldinggoggles_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\glasses\data\srp_weldinggoggles.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\glasses\data\srp_weldinggoggles.rvmat"}},
            {0.5,	{	"Survivalists_Characters\glasses\data\srp_weldinggoggles.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\glasses\data\srp_weldinggoggles.rvmat"}},
            {0.0,	{	"Survivalists_Characters\glasses\data\srp_weldinggoggles.rvmat"}}
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
  class SRP_SteamPunkGoggles: Clothing
	{
		scope=2;
		displayName="Steam Punk Goggles";
    rotationFlags=64;
    descriptionShort="Espen Industries. Through steam technology, these goggles offer maximum protection from air.";
		model="Survivalists_Characters\glasses\srp_steampunkgoggles_g.p3d";
    inventorySlot[]+={"Eyewear","Extra"};
    vehicleClass="Clothing";
		simulation="clothing";
    itemSize[]={2,1};
    weight=36;
    lootCategory="Eyewear";
		soundImpactType="glass";
		class ClothingTypes
		{
			male="Survivalists_Characters\glasses\srp_steampunkgoggles_m.p3d";
			female="Survivalists_Characters\glasses\srp_steampunkgoggles_m.p3d";
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
						{1.0,	{	"Survivalists_Characters\glasses\data\srp_steampunkgoggles.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\glasses\data\srp_steampunkgoggles.rvmat"}},
            {0.5,	{	"Survivalists_Characters\glasses\data\srp_steampunkgoggles.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\glasses\data\srp_steampunkgoggles.rvmat"}},
            {0.0,	{	"Survivalists_Characters\glasses\data\srp_steampunkgoggles.rvmat"}}
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
  class SRP_Goggles_Face: Clothing
  {	
		scope=2;
		displayName="Old Goggles";
    descriptionShort="Espen Industries. Full eye protection from particulate in the environment.";
		model="Survivalists_Characters\headgear\gogglesHead_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
    inventorySlot[]+={"Eyewear","Extra"};
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
			"Survivalists_Characters\glasses\data\goggles_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Characters\glasses\gogglesFace_m.p3d";
			female="Survivalists_Characters\glasses\gogglesFace_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\glasses\data\goggles.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\glasses\data\goggles.rvmat"}},
            {0.5,	{	"Survivalists_Characters\glasses\data\goggles_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\glasses\data\goggles_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\glasses\data\goggles_destruct.rvmat"}}
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
		model="Survivalists_Characters\glasses\eyepatch_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
    inventorySlot[]+={"Eyewear","Extra"};
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
			"Survivalists_Characters\glasses\data\eyepatch_CO.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Characters\glasses\data\eyepatch.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Characters\glasses\eyepatch_m.p3d";
			female="Survivalists_Characters\glasses\eyepatch_f.p3d";
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
						{1.0,	{	"Survivalists_Characters\glasses\data\eyepatch.rvmat"}},
            {0.69999999,	{	"Survivalists_Characters\glasses\data\eyepatch.rvmat"}},
            {0.5,	{	"Survivalists_Characters\glasses\data\eyepatch_damage.rvmat"}},
            {0.30000001,	{	"Survivalists_Characters\glasses\data\eyepatch_damage.rvmat"}},
            {0.0,	{	"Survivalists_Characters\glasses\data\eyepatch_destruct.rvmat"}}
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
// ========================== END  
};