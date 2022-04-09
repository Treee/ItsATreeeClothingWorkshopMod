class ActionSRPSealLetter extends ActionSingleUseBase
{
	void ActionSRPSealLetter()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

	override string GetText()
	{
		return "Seal Letter";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (target && target.GetObject())
    {
      SRP_UnSealedLetter unsealedLetter = SRP_UnSealedLetter.Cast(target.GetObject());
      if (unsealedLetter && unsealedLetter.GetInventory().AttachmentCount() > 0)
      {
        return true;
      }
    }
		return false;
	}

	override void OnExecuteServer( ActionData action_data )
	{
    if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      string sealedLetterColor = action_data.m_MainItem.ConfigGetString("color");
      TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_Target.GetObject(), "SRP_SealedLetter_" + sealedLetterColor, action_data.m_Player);
      lambda.SetTransferParams(true, true, true, false, 1);
      action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		
    }
	}
};
