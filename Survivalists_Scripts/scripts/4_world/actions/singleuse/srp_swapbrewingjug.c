class SRP_SwapBrewingJug extends ActionSingleUseBase
{
	void SRP_SwapBrewingJug()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Swap Brewing Jug";
	}

	override bool HasTarget() { return false; }

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item && item.GetQuantity() <= 1000)
			return true;
		return false;
	}

	override bool ActionConditionContinue( ActionData action_data ) { return true; }

	override void OnExecuteServer( ActionData action_data )
	{
        TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, GetNextItemName(action_data.m_MainItem.GetType()), action_data.m_Player);
        lambda.SetTransferParams(false, false, true, false, 0);
        action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
	}

  string GetNextItemName(string itemName)
  {
    switch(itemName)
    {
      case "BrewingJug_Plastic_Alcohol":
        return "BrewingJug_Plastic_Disinfectant";
      break;
      case "BrewingJug_Plastic_Disinfectant":
        return "BrewingJug_Plastic_Gasoline";
      break;
      case "BrewingJug_Plastic_Gasoline":
        return "BrewingJug_Plastic_Water";
      break;
      case "BrewingJug_Plastic_Water":
        return "BrewingJug_Plastic_Alcohol";
      break;
    }
    return "BrewingJug_Plastic_Alcohol";
  }
};

