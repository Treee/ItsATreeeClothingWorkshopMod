modded class Spraycan_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSwitchLetterColorOption);
		AddAction(SRP_ActionSprayPaintLocker);
	}
};
