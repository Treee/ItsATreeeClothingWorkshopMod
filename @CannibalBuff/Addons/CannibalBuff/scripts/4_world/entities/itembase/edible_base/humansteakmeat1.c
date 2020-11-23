class ItsATreee_HumanSteakMeat : Edible_Base
{
  void ItsATreee_HumanSteakMeat()
  {
    InsertAgent(eAgents.BRAIN, 1);
  }

  override void SetActions()
  {
    super.SetActions();
    AddAction(ActionConsumeHumanMeatSelf);
    AddAction(ActionConsumeHumanMeatTarget);
  }
};