class ActionSwitchPatchFlagOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      displayOption = displayOption.Substring(14, displayOption.Length());
      m_Text = "Flag Patch - " + displayOption;
      // Print("on action info update: terxt: " + m_Text);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_PatchFlag_StarterKit patchFlagStarterKit;
    // Print("Item: " + item);
    if (Class.CastTo(patchFlagStarterKit, item))
    {
      // Print("bool?: " + patchFlagStarterKit.CanCraft());
      return patchFlagStarterKit.CanCraft();
    }
    return false;	
  }

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_PatchFlag_StarterKit patchFlagStarterKit;
		if (action_data.m_MainItem && Class.CastTo(patchFlagStarterKit, action_data.m_MainItem))
		{      
      int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, GetVariantIdOptions().Get(variantId), action_data.m_Player);
      lambda.SetTransferParams(false, false);
      action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
		}
	}

  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    SRP_IntermediateCraftingKitBase intermediateKit;
    if ( Class.CastTo(intermediateKit, item) )
    {
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(GetVariantIdOptions().Count());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}
  override TStringArray GetVariantIdOptions(string itemType="")
  {
    return {
      "SRP_PatchFlag_Mayor",
      "SRP_PatchFlag_Blacksmith",
      "SRP_PatchFlag_Carpenter",
      "SRP_PatchFlag_Herbologist",
      "SRP_PatchFlag_Medic",
      "SRP_PatchFlag_Mutant",
      "SRP_PatchFlag_Pirate",
      "SRP_PatchFlag_Resident",
      "SRP_PatchFlag_Security",
      "SRP_PatchFlag_Tailor",
      "SRP_PatchFlag_Trader",
      "SRP_PatchFlag_Afghanistan",
      "SRP_PatchFlag_Albania",
      "SRP_PatchFlag_Algeria",
      "SRP_PatchFlag_AmericanSamoa",
      "SRP_PatchFlag_Andorra",
      "SRP_PatchFlag_Angola",
      "SRP_PatchFlag_Antigua",
      "SRP_PatchFlag_Argentina",
      "SRP_PatchFlag_Armenia",
      "SRP_PatchFlag_Aruba",
      "SRP_PatchFlag_Australia",
      "SRP_PatchFlag_Austria",
      "SRP_PatchFlag_Azerbaijan",
      "SRP_PatchFlag_Azores",
      "SRP_PatchFlag_Bahamas",
      "SRP_PatchFlag_Bahrain",
      "SRP_PatchFlag_Bangladesh",
      "SRP_PatchFlag_Barbados",
      "SRP_PatchFlag_Belarus",
      "SRP_PatchFlag_Belgium",
      "SRP_PatchFlag_Belize",
      "SRP_PatchFlag_Benin",
      "SRP_PatchFlag_Bermuda",
      "SRP_PatchFlag_Bhutan",
      "SRP_PatchFlag_Bolivia",
      "SRP_PatchFlag_Bosnia",
      "SRP_PatchFlag_Botswana",
      "SRP_PatchFlag_Brazil",
      "SRP_PatchFlag_BritishVirginIslands",
      "SRP_PatchFlag_BruneiDarussalam",
      "SRP_PatchFlag_Bulgaria",
      "SRP_PatchFlag_BurkinaFaso",
      "SRP_PatchFlag_Burma",
      "SRP_PatchFlag_Burundi",
      "SRP_PatchFlag_Cambodia",
      "SRP_PatchFlag_Cameroon",
      "SRP_PatchFlag_Canada",
      "SRP_PatchFlag_CapeVerde",
      "SRP_PatchFlag_CaymanIslands",
      "SRP_PatchFlag_Chad",
      "SRP_PatchFlag_Chile",
      "SRP_PatchFlag_China",
      "SRP_PatchFlag_Colombia",
      "SRP_PatchFlag_Comoros",
      "SRP_PatchFlag_CookIslands",
      "SRP_PatchFlag_CostaRica",
      "SRP_PatchFlag_Croatia",
      "SRP_PatchFlag_Cuba",
      "SRP_PatchFlag_Curacao",
      "SRP_PatchFlag_Cyprus",
      "SRP_PatchFlag_Czech",
      "SRP_PatchFlag_Denmark",
      "SRP_PatchFlag_Djibouti",
      "SRP_PatchFlag_DominicanRepublic",
      "SRP_PatchFlag_EastTimor",
      "SRP_PatchFlag_Ecuador",
      "SRP_PatchFlag_Egypt",
      "SRP_PatchFlag_ElSalvador",
      "SRP_PatchFlag_Eritrea",
      "SRP_PatchFlag_Estonia",
      "SRP_PatchFlag_Ethiopia",
      "SRP_PatchFlag_FalklandIslands",
      "SRP_PatchFlag_Fiji",
      "SRP_PatchFlag_Finland",
      "SRP_PatchFlag_France",
      "SRP_PatchFlag_Gabon",
      "SRP_PatchFlag_Gambia",
      "SRP_PatchFlag_Germany",
      "SRP_PatchFlag_Ghana",
      "SRP_PatchFlag_Gibraltar",
      "SRP_PatchFlag_Greece",
      "SRP_PatchFlag_Greenland",
      "SRP_PatchFlag_Grenada",
      "SRP_PatchFlag_Guam",
      "SRP_PatchFlag_Guatemala",
      "SRP_PatchFlag_Guinea",
      "SRP_PatchFlag_Guyana",
      "SRP_PatchFlag_GypsyRomani",
      "SRP_PatchFlag_Haiti",
      "SRP_PatchFlag_Honduras",
      "SRP_PatchFlag_Hungary",
      "SRP_PatchFlag_Iceland",
      "SRP_PatchFlag_India",
      "SRP_PatchFlag_Indonesia",
      "SRP_PatchFlag_Iran",
      "SRP_PatchFlag_Iraq",
      "SRP_PatchFlag_Ireland",
      "SRP_PatchFlag_Israel",
      "SRP_PatchFlag_Italy",
      "SRP_PatchFlag_Jamaica",
      "SRP_PatchFlag_Japan",
      "SRP_PatchFlag_Jordan",
      "SRP_PatchFlag_Kazakhstan",
      "SRP_PatchFlag_Kenya",
      "SRP_PatchFlag_Kiribati",
      "SRP_PatchFlag_Kosovo",
      "SRP_PatchFlag_Kuwait",
      "SRP_PatchFlag_Kyrgyzstan",
      "SRP_PatchFlag_Laos",
      "SRP_PatchFlag_Latvia",
      "SRP_PatchFlag_Lebanon",
      "SRP_PatchFlag_Lesotho",
      "SRP_PatchFlag_Liberia",
      "SRP_PatchFlag_Libya",
      "SRP_PatchFlag_Lithuania",
      "SRP_PatchFlag_Macau",
      "SRP_PatchFlag_Macedonia",
      "SRP_PatchFlag_Madagascar",
      "SRP_PatchFlag_Malawi",
      "SRP_PatchFlag_Malaysia",
      "SRP_PatchFlag_Maldives",
      "SRP_PatchFlag_Mali",
      "SRP_PatchFlag_Malta",
      "SRP_PatchFlag_MarshallIslands",
      "SRP_PatchFlag_Mauritius",
      "SRP_PatchFlag_Mexico",
      "SRP_PatchFlag_Micronesia",
      "SRP_PatchFlag_Moldova",
      "SRP_PatchFlag_Monaco",
      "SRP_PatchFlag_Mongolia",
      "SRP_PatchFlag_Montenegro",
      "SRP_PatchFlag_Morocco",
      "SRP_PatchFlag_Mozambique",
      "SRP_PatchFlag_Namibia",
      "SRP_PatchFlag_Nauru",
      "SRP_PatchFlag_Netherlands",
      "SRP_PatchFlag_NewZealand",
      "SRP_PatchFlag_Nicaragua",
      "SRP_PatchFlag_Niger",
      "SRP_PatchFlag_Nigeria",
      "SRP_PatchFlag_NorthernIreland",
      "SRP_PatchFlag_Norway",
      "SRP_PatchFlag_Oman",
      "SRP_PatchFlag_Pakistan",
      "SRP_PatchFlag_Palau",
      "SRP_PatchFlag_Palestine",
      "SRP_PatchFlag_Panama",
      "SRP_PatchFlag_PapuaNewGuinea",
      "SRP_PatchFlag_Paraguay",
      "SRP_PatchFlag_Peru",
      "SRP_PatchFlag_Philippines",
      "SRP_PatchFlag_Poland",
      "SRP_PatchFlag_Portugal",
      "SRP_PatchFlag_PuertoRico",
      "SRP_PatchFlag_Qatar",
      "SRP_PatchFlag_Romania",
      "SRP_PatchFlag_Russia",
      "SRP_PatchFlag_Rwanda",
      "SRP_PatchFlag_Samoa",
      "SRP_PatchFlag_SanMarino",
      "SRP_PatchFlag_SaudiArabia",
      "SRP_PatchFlag_Scotland",
      "SRP_PatchFlag_Senegal",
      "SRP_PatchFlag_Serbia",
      "SRP_PatchFlag_Seychelles",
      "SRP_PatchFlag_Sicily",
      "SRP_PatchFlag_SierraLeone",
      "SRP_PatchFlag_Singapore",
      "SRP_PatchFlag_Slovakia",
      "SRP_PatchFlag_Slovenia",
      "SRP_PatchFlag_SolomonIslands",
      "SRP_PatchFlag_Somalia",
      "SRP_PatchFlag_SouthAfrica",
      "SRP_PatchFlag_SouthKorea",
      "SRP_PatchFlag_SouthVietnam",
      "SRP_PatchFlag_Spain",
      "SRP_PatchFlag_SriLanka",
      "SRP_PatchFlag_StLucia",
      "SRP_PatchFlag_StMaarten",
      "SRP_PatchFlag_Sudan",
      "SRP_PatchFlag_Suriname",
      "SRP_PatchFlag_Swaziland",
      "SRP_PatchFlag_Sweden",
      "SRP_PatchFlag_Switzerland",
      "SRP_PatchFlag_Syria",
      "SRP_PatchFlag_Taiwan",
      "SRP_PatchFlag_Tajikistan",
      "SRP_PatchFlag_Tanzania",
      "SRP_PatchFlag_Thailand",
      "SRP_PatchFlag_Tibet",
      "SRP_PatchFlag_Togo",
      "SRP_PatchFlag_Tonga",
      "SRP_PatchFlag_Trinidad",
      "SRP_PatchFlag_Tunisia",
      "SRP_PatchFlag_Turkey",
      "SRP_PatchFlag_Turkmenistan",
      "SRP_PatchFlag_TurksCaicos",
      "SRP_PatchFlag_Tuvalu",
      "SRP_PatchFlag_UAE",
      "SRP_PatchFlag_Uganda",
      "SRP_PatchFlag_Ukraine",
      "SRP_PatchFlag_UnitedKingdom",
      "SRP_PatchFlag_UnitedNations",
      "SRP_PatchFlag_UnitedStates",
      "SRP_PatchFlag_Uruguay",
      "SRP_PatchFlag_USSR",
      "SRP_PatchFlag_Uzbekistan",
      "SRP_PatchFlag_Vanuatu",
      "SRP_PatchFlag_Venezuela",
      "SRP_PatchFlag_Vietnam",
      "SRP_PatchFlag_Wales",
      "SRP_PatchFlag_Yemen",
      "SRP_PatchFlag_Yugoslavia",
      "SRP_PatchFlag_Zambia",
      "SRP_PatchFlag_Zimbabwe"
    };
  }
};
