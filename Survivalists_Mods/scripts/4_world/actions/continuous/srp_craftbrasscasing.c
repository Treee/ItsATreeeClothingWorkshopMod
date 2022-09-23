class ActionSRPSwapBrassCasingOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      TStringArray parts = new TStringArray;
      displayOption.Split("_",parts);
      if (parts.Count() == 3)
      {
        m_Text = "Draw, Pinch, and Taper Casing - " + parts.Get(2);
      }
      // Print("on action info update: terxt: " + m_Text);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_MiningTool_IronTongsSmall tongs;
		if (Class.CastTo(tongs, item))
		{
      SRP_AdvancedWorkbench advancedBench;
      if ( target && Class.CastTo(advancedBench, target.GetObject()) )
      {
        return tongs.HasEnoughCoins(5) && tongs.IsAttachedCoinHotEnough(180);	
      }
    }
    return false;
	}
	override bool ActionConditionContinue( ActionData action_data )
  {
    return ActionCondition(action_data.m_Player, action_data.m_Target,action_data.m_MainItem);
  }
  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_MiningTool_IronTongsSmall tongs;
		if (Class.CastTo(tongs, action_data.m_MainItem))
		{
      SRP_AdvancedWorkbench advancedBench;
      if ( action_data.m_Target && Class.CastTo(advancedBench, action_data.m_Target.GetObject()) )
      {
        int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;               
        ItemBase casings = ItemBase.Cast(GetGame().CreateObjectEx(GetVariantIdOptions().Get(variantId), action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
        casings.SetQuantity(1);
        tongs.ReduceCoinCount(Math.RandomIntInclusive(1,3));
      }
    }
	}
  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    SRP_AdvancedWorkbench advancedBench;
    if ( target && Class.CastTo(advancedBench, target) )
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
      "SRP_EmptyCasingPistol_9x19",
      "SRP_EmptyCasingPistol_357",
      "SRP_EmptyCasingPistol_22",
      "SRP_EmptyCasingPistol_45ACP",
      "SRP_EmptyCasingPistol_380",
      "SRP_EmptyCasingRifle_556",
      "SRP_EmptyCasingRifle_545",
      "SRP_EmptyCasingRifle_762x39",
      "SRP_EmptyCasingRifle_762x54",
      "SRP_EmptyCasingRifle_308",
      "SRP_EmptyCasingRifle_9x39",
      "SRP_EmptyCasingRifle_300Blackout",
      "SRP_EmptyCasingRifle_50Cal",
      "SRP_EmptyCasingRifle_12x7",
      "SRP_EmptyCasing_Shotgun",
    };
  }
};
