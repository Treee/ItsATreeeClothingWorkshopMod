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

  class SRP_QuadNVGs: NVGoggles
	{
		scope=2;
		displayName="Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="Survivalists_Mods\characters\glasses\SRP_QuadNVG.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"NVG"
		};
		itemSize[]={2,2};
		weight=300;
		rotationFlags=1;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		attachments[]=
		{
			"BatteryD"
		};
		NVOptic=1;
		simpleHiddenSelections[]=
		{
			"hide"
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
						{1,	{	"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},
            {0.69999999,{	"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},
            {0.5,	{	"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},
            {0.30000001,{	"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},
            {0,	{	"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"}}
					};
				};
			};
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.00099999981;
			plugType=1;
			attachmentAction=1;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};
	class SRP_NVGs: NVGoggles
	{
		scope=2;
		displayName="Night Vision Goggles";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="Survivalists_Mods\characters\glasses\SRP_NVG.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"NVG"
		};
		itemSize[]={2,2};
		weight=300;
		rotationFlags=1;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		attachments[]=
		{
			"BatteryD"
		};
		NVOptic=1;
		simpleHiddenSelections[]=
		{
			"hide"
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
						{1,{"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},
            {0.69999999,{"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},
            {0.5,{"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},
            {0.30000001,{"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},
            {0,{"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"}}
					};
				};
			};
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.00099999981;
			plugType=1;
			attachmentAction=1;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};

  class SRP_NVBinocular: NVGoggles  // BP_NVBinocular
	{
		scope=2;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			distanceZoomMin=100;
			distanceZoomMax=100;
			opticsZoomMin=0.050000001;
			opticsZoomMax=0.050000001;
			opticsZoomInit=0.050000001;
		};
	};

};