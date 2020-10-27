modded class ActionConstructor
{
  override void RegisterActions(TTypenameArray actions)
  {
      super.RegisterActions(actions);
      actions.Insert(ActionConsumeHumanMeatSelf);
      actions.Insert(ActionConsumeHumanMeatTarget);
  }
};