class SRP_SealPress_ColorBase extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPApplyWax);
		AddAction(ActionSRPSealLetter);
	}
  bool HasWaxApplied()
  {
    if (ConfigGetString("color") == "nowax")
      return false;
    return true;
  }
};

class SRP_SealPress_NoWax extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Black extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Blue extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Brown extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Green extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Pink extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Red extends SRP_SealPress_ColorBase{};
class SRP_SealPress_White extends SRP_SealPress_ColorBase{};
class SRP_SealPress_Yellow extends SRP_SealPress_ColorBase{};
