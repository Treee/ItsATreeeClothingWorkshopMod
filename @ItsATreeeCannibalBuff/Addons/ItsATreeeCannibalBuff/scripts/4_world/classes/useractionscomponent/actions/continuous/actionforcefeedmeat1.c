class ActionConsumeHumanMeatTarget: ActionForceFeedMeat
{
  override void OnEndAnimationLoopServer( ActionData action_data )
	{
    PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
    ItemBase meatInHand = action_data.m_MainItem;
    if (meatInHand.GetQuantity() < 0.01) {
      Print("--------------------ItsATreee_ActionConsumeHumanMeatSelf : OnEndAnimationLoopServer : You Ate All The Meat!!");
    }
    super.OnEndAnimationLoopServer(action_data);
	}
};