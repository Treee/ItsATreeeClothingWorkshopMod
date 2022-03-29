class ActionFlipCapBackward extends ActionSingleUseBase
{
	void ActionFlipCapBackward()
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
		return "Flip Backwards";
	}

	override bool HasTarget() { return false; }

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item)// && item.GetInventory().AttachmentCount() == 0)
			return true;
		return false;
	}

	override bool ActionConditionContinue( ActionData action_data ) { return true; }

	override void OnExecuteServer( ActionData action_data )
	{
    string patrolCapType = action_data.m_MainItem.GetType();
    TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, patrolCapType+ "_Backwards", action_data.m_Player);
    lambda.SetTransferParams(true, true, true, false, 1);
    action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
	}
};

class ActionFlipCapForward extends ActionSingleUseBase
{
	void ActionFlipCapForward()
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
		return "Flip Forwards";
	}

	override bool HasTarget() { return false; }

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item)// && item.GetInventory().AttachmentCount() == 0)
			return true;
		return false;
	}

	override bool ActionConditionContinue( ActionData action_data ) { return true; }

	override void OnExecuteServer( ActionData action_data )
	{
    string patrolCapType = action_data.m_MainItem.GetType();
    patrolCapType.Replace("_Backwards", "");
    TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, patrolCapType, action_data.m_Player);
    lambda.SetTransferParams(true, true, true, false, 1);
    action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
	}
};
