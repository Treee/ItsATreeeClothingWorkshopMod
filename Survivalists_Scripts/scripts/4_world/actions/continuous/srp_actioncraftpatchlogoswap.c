class ActionSwitchPatchLogoOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      displayOption = displayOption.Substring(14, displayOption.Length());
      m_Text = "Logo Patch - " + displayOption;
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
      GetGame().CreateObjectEx(GetVariantIdOptions().Get(variantId), action_data.m_Player.GetPosition(), false)
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
      "SRP_PatchLogo_SquadLeader",
      "SRP_PatchLogo_TeamLeader",
      "SRP_PatchLogo_MachineGunner",
      "SRP_PatchLogo_Medic",
      "SRP_PatchLogo_Sniper",
      "SRP_PatchLogo_Rifleman",
      "SRP_PatchLogo_US",
      "SRP_PatchLogo_UK",
      "SRP_PatchLogo_AUS",
      "SRP_PatchLogo_USIR",
      "SRP_PatchLogo_UKIR",
      "SRP_PatchLogo_AUSIR",
      "SRP_PatchLogo_RottensRaiders",
      "SRP_PatchLogo_A10Warthog",
      "SRP_PatchLogo_EOD",
      "SRP_PatchLogo_FckShtUp",
      "SRP_PatchLogo_NoFckGvn",
      "SRP_PatchLogo_TooOld",
      "SRP_PatchLogo_WeylandCorp",
      "SRP_PatchLogo_TheWarriors",
      "SRP_PatchLogo_CAN",
      "SRP_PatchLogo_CANIR",
      "SRP_PatchLogo_Obey",
      "SRP_PatchLogo_Blackwater",
      "SRP_PatchLogo_LagoonTrade",
      "SRP_PatchLogo_HCLI",
      "SRP_PatchLogo_Boog",
      "SRP_PatchLogo_UN",
      "SRP_PatchLogo_Umbrella",
      "SRP_PatchLogo_UmbrellaUS",
      "SRP_PatchLogo_Romania",
      "SRP_PatchLogo_Sweden",
      "SRP_PatchLogo_Anarchy",
      "SRP_PatchLogo_RTO",
      "SRP_PatchLogo_ThisWay"
    };
  }
};
