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
      // "Survivalists_Weapons_JMC_Adapters"
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
};
