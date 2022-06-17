class SRP_PatchFlag_ColorBase extends Clothing{};
class SRP_PatchLogo_ColorBase extends Clothing{};

class SRP_PatchFlag_StarterKit extends SRP_IntermediateCraftingKitBase
{
  override bool CanCraft()
  {
    bool hasThread1 = HasAttachmentFilledWithQuantity("SRP_SewingThread1", 50);
    bool hasThread2 = HasAttachmentFilledWithQuantity("SRP_SewingThread2", 50);
    return (hasThread1 && hasThread2);
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwitchPatchFlagOption);
	}
};

class SRP_PatchLogo_StarterKit extends SRP_IntermediateCraftingKitBase
{
  override bool CanCraft()
  {
    bool hasThread1 = HasAttachmentFilledWithQuantity("SRP_SewingThread1", 50);
    bool hasThread2 = HasAttachmentFilledWithQuantity("SRP_SewingThread2", 50);
    return (hasThread1 && hasThread2);
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwitchPatchLogoOption);
	}
};
class SRP_SingleArmband_StarterKit extends SRP_IntermediateCraftingKitBase
{
  override bool CanCraft()
  {
    bool hasThread1 = HasAttachmentFilledWithQuantity("SRP_SewingThread1", 50);
    bool hasThread2 = HasAttachmentFilledWithQuantity("SRP_SewingThread2", 50);
    return (hasThread1 && hasThread2);
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwitchSingleArmbandOption);
	}
};
class SRP_DoubleArmband_StarterKit extends SRP_IntermediateCraftingKitBase
{
  override bool CanCraft()
  {
    bool hasThread1 = HasAttachmentFilledWithQuantity("SRP_SewingThread1", 75);
    bool hasThread2 = HasAttachmentFilledWithQuantity("SRP_SewingThread2", 75);
    return (hasThread1 && hasThread2);
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwitchDoubleArmbandOption);
	}
};
