class ActionOpenSRPdonutpack extends ActionSingleUseBase
{
	void ActionOpenSRPdonutpack()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EMPTYSEEDSPACK;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}
	
	override string GetText()
	{
		return "Open";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		return true;
	}

	override bool ActionConditionContinue( ActionData action_data )
	{
		return true;
	}

	override void OnExecuteClient( ActionData action_data )
	{
		ClearInventoryReservationEx(action_data);
	}

	override void OnExecuteServer( ActionData action_data )
	{
		if( !GetGame().IsMultiplayer() )
			ClearInventoryReservationEx(action_data);
				
		UnfoldEntityLambda lambda = new UnfoldEntityLambda(action_data.m_MainItem, "SRPdonut", action_data.m_Player);
		lambda.SetTransferParams(true, true, true, false, 100);
		action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
	}
};

