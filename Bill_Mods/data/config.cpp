class CfgPatches
{
	class BW_Reskins
	{
		units[]=
		{
			"MaleHands",
			"FemaleHands"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters";
			"Survivalists_Mods"
		};
	};
};
class cfgVehicles
{
	class SRP_S10Respirator_FS;
	class M4_RISHndgrd;
	class M4_CQBBttstck;	
	
	class BW_Bills_Mask: SRP_S10Respirator_FS // Gas Mask
	{
		scope = 2;
		displayName = "Bill's S10";
		descriptionShort = "An S10 Respirator that's been altered for Bills' needs. So fuck off.";
		hiddenSelectionsTextures[]=
		{
			"\Bill_Mods\data\Reskins\S10_Bills_Mask\s10_bills_mask.paa"
		};
	};
	class BW_Merica_Handguard: M4_RISHndgrd
	{
		scope=2;
		displayName="Freedom Foregrip";
		descriptionShort="Crafted by a decendant of Ol' Washington himself.";
		model="\DZ\weapons\attachments\support\handguard_m4_ris.p3d";
		rotationFlags=17;
		reversed=0;
		weight=470;
		itemSize[]={2,1};
		inventorySlot[]={"weaponHandguardM4"};
		hasRailFunctionality=1;
		recoilModifier[]={0.7,0.7,0.7};
		swayModifier[]={0.85,0.85,0.85};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Reskins\Merica_Foregrip\merica_m4_ris.paa"};
	};
	class BW_Merica_Buttstock: M4_CQBBttstck
	{
		scope=2;
		displayName="Liberty Butt";
		descriptionShort="Look at the butt on that, he must work out.";
		model="\DZ\weapons\attachments\support\buttstock_m4_cqb.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]={"weaponButtstockM4"};
		weight=450;
		itemSize[]={2,1};
		recoilModifier[]={0.7,0.7,0.7};
		swayModifier[]={0.85,0.85,0.85};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Reskins\Merica_Butt\merica_butt.paa"};
	};
};

class cfgWeapons
{
	class M4A1;
	
	class BW_M4_Merica: M4A1
	{
		scope = 2;
		displayName = "Merica M4";
		descriptionShort = "Forged in the eagles nest of Freedom. Enscribed on the upper reciever it reads, Get some Tourists.";
		itemSize[]={6,3};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Reskins\Merica_M4\merica_m4_test1.paa"};
	};
	class BW_M4_Canadia: M4A1
	{
		scope = 2;
		displayName = "Canadia M4";
		descriptionShort = "Assembled with the most sorey and maple syrup one could collect, How boot it eh?";
		itemSize[]={6,3};
		hiddenSelectionsTextures[]={"\Bill_Mods\data\Reskins\Canadia_M4\Canadia_M4.paa"};
	};
};
