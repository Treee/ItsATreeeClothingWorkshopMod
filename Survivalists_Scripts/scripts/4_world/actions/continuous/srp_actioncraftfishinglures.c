class ActionSwitchMetalFishingLureOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    m_Text = "No Option";
    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      m_Text = "Metal Lure - " + GetPrettyName(displayOption);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    return true;
  }
  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_FishingLureMetal_Kit fishingLureKit;
		if (action_data.m_MainItem && Class.CastTo(fishingLureKit, action_data.m_MainItem))
		{      
      int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      action_data.m_MainItem.Delete();
      GetGame().CreateObjectEx(GetVariantIdOptions().Get(variantId), action_data.m_Player.GetPosition(), false);
		}
	}
  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    SRP_FishingLureMetal_Kit intermediateKit;
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
  string GetPrettyName(string raw)
  {
    TStringArray parts = {};
    raw.Split("_", parts);
    string message = "";
    if (parts.Count() > 1)
    {
      switch(parts.Get(2))
      {
        case "Flat1":
          message = "Slim Metal";
        break;
        case "Flat2":
          message = "Tear Drop";
        break;
        case "Flat3":
          message = "Oval";
        break;
        default:
          message = "Default";
        break;
      }
      message = string.Format("%1 %2", message, parts.Get(3));
    }
    return message;
  }
  override TStringArray GetVariantIdOptions(string itemType="")
  {
    return {
      "SRP_FishingLure_Flat1_1",
      "SRP_FishingLure_Flat1_2",
      "SRP_FishingLure_Flat1_3",
      "SRP_FishingLure_Flat1_4",
      "SRP_FishingLure_Flat2_1",
      "SRP_FishingLure_Flat2_2",
      "SRP_FishingLure_Flat2_3",
      "SRP_FishingLure_Flat2_4",
      "SRP_FishingLure_Flat3_1",
      "SRP_FishingLure_Flat3_2",
      "SRP_FishingLure_Flat3_3",
      "SRP_FishingLure_Flat3_4",
    };
  }
};

class ActionSwitchWoodFishingLureOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      m_Text = "Wood Lure - " + GetPrettyName(displayOption);
      // Print("on action info update: terxt: " + m_Text);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    return true;
  }

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_FishingLureWood_Kit fishingLureKit;
		if (action_data.m_MainItem && Class.CastTo(fishingLureKit, action_data.m_MainItem))
		{      
      int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      action_data.m_MainItem.Delete();
      GetGame().CreateObjectEx(GetVariantIdOptions().Get(variantId), action_data.m_Player.GetPosition(), false);
		}
	}

  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    SRP_FishingLureWood_Kit intermediateKit;
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
  string GetPrettyName(string raw)
  {
    TStringArray parts = {};
    raw.Split("_", parts);
    string message = "";
    if (parts.Count() > 1)
    {
      switch(parts.Get(2))
      {
        case "Fish1":
          message = "Small Scaly Fish";
        break;
        case "Fish2":
          message = "Patterned Fish";
        break;
        case "Fish3":
          message = "Large Scaly Fish";
        break;
        default:
          message = "Default";
        break;
      }
      message = string.Format("%1 %2", message, parts.Get(3));
    }
    return message;
  }
  override TStringArray GetVariantIdOptions(string itemType="")
  {
    return {
      "SRP_FishingLure_Fish1_1",
      "SRP_FishingLure_Fish1_2",
      "SRP_FishingLure_Fish1_3",
      "SRP_FishingLure_Fish1_4",
      "SRP_FishingLure_Fish2_1",
      "SRP_FishingLure_Fish2_2",
      "SRP_FishingLure_Fish2_3",
      "SRP_FishingLure_Fish2_4",
      "SRP_FishingLure_Fish3_1",
      "SRP_FishingLure_Fish3_2",
      "SRP_FishingLure_Fish3_3",
      "SRP_FishingLure_Fish3_4",
    };
  }
};
