class ActionConsumeHumanMeatTarget: ActionForceFeedMeat
{
  override void ApplyModifiers(ActionData action_data) {
    // force food, give buff?
    PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		ntarget.m_HealthLevel = -99;
  }
};