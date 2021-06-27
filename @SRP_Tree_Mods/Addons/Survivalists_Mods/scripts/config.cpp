class CfgPatches
{
	class Survivalists_Mods_Scripts
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts"};
	};
};

class CfgSlots
{
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
	class Slot_BP_lamp
	{
		name="BP_gas_lamp";
		displayName="gas_lamp";
		ghostIcon="gascanister";
		selection="BP_gas_lamp";
	};
	class Slot_SRP_CasePrep
	{
		name="SRP_CasePrep";
		displayName="Case Prep";
		ghostIcon="cat_vehicle_engine";
		selection="CasePrep";
	};
	class Slot_SRP_AmmoPress
	{
		name="SRP_AmmoPress";
		displayName="Ammo Prep";
		ghostIcon="cat_vehicle_engine";
		selection="AmmoPress";
	};
	class Slot_Gun1
	{
		name="shoulder1";
		displayName="shoulder1";
		ghostIcon="shoulderright";
		selection="shoulder1";
	};
	class Slot_Gun2
	{
		name="shoulder2";
		displayName="shoulder2";
		ghostIcon="shoulderright";
		selection="shoulder2";
	};
	class Slot_Gun3
	{
		name="shoulder3";
		displayName="shoulder3";
		ghostIcon="shoulderright";
		selection="shoulder3";
	};
	class Slot_Gun4
	{
		name="shoulder4";
		displayName="shoulder4";
		ghostIcon="shoulderright";
		selection="shoulder4";
	};
	class Slot_Gun5
	{
		name="shoulder5";
		displayName="shoulder5";
		ghostIcon="shoulderright";
		selection="shoulder5";
	};
	class Slot_Gun6
	{
		name="shoulder6";
		displayName="shoulder6";
		ghostIcon="shoulderright";
		selection="shoulder6";
	};
	class Slot_Gun7
	{
		name="shoulder7";
		displayName="shoulder7";
		ghostIcon="shoulderright";
		selection="shoulder7";
	};
	class Slot_Gun8
	{
		name="shoulder8";
		displayName="shoulder8";
		ghostIcon="shoulderright";
		selection="shoulder8";
	};
	class Slot_Gun9
	{
		name="shoulder9";
		displayName="shoulder9";
		ghostIcon="shoulderright";
		selection="shoulder9";
	};
	class Food1
	{
		name="Food1";
		displayName="Food1";
		ghostIcon="tincan";
		selection="Food1";
	};
	class Food2
	{
		name="Food2";
		displayName="Food2";
		ghostIcon="tincan";
		selection="Food2";
	};
	class Food3
	{
		name="Food3";
		displayName="Food3";
		ghostIcon="tincan";
		selection="Food3";
	};
	class Food4
	{
		name="Food4";
		displayName="Food4";
		ghostIcon="tincan";
		selection="Food4";
	};
	class Food5
	{
		name="Food5";
		displayName="Food5";
		ghostIcon="tincan";
		selection="Food5";
	};
	class Food6
	{
		name="Food6";
		displayName="Food6";
		ghostIcon="tincan";
		selection="Food6";
	};
	class Food7
	{
		name="Food7";
		displayName="Food7";
		ghostIcon="tincan";
		selection="Food7";
	};
	class Food8
	{
		name="Food8";
		displayName="Food8";
		ghostIcon="tincan";
		selection="Food8";
	};
	class Food9
	{
		name="Food9";
		displayName="Food9";
		ghostIcon="tincan";
		selection="Food9";
	};
	class Can
	{
		name="Can";
		displayName="Can";
		ghostIcon="tincan";
		selection="Can";
	};
	class Can1
	{
		name="Can1";
		displayName="Can1";
		ghostIcon="tincan";
		selection="Can1";
	};
	class Can2
	{
		name="Can2";
		displayName="Can2";
		ghostIcon="tincan";
		selection="Can2";
	};
	class Can3
	{
		name="Can3";
		displayName="Can3";
		ghostIcon="tincan";
		selection="Can3";
	};
	class Can4
	{
		name="Can4";
		displayName="Can4";
		ghostIcon="tincan";
		selection="Can4";
	};
	class Can5
	{
		name="Can5";
		displayName="Can5";
		ghostIcon="tincan";
		selection="Can5";
	};
	class Can6
	{
		name="Can6";
		displayName="Can6";
		ghostIcon="tincan";
		selection="Can6";
	};
	class Can7
	{
		name="Can7";
		displayName="Can7";
		ghostIcon="tincan";
		selection="Can7";
	};
	class Slot_Ingredient;
	class Slot_Ingredient1: Slot_Ingredient
	{
		name="Ingredient1";
		displayName="Ingredient1";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient2: Slot_Ingredient
	{
		name="Ingredient2";
		displayName="Ingredient2";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient3: Slot_Ingredient
	{
		name="Ingredient3";
		displayName="Ingredient3";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient4: Slot_Ingredient
	{
		name="Ingredient4";
		displayName="Ingredient4";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient5: Slot_Ingredient
	{
		name="Ingredient5";
		displayName="Ingredient5";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient6: Slot_Ingredient
	{
		name="Ingredient6";
		displayName="Ingredient6";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient7: Slot_Ingredient
	{
		name="Ingredient7";
		displayName="Ingredient7";
		ghostIcon="ingredient";
	};
	class Slot_Ingredient8: Slot_Ingredient
	{
		name="Ingredient8";
		displayName="Ingredient8";
		ghostIcon="ingredient";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMeat_steak;
	class ProxyJerryCan: ProxyAttachment
	{
		model="\dz\vehicles\parts\JerryCan.p3d";
		inventorySlot="CanisterGasoline";
	};
	class ProxyBPGas_lamp: ProxyAttachment
	{
		scope=2;
		inventorySlot="BP_gas_lamp";
		model="\BP_Shelf\Proxy\BPGas_lamp.p3d"; // non existent...
	};
	class ProxySRP_CasePrep: ProxyAttachment
	{
		scope=2;
		inventorySlot="SRP_CasePrep";
		model="\BP1\gearcamping\SRP_CasePrep.p3d"; // wait
	};
	class ProxySRP_AmmoPress: ProxyAttachment
	{
		scope=2;
		inventorySlot="SRP_AmmoPress";
		model="\BP1\gearcamping\SRP_AmmoPress.p3d"; // wait
	};
	class ProxySpavnGuns1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder";
		model="Survivalists_Mods\proxy\SpavnGuns1.p3d"; 
	};
	class ProxySpavnAxe1: ProxyAttachment
	{
		scope=2;
		inventorySlot="no";
		model="Survivalists_Mods\proxy\SpavnAxe1.p3d";
	};
	class ProxySpavnCap: ProxyAttachment
	{
		scope=2;
		inventorySlot="Headgear";
		model="Survivalists_Mods\proxy\SpavnCap.p3d";
	};
	class ProxySpavnBots: ProxyAttachment
	{
		scope=2;
		inventorySlot="Feet";
		model="Survivalists_Mods\proxy\SpavnBots.p3d";
	};
	class ProxySpavnBag1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Back";
		model="Survivalists_Mods\proxy\SpavnBag1.p3d";
	};
	class Proxyshoulder1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder1";
		model="Survivalists_Mods\proxy\shoulder1.p3d";
	};
	class Proxyshoulder2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder2";
		model="Survivalists_Mods\proxy\shoulder2.p3d";
	};
	class Proxyshoulder3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder3";
		model="Survivalists_Mods\proxy\shoulder3.p3d";
	};
	class Proxyshoulder4: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder4";
		model="Survivalists_Mods\proxy\shoulder4.p3d";
	};
	class Proxyshoulder5: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder5";
		model="Survivalists_Mods\proxy\shoulder5.p3d";
	};
	class Proxyshoulder6: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder6";
		model="Survivalists_Mods\proxy\shoulder6.p3d";
	};
	class Proxyshoulder7: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder7";
		model="Survivalists_Mods\proxy\shoulder7.p3d";
	};
	class Proxyshoulder8: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder8";
		model="Survivalists_Mods\proxy\shoulder8.p3d";
	};
	class Proxyshoulder9: ProxyAttachment
	{
		scope=2;
		inventorySlot="Shoulder9";
		model="Survivalists_Mods\proxy\shoulder9.p3d";
	};
	class ProxyPistol1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Pistol";
		model="Survivalists_Mods\proxy\Pistol1.p3d";
	};
	class Proxyfood: ProxyAttachment
	{
		scope=2;
		inventorySlot="Ingredient";
		model="Survivalists_Mods\proxy\food.p3d";
	};
	class Proxyfood1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food1";
		model="Survivalists_Mods\proxy\food1.p3d";
	};
	class Proxyfood2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food2";
		model="Survivalists_Mods\proxy\food2.p3d";
	};
	class Proxyfood3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food3";
		model="Survivalists_Mods\proxy\food3.p3d";
	};
	class Proxyfood4: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food4";
		model="Survivalists_Mods\proxy\food4.p3d";
	};
	class Proxyfood5: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food5";
		model="Survivalists_Mods\proxy\food5.p3d";
	};
	class Proxyfood6: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food6";
		model="Survivalists_Mods\proxy\food6.p3d";
	};
	class Proxyfood7: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food7";
		model="Survivalists_Mods\proxy\food7.p3d";
	};
	class Proxyfood8: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food8";
		model="Survivalists_Mods\proxy\food8.p3d";
	};
	class Proxyfood9: ProxyAttachment
	{
		scope=2;
		inventorySlot="Food9";
		model="Survivalists_Mods\proxy\food9.p3d";
	};
	class Proxycan: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can";
		model="Survivalists_Mods\proxy\can.p3d";
	};
	class Proxycan1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can1";
		model="Survivalists_Mods\proxy\can1.p3d";
	};
	class Proxycan2: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can2";
		model="Survivalists_Mods\proxy\can2.p3d";
	};
	class Proxycan3: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can3";
		model="Survivalists_Mods\proxy\can3.p3d";
	};
	class Proxycan4: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can4";
		model="Survivalists_Mods\proxy\can4.p3d";
	};
	class Proxycan5: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can5";
		model="Survivalists_Mods\proxy\can5.p3d";
	};
	class Proxycan6: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can6";
		model="Survivalists_Mods\proxy\can6.p3d";
	};
	class Proxycan7: ProxyAttachment
	{
		scope=2;
		inventorySlot="Can7";
		model="Survivalists_Mods\proxy\can7.p3d";
	};
	class Proxybp_meat1: ProxyMeat_steak
	{
		inventorySlot="Ingredient1";
		model="Survivalists_Mods\proxy\bp_meat1.p3d";
	};
	class Proxybp_meat2: ProxyMeat_steak
	{
		inventorySlot="Ingredient2";
		model="Survivalists_Mods\proxy\bp_meat2.p3d";
	};
	class Proxybp_meat3: ProxyMeat_steak
	{
		inventorySlot="Ingredient3";
		model="Survivalists_Mods\proxy\bp_meat3.p3d";
	};
	class Proxybp_meat4: ProxyMeat_steak
	{
		inventorySlot="Ingredient4";
		model="Survivalists_Mods\proxy\bp_meat4.p3d";
	};
	class Proxybp_meat5: ProxyMeat_steak
	{
		inventorySlot="Ingredient5";
		model="Survivalists_Mods\proxy\bp_meat5.p3d";
	};
	class Proxybp_meat6: ProxyMeat_steak
	{
		inventorySlot="Ingredient6";
		model="Survivalists_Mods\proxy\bp_meat6.p3d";
	};
	class Proxybp_meat7: ProxyMeat_steak
	{
		inventorySlot="Ingredient7";
		model="Survivalists_Mods\proxy\bp_meat7.p3d";
	};
	class Proxybp_meat8: ProxyMeat_steak
	{
		inventorySlot="Ingredient8";
		model="Survivalists_Mods\proxy\bp_meat8.p3d";
	};
};
