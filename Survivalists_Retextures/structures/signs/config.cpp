class CfgPatches
{
	class Survivalists_Retextures_Structures_Signs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Structures_Signs",
      "Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class SRP_CollectableSign_Base;
  class SRP_CollectableSign2_Base;

  //Collectable Signs
	class SRP_CollectableSign_BeerLiquor : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Beer Liquor";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_beerliquor_co.paa"
		};		
	};
	class SRP_CollectableSign_BestBurgers : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Best Burgers";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_bestburgers_co.paa"
		};		
	};
	class SRP_CollectableSign_Cinema : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Cinema";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_cinema_co.paa"
		};		
	};
	class SRP_CollectableSign_CocaCola : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Coca Cola";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_cocacola_co.paa"
		};		
	};
	class SRP_CollectableSign_Female : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Female";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_female_co.paa"
		};		
	};
	class SRP_CollectableSign_FreshBakery : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Fresh Bakery";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_freshbakery_co.paa"
		};		
	};
	class SRP_CollectableSign_IceCream : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Ice Cream";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_icecream_co.paa"
		};		
	};
	class SRP_CollectableSign_Male : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Male";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_male_co.paa"
		};		
	};
	class SRP_CollectableSign_OpenClosed : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Open/Closed";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_openclosed_co.paa"
		};		
	};
	class SRP_CollectableSign_Pepsi : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Pepsi";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_pepsi_co.paa"
		};		
	};
	class SRP_CollectableSign_Popcorn : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Popcorn";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_popcorn_co.paa"
		};		
	};
	class SRP_CollectableSign_Seafood : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Seafood";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_seafood_co.paa"
		};		
	};
	class SRP_CollectableSign_Staff : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Staff Only";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_staff_co.paa"
		};		
	};
	class SRP_CollectableSign_Starbucks : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Starbucks";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_starbucks_co.paa"
		};		
	};
	class SRP_CollectableSign_Thankyou : SRP_CollectableSign_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Thank you";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_thankyou_co.paa"
		};		
	};
	
	class SRP_CollectableSign_CoffeeBean : SRP_CollectableSign2_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Coffee Bean";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_coffebean_co.paa"
		};		
	};
	class SRP_CollectableSign_Coffee : SRP_CollectableSign2_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Best Coffee";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_coffee_co.paa"
		};		
	};
	class SRP_CollectableSign_Deserts : SRP_CollectableSign2_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Homemade Deserts";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_deserts_co.paa"
		};		
	};
	class SRP_CollectableSign_Donuts : SRP_CollectableSign2_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Donuts";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_donuts_co.paa"
		};		
	};
	class SRP_CollectableSign_Pizza : SRP_CollectableSign2_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Pizza";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_pizza_co.paa"
		};		
	};
	class SRP_CollectableSign_Soda : SRP_CollectableSign2_Base //new
	{
		scope=2;
		displayName="Collectable Sign - Soda";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\structures\signs\data\srp_sign_soda_co.paa"
		};		
	};
};