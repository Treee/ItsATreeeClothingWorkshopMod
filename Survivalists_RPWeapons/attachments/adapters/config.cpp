class CfgPatches
{
	class Survivalists_RPWeapons_Attachments_Adapters
	{
		units[]=
		{
			"ESP_BAR_Adapter"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
      "Survivalists_Weapons_JMC_Adapters"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ESP_RIS_Adapter: Inventory_Base
	{
		scope=2;
		displayName="RIS Adapter";
		descriptionShort="An RIS Adapter";
		model="Survivalists_RPWeapons\attachments\Adapters\RIS_Adapter.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"RISAdapter"
		};
    hasRailFunctionality=1;
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\adapters\data\ESP_RIS_Adapter.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\adapters\data\ESP_RIS_Adapter.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\adapters\data\ESP_RIS_Adapter.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\adapters\data\ESP_RIS_Adapter.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\adapters\data\ESP_RIS_Adapter.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_RIS_Adapter: Inventory_Base
	{
		scope=2;
		displayName="AK-RIS Adapter";
		descriptionShort="An RIS Adapter for AK platforms";
		model="Survivalists_RPWeapons\attachments\Adapters\AK_Adapter.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"AKRISAdapter"
		};
    hasRailFunctionality=1;
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\Adapters\data\STG_AK_RIS_Adapter_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_RIS_ADAPTER.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_RIS_ADAPTER.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_RIS_ADAPTER.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_RIS_ADAPTER.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_RIS_ADAPTER.rvmat"}}
					};
				};
			};
		}; 
	};
	class STG_AK_Stck_Adapter: Inventory_Base
	{
		scope=2;
		displayName="AK-Stock Adapter";
		descriptionShort="An M4 Stock adapter for AK platforms";
		model="Survivalists_RPWeapons\attachments\Adapters\STG_AK_Stck_Adapter.p3d";
		rotationFlags=17;
		reversed=0;
		weight=300;
		IsStockAdapter=1;
    hasRailFunctionality=1;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"weaponButtstockAK"
		};
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.89999998,0.89999998,0.89999998};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_Stck_Adptr_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{1,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_Stck_Adptr.rvmat"}},						
						{0.69999999,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_Stck_Adptr.rvmat"}},						
						{0.5,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_Stck_Adptr.rvmat"}},						
						{0.30000001,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_Stck_Adptr.rvmat"}},						
						{0,{"Survivalists_RPWeapons\attachments\adapters\data\STG_AK_Stck_Adptr.rvmat"}}
					};
				};
			};
		}; 
	};
  class ESP_PistolRail: Inventory_Base
	{	
		scope=2;
		displayName="ESP Pistol Rail";
		descriptionShort="The ESP Pistol Rail was designed to be sold seperately alongside handguns to allow the user to attach various RIS compatible accessories to the end of the weapon.";
		model="Survivalists_RPWeapons\attachments\Adapters\ESP_PistolRail.p3d";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"PistolRail"
		};
		hasRailFunctionality=1;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_RPWeapons\attachments\Adapters\data\ESP_PistolRail_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Survivalists_RPWeapons\attachments\Adapters\data\ESP_PistolRail.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Survivalists_RPWeapons\attachments\Adapters\data\ESP_PistolRail.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Survivalists_RPWeapons\attachments\Adapters\data\ESP_PistolRail.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Survivalists_RPWeapons\attachments\Adapters\data\ESP_PistolRail.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Survivalists_RPWeapons\attachments\Adapters\data\ESP_PistolRail.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
};
