class ActionSRPSwapClayPotOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      m_Text = "Mold Vase - " + displayOption;
      // Print("on action info update: terxt: " + m_Text);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    return true;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
    string kitName = action_data.m_MainItem.GetType();
    kitName.Replace("Kit_Kit","");
    TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, string.Format("%1_%2_Kit",kitName,GetVariantIdOptions().Get(variantId)), action_data.m_Player);
    lambda.SetTransferParams(false, false);
    action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
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
      "Basic",
      "Ornament",
      "Flower",
      "Geometric",
      "Modern",
      "Celtic",
      "Rossetta",
    };
  }
};
