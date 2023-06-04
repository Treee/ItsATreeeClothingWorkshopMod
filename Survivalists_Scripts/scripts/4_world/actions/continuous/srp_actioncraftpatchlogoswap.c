class ActionSwitchPatchLogoOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      m_Text = string.Format("Logo Patch - %1", displayOption);
      // Print("on action info update: terxt: " + m_Text);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_PatchLogo_StarterKit patchLogoStarterKit;
    // Print("Item: " + item);
    if (Class.CastTo(patchLogoStarterKit, item))
    {
      // Print("bool?: " + patchLogoStarterKit.CanCraft());
      return patchLogoStarterKit.CanCraft();
    }
    return false;	
  }

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_PatchLogo_StarterKit patchLogoStarterKit;
		if (action_data.m_MainItem && Class.CastTo(patchLogoStarterKit, action_data.m_MainItem))
		{      
      int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      action_data.m_MainItem.Delete();
      GetGame().CreateObjectEx(string.Format("SRP_PatchLogo_%1", GetVariantIdOptions().Get(variantId)), action_data.m_Player.GetPosition(), false);
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
      "SquadLeader",
      "TeamLeader",
      "MachineGunner",
      "Medic",
      "Sniper",
      "Rifleman",
      "US",
      "UK",
      "AUS",
      "USIR",
      "UKIR",
      "AUSIR",
      "RottensRaiders",
      "A10Warthog",
      "EOD",
      "FckShtUp",
      "NoFckGvn",
      "TooOld",
      "WeylandCorp",
      "TheWarriors",
      "CAN",
      "CANIR",
      "Obey",
      "Blackwater",
      "LagoonTrade",
      "HCLI",
      "Boog",
      "UN",
      "Umbrella",
      "UmbrellaUS",
      "Romania",
      "Sweden",
      "Anarchy",
      "RTO",
      "ThisWay"
    };
  }
};
