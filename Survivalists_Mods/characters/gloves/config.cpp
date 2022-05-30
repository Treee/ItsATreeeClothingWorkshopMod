class CfgPatches
{
	class Survivalists_Mods_Characters_Gloves
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Gloves",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;  

  //-------------------------------------BASE GAME OVERRIDE
  class NBCGloves_ColorBase: Clothing
	{
    heatIsolation=0.6;
		repairableWithKits[]={5,6}; // duct tape and repair kit
		class Protection 
    {
      biological=1;
    };
	};

  class TacticalGloves_ColorBase: Clothing
	{
		itemSize[]={1,2};
  };

  //====================================== CUSTOM STUFF
  
	class HookHand: Clothing
	{	
		scope=2;
		displayName="Metal Hook";
    descriptionShort="Espen Industries. A simple prosthetic for those that need a hand.";
		model="Survivalists_Mods\characters\gloves\hook_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=16;
		inventorySlot="Gloves";
		simulation="clothing";
		vehicleClass="Clothing";
		weight=1000;
		itemSize[]={2,2};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\gloves\data\hook_CO.paa"		
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\gloves\hook_m.p3d";
			female="Survivalists_Mods\characters\gloves\hook_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
            {1.0,{"Survivalists_Mods\characters\gloves\data\hook.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\gloves\data\hook.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\gloves\data\hook_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\gloves\data\hook_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\gloves\data\hook_destruct.rvmat"}}
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

  class SRP_BoxingGloves_Colorbase: TacticalGloves_ColorBase
  {
    scope=0;
    displayName="Boxing Gloves";
    descriptionShort="Espen Industries. Boxing gloves manufactures to soften even the hardest blows.";
		model="Survivalists_Mods\characters\gloves\srp_boxinggloves_g.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\characters\gloves\data\srp_boxinggloves_co.paa"
    };
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\gloves\srp_boxinggloves_m.p3d";
			female="Survivalists_Mods\characters\gloves\srp_boxinggloves_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15000;
					healthLevels[]=
					{
						{1.0,	{	"Survivalists_Mods\characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.69999999,	{	"Survivalists_Mods\characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.5,	{	"Survivalists_Mods\characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.30000001,	{	"Survivalists_Mods\characters\gloves\data\srp_boxinggloves.rvmat"}},
            {0.0,	{	"Survivalists_Mods\characters\gloves\data\srp_boxinggloves.rvmat"}}
					};
				};
			};
		};
  };
};