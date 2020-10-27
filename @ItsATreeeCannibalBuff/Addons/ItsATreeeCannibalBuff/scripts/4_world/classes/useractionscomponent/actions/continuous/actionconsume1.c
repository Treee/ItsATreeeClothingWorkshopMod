class ActionConsumeHumanMeatSelf: ActionConsume
{
  override void ApplyModifiers(ActionData action_data) {
    // eat food, give buff?
    action_data.m_Player.m_HealthLevel = -99;
  }
};
