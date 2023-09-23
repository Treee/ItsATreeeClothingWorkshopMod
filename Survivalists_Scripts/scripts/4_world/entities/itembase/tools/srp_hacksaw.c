class SRP_Hacksaw_Espen extends Hacksaw
{
	override void SetActions()
	{
    super.SetActions();
		AddAction(ActionDestroyCodeLockOnFence);
		AddAction(ActionDestroyCodeLockOnTent);
  }
  override bool CanBypassRaidConditions()
  {
    return true;
  }
};
class SRP_Hacksaw_Stag extends Hacksaw
{
	override void SetActions()
	{
    super.SetActions();
		AddAction(ActionDestroyCodeLockOnFence);
		AddAction(ActionDestroyCodeLockOnTent);
  }
  override bool CanBypassRaidConditions()
  {
    return true;
  }
};
class SRP_Hacksaw_LocknSons extends Hacksaw
{
	override void SetActions()
	{
    super.SetActions();
		AddAction(ActionDestroyCodeLockOnFence);
		AddAction(ActionDestroyCodeLockOnTent);
  }
  override bool CanBypassRaidConditions()
  {
    return true;
  }
};