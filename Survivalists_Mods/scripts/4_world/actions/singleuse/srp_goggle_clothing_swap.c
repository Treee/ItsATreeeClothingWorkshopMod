class ActionPutGogglesOnHead extends ActionSingleUseBase
{
	void ActionPutGogglesOnHead()
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
		return "Wear On Helmet";
	}

	override bool HasTarget() { return false; }

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item)
			return true;
		return false;
	}

	override bool ActionConditionContinue( ActionData action_data ) { return true; }

	override void OnExecuteServer( ActionData action_data )
	{
    TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, "SRP_Goggles_Head", action_data.m_Player);
    lambda.SetTransferParams(true, true, true, false, 1);
    action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
	}
};

class ActionPutGogglesOnFace extends ActionSingleUseBase
{
	void ActionPutGogglesOnFace()
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
		return "Wear On Face";
	}

	override bool HasTarget() { return false; }

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item)
			return true;
		return false;
	}

	override bool ActionConditionContinue( ActionData action_data ) { return true; }

	override void OnExecuteServer( ActionData action_data )
	{
    TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, "SRP_Goggles_Face", action_data.m_Player);
    lambda.SetTransferParams(true, true, true, false, 1);
    action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
	}
};
