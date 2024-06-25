class ActionSwitchArmbandOption_Base extends ActionSRPVariantIdOption
{
    override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
        super.OnActionInfoUpdate(player, target, item);
        string armband = GetVariantIdOptions().Get(m_VariantID);
        if (armband && armband != "" )
        {
            m_Text = string.Format("%1 - %2", GetActionTextPrefix(), armband);
        }
	}
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        SRP_IntermediateCraftingKitBase intermediateKit;
        // Print("Item: " + item);
        if (Class.CastTo(intermediateKit, item))
        {
            // Print("bool?: " + intermediateKit.CanCraft());
            return intermediateKit.CanCraft();
        }
        return false;
    }
    override void OnFinishProgressServer( ActionData action_data )
    {
        super.OnFinishProgressServer(action_data);
        SRP_IntermediateCraftingKitBase intermediateKit;
		if (action_data.m_MainItem && Class.CastTo(intermediateKit, action_data.m_MainItem))
		{
            int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
            string newKitName = GetArmbandClassName(GetVariantIdOptions().Get(variantId));
            // Print("New kit name: " + newKitName);
            GetGame().CreateObjectEx(newKitName, action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE|ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
            intermediateKit.Delete();
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
        return {};
    }
    string GetArmbandClassName(string variantName)
    {
        return "";
    }
    string GetActionTextPrefix()
    {
        return "";
    }
};


class ActionSwitchArmbandOption_Single extends ActionSwitchArmbandOption_Base
{
    override TStringArray GetVariantIdOptions(string itemType="")
    {
        return {
            "Altis",
            "APA",
            "BabyDeer",
            "Bear",
            "Black",
            "Blue",
            "Bohemia",
            "BrainZ",
            "Cannibals",
            "CDF",
            "Chedaki",
            "CHEL",
            "Chernarus",
            "CMC",
            "Crook",
            "DayZ",
            "Green",
            "HunterZ",
            "Livonia",
            "LivoniaArmy",
            "LivoniaPolice",
            "NAPA",
            "NSahrani",
            "Orange",
            "Pink",
            "Pirates",
            "Red",
            "Refuge",
            "Rex",
            "Rooster",
            "RSTA",
            "Snake",
            "SSahrani",
            "TEC",
            "UEC",
            "White",
            "Wolf",
            "Yellow",
            "Zagorky",
            "Zenit",
        };
    }
    override string GetArmbandClassName(string variantName)
    {
        return string.Format("Armband_%1", variantName);
    }
    override string GetActionTextPrefix()
    {
        return "Armband";
    }
};

class ActionSwitchArmbandOption_Double extends ActionSwitchArmbandOption_Base
{
    override TStringArray GetVariantIdOptions(string itemType="")
    {
        return {
            "Bandit",
            "BisexualFlag",
            "Blacker",
            "Bluer",
            "BrainPlate",
            "DarkerBluer",
            "DarkerGreyer",
            "DarkerPurpler",
            "FaceDry",
            "GBPrideFlag",
            "Greener",
            "Greyer",
            "HeterosexualFlag",
            "HummingBird",
            "Ireland",
            "JeMeSouviens",
            "Jurassic",
            "Kraken",
            "Lilith",
            "Lime",
            "MaineState",
            "Medic",
            "Medic1",
            "Medic2",
            "Medic3",
            "Medic4",
            "MotherOfAll",
            "Mushroom",
            "MushroomDrawing",
            "Octopus",
            "Oranger",
            "Pinker",
            "PrideFlag",
            "Purpler",
            "Reaper",
            "Redder",
            "SantaMuerte",
            "Teal",
            "TransFlag",
            "Turkey",
            "Ukraine",
            "ViveLeQuebecWeed",
            "Yellower",
        };
    }
    override string GetArmbandClassName(string variantName)
    {
        return string.Format("Armband_%1", variantName);
    }
    override string GetActionTextPrefix()
    {
        return "Double Armband";
    }
};