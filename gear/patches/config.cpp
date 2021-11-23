class CfgPatches
{
	class Survivalists_Mods_Gear_Patches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base	{};

  // -------------------------- CUSTOM STUFF

  //------------------------------ FLAG PATCHES
	class SRP_PatchFlag_ColorBase: Clothing
	{
		scope=0;
		displayName="Country Flag";
		descriptionShort="Country Flag Patch";
		model="Survivalists_Mods\gear\patches\srp_patchflag.p3d";
		itemSize[]={2,1};
		weight=10;
		inventorySlot[]=
    {
      "Armband",
      "patch_01",
      "patch_02",
      "patch_03",
      "patch_04",
      "SRP_Patch"
    };
		hiddenSelections[]=
    {
      "zbytek",
      "armband"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Afghanistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\patches\data\flag\srp_patchflag.rvmat",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"
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
            {1.0,{"Survivalists_Mods\gear\patches\data\flag\srp_patchflag.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
            {0.7,{"Survivalists_Mods\gear\patches\data\flag\srp_patchflag.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\patches\data\flag\srp_patchflag_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\gear\patches\data\flag\srp_patchflag_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\patches\data\flag\srp_patchflag_destruct.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_destruct.rvmat"}}
          };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\patches\srp_patcharmbandflag.p3d";
			female="Survivalists_Mods\gear\patches\srp_patcharmbandflag.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	
	class SRP_PatchFlag_Afghanistan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Afghanistan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Afghanistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Albania: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Albania";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Albania.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Algeria: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Algeria";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Algeria.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_AmericanSamoa: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - American Samoa";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\AmericanSamoa.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Andorra: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Andorra";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Andorra.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Angola: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Angola";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Angola.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Antigua: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Antigua";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Antigua.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Argentina: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Argentina";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Argentina.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Armenia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Armenia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Armenia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Aruba: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Aruba";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Aruba.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Australia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Australia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Australia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Austria: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Austria";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Austria.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Azerbaijan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Azerbaijan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Azerbaijan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Azores: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Azores";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Azores.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bahamas: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bahamas";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bahamas.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bahrain: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bahrain";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bahrain.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bangladesh: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bangladesh";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bangladesh.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Barbados: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Barbados";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Barbados.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Belarus: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Belarus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Belarus.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Belgium: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Belgium";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Belgium.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Belize: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Belize";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Belize.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Benin: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Benin";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Benin.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bermuda: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bermuda";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bermuda.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bhutan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bhutan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bhutan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bolivia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bolivia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bolivia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bosnia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bosnia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bosnia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Botswana: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Botswana";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Botswana.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Brazil: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Brazil";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Brazil.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_BritishVirginIslands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - British Virgin Islands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\BritishVirginIslands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_BruneiDarussalam: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Brunei Darussalam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\BruneiDarussalam.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Bulgaria: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Bulgaria";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Bulgaria.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_BurkinaFaso: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Burkina Faso";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\BurkinaFaso.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Burma: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Burma";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Burma.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Burundi: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Burundi";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Burundi.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Cambodia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cambodia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Cambodia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Cameroon: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cameroon";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Cameroon.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Canada: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Canada";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Canada.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_CapeVerde: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cape Verde";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\CapeVerde.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_CaymanIslands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cayman Islands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\CaymanIslands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Chad: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Chad";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Chad.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Chile: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Chile";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Chile.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_China: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - China";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\China.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Colombia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Colombia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Colombia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Comoros: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Comoros";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Comoros.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_CookIslands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cook Islands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\CookIslands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_CostaRica: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Costa Rica";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\CostaRica.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Croatia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Croatia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Croatia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Cuba: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cuba";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Cuba.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Curacao: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Curacao";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Curacao.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Cyprus: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Cyprus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Cyprus.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Czech: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Czech";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Czech.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Denmark: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Denmark";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Denmark.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Djibouti: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Djibouti";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Djibouti.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_DominicanRepublic: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Dominican Republic";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\DominicanRepublic.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_EastTimor: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - East Timor";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\EastTimor.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Ecuador: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Ecuador";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Ecuador.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Egypt: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Egypt";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Egypt.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_ElSalvador: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - El Salvador";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\ElSalvador.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Eritrea: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Eritrea";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Eritrea.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Estonia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Estonia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Estonia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Ethiopia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Ethiopia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Ethiopia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_FalklandIslands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Falkland Islands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\FalklandIslands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Fiji: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Fiji";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Fiji.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Finland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Finland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Finland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_France: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - France";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\France.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Gabon: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Gabon";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Gabon.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Gambia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Gambia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Gambia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Germany: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Germany";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Germany.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Ghana: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Ghana";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Ghana.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Gibraltar: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Gibraltar";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Gibraltar.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Greece: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Greece";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Greece.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Greenland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Greenland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Greenland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Grenada: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Grenada";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Grenada.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Guam: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Guam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Guam.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Guatemala: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Guatemala";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Guatemala.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Guinea: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Guinea";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Guinea.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Guyana: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Guyana";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Guyana.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_GypsyRomani: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Gypsy Romani";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\GypsyRomani.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Haiti: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Haiti";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Haiti.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Honduras: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Honduras";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Honduras.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Hungary: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Hungary";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Hungary.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Iceland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Iceland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Iceland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_India: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - India";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\India.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Indonesia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Indonesia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Indonesia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Iran: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Iran";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Iran.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Iraq: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Iraq";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Iraq.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Ireland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Ireland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Ireland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Israel: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Israel";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Israel.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Italy: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Italy";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Italy.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Jamaica: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Jamaica";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Jamaica.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Japan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Japan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Japan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Jordan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Jordan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Jordan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Kazakhstan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Kazakhstan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Kazakhstan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Kenya: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Kenya";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Kenya.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Kiribati: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Kiribati";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Kiribati.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Kosovo: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Kosovo";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Kosovo.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Kuwait: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Kuwait";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Kuwait.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Kyrgyzstan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Kyrgyzstan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Kyrgyzstan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Laos: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Laos";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Laos.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Latvia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Latvia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Latvia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Lebanon: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Lebanon";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Lebanon.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Lesotho: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Lesotho";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Lesotho.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Liberia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Liberia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Liberia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Libya: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Libya";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Libya.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Lithuania: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Lithuania";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Lithuania.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Macau: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Macau";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Macau.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Macedonia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Macedonia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Macedonia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Madagascar: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Madagascar";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Madagascar.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Malawi: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Malawi";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Malawi.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Malaysia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Malaysia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Malaysia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Maldives: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Maldives";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Maldives.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Mali: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Mali";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Mali.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Malta: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Malta";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Malta.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_MarshallIslands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Marshall Islands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\MarshallIslands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Mauritius: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Mauritius";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Mauritius.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Mexico: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Mexico";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Mexico.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Micronesia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Micronesia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Micronesia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Moldova: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Moldova";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Moldova.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Monaco: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Monaco";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Monaco.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Mongolia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Mongolia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Mongolia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Montenegro: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Montenegro";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Montenegro.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Morocco: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Morocco";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Morocco.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Mozambique: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Mozambique";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Mozambique.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Namibia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Namibia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Namibia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Nauru: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Nauru";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Nauru.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Netherlands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Netherlands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Netherlands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_NewZealand: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - New Zealand";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\NewZealand.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Nicaragua: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Nicaragua";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Nicaragua.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Niger: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Niger";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Niger.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Nigeria: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Nigeria";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Nigeria.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_NorthernIreland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Northern Ireland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\NorthernIreland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Norway: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Norway";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Norway.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Oman: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Oman";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Oman.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Pakistan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Pakistan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Pakistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Palau: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Palau";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Palau.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Palestine: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Palestine";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Palestine.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Panama: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Panama";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Panama.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_PapuaNewGuinea: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Papua New Guinea";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\PapuaNewGuinea.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Paraguay: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Paraguay";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Paraguay.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Peru: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Peru";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Peru.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Philippines: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Philippines";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Philippines.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Poland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Poland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Poland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Portugal: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Portugal";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Portugal.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_PuertoRico: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Puerto Rico";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\PuertoRico.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Qatar: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Qatar";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Qatar.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Romania: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Romania";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Romania.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Russia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Russia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Russia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Rwanda: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Rwanda";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Rwanda.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Samoa: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Samoa";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Samoa.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SanMarino: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - San Marino";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SanMarino.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SaudiArabia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Saudi Arabia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SaudiArabia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Scotland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Scotland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Scotland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Senegal: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Senegal";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Senegal.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Serbia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Serbia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Serbia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Seychelles: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Seychelles";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Seychelles.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Sicily: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Sicily";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Sicily.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SierraLeone: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Sierra Leone";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SierraLeone.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Singapore: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Singapore";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Singapore.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Slovakia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Slovakia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Slovakia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Slovenia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Slovenia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Slovenia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SolomonIslands: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Solomon Islands";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SolomonIslands.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Somalia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Somalia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Somalia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SouthAfrica: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - South Africa";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SouthAfrica.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SouthKorea: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - South Korea";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SouthKorea.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SouthVietnam: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - South Vietnam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SouthVietnam.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Spain: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Spain";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Spain.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_SriLanka: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Sri Lanka";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\SriLanka.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_StLucia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - St Lucia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\StLucia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_StMaarten: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - St Maarten";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\StMaarten.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Sudan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Sudan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Sudan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Suriname: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Suriname";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Suriname.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Swaziland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Swaziland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Swaziland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Sweden: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Sweden";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Sweden.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Switzerland: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Switzerland";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Switzerland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Syria: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Syria";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Syria.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Taiwan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Taiwan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Taiwan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Tajikistan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Tajikistan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Tajikistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Tanzania: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Tanzania";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Tanzania.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Thailand: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Thailand";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Thailand.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Tibet: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Tibet";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Tibet.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Togo: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Togo";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Togo.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Tonga: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Tonga";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Tonga.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Trinidad: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Trinidad";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Trinidad.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Tunisia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Tunisia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Tunisia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Turkey: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Turkey";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Turkey.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Turkmenistan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Turkmenistan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Turkmenistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_TurksCaicos: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Turks & Caicos";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\TurksCaicos.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Tuvalu: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Tuvalu";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Tuvalu.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_UAE: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - UAE";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\UAE.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Uganda: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Uganda";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Uganda.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Ukraine: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Ukraine";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Ukraine.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_UnitedKingdom: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - United Kingdom";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\UnitedKingdom.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_UnitedNations: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - United Nations";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\UnitedNations.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_UnitedStates: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - United States";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\UnitedStates.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Uruguay: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Uruguay";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Uruguay.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_USSR: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - USSR";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\USSR.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Uzbekistan: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Uzbekistan";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Uzbekistan.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Vanuatu: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Vanuatu";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Vanuatu.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Venezuela: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Venezuela";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Venezuela.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Vietnam: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Vietnam";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Vietnam.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Wales: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Wales";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Wales.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Yemen: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Yemen";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Yemen.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Yugoslavia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Yugoslavia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Yugoslavia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Zambia: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Zambia";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Zambia.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchFlag_Zimbabwe: SRP_PatchFlag_ColorBase
	{
		scope=2;
		displayName="Country Flag - Zimbabwe";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\flag\Zimbabwe.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};

  //---------------------------- LOGO PATCHES
	class SRP_PatchLogo_ColorBase: Clothing
	{
		scope=0;
		displayName="Identifier Patch";
		descriptionShort="Identifier Patch - comes in a variety of patterns and emblems";
		model="Survivalists_Mods\gear\patches\srp_patchlogo.p3d";
		itemSize[]={2,1};
		weight=0;
    color="base";
		inventorySlot[]=
    {
      "Armband",
      "patch_01",
      "patch_02",
      "patch_03",
      "patch_04",
      "SRP_Patch"
    };
		hiddenSelections[]=
    {
      "zbytek",
      "armband"
    };    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_a10.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\gear\patches\data\logo\srp_patchlogo.rvmat",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"
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
              {1.0,{"Survivalists_Mods\gear\patches\data\logo\srp_patchlogo.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
              {0.7,{"Survivalists_Mods\gear\patches\data\logo\srp_patchlogo.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag.rvmat"}},
              {0.5,{"Survivalists_Mods\gear\patches\datalogo\srp_patchlogo_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
              {0.3,{"Survivalists_Mods\gear\patches\datalogo\srp_patchlogo_damage.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_damage.rvmat"}},
              {0.0,{"Survivalists_Mods\gear\patches\datalogo\srp_patchlogo_destruct.rvmat","Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_destruct.rvmat"}}
            };
				};
			};
		};		
		class ClothingTypes
		{
			male="Survivalists_Mods\gear\patches\srp_patcharmbandlogo.p3d";
			female="Survivalists_Mods\gear\patches\srp_patcharmbandlogo.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

	class SRP_PatchLogo_01: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Squad Leader";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_sl.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_02: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Team Leader";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_tl.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_03: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Machinegunner";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_gnr.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_04: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Medic";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_med.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_05: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Sniper";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_snpr.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_06: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Rifleman";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_rfl.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_07: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - US";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_US.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_08: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - UK";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_UK.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_09: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - AUS";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_AUS.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_10: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - US";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_US_IR.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_11: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - UK";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_UK_IR.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_12: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - AUS";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_AUS_IR.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_13: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Rotten's Raiders";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_cobra.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_14: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - A10 Warthog";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_a10.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_15: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - EOD";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_EOD.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_16: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - F*ck Sh*t Up";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_FSU.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_17: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - No F*cks Given";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_fcks.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_18: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - I'm Too Old for This Sh*t";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_old.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_19: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Weyland-Yutani Corp";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_Weyland.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_20: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - The Warriors";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_warriors.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_21: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Canada";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_CAN.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_22: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Canada";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_CAN_IR.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_23: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - OBEY";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_obey.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_24: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Blackwater";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_Blackwater.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_25: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Lagoon Trade & Courier Services";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_lagoon.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_26: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - HCLI";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_HCLI.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_27: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Boogaloo";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_boogaloo.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_28: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - UN";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_UN.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_29: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Umbrella";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_Umbrella.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_30: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Umbrella";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_USS.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_31: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Romania";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_ROM.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_32: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Sweden";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_SWE.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_33: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - Anarchy";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_AN.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_34: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - RTO";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_RTO.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa",			
		};
	};
	class SRP_PatchLogo_35: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - This is the Way";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_warrior.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};
	class SRP_PatchLogo_36: SRP_PatchLogo_ColorBase
	{
		scope=2;
		displayName="Identifier Patch - ADMIN";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\patches\data\logo\patch_admin.paa",
			"Survivalists_Mods\gear\patches\data\srp_patcharmbandflag_co.paa"
		};
	};

};