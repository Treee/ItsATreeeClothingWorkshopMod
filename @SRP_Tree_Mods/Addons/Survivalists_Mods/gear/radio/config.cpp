class CfgPatches
{
	class DZ_Radio
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
  class PersonalRadio;
  //-------------------------------------- BASE GAME OVERRIDE
	class SRP_PersonalRadio_TacticalCap: PersonalRadio // BP2_Tac_cap
	{
		scope=2;
		displayName="Tactical Cap";
		descriptionShort="A black baseball cap with a tactical comms headset.";
		itemSize[]={3,2};
		inventorySlot="Headgear";
		vehicleClass="Clothing";
		model="Survivalists_Mods\gear\radio\tactical_kep_g.p3d";
		inputRange=8;
		range=7000;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic1.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic_cap.rvmat"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.0069999998;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\radio\tactical_kep_m.p3d";
			female="Survivalists_Mods\gear\radio\tactical_kep_m.p3d";
		};
	};
	class SRP_PersonalRadio_TacticalCap1: PersonalRadio // BP2_Tac_cap1
	{
		scope=2;
    displayName="Tactical Cap";
		descriptionShort="A black baseball cap with a tactical comms headset.";
    itemSize[]={3,2};
		inventorySlot="Headgear";
		vehicleClass="Clothing";
		model="Survivalists_Mods\gear\radio\tactical_kep_g1.p3d";
		inputRange=8;
		range=7000;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic1.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic_cap.rvmat"
		};
    class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.0069999998;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\radio\tactical_kep_m1.p3d";
			female="Survivalists_Mods\gear\radio\tactical_kep_m1.p3d";
		};
	};
	class SRP_PersonalRadio_TacticalCap2: PersonalRadio // BP2_Tac_cap2
	{
		scope=2;
    displayName="Tactical Cap";
		descriptionShort="A black baseball cap with a tactical comms headset.";
    itemSize[]={3,2};
		inventorySlot="Headgear";
		vehicleClass="Clothing";
		model="Survivalists_Mods\gear\radio\tactical_kep_g2.p3d";
		inputRange=8;
		range=7000;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic1.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic_cap.rvmat"
		};
    inventorySlot[]=
    {
      "Headgear",
      "Armband"
    }
    class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.0069999998;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\radio\tactical_kep_m2.p3d";
			female="Survivalists_Mods\gear\radio\tactical_kep_m2.p3d";
		};
	};

	class SRP_PersonalRadio_EarPhones: PersonalRadio  // BP_PhoneZ
	{
		scope=2;
		displayName="Tactical Ear Phones";
		descriptionShort="A set of tactical communication earpieces";
		itemSize[]={1,2};
		inventorySlot="Armband";
		vehicleClass="Clothing";
		model="Survivalists_Mods\gear\radio\Phones_g.p3d";
    hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic1.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\gear\radio\data\tactic_cap.rvmat"
		};
		inputRange=8;
		range=7000;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyUsagePerSecond=0.0069999998;
			plugType=1;
			attachmentAction=1;
			wetnessExposure=0.1;
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\radio\Phones_m.p3d";
			female="Survivalists_Mods\gear\radio\Phones_m.p3d";
		};
	};

	class SRP_PersonalRadio_LongRange: PersonalRadio  // SRPLRRadio
	{
		scope=2;
		displayName="Military Radio";
		descriptionShort="A military grade radio used to communicate over long distances";
		model="Survivalists_Mods\gear\radio\SRP_LRRadio.p3d";
		inputRange=8;
		range=25000;
		attachments[]=
		{
			"SRPRadioBattery"
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
	};
};