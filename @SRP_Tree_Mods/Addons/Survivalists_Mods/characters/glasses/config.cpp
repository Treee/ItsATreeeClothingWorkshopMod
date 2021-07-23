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
  class NVGoggles;

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

};