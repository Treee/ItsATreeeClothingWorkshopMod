class ActionConsumeHumanMeatSelf: ActionEatMeat
{
  override void OnEndAnimationLoopServer( ActionData action_data )
	{
    PlayerBase player = action_data.m_Player;
    ItemBase meatInHand = action_data.m_MainItem;
    if (meatInHand.GetQuantity() < 0.01) {
      Print("--------------------ItsATreee_ActionConsumeHumanMeatSelf : OnEndAnimationLoopServer : You Ate All The Meat!!");
    }
    super.OnEndAnimationLoopServer(action_data);
	}
};
