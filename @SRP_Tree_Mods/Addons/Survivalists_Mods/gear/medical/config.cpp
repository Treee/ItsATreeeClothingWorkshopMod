class CfgPatches
{
	class Survivalists_Mods_Gear_Medical
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Medical"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  
  class SRP_BloodPressureMonitor: Inventory_Base // BP_Monitor_pressure
	{
		scope=2;
		displayName="Blood Pressure Monitor";
		descriptionShort="This medical equipmment is used to monitor blood pressure.";
		model="Survivalists_Mods\gear\medical\P_monitor.p3d";
		attachments[]=
		{
			"BP_gas_lamp"
		};
    physLayer="item_large";
		weight=1000;
		itemSize[]={4,9};
		class Cargo
		{
			itemsCargoSize[]={4,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Att
			{
				name="";
				description="";
				attachmentSlots[]=
				{
					"BP_gas_lamp"
				};
				icon="gascanister";
			};
		};
	};

	class SRP_MedicalBed: Inventory_Base //BP_medical_bed
	{
		scope=2;
		displayName="Medical Bed";
		descriptionShort="A bed normally found in a medical facility.";
		model="Survivalists_Mods\gear\medical\medical_bed.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={4,4};
		};
	};
};