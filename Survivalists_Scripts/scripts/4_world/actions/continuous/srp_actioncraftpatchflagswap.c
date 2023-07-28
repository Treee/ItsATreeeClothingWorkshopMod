class ActionSwitchPatchFlagOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      m_Text = string.Format("Flag Patch - %1", displayOption);
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
      action_data.m_MainItem.Delete();
      GetGame().CreateObjectEx(string.Format("SRP_PatchFlag_%1",GetVariantIdOptions().Get(variantId)), action_data.m_Player.GetPosition(), false);
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
      "Mayor",
      "Blacksmith",
      "Carpenter",
      "Herbologist",
      "Medic",
      "Mutant",
      "Pirate",
      "Resident",
      "Security",
      "Tailor",
      "Trader",
      "Barber",
      "Biologist",
      "Brewer",
      "Builder",
      "Corporal",
      "Drug",
      "Junker",
      "Miner",
      "Neurologist",
      "Physicist",
      "Private",
      "Scrapper",
      "Seaman",
      "Seaman1",
      "Sergeant",
      "GreenMountain",
      "Afghanistan",
      "Albania",
      "Algeria",
      "AmericanSamoa",
      "Andorra",
      "Angola",
      "Antigua",
      "Argentina",
      "Armenia",
      "Aruba",
      "Australia",
      "Austria",
      "Azerbaijan",
      "Azores",
      "Bahamas",
      "Bahrain",
      "Bangladesh",
      "Barbados",
      "Belarus",
      "Belgium",
      "Belize",
      "Benin",
      "Bermuda",
      "Bhutan",
      "Bolivia",
      "Bosnia",
      "Botswana",
      "Brazil",
      "BritishVirginIslands",
      "BruneiDarussalam",
      "Bulgaria",
      "BurkinaFaso",
      "Burma",
      "Burundi",
      "Cambodia",
      "Cameroon",
      "Canada",
      "CanadaFrench",
      "CapeVerde",
      "CaymanIslands",
      "Chad",
      "Chile",
      "China",
      "Colombia",
      "Comoros",
      "CookIslands",
      "CostaRica",
      "Croatia",
      "Cuba",
      "Curacao",
      "Cyprus",
      "Czech",
      "Denmark",
      "Djibouti",
      "DominicanRepublic",
      "EastTimor",
      "Ecuador",
      "Egypt",
      "ElSalvador",
      "Eritrea",
      "Estonia",
      "Ethiopia",
      "FalklandIslands",
      "Fiji",
      "Finland",
      "France",
      "Gabon",
      "Gambia",
      "Germany",
      "Ghana",
      "Gibraltar",
      "Greece",
      "Greenland",
      "Grenada",
      "Guam",
      "Guatemala",
      "Guinea",
      "Guyana",
      "GypsyRomani",
      "Haiti",
      "Honduras",
      "Hungary",
      "Iceland",
      "India",
      "Indonesia",
      "Iran",
      "Iraq",
      "Ireland",
      "Israel",
      "Italy",
      "Jamaica",
      "Japan",
      "Jordan",
      "Kazakhstan",
      "Kenya",
      "Kiribati",
      "Kosovo",
      "Kuwait",
      "Kyrgyzstan",
      "Laos",
      "Latvia",
      "Lebanon",
      "Lesotho",
      "Liberia",
      "Libya",
      "Lithuania",
      "Macau",
      "Macedonia",
      "Madagascar",
      "Malawi",
      "Malaysia",
      "Maldives",
      "Mali",
      "Malta",
      "MarshallIslands",
      "Mauritius",
      "Mexico",
      "Micronesia",
      "Moldova",
      "Monaco",
      "Mongolia",
      "Montenegro",
      "Morocco",
      "Mozambique",
      "Namibia",
      "Nauru",
      "Netherlands",
      "NewZealand",
      "Nicaragua",
      "Niger",
      "Nigeria",
      "NorthernIreland",
      "Norway",
      "Oman",
      "Pakistan",
      "Palau",
      "Palestine",
      "Panama",
      "PapuaNewGuinea",
      "Paraguay",
      "Peru",
      "Philippines",
      "Poland",
      "Portugal",
      "PuertoRico",
      "Qatar",
      "Romania",
      "Russia",
      "Rwanda",
      "Samoa",
      "SanMarino",
      "SaudiArabia",
      "Scotland",
      "Senegal",
      "Serbia",
      "Seychelles",
      "Sicily",
      "SierraLeone",
      "Singapore",
      "Slovakia",
      "Slovenia",
      "SolomonIslands",
      "Somalia",
      "SouthAfrica",
      "SouthKorea",
      "SouthVietnam",
      "Spain",
      "SriLanka",
      "StLucia",
      "StMaarten",
      "Sudan",
      "Suriname",
      "Swaziland",
      "Sweden",
      "Switzerland",
      "Syria",
      "Taiwan",
      "Tajikistan",
      "Tanzania",
      "Thailand",
      "Tibet",
      "Togo",
      "Tonga",
      "Trinidad",
      "Tunisia",
      "Turkey",
      "Turkmenistan",
      "TurksCaicos",
      "Tuvalu",
      "UAE",
      "Uganda",
      "Ukraine",
      "UnitedKingdom",
      "UnitedNations",
      "UnitedStates",
      "Uruguay",
      "USSR",
      "Uzbekistan",
      "Vanuatu",
      "Venezuela",
      "Vietnam",
      "Wales",
      "Yemen",
      "Yugoslavia",
      "Zambia",
      "Zimbabwe"
    };
  }
};
