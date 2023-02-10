class ActionSwapLens_Base extends ActionSingleUseBase
{
	void ActionSwapLens_Base()
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
		return string.Format("Swap Lens Color %1", GetLensColor());
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
    TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, string.Format("SportGlasses_%1",GetLensColor()), action_data.m_Player);
    // lambda.SetTransferParams(true, true, true, false, 1);
    action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
	}

  string GetLensColor()
  {
    return "";
  }
};

class ActionSwapLens_Black extends ActionSwapLens_Base
{
  override string GetLensColor()
  {
    return "Black";
  }
};
class ActionSwapLens_Blue extends ActionSwapLens_Base
{
  override string GetLensColor()
  {
    return "Blue";
  }
};
class ActionSwapLens_Green extends ActionSwapLens_Base
{
  override string GetLensColor()
  {
    return "Green";
  }
};
class ActionSwapLens_Orange extends ActionSwapLens_Base
{
  override string GetLensColor()
  {
    return "Orange";
  }
};