class SRP_ActionSprayPaintLocker extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    ItemBase target_container;
		if ( target && Class.CastTo(target_container, target.GetObject()) )
    {
      // array<string> variantOptions = GetVariantIdOptions(target_container.GetType());
      if (target_container.HasDyableOptions())
      {
        string displayOption = target_container.GetDyeOption(m_VariantID);
        if (displayOption != "" )
        {
          m_Text = "Paint - " + displayOption;          
          // Print("on action info update: terxt: " + m_Text);
        }
      }
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    ItemBase target_container;
		if ( target && Class.CastTo(target_container, target.GetObject()) )
		{
      if (!target_container.IsContainer())
        return false;
      if (!target_container.HasDyableOptions())
        return false;
      if (item && item.IsDamageDestroyed())
        return false;
      if (item.GetQuantity() < 10)
        return false;
      // int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      // string newColor = GetVariantIdOptions().Get(m_VariantID);
      return target_container.IsEmpty();
    }    
		return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    Spraycan_ColorBase spraycan;
		if (action_data.m_MainItem && Class.CastTo(spraycan, action_data.m_MainItem))
		{
      ItemBase target_container;
      if ( action_data.m_Target && Class.CastTo(target_container, action_data.m_Target.GetObject()) )
      {
        int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
        string newItemName = target_container.GetDyableBaseClassName();

        if (target_container.HasDyableOptions())
        {
          newItemName = newItemName + "_" + target_container.GetDyeOption(variantId);
        }
        // Print("newItemName: " + newItemName);
        TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(target_container, newItemName, action_data.m_Player, target_container.GetPosition(), target_container.GetOrientation());
        MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);        
        spraycan.AddQuantity(-10);
      }
    }
	}

  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    ItemBase target_locker;
    if ( Class.CastTo(target_locker, target) )
    {
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(target_locker.GetTotalColorVariations());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}
};
